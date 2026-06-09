// #Sireum #Logika

package RTS.Actuation

import org.sireum._
import RTS._

// This file will not be overwritten so is safe to edit
object CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic {

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
          api.channel3 & api.channel4),
        // case pair_ch1_ch2
        //   Channels 1 and 2 true, others false
        (api.channel1 & api.channel2 &
          !(api.channel3) &
          !(api.channel4)) ___>: (api.actuate),
        // case pair_ch1_ch3
        //   Channels 1 and 3 true, others false
        (api.channel1 & !(api.channel2) &
          api.channel3 &
          !(api.channel4)) ___>: (api.actuate),
        // case pair_ch1_ch4
        //   Channels 1 and 4 true, others false
        (api.channel1 & !(api.channel2) &
          !(api.channel3) &
          api.channel4) ___>: (api.actuate),
        // case pair_ch2_ch3
        //   Channels 2 and 3 true, others false
        (!(api.channel1) & api.channel2 &
          api.channel3 &
          !(api.channel4)) ___>: (api.actuate),
        // case pair_ch2_ch4
        //   Channels 2 and 4 true, others false
        (!(api.channel1) & api.channel2 &
          !(api.channel3) &
          api.channel4) ___>: (api.actuate),
        // case pair_ch3_ch4
        //   Channels 3 and 4 true, others false
        (!(api.channel1) & !(api.channel2) &
          api.channel3 &
          api.channel4) ___>: (api.actuate),
        // case solo_ch1
        //   Only channel 1 true
        (api.channel1 & !(api.channel2) &
          !(api.channel3) &
          !(api.channel4)) ___>: (!(api.actuate)),
        // case solo_ch2
        //   Only channel 2 true
        (!(api.channel1) & api.channel2 &
          !(api.channel3) &
          !(api.channel4)) ___>: (!(api.actuate)),
        // case solo_ch3
        //   Only channel 3 true
        (!(api.channel1) & !(api.channel2) &
          api.channel3 &
          !(api.channel4)) ___>: (!(api.actuate)),
        // case solo_ch4
        //   Only channel 4 true
        (!(api.channel1) & !(api.channel2) &
          !(api.channel3) &
          api.channel4) ___>: (!(api.actuate))
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

  // WORKAROUND for Logika --all dedup bug:
  //
  // When `sireum proyek logika --all` verifies multiple files that share the
  // same API type, contract structure, and line count, Logika's dedup
  // optimization treats them as equivalent and only verifies one representative.
  // In this project all 6 CoincidenceLogic component files are 146 lines with
  // identical formatting (they differ only in object name and method body), so
  // Logika picks one correct instance, verifies it, and skips the rest —
  // silently missing any bugs in the skipped files.
  //
  // Adding this comment block makes this file structurally distinct (different
  // line count) from the other 5 instances, which defeats the dedup and forces
  // Logika to verify this file independently.
  //
  // Evidence: without this comment, `--all` reports "Logika verified!" even
  // when line 109 reads get_channel3 instead of get_channel2. With this
  // comment (or in single-file mode), Logika correctly reports
  // "[43, 21] Could not deduce that the postcondition holds".
  //
  // The SysMLv2 project does not hit this bug because its codegen happened to
  // produce files with inconsistent comment blocks across instances, making
  // them different line counts (128 vs 133), which accidentally defeats dedup.
  //
  // The real fix should be in Logika: the dedup equivalence check should
  // incorporate method bodies, not just contracts and structural fingerprints.
  def activate(api: CoincidenceLogic_i_Operational_Api): Unit = { }

  def deactivate(api: CoincidenceLogic_i_Operational_Api): Unit = { }

  def finalise(api: CoincidenceLogic_i_Operational_Api): Unit = { }

  def recover(api: CoincidenceLogic_i_Operational_Api): Unit = { }
}
