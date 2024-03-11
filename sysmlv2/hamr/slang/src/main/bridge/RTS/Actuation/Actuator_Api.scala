// #Sireum

package RTS.Actuation

import org.sireum._
import art._
import RTS._

@sig trait Actuator_Api {
  def id: Art.BridgeId
  def ports_input_Id : Art.PortId
  def ports_manualActuatorInput_Id : Art.PortId
  def ports_output_Id : Art.PortId

  // Logika spec var representing port state for outgoing data port
  @spec var ports_output: Base_Types.Boolean = $

  def put_ports_output(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(ports_output),
      Ensures(
        ports_output == value
      )
    )
    Spec {
      ports_output = value
    }

    Art.putValue(ports_output_Id, Base_Types.Boolean_Payload(value))
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

@datatype class Actuator_Initialization_Api (
  val id: Art.BridgeId,
  val ports_input_Id : Art.PortId,
  val ports_manualActuatorInput_Id : Art.PortId,
  val ports_output_Id : Art.PortId) extends Actuator_Api

@datatype class Actuator_Operational_Api (
  val id: Art.BridgeId,
  val ports_input_Id : Art.PortId,
  val ports_manualActuatorInput_Id : Art.PortId,
  val ports_output_Id : Art.PortId) extends Actuator_Api {

  // Logika spec var representing port state for incoming data port
  @spec var ports_input: Base_Types.Boolean = $

  def get_ports_input() : Option[Base_Types.Boolean] = {
    Contract(
      Ensures(
        Res == Some(ports_input)
      )
    )
    val value : Option[Base_Types.Boolean] = Art.getValue(ports_input_Id) match {
      case Some(Base_Types.Boolean_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port ports_input.  Expecting 'Base_Types.Boolean_Payload' but received ${v}")
        None[Base_Types.Boolean]()
      case _ => None[Base_Types.Boolean]()
    }
    return value
  }

  // Logika spec var representing port state for incoming data port
  @spec var ports_manualActuatorInput: Base_Types.Boolean = $

  def get_ports_manualActuatorInput() : Option[Base_Types.Boolean] = {
    Contract(
      Ensures(
        Res == Some(ports_manualActuatorInput)
      )
    )
    val value : Option[Base_Types.Boolean] = Art.getValue(ports_manualActuatorInput_Id) match {
      case Some(Base_Types.Boolean_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port ports_manualActuatorInput.  Expecting 'Base_Types.Boolean_Payload' but received ${v}")
        None[Base_Types.Boolean]()
      case _ => None[Base_Types.Boolean]()
    }
    return value
  }
}
