// #Sireum

package RTS.EventControl

import org.sireum._
import art._
import RTS._

@sig trait EventControlMockThread_Api {
  def id: Art.BridgeId
  def ports_manualActuatorInput1_Id : Art.PortId
  def ports_manualActuatorInput2_Id : Art.PortId

  // Logika spec var representing port state for outgoing data port
  @spec var ports_manualActuatorInput1: Base_Types.Boolean = $

  def put_ports_manualActuatorInput1(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(ports_manualActuatorInput1),
      Ensures(
        ports_manualActuatorInput1 == value
      )
    )
    Spec {
      ports_manualActuatorInput1 = value
    }

    Art.putValue(ports_manualActuatorInput1_Id, Base_Types.Boolean_Payload(value))
  }

  // Logika spec var representing port state for outgoing data port
  @spec var ports_manualActuatorInput2: Base_Types.Boolean = $

  def put_ports_manualActuatorInput2(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(ports_manualActuatorInput2),
      Ensures(
        ports_manualActuatorInput2 == value
      )
    )
    Spec {
      ports_manualActuatorInput2 = value
    }

    Art.putValue(ports_manualActuatorInput2_Id, Base_Types.Boolean_Payload(value))
  }

  def logInfo(msg: String): Unit = {
    Art.logInfo(id, msg)
  }

  def logDebug(msg: String): Unit = {
    Art.logDebug(id, msg)
  }

  def logError(msg: String): Unit = {
    Art.logError(id, msg)
  }
}

@datatype class EventControlMockThread_Initialization_Api (
  val id: Art.BridgeId,
  val ports_manualActuatorInput1_Id : Art.PortId,
  val ports_manualActuatorInput2_Id : Art.PortId) extends EventControlMockThread_Api

@datatype class EventControlMockThread_Operational_Api (
  val id: Art.BridgeId,
  val ports_manualActuatorInput1_Id : Art.PortId,
  val ports_manualActuatorInput2_Id : Art.PortId) extends EventControlMockThread_Api {

}
