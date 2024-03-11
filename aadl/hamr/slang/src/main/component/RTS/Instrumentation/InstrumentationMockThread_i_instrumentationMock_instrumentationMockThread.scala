// #Sireum

package RTS.Instrumentation

import org.sireum._
import RTS._

// This file will not be overwritten so is safe to edit
object InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread {

  //=================================================
  //  I n i t i a l i z e    E n t r y    P o i n t
  //=================================================
  def initialise(api: InstrumentationMockThread_i_Initialization_Api): Unit = {

    api.put_unit1_temperatureLogic_channel1(Base_Types.Boolean_example())
    api.put_unit1_temperatureLogic_channel2(Base_Types.Boolean_example())
    api.put_unit1_temperatureLogic_channel3(Base_Types.Boolean_example())
    api.put_unit1_temperatureLogic_channel4(Base_Types.Boolean_example())
    api.put_unit1_pressureLogic_channel1(Base_Types.Boolean_example())
    api.put_unit1_pressureLogic_channel2(Base_Types.Boolean_example())
    api.put_unit1_pressureLogic_channel3(Base_Types.Boolean_example())
    api.put_unit1_pressureLogic_channel4(Base_Types.Boolean_example())
    api.put_unit1_saturationLogic_channel1(Base_Types.Boolean_example())
    api.put_unit1_saturationLogic_channel2(Base_Types.Boolean_example())
    api.put_unit1_saturationLogic_channel3(Base_Types.Boolean_example())
    api.put_unit1_saturationLogic_channel4(Base_Types.Boolean_example())
    api.put_unit2_temperatureLogic_channel1(Base_Types.Boolean_example())
    api.put_unit2_temperatureLogic_channel2(Base_Types.Boolean_example())
    api.put_unit2_temperatureLogic_channel3(Base_Types.Boolean_example())
    api.put_unit2_temperatureLogic_channel4(Base_Types.Boolean_example())
    api.put_unit2_pressureLogic_channel1(Base_Types.Boolean_example())
    api.put_unit2_pressureLogic_channel2(Base_Types.Boolean_example())
    api.put_unit2_pressureLogic_channel3(Base_Types.Boolean_example())
    api.put_unit2_pressureLogic_channel4(Base_Types.Boolean_example())
    api.put_unit2_saturationLogic_channel1(Base_Types.Boolean_example())
    api.put_unit2_saturationLogic_channel2(Base_Types.Boolean_example())
    api.put_unit2_saturationLogic_channel3(Base_Types.Boolean_example())
    api.put_unit2_saturationLogic_channel4(Base_Types.Boolean_example())
  }

  //=================================================
  //  C o m p u t e    E n t r y    P o i n t
  //=================================================

  val frames: ISZ[
    ((Base_Types.Boolean, Base_Types.Boolean, Base_Types.Boolean, Base_Types.Boolean,
      Base_Types.Boolean, Base_Types.Boolean, Base_Types.Boolean, Base_Types.Boolean,
      Base_Types.Boolean, Base_Types.Boolean, Base_Types.Boolean, Base_Types.Boolean),
      (Base_Types.Boolean, Base_Types.Boolean, Base_Types.Boolean, Base_Types.Boolean,
        Base_Types.Boolean, Base_Types.Boolean, Base_Types.Boolean, Base_Types.Boolean,
        Base_Types.Boolean, Base_Types.Boolean, Base_Types.Boolean, Base_Types.Boolean))] =
    ISZ(
      ((T, F, F, F,    T, F, F, T,    F, F, F, F), (F, F, T, F,    F, F, F, F,    F, F, F, T)),
      ((F, T, T, F,    F, T, F, T,    F, T, F, F), (F, F, F, F,    F, T, T, F,    F, F, F, T)),
      ((F, F, F, T,    F, F, F, F,    F, T, T, F), (F, F, F, T,    F, F, F, F,    F, F, F, F)),
      ((F, F, T, T,    F, F, T, F,    T, F, F, T), (F, F, F, F,    F, F, T, F,    F, F, F, T)),
      ((F, F, F, F,    T, F, F, F,    F, F, F, F), (F, F, T, F,    F, T, T, F,    F, F, F, F)),
      ((F, F, F, F,    T, F, F, F,    F, F, F, F), (F, F, T, F,    F, F, F, F,    F, T, F, T)),
      ((T, F, F, F,    F, F, F, F,    F, F, F, F), (F, F, F, F,    F, F, F, F,    T, F, F, F)),
      ((F, F, F, F,    T, F, F, T,    F, F, T, F), (F, F, T, F,    F, F, F, F,    T, F, F, T)),
      ((F, F, F, F,    T, F, F, T,    F, F, T, F), (F, F, T, F,    F, F, F, F,    T, F, F, T))
    )

