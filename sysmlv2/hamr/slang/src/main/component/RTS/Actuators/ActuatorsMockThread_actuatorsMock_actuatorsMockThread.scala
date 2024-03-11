// #Sireum

package RTS.Actuators

import org.sireum._
import RTS._

// This file will not be overwritten so is safe to edit
object ActuatorsMockThread_actuatorsMock_actuatorsMockThread {

  def initialise(api: ActuatorsMockThread_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

  }

  def timeTriggered(api: ActuatorsMockThread_Operational_Api): Unit = {
    // example api usage

    val apiUsage_ports_tempPressureActuate: Option[Base_Types.Boolean] = api.get_ports_tempPressureActuate()
    api.logInfo(s"Received on ports_tempPressureActuate: ${apiUsage_ports_tempPressureActuate}")
    val apiUsage_ports_saturationActuate: Option[Base_Types.Boolean] = api.get_ports_saturationActuate()
    api.logInfo(s"Received on ports_saturationActuate: ${apiUsage_ports_saturationActuate}")
  }

  def activate(api: ActuatorsMockThread_Operational_Api): Unit = { }

  def deactivate(api: ActuatorsMockThread_Operational_Api): Unit = { }

  def finalise(api: ActuatorsMockThread_Operational_Api): Unit = { }

  def recover(api: ActuatorsMockThread_Operational_Api): Unit = { }
}
