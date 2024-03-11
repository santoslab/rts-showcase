package RTS.runtimemonitor

import org.sireum._
import art.Art._

import java.awt.GraphicsEnvironment

// This file will not be overwritten so is safe to edit

object RuntimeMonitor_Ext {

  /** you use the java.awt.headless system property to enable/disable guis.
    * e.g. in scala test context
    *
    *   override def beforeEach(): Unit = {
    *     System.setProperty("java.awt.headless", "true")
    *     super.beforeEach()
    *   }
    *
    */

  val baseListeners: ISZ[RuntimeMonitorListener] =
    if (GraphicsEnvironment.isHeadless) ISZ()
    else {
      ISZ(
        // add/remove listeners here


        // BEGIN MARKER RUNTIME MONITORING

        // if you don't want to use the following runtime monitors then surround this marker block
        // with a block comment /** .. **/ to prevent codegen from emitting an error if it's rerun

        new GumboXRuntimeMonitor_Ext(),

        new HamrVisionRuntimeMonitor(HamrVision.cp)

        // END MARKER RUNTIME MONITORING
      )
    }

  var externalListeners: ISZ[RuntimeMonitorListener] = ISZ()

  def registerListener(listener: RuntimeMonitorListener): Unit = {
    externalListeners = externalListeners :+ listener
  }

  def init(modelInfo: ModelInfo): Unit = {
    for (l <- baseListeners) {
      l.init(modelInfo)
    }
    for (l <- externalListeners) {
      l.init(modelInfo)
    }
  }

  def finalise(): Unit = {
    for (l <- baseListeners) {
      l.finalise()
    }

    for (l <- externalListeners) {
      l.finalise()
    }
    // deregister external listeners
    externalListeners = ISZ()
  }

  def observeInitialisePostState(bridgeId: BridgeId, observationKind: ObservationKind.Type, post: art.DataContent): Unit = {
    for (l <- baseListeners) {
      l.observeInitialisePostState(bridgeId, observationKind, post)
    }

    for (l <- externalListeners) {
      l.observeInitialisePostState(bridgeId, observationKind, post)
    }
  }

  def observeComputePreState(bridgeId: BridgeId, observationKind: ObservationKind.Type, pre: Option[art.DataContent]): Unit = {
    for (l <- baseListeners) {
      l.observeComputePreState(bridgeId, observationKind, pre)
    }

    for (l <- externalListeners) {
      l.observeComputePreState(bridgeId, observationKind, pre)
    }
  }

  def observeComputePrePostState(bridgeId: BridgeId, observationKind: ObservationKind.Type, pre: Option[art.DataContent], post: art.DataContent): Unit = {
    for (l <- baseListeners) {
      l.observeComputePrePostState(bridgeId, observationKind, pre, post)
    }

    for (l <- externalListeners) {
      l.observeComputePrePostState(bridgeId, observationKind, pre, post)
    }
  }
}