  var frame: Base_Types.Integer = 0

  // Mocked instrumentation behavior is to send out 10 sets of trip signals separately (then repeat)
  def timeTriggered(api: InstrumentationMockThread_i_Operational_Api): Unit = {
    // We do this one frame at a time to allow
    // the rest of this system to run through
    // the logic and actuation before moving
    // to the next frame

    // Simulate the current frame
    putFrame(frame, api)

    // Move to the next frame
    frame = frame + 1
    if (frame == frames.size) {
      frame = 0
    }
  }

  // Simulate the given frame from the mock temperature/pressure/saturation trip signals
  def putFrame(frame: Base_Types.Integer, api: InstrumentationMockThread_i_Operational_Api): Unit = {
    api.logInfo(s"Instrumentation: Frame: ${frame}")

    val unit1TripSignals = frames(frame)._1
    val unit2TripSignals = frames(frame)._2
    api.logInfo(s"  Unit1 test vector: ${unit1TripSignals}")
    api.put_unit1_temperatureLogic_channel1(unit1TripSignals._1)
    api.put_unit1_temperatureLogic_channel2(unit1TripSignals._2)
    api.put_unit1_temperatureLogic_channel3(unit1TripSignals._3)
    api.put_unit1_temperatureLogic_channel4(unit1TripSignals._4)
    api.put_unit1_pressureLogic_channel1(unit1TripSignals._5)
    api.put_unit1_pressureLogic_channel2(unit1TripSignals._6)
    api.put_unit1_pressureLogic_channel3(unit1TripSignals._7)
    api.put_unit1_pressureLogic_channel4(unit1TripSignals._8)
    api.put_unit1_saturationLogic_channel1(unit1TripSignals._9)
    api.put_unit1_saturationLogic_channel2(unit1TripSignals._10)
    api.put_unit1_saturationLogic_channel3(unit1TripSignals._11)
    api.put_unit1_saturationLogic_channel4(unit1TripSignals._12)
    // unit2 trip signals
    api.logInfo(s"  Unit2 test vector: ${unit2TripSignals}")
    api.put_unit2_temperatureLogic_channel1(unit2TripSignals._1)
    api.put_unit2_temperatureLogic_channel2(unit2TripSignals._2)
    api.put_unit2_temperatureLogic_channel3(unit2TripSignals._3)
    api.put_unit2_temperatureLogic_channel4(unit2TripSignals._4)
    api.put_unit2_pressureLogic_channel1(unit2TripSignals._5)
    api.put_unit2_pressureLogic_channel2(unit2TripSignals._6)
    api.put_unit2_pressureLogic_channel3(unit2TripSignals._7)
    api.put_unit2_pressureLogic_channel4(unit2TripSignals._8)
    api.put_unit2_saturationLogic_channel1(unit2TripSignals._9)
    api.put_unit2_saturationLogic_channel2(unit2TripSignals._10)
    api.put_unit2_saturationLogic_channel3(unit2TripSignals._11)
    api.put_unit2_saturationLogic_channel4(unit2TripSignals._12)
  }

  def activate(api: InstrumentationMockThread_i_Operational_Api): Unit = { }

  def deactivate(api: InstrumentationMockThread_i_Operational_Api): Unit = { }

  def finalise(api: InstrumentationMockThread_i_Operational_Api): Unit = { }

  def recover(api: InstrumentationMockThread_i_Operational_Api): Unit = { }
}
