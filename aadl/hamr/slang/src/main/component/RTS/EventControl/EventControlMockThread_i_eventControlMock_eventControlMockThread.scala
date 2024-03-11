// #Sireum

package RTS.EventControl

import org.sireum._
import RTS._

// This file will not be overwritten so is safe to edit
object EventControlMockThread_i_eventControlMock_eventControlMockThread {

  def initialise(api: EventControlMockThread_i_Initialization_Api): Unit = {
    api.logInfo("Initialize Entry Point: Event Control Mock")

    val v = F

    // AADL computational model requires that we provide an initial value output ports
    api.put_manualActuatorInput1(v)
    api.put_manualActuatorInput2(v)
  }

  val frames: ISZ[(Base_Types.Boolean, Base_Types.Boolean)] =
    ISZ(
      (F, F),
      (F, F),
      (F, F),
      (F, F),
      (F, F),
      (F, F),
      (T, F),
      (T, T),
      (F, F)
    )

  var frame: Base_Types.Integer = 0

  // Mocked event control behavior is to is to send out 10 sets of manual trip signals separately (then repeat)
  def timeTriggered(api: EventControlMockThread_i_Operational_Api): Unit = {
    // We do this one frame at a time to allow
    // the rest of this system to run through
    // the logic and actuation before moving
    // to the next frame

    // Simulate the current frame
    putFrame(frame, api)

    // Move to the next frame
    frame = frame + 1
    if (frame == frames.size) {
      frame = 0
    }
  }

  // Simulate the given frame from the mock temperature/pressure/saturation trip signals
  def putFrame(frame: Base_Types.Integer, api: EventControlMockThread_i_Operational_Api): Unit = {
    api.logInfo(s"Event Control: Frame: ${frame}")

    val manualActuatorInputs = frames(frame)
    api.logInfo(s"  Event Control test vector: ${manualActuatorInputs}")
    api.put_manualActuatorInput1(manualActuatorInputs._1)
    api.put_manualActuatorInput2(manualActuatorInputs._2)
  }

  def activate(api: EventControlMockThread_i_Operational_Api): Unit = { }

  def deactivate(api: EventControlMockThread_i_Operational_Api): Unit = { }

  def finalise(api: EventControlMockThread_i_Operational_Api): Unit = { }

  def recover(api: EventControlMockThread_i_Operational_Api): Unit = { }
}
