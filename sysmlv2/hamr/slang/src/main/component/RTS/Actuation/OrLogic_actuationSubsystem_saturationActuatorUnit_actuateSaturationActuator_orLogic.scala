// #Sireum

package RTS.Actuation

import org.sireum._
import RTS._

// This file will not be overwritten so is safe to edit
object OrLogic_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic {

  def initialise(api: OrLogic_Initialization_Api): Unit = {
    // The Initialize Entry Point must initialize all component local state and all output data ports.
    // -- initialize output data port
    api.put_ports_actuate(F)
  }

  def timeTriggered(api: OrLogic_Operational_Api): Unit = {
    // get values off of input ports.
    // For input data ports, the HAMR assumption is (currently unchecked,
    // but follows from the fact that all output data ports must be initialized
    // by the initialize entry point) that extracting a value from the
    // option type on the incoming channel always succeeds (the port never
    // has a value of None().
    val channel1: Base_Types.Boolean = api.get_ports_channel1().get
    val channel2: Base_Types.Boolean = api.get_ports_channel2().get

    // from actuationUnit.cry (line 53 -
    //   TempPressureTripOut ts = (ts @ (0:[1])) || (ts @ (1:[1]))
    //
    // Note from John H.:
    //   my understanding is that the Cryptol expression ts @ 0:[1] is
    //   "access the 0'th element (zero-based indexing from ts)".
    //   "[1]" is an explicit type on the index (1-bit -- related to
    //   going from 0 to 1.

    val result: Base_Types.Boolean = channel1 | channel2

    // put calculated value on output data port
    api.put_ports_actuate(result)
  }

  def activate(api: OrLogic_Operational_Api): Unit = { }

  def deactivate(api: OrLogic_Operational_Api): Unit = { }

  def finalise(api: OrLogic_Operational_Api): Unit = { }

  def recover(api: OrLogic_Operational_Api): Unit = { }
}
