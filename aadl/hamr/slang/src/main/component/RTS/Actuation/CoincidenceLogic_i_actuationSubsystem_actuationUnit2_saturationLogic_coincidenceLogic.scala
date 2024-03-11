// #Sireum #Logika

package RTS.Actuation

import org.sireum._
import RTS._

// This file will not be overwritten so is safe to edit
object CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic {

  //=================================================
  //  I n i t i a l i z e    E n t r y    P o i n t
  //=================================================
  def initialise(api: CoincidenceLogic_i_Initialization_Api): Unit = {
    Contract(
      Modifies(
        api
      )
    )
    // The Initialize Entry Point must initialize all component local state and all output data ports.
    // -- initialize output data port
    api.put_actuate(F)
  }

  //=================================================
  //  C o m p u t e    E n t r y    P o i n t
  //=================================================

  def timeTriggered(api: CoincidenceLogic_i_Operational_Api): Unit = {
    Contract(
      Modifies(
        api
      ),
      Ensures(
        // BEGIN COMPUTE ENSURES timeTriggered
        // guarantee coincidenceOutput
        //   from actuationUnit.cry
        //   Coincidence_2_4 : [4]TripPort -> Bit
        //   Coincidence_2_4 x =
        //       (a&&b) || ((a||b) && (c||d)) || (c&&d)
        //   For specification redundancy, provide an alternate but equivalent specification
        //   of the concept 'at least two of the input channels are true.'
        api.actuate == (api.channel1 & api.channel2 |
           api.channel1 & api.channel3 |
           api.channel1 & api.channel4 |
           api.channel2 & api.channel3 |
           api.channel2 & api.channel4 |
           api.channel3 & api.channel4)
        // END COMPUTE ENSURES timeTriggered
      )
    )
    // get values off of input ports.
    // For input data ports, the HAMR assumption is (currently unchecked,
    // but follows from the fact that all output data ports must be initialized
    // by the initialize entry point) that extracting a value from the
    // option type on the incoming channel always succeeds (the port never
    // has a value of None().
    val a: Base_Types.Boolean = api.get_channel1().get
    val b: Base_Types.Boolean = api.get_channel2().get
    val c: Base_Types.Boolean = api.get_channel3().get
    val d: Base_Types.Boolean = api.get_channel4().get

    // from actuationUnit.cry
    // Coincidence_2_4 : [4]TripPort -> Bit
    //  Coincidence_2_4 x =
    //    (a&&b) || ((a||b) && (c||d)) || (c&&d)
    // where
    // a = (x @ (0:[2])) != 0
    // b = (x @ (1:[2])) != 0
    // c = (x @ (2:[2])) != 0
    // d = (x @ (3:[2])) != 0
    //
    // Note from John H.:
    //   my understanding is that the Cryptol expression x @ 1:[2] is
    //   "access the 1'th element (zero-based indexing from x)".
    //   "[2]" is an explicit type on the index (2-bits -- related to
    //   going from 0 to 3.

    // Transliterate the Cryptol coincidence expression into Slang (but
    // use Slang logical operators, e.g., "&" instead of Slang short-circuit
    // operators, e.g., "&&".

    val result: Base_Types.Boolean = (a & b) | ((a | b) & (c | d)) | (c & d)

    // put calculated value on output data port
    api.put_actuate(result)
  }

  def activate(api: CoincidenceLogic_i_Operational_Api): Unit = { }

  def deactivate(api: CoincidenceLogic_i_Operational_Api): Unit = { }

  def finalise(api: CoincidenceLogic_i_Operational_Api): Unit = { }

  def recover(api: CoincidenceLogic_i_Operational_Api): Unit = { }
}
