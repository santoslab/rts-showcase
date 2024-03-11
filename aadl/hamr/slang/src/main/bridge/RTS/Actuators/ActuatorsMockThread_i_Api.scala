// #Sireum

package RTS.Actuators

import org.sireum._
import art._
import RTS._

@sig trait ActuatorsMockThread_i_Api {
  def id: Art.BridgeId
  def tempPressureActuate_Id : Art.PortId
  def saturationActuate_Id : Art.PortId


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

@datatype class ActuatorsMockThread_i_Initialization_Api (
  val id: Art.BridgeId,
  val tempPressureActuate_Id : Art.PortId,
  val saturationActuate_Id : Art.PortId) extends ActuatorsMockThread_i_Api

@datatype class ActuatorsMockThread_i_Operational_Api (
  val id: Art.BridgeId,
  val tempPressureActuate_Id : Art.PortId,
  val saturationActuate_Id : Art.PortId) extends ActuatorsMockThread_i_Api {

  // Logika spec var representing port state for incoming data port
  @spec var tempPressureActuate: Base_Types.Boolean = $

  def get_tempPressureActuate() : Option[Base_Types.Boolean] = {
    Contract(
      Ensures(
        Res == Some(tempPressureActuate)
      )
    )
    val value : Option[Base_Types.Boolean] = Art.getValue(tempPressureActuate_Id) match {
      case Some(Base_Types.Boolean_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port tempPressureActuate.  Expecting 'Base_Types.Boolean_Payload' but received ${v}")
        None[Base_Types.Boolean]()
      case _ => None[Base_Types.Boolean]()
    }
    return value
  }

  // Logika spec var representing port state for incoming data port
  @spec var saturationActuate: Base_Types.Boolean = $

  def get_saturationActuate() : Option[Base_Types.Boolean] = {
    Contract(
      Ensures(
        Res == Some(saturationActuate)
      )
    )
    val value : Option[Base_Types.Boolean] = Art.getValue(saturationActuate_Id) match {
      case Some(Base_Types.Boolean_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port saturationActuate.  Expecting 'Base_Types.Boolean_Payload' but received ${v}")
        None[Base_Types.Boolean]()
      case _ => None[Base_Types.Boolean]()
    }
    return value
  }
}
