// #Sireum
package art.scheduling.roundrobin

import org.sireum._
import art.scheduling.Scheduler
import art.{Art, ArtNative, DispatchPropertyProtocol}
import org.sireum.S64._

@record class RoundRobin(schedule: ISZ[Art.BridgeId]) extends Scheduler {

  var lastDispatch: MS[Art.BridgeId, Art.Time] = MS.create[Art.BridgeId, Art.Time](schedule.size, s64"0")
  var lastSporadic: MS[Art.BridgeId, Art.Time] = MS.create[Art.BridgeId, Art.Time](schedule.size, s64"0")

  override def initialize(): Unit = {
    RoundRobinExtensions.init()
  }

  override def initializationPhase(): Unit = {
    for (bridgeId <- schedule) {
      Art.bridges(bridgeId.toZ).get.entryPoints.initialise()
      Art.logInfo(bridgeId, s"Initialized bridge: ${Art.bridges(bridgeId.toZ).get.name}")
    }
  }

  def shouldDispatch(bridgeId: Art.BridgeId): B = {
    Art.bridges(bridgeId.toZ).get.dispatchProtocol match {
      case DispatchPropertyProtocol.Periodic(period) =>
        if (Art.time() - lastDispatch(bridgeId) > conversions.Z.toS64(period)) {
          return ArtNative.shouldDispatch(bridgeId) // will always return true
        } else {
          return F
        }
      case DispatchPropertyProtocol.Sporadic(minRate) =>
        if (Art.time() - lastSporadic(bridgeId) < conversions.Z.toS64(minRate)) {
          return F
        } else {
          // check if there are events waiting in incoming infrastructure port
          return ArtNative.shouldDispatch(bridgeId)
        }
    }
  }

  override def computePhase(): Unit = {
    while (!RoundRobinExtensions.shouldStop()) {
      for (bridgeId <- schedule) {
        if (shouldDispatch(bridgeId)) {
          lastDispatch(bridgeId) = Art.time()
          Art.bridges(bridgeId.toZ).get.entryPoints.compute()

          if (Art.bridges(bridgeId.toZ).get.dispatchProtocol.isInstanceOf[DispatchPropertyProtocol.Sporadic]) {
            lastSporadic(bridgeId) = Art.time()
          }
        }
      }
    }
  }

  override def finalizePhase(): Unit = {
    for (bridgeId <- schedule) {
      Art.bridges(bridgeId.toZ).get.entryPoints.finalise()
      Art.logInfo(bridgeId, s"Finalized bridge: ${Art.bridges(bridgeId.toZ).get.name}")
    }
  }
}

@ext object RoundRobinExtensions {
  def init(): Unit = $

  def shouldStop(): B = $
}