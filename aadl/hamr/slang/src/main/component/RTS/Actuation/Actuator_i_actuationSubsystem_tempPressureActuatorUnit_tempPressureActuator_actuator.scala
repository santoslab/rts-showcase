// #Sireum #Logika

package RTS.Actuation

import org.sireum._
import RTS._

// This file will not be overwritten so is safe to edit
object Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator {

  //=================================================
  //  I n i t i a l i z e    E n t r y    P o i n t
  //=================================================
  def initialise(api: Actuator_i_Initialization_Api): Unit = {
    Contract(
      Modifies(
        api
      ),
      Ensures(
        // BEGIN INITIALIZES ENSURES
        // guarantee initOutputDataPort
        //   The Initialize Entry Point must initialize all component 
        //   local state and all output data ports.
        api.output == F
        // END INITIALIZES ENSURES
      )
    )
    api.put_output(F)
  }

  //=================================================
  //  C o m p u t e    E n t r y    P o i n t
  //=================================================

  def timeTriggered(api: Actuator_i_Operational_Api): Unit = {
    Contract(
      Modifies(
        api
      ),
      Ensures(
        // BEGIN COMPUTE ENSURES timeTriggered
        // guarantee actuatorOutput
        api.output == (api.input | api.manualActuatorInput)
        // END COMPUTE ENSURES timeTriggered
      )
    )
    // get values off of input ports.
    // For input data ports, the HAMR assumption is (currently unchecked,
    // but follows from the fact that all output data ports must be initialized
    // by the initialize entry point) that extracting a value from the
    // option type on the incoming channel always succeeds (the port never
    // has a value of None().
    val input: Base_Types.Boolean = api.get_input().get
    val manualInput: Base_Types.Boolean = api.get_manualActuatorInput().get

    // ToDo: Check the cry source to match variables and document
    val output: Base_Types.Boolean = input | manualInput

    // put calculated value on output data port
    api.put_output(output)
  }

  def activate(api: Actuator_i_Operational_Api): Unit = { }

  def deactivate(api: Actuator_i_Operational_Api): Unit = { }

  def finalise(api: Actuator_i_Operational_Api): Unit = { }

  def recover(api: Actuator_i_Operational_Api): Unit = { }
}
