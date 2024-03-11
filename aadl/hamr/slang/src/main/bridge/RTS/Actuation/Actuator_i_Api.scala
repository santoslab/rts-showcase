// #Sireum

package RTS.Actuation

import org.sireum._
import art._
import RTS._

@sig trait Actuator_i_Api {
  def id: Art.BridgeId
  def input_Id : Art.PortId
  def manualActuatorInput_Id : Art.PortId
  def output_Id : Art.PortId

  // Logika spec var representing port state for outgoing data port
  @spec var output: Base_Types.Boolean = $

  def put_output(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(output),
      Ensures(
        output == value
      )
    )
    Spec {
      output = value
    }

    Art.putValue(output_Id, Base_Types.Boolean_Payload(value))
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

@datatype class Actuator_i_Initialization_Api (
  val id: Art.BridgeId,
  val input_Id : Art.PortId,
  val manualActuatorInput_Id : Art.PortId,
  val output_Id : Art.PortId) extends Actuator_i_Api

@datatype class Actuator_i_Operational_Api (
  val id: Art.BridgeId,
  val input_Id : Art.PortId,
  val manualActuatorInput_Id : Art.PortId,
  val output_Id : Art.PortId) extends Actuator_i_Api {

  // Logika spec var representing port state for incoming data port
  @spec var input: Base_Types.Boolean = $

  def get_input() : Option[Base_Types.Boolean] = {
    Contract(
      Ensures(
        Res == Some(input)
      )
    )
    val value : Option[Base_Types.Boolean] = Art.getValue(input_Id) match {
      case Some(Base_Types.Boolean_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port input.  Expecting 'Base_Types.Boolean_Payload' but received ${v}")
        None[Base_Types.Boolean]()
      case _ => None[Base_Types.Boolean]()
    }
    return value
  }

  // Logika spec var representing port state for incoming data port
  @spec var manualActuatorInput: Base_Types.Boolean = $

  def get_manualActuatorInput() : Option[Base_Types.Boolean] = {
    Contract(
      Ensures(
        Res == Some(manualActuatorInput)
      )
    )
    val value : Option[Base_Types.Boolean] = Art.getValue(manualActuatorInput_Id) match {
      case Some(Base_Types.Boolean_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port manualActuatorInput.  Expecting 'Base_Types.Boolean_Payload' but received ${v}")
        None[Base_Types.Boolean]()
      case _ => None[Base_Types.Boolean]()
    }
    return value
  }
}
