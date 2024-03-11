// #Sireum

package art.scheduling.static

import org.sireum._
import art.{Art, DataContent}

object StateObserver {

  def observeInPortValue(bridgeId: Art.BridgeId, portId: Art.PortId): Option[DataContent] = {
    return Art.observeInInfrastructurePort(portId)
  }

  def observeOutPortValue(bridgeId: Art.BridgeId, portId: Art.PortId): Option[DataContent] = {
    return Art.observeOutPortVariable(portId)
  }

  def observeInPortValues(bridgeId: Art.BridgeId): ISZ[(String, Option[DataContent])] = {
    val bridge = Art.bridges(bridgeId.toZ).get
    var portValues: ISZ[(String, Option[DataContent])] = ISZ()

    for (port <- bridge.ports.dataIns) {
      portValues = portValues :+ ((port.name, Art.observeInInfrastructurePort(port.id)))
    }

    for (port <- bridge.ports.eventIns) {
      portValues = portValues :+ ((port.name, Art.observeInInfrastructurePort(port.id)))
    }
    return portValues
  }

  def observeOutPortValues(bridgeId: Art.BridgeId): ISZ[(String, Option[DataContent])] = {
    val bridge = Art.bridges(bridgeId.toZ).get
    var portValues: ISZ[(String, Option[DataContent])] = ISZ()

    for (port <- bridge.ports.dataOuts) {
      portValues = portValues :+ ((port.name, Art.observeOutPortVariable(port.id)))
    }

    for (port <- bridge.ports.eventOuts) {
      portValues = portValues :+ ((port.name, Art.observeOutPortVariable(port.id)))
    }
    return portValues
  }

  def observeInPortValuesByNickName(threadNickName: String): ISZ[(String, Option[DataContent])] = {
    halt("TODO")
    //val bridgeId = art.StaticScheduling.threadNickNames.get(threadNickName).get // ToDo: fix error handling
    //return observeInPortValues(bridgeId)
  }

  def observeOutPortValuesByNickName(threadNickName: String): ISZ[(String, Option[DataContent])] = {
    halt("TODO")
    //val bridgeId = art.StaticScheduling.threadNickNames.get(threadNickName).get // ToDo: fix error handling
    //return observeOutPortValues(bridgeId)
  }

  //=======================================================================
  // State Observations (primary methods for interpreting debug commands)
  //=======================================================================

  def printPortContentsInputsCurrent(): Unit = {
    val bridgeId = Schedule.getBridgeIdFromSlotNumber(Explorer.scheduleState.slotNum)
    val inPortInfo = observeInPortValues(bridgeId)

    println("****************************")
    println(s"   Next Component: ${Schedule.threadNickName(bridgeId)} (id = $bridgeId)")
    println("****************************")
    println(" Input Ports")
    println(" ===============")
    printPortInfo(inPortInfo)
  }

  def printPortContentsOutputsCurrent(): Unit = {
    val previousStateOpt: Option[Explorer.ScheduleState] =
      Explorer.previousState(Explorer.scheduleState, Schedule.dScheduleSpec)

    previousStateOpt match {
      case Some(previousState) => {
        val bridgeId = Schedule.getBridgeIdFromSlotNumber(previousState.slotNum)
        val outPortInfo = observeOutPortValues(bridgeId)
        println("****************************")
        println(s"   Previous Component: ${Schedule.threadNickName(bridgeId)} (id = $bridgeId)")
        println("****************************")
        println(" Output Ports")
        println(" ===============")
        printPortInfo(outPortInfo)
      }
      case None() => {
        println("(initial state - no previous state to show)")
      }
    }
  }

  def printPortInfo(portVals: ISZ[(String, Option[DataContent])]): Unit = {
    for (e <- portVals) {
      println(s"${e._1} = ${e._2}")
    }
  }

  def printPortContents(bridgeId: Art.BridgeId): Unit = {
    val inPortInfo = observeInPortValues(bridgeId)
    val outPortInfo = observeOutPortValues(bridgeId)
    println("****************************")
    println(s"   Component: ${Schedule.threadNickName(bridgeId)} (id = $bridgeId)")
    println("****************************")
    println(" Input Ports")
    println(" ===============")
    printPortInfo(inPortInfo)
    println()
    println(" Output Ports")
    println(" ================")
    printPortInfo(outPortInfo)
  }

  def printPortContentsByNickName(threadNickName: String): Unit = {
    val bridgeId = StaticScheduler.threadNickNames.get(threadNickName).get // ToDo: fix error handling
    printPortContents(bridgeId)
  }
}