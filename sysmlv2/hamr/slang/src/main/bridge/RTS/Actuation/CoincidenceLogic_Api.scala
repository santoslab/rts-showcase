// #Sireum

package RTS.Actuation

import org.sireum._
import art._
import RTS._

@sig trait CoincidenceLogic_Api {
  def id: Art.BridgeId
  def ports_channel1_Id : Art.PortId
  def ports_channel2_Id : Art.PortId
  def ports_channel3_Id : Art.PortId
  def ports_channel4_Id : Art.PortId
  def ports_actuate_Id : Art.PortId

  // Logika spec var representing port state for outgoing data port
  @spec var ports_actuate: Base_Types.Boolean = $

  def put_ports_actuate(value : Base_Types.Boolean) : Unit = {
    Contract(
      Modifies(ports_actuate),
      Ensures(
        ports_actuate == value
      )
    )
    Spec {
      ports_actuate = value
    }

    Art.putValue(ports_actuate_Id, Base_Types.Boolean_Payload(value))
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

@datatype class CoincidenceLogic_Initialization_Api (
  val id: Art.BridgeId,
  val ports_channel1_Id : Art.PortId,
  val ports_channel2_Id : Art.PortId,
  val ports_channel3_Id : Art.PortId,
  val ports_channel4_Id : Art.PortId,
  val ports_actuate_Id : Art.PortId) extends CoincidenceLogic_Api

@datatype class CoincidenceLogic_Operational_Api (
  val id: Art.BridgeId,
  val ports_channel1_Id : Art.PortId,
  val ports_channel2_Id : Art.PortId,
  val ports_channel3_Id : Art.PortId,
  val ports_channel4_Id : Art.PortId,
  val ports_actuate_Id : Art.PortId) extends CoincidenceLogic_Api {

  // Logika spec var representing port state for incoming data port
  @spec var ports_channel1: Base_Types.Boolean = $

  def get_ports_channel1() : Option[Base_Types.Boolean] = {
    Contract(
      Ensures(
        Res == Some(ports_channel1)
      )
    )
    val value : Option[Base_Types.Boolean] = Art.getValue(ports_channel1_Id) match {
      case Some(Base_Types.Boolean_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port ports_channel1.  Expecting 'Base_Types.Boolean_Payload' but received ${v}")
        None[Base_Types.Boolean]()
      case _ => None[Base_Types.Boolean]()
    }
    return value
  }

  // Logika spec var representing port state for incoming data port
  @spec var ports_channel2: Base_Types.Boolean = $

  def get_ports_channel2() : Option[Base_Types.Boolean] = {
    Contract(
      Ensures(
        Res == Some(ports_channel2)
      )
    )
    val value : Option[Base_Types.Boolean] = Art.getValue(ports_channel2_Id) match {
      case Some(Base_Types.Boolean_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port ports_channel2.  Expecting 'Base_Types.Boolean_Payload' but received ${v}")
        None[Base_Types.Boolean]()
      case _ => None[Base_Types.Boolean]()
    }
    return value
  }

  // Logika spec var representing port state for incoming data port
  @spec var ports_channel3: Base_Types.Boolean = $

  def get_ports_channel3() : Option[Base_Types.Boolean] = {
    Contract(
      Ensures(
        Res == Some(ports_channel3)
      )
    )
    val value : Option[Base_Types.Boolean] = Art.getValue(ports_channel3_Id) match {
      case Some(Base_Types.Boolean_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port ports_channel3.  Expecting 'Base_Types.Boolean_Payload' but received ${v}")
        None[Base_Types.Boolean]()
      case _ => None[Base_Types.Boolean]()
    }
    return value
  }

  // Logika spec var representing port state for incoming data port
  @spec var ports_channel4: Base_Types.Boolean = $

  def get_ports_channel4() : Option[Base_Types.Boolean] = {
    Contract(
      Ensures(
        Res == Some(ports_channel4)
      )
    )
    val value : Option[Base_Types.Boolean] = Art.getValue(ports_channel4_Id) match {
      case Some(Base_Types.Boolean_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port ports_channel4.  Expecting 'Base_Types.Boolean_Payload' but received ${v}")
        None[Base_Types.Boolean]()
      case _ => None[Base_Types.Boolean]()
    }
    return value
  }
}
