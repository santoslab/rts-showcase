#include <all.h>

B RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_initialized_ = F;

struct IS_0C7B5E _RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frames;
Z _RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frame;

void RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_init(STACK_FRAME_ONLY) {
  if (RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_initialized_) return;
  RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_initialized_ = T;
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread.scala", "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread", "<init>", 0);
  RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_init_frames(SF_LAST);
  RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_init_frame(SF_LAST);
}

IS_0C7B5E RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frames(STACK_FRAME_ONLY) {
  RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_init(CALLER_LAST);
  return (IS_0C7B5E) &_RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frames;
}

Z RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frame(STACK_FRAME_ONLY) {
  RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_init(CALLER_LAST);
  return _RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frame;
}

void RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frame_a(STACK_FRAME Z p_frame) {
  RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_init(CALLER_LAST);
  _RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frame = p_frame;
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_initialise(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api api) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread.scala", "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread", "initialise", 0);

  sfUpdateLoc(16);
  {
    B t_0 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel1_(SF api, t_0);
  }

  sfUpdateLoc(17);
  {
    B t_1 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel2_(SF api, t_1);
  }

  sfUpdateLoc(18);
  {
    B t_2 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel3_(SF api, t_2);
  }

  sfUpdateLoc(19);
  {
    B t_3 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel4_(SF api, t_3);
  }

  sfUpdateLoc(20);
  {
    B t_4 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel1_(SF api, t_4);
  }

  sfUpdateLoc(21);
  {
    B t_5 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel2_(SF api, t_5);
  }

  sfUpdateLoc(22);
  {
    B t_6 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel3_(SF api, t_6);
  }

  sfUpdateLoc(23);
  {
    B t_7 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel4_(SF api, t_7);
  }

  sfUpdateLoc(24);
  {
    B t_8 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel1_(SF api, t_8);
  }

  sfUpdateLoc(25);
  {
    B t_9 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel2_(SF api, t_9);
  }

  sfUpdateLoc(26);
  {
    B t_10 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel3_(SF api, t_10);
  }

  sfUpdateLoc(27);
  {
    B t_11 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel4_(SF api, t_11);
  }

  sfUpdateLoc(28);
  {
    B t_12 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel1_(SF api, t_12);
  }

  sfUpdateLoc(29);
  {
    B t_13 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel2_(SF api, t_13);
  }

  sfUpdateLoc(30);
  {
    B t_14 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel3_(SF api, t_14);
  }

  sfUpdateLoc(31);
  {
    B t_15 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel4_(SF api, t_15);
  }

  sfUpdateLoc(32);
  {
    B t_16 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel1_(SF api, t_16);
  }

  sfUpdateLoc(33);
  {
    B t_17 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel2_(SF api, t_17);
  }

  sfUpdateLoc(34);
  {
    B t_18 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel3_(SF api, t_18);
  }

  sfUpdateLoc(35);
  {
    B t_19 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel4_(SF api, t_19);
  }

  sfUpdateLoc(36);
  {
    B t_20 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel1_(SF api, t_20);
  }

  sfUpdateLoc(37);
  {
    B t_21 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel2_(SF api, t_21);
  }

  sfUpdateLoc(38);
  {
    B t_22 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel3_(SF api, t_22);
  }

  sfUpdateLoc(39);
  {
    B t_23 = RTS_Base_Types_Boolean_example(SF_LAST);
    RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel4_(SF api, t_23);
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_timeTriggered(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api api) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread.scala", "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread", "timeTriggered", 0);

  sfUpdateLoc(75);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_putFrame(SF RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frame(SF_LAST), (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) api);
  }

  sfUpdateLoc(78);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frame_a(SF (Z) Z__add(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frame(SF_LAST), Z_C(1)));
  }

  sfUpdateLoc(79);
  B t_0;
  {
    Z t_1 = IS_0C7B5E_size(SF RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frames(SF_LAST));
    t_0 = Z__eq(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frame(SF_LAST), t_1);
  }
  if (t_0) {

    sfUpdateLoc(80);
    {
      RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frame_a(SF (Z) Z_C(0));
    }
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_finalise(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api api) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread.scala", "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread", "finalise", 0);
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_putFrame(STACK_FRAME Z frame, RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api api) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread.scala", "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread", "putFrame", 0);

  sfUpdateLoc(86);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string("Instrumentation: Frame: "));
    Z_string_(SF (String) &t_0, frame);
    String_string_(SF (String) &t_0, string(""));
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_logInfo_(SF api, (String) ((String) &t_0));
  }

  sfUpdateLoc(88);
  Tuple12_3FBE62 unit1TripSignals;
  unit1TripSignals = (Tuple12_3FBE62) Tuple2_04A4F6_1(IS_0C7B5E_at(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frames(SF_LAST), frame));

  sfUpdateLoc(89);
  Tuple12_3FBE62 unit2TripSignals;
  unit2TripSignals = (Tuple12_3FBE62) Tuple2_04A4F6_2(IS_0C7B5E_at(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frames(SF_LAST), frame));

  sfUpdateLoc(90);
  {
    DeclNewString(t_1);
    String_string_(SF (String) &t_1, string("  Unit1 test vector: "));
    Tuple12_3FBE62_string_(SF (String) &t_1, unit1TripSignals);
    String_string_(SF (String) &t_1, string(""));
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_logInfo_(SF api, (String) ((String) &t_1));
  }

  sfUpdateLoc(91);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel1_(SF api, Tuple12_3FBE62_1(unit1TripSignals));
  }

  sfUpdateLoc(92);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel2_(SF api, Tuple12_3FBE62_2(unit1TripSignals));
  }

  sfUpdateLoc(93);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel3_(SF api, Tuple12_3FBE62_3(unit1TripSignals));
  }

  sfUpdateLoc(94);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel4_(SF api, Tuple12_3FBE62_4(unit1TripSignals));
  }

  sfUpdateLoc(95);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel1_(SF api, Tuple12_3FBE62_5(unit1TripSignals));
  }

  sfUpdateLoc(96);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel2_(SF api, Tuple12_3FBE62_6(unit1TripSignals));
  }

  sfUpdateLoc(97);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel3_(SF api, Tuple12_3FBE62_7(unit1TripSignals));
  }

  sfUpdateLoc(98);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel4_(SF api, Tuple12_3FBE62_8(unit1TripSignals));
  }

  sfUpdateLoc(99);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel1_(SF api, Tuple12_3FBE62_9(unit1TripSignals));
  }

  sfUpdateLoc(100);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel2_(SF api, Tuple12_3FBE62_10(unit1TripSignals));
  }

  sfUpdateLoc(101);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel3_(SF api, Tuple12_3FBE62_11(unit1TripSignals));
  }

  sfUpdateLoc(102);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel4_(SF api, Tuple12_3FBE62_12(unit1TripSignals));
  }

  sfUpdateLoc(104);
  {
    DeclNewString(t_2);
    String_string_(SF (String) &t_2, string("  Unit2 test vector: "));
    Tuple12_3FBE62_string_(SF (String) &t_2, unit2TripSignals);
    String_string_(SF (String) &t_2, string(""));
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_logInfo_(SF api, (String) ((String) &t_2));
  }

  sfUpdateLoc(105);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel1_(SF api, Tuple12_3FBE62_1(unit2TripSignals));
  }

  sfUpdateLoc(106);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel2_(SF api, Tuple12_3FBE62_2(unit2TripSignals));
  }

  sfUpdateLoc(107);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel3_(SF api, Tuple12_3FBE62_3(unit2TripSignals));
  }

  sfUpdateLoc(108);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel4_(SF api, Tuple12_3FBE62_4(unit2TripSignals));
  }

  sfUpdateLoc(109);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel1_(SF api, Tuple12_3FBE62_5(unit2TripSignals));
  }

  sfUpdateLoc(110);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel2_(SF api, Tuple12_3FBE62_6(unit2TripSignals));
  }

  sfUpdateLoc(111);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel3_(SF api, Tuple12_3FBE62_7(unit2TripSignals));
  }

  sfUpdateLoc(112);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel4_(SF api, Tuple12_3FBE62_8(unit2TripSignals));
  }

  sfUpdateLoc(113);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel1_(SF api, Tuple12_3FBE62_9(unit2TripSignals));
  }

  sfUpdateLoc(114);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel2_(SF api, Tuple12_3FBE62_10(unit2TripSignals));
  }

  sfUpdateLoc(115);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel3_(SF api, Tuple12_3FBE62_11(unit2TripSignals));
  }

  sfUpdateLoc(116);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel4_(SF api, Tuple12_3FBE62_12(unit2TripSignals));
  }
}

void RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_init_frames(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(46);
  STATIC_ASSERT(9 <= MaxIS_0C7B5E, "Insufficient maximum for IS[Z, ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))] elements.");
  DeclNewIS_0C7B5E(t_0);
  t_0.size = (int8_t) 9;
  DeclNewTuple12_3FBE62(t_2);
  Tuple12_3FBE62_apply(SF &t_2, T, F, F, F, T, F, F, T, F, F, F, F);
  DeclNewTuple12_3FBE62(t_3);
  Tuple12_3FBE62_apply(SF &t_3, F, F, T, F, F, F, F, F, F, F, F, T);
  DeclNewTuple2_04A4F6(t_1);
  Tuple2_04A4F6_apply(SF &t_1, (&t_2), (&t_3));
  IS_0C7B5E_up(&t_0, 0, (Tuple2_04A4F6) (&t_1));
  DeclNewTuple12_3FBE62(t_5);
  Tuple12_3FBE62_apply(SF &t_5, F, T, T, F, F, T, F, T, F, T, F, F);
  DeclNewTuple12_3FBE62(t_6);
  Tuple12_3FBE62_apply(SF &t_6, F, F, F, F, F, T, T, F, F, F, F, T);
  DeclNewTuple2_04A4F6(t_4);
  Tuple2_04A4F6_apply(SF &t_4, (&t_5), (&t_6));
  IS_0C7B5E_up(&t_0, 1, (Tuple2_04A4F6) (&t_4));
  DeclNewTuple12_3FBE62(t_8);
  Tuple12_3FBE62_apply(SF &t_8, F, F, F, T, F, F, F, F, F, T, T, F);
  DeclNewTuple12_3FBE62(t_9);
  Tuple12_3FBE62_apply(SF &t_9, F, F, F, T, F, F, F, F, F, F, F, F);
  DeclNewTuple2_04A4F6(t_7);
  Tuple2_04A4F6_apply(SF &t_7, (&t_8), (&t_9));
  IS_0C7B5E_up(&t_0, 2, (Tuple2_04A4F6) (&t_7));
  DeclNewTuple12_3FBE62(t_11);
  Tuple12_3FBE62_apply(SF &t_11, F, F, T, T, F, F, T, F, T, F, F, T);
  DeclNewTuple12_3FBE62(t_12);
  Tuple12_3FBE62_apply(SF &t_12, F, F, F, F, F, F, T, F, F, F, F, T);
  DeclNewTuple2_04A4F6(t_10);
  Tuple2_04A4F6_apply(SF &t_10, (&t_11), (&t_12));
  IS_0C7B5E_up(&t_0, 3, (Tuple2_04A4F6) (&t_10));
  DeclNewTuple12_3FBE62(t_14);
  Tuple12_3FBE62_apply(SF &t_14, F, F, F, F, T, F, F, F, F, F, F, F);
  DeclNewTuple12_3FBE62(t_15);
  Tuple12_3FBE62_apply(SF &t_15, F, F, T, F, F, T, T, F, F, F, F, F);
  DeclNewTuple2_04A4F6(t_13);
  Tuple2_04A4F6_apply(SF &t_13, (&t_14), (&t_15));
  IS_0C7B5E_up(&t_0, 4, (Tuple2_04A4F6) (&t_13));
  DeclNewTuple12_3FBE62(t_17);
  Tuple12_3FBE62_apply(SF &t_17, F, F, F, F, T, F, F, F, F, F, F, F);
  DeclNewTuple12_3FBE62(t_18);
  Tuple12_3FBE62_apply(SF &t_18, F, F, T, F, F, F, F, F, F, T, F, T);
  DeclNewTuple2_04A4F6(t_16);
  Tuple2_04A4F6_apply(SF &t_16, (&t_17), (&t_18));
  IS_0C7B5E_up(&t_0, 5, (Tuple2_04A4F6) (&t_16));
  DeclNewTuple12_3FBE62(t_20);
  Tuple12_3FBE62_apply(SF &t_20, T, F, F, F, F, F, F, F, F, F, F, F);
  DeclNewTuple12_3FBE62(t_21);
  Tuple12_3FBE62_apply(SF &t_21, F, F, F, F, F, F, F, F, T, F, F, F);
  DeclNewTuple2_04A4F6(t_19);
  Tuple2_04A4F6_apply(SF &t_19, (&t_20), (&t_21));
  IS_0C7B5E_up(&t_0, 6, (Tuple2_04A4F6) (&t_19));
  DeclNewTuple12_3FBE62(t_23);
  Tuple12_3FBE62_apply(SF &t_23, F, F, F, F, T, F, F, T, F, F, T, F);
  DeclNewTuple12_3FBE62(t_24);
  Tuple12_3FBE62_apply(SF &t_24, F, F, T, F, F, F, F, F, T, F, F, T);
  DeclNewTuple2_04A4F6(t_22);
  Tuple2_04A4F6_apply(SF &t_22, (&t_23), (&t_24));
  IS_0C7B5E_up(&t_0, 7, (Tuple2_04A4F6) (&t_22));
  DeclNewTuple12_3FBE62(t_26);
  Tuple12_3FBE62_apply(SF &t_26, F, F, F, F, T, F, F, T, F, F, T, F);
  DeclNewTuple12_3FBE62(t_27);
  Tuple12_3FBE62_apply(SF &t_27, F, F, T, F, F, F, F, F, T, F, F, T);
  DeclNewTuple2_04A4F6(t_25);
  Tuple2_04A4F6_apply(SF &t_25, (&t_26), (&t_27));
  IS_0C7B5E_up(&t_0, 8, (Tuple2_04A4F6) (&t_25));
  Type_assign(&_RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frames, (&t_0), sizeof(struct IS_0C7B5E));
};

void RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_init_frame(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(65);
  _RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_frame = Z_C(0);
};