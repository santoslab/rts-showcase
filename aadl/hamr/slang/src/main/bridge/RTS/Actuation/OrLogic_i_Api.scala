// #Sireum

package RTS.Actuation

import org.sireum._
import art._
import RTS._

@sig trait OrLogic_i_Api {
  def id: Art.BridgeId
  def channel1_Id : Art.PortId
  def channel2_Id : Art.PortId
  def actuate_Id : Art.PortId

  // Logika spec var representing port state for outgoing data port
  @spec var actuate: Base_Types.Boolean = $

  def put_actuate(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(actuate),
      Ensures(
        actuate == value
      )
    )
    Spec {
      actuate = value
    }

    Art.putValue(actuate_Id, Base_Types.Boolean_Payload(value))
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

@datatype class OrLogic_i_Initialization_Api (
  val id: Art.BridgeId,
  val channel1_Id : Art.PortId,
  val channel2_Id : Art.PortId,
  val actuate_Id : Art.PortId) extends OrLogic_i_Api

@datatype class OrLogic_i_Operational_Api (
  val id: Art.BridgeId,
  val channel1_Id : Art.PortId,
  val channel2_Id : Art.PortId,
  val actuate_Id : Art.PortId) extends OrLogic_i_Api {

  // Logika spec var representing port state for incoming data port
  @spec var channel1: Base_Types.Boolean = $

  def get_channel1() : Option[Base_Types.Boolean] = {
    Contract(
      Ensures(
        Res == Some(channel1)
      )
    )
    val value : Option[Base_Types.Boolean] = Art.getValue(channel1_Id) match {
      case Some(Base_Types.Boolean_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port channel1.  Expecting 'Base_Types.Boolean_Payload' but received ${v}")
        None[Base_Types.Boolean]()
      case _ => None[Base_Types.Boolean]()
    }
    return value
  }

  // Logika spec var representing port state for incoming data port
  @spec var channel2: Base_Types.Boolean = $

  def get_channel2() : Option[Base_Types.Boolean] = {
    Contract(
      Ensures(
        Res == Some(channel2)
      )
    )
    val value : Option[Base_Types.Boolean] = Art.getValue(channel2_Id) match {
      case Some(Base_Types.Boolean_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port channel2.  Expecting 'Base_Types.Boolean_Payload' but received ${v}")
        None[Base_Types.Boolean]()
      case _ => None[Base_Types.Boolean]()
    }
    return value
  }
}
