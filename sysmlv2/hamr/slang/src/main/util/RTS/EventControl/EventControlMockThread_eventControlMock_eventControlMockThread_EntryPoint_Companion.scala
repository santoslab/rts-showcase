// #Sireum

package RTS.EventControl

import org.sireum._
import art._
import RTS._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

object EventControlMockThread_eventControlMock_eventControlMockThread_EntryPoint_Companion {

  var last_api_ports_manualActuatorInput1: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_manualActuatorInput1.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_manualActuatorInput1.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_manualActuatorInput1: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_eventControlMock_eventControlMockThread.operational_api.ports_manualActuatorInput1_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_manualActuatorInput1 = Some(value)
        return value
      case _ if last_api_ports_manualActuatorInput1.isEmpty =>
        assert(F, "No value found on outgoing data port ports_manualActuatorInput1.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_manualActuatorInput1.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_manualActuatorInput1.get
    }
  }
  var last_api_ports_manualActuatorInput2: Option[Base_Types.Boolean] = None()

  /** get the value of outgoing data port ports_manualActuatorInput2.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_ports_manualActuatorInput2.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_ports_manualActuatorInput2: Base_Types.Boolean = {
    Art.observeOutPortVariable(Arch.rts_eventControlMock_eventControlMockThread.operational_api.ports_manualActuatorInput2_Id) match {
      case Some(Base_Types.Boolean_Payload(value)) =>
        last_api_ports_manualActuatorInput2 = Some(value)
        return value
      case _ if last_api_ports_manualActuatorInput2.isEmpty =>
        assert(F, "No value found on outgoing data port ports_manualActuatorInput2.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port ports_manualActuatorInput2.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_ports_manualActuatorInput2.get
    }
  }
  var preStateContainer_wL: Option[EventControlMockThread_eventControlMock_eventControlMockThread_PreState_Container_PS] = None()

  def pre_initialise(): Unit = {
    // assume/require contracts cannot refer to incoming ports or
    // state variables so nothing to do here
  }

  def post_initialise(): Unit = {
    // block the component while its post-state values are retrieved
    val postStateContainer_wL =
      EventControlMockThread_eventControlMock_eventControlMockThread_PostState_Container_PS(
        api_ports_manualActuatorInput1 = get_api_ports_manualActuatorInput1,
        api_ports_manualActuatorInput2 = get_api_ports_manualActuatorInput2)

    // the rest can now be performed via a different thread
    RTS.runtimemonitor.RuntimeMonitor.observeInitialisePostState(Arch.rts_eventControlMock_eventControlMockThread.id, RTS.runtimemonitor.ObservationKind.rts_eventControlMock_eventControlMockThread_postInit, postStateContainer_wL)
  }

  def pre_compute(): Unit = {
    // block the component while its pre-state values are retrieved
    preStateContainer_wL = Some(
      EventControlMockThread_eventControlMock_eventControlMockThread_PreState_Container_PS())

    // the rest can now be performed via a different thread
    RTS.runtimemonitor.RuntimeMonitor.observeComputePreState(Arch.rts_eventControlMock_eventControlMockThread.id, RTS.runtimemonitor.ObservationKind.rts_eventControlMock_eventControlMockThread_preCompute, preStateContainer_wL.asInstanceOf[Option[art.DataContent]])
  }

  def post_compute(): Unit = {
    // block the component while its post-state values are retrieved
    val postStateContainer_wL =
      EventControlMockThread_eventControlMock_eventControlMockThread_PostState_Container_PS(
        api_ports_manualActuatorInput1 = get_api_ports_manualActuatorInput1,
        api_ports_manualActuatorInput2 = get_api_ports_manualActuatorInput2)

    // the rest can now be performed via a different thread
    RTS.runtimemonitor.RuntimeMonitor.observeComputePrePostState(Arch.rts_eventControlMock_eventControlMockThread.id, RTS.runtimemonitor.ObservationKind.rts_eventControlMock_eventControlMockThread_postCompute, preStateContainer_wL.asInstanceOf[Option[art.DataContent]], postStateContainer_wL)
  }
}