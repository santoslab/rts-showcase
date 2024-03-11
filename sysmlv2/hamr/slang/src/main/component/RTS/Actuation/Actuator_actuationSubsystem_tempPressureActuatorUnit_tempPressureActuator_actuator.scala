// #Sireum

package RTS.Actuation

import org.sireum._
import RTS._

// This file will not be overwritten so is safe to edit
object Actuator_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator {

  def initialise(api: Actuator_Initialization_Api): Unit = {
    api.put_ports_output(Base_Types.Boolean_example())
  }

  def timeTriggered(api: Actuator_Operational_Api): Unit = {
    // get values off of input ports.
    // For input data ports, the HAMR assumption is (currently unchecked,
    // but follows from the fact that all output data ports must be initialized
    // by the initialize entry point) that extracting a value from the
    // option type on the incoming channel always succeeds (the port never
    // has a value of None().
    val input: Base_Types.Boolean = api.get_ports_input().get
    val manualInput: Base_Types.Boolean = api.get_ports_manualActuatorInput().get

    // ToDo: Check the cry source to match variables and document
    val output: Base_Types.Boolean = input | manualInput

    // put calculated value on output data port
    api.put_ports_output(output)
  }

  def activate(api: Actuator_Operational_Api): Unit = { }

  def deactivate(api: Actuator_Operational_Api): Unit = { }

  def finalise(api: Actuator_Operational_Api): Unit = { }

  def recover(api: Actuator_Operational_Api): Unit = { }
}
