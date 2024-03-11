// #Sireum

package RTS.Actuators

import org.sireum._
import art._
import RTS._

@sig trait ActuatorsMockThread_Api {
  def id: Art.BridgeId
  def ports_tempPressureActuate_Id : Art.PortId
  def ports_saturationActuate_Id : Art.PortId


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

@datatype class ActuatorsMockThread_Initialization_Api (
  val id: Art.BridgeId,
  val ports_tempPressureActuate_Id : Art.PortId,
  val ports_saturationActuate_Id : Art.PortId) extends ActuatorsMockThread_Api

@datatype class ActuatorsMockThread_Operational_Api (
  val id: Art.BridgeId,
  val ports_tempPressureActuate_Id : Art.PortId,
  val ports_saturationActuate_Id : Art.PortId) extends ActuatorsMockThread_Api {

  // Logika spec var representing port state for incoming data port
  @spec var ports_tempPressureActuate: Base_Types.Boolean = $

  def get_ports_tempPressureActuate() : Option[Base_Types.Boolean] = {
    Contract(
      Ensures(
        Res == Some(ports_tempPressureActuate)
      )
    )
    val value : Option[Base_Types.Boolean] = Art.getValue(ports_tempPressureActuate_Id) match {
      case Some(Base_Types.Boolean_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port ports_tempPressureActuate.  Expecting 'Base_Types.Boolean_Payload' but received ${v}")
        None[Base_Types.Boolean]()
      case _ => None[Base_Types.Boolean]()
    }
    return value
  }

  // Logika spec var representing port state for incoming data port
  @spec var ports_saturationActuate: Base_Types.Boolean = $

  def get_ports_saturationActuate() : Option[Base_Types.Boolean] = {
    Contract(
      Ensures(
        Res == Some(ports_saturationActuate)
      )
    )
    val value : Option[Base_Types.Boolean] = Art.getValue(ports_saturationActuate_Id) match {
      case Some(Base_Types.Boolean_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port ports_saturationActuate.  Expecting 'Base_Types.Boolean_Payload' but received ${v}")
        None[Base_Types.Boolean]()
      case _ => None[Base_Types.Boolean]()
    }
    return value
  }
}
