#include <all.h>

B RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_initialized_ = F;

struct RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge _RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_actuatorsMockThreadBridge;
union art_Bridge_EntryPoints _RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_entryPoints;
union Option_8E9F45 _RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_noData;
art_Art_PortId _RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_tempPressureActuate_id;
union Option_8E9F45 _RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_tempPressureActuate_port;
art_Art_PortId _RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_saturationActuate_id;
union Option_8E9F45 _RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_saturationActuate_port;

void RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init(STACK_FRAME_ONLY) {
  if (RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_initialized_) return;
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_initialized_ = T;
  DeclNewStackFrame(caller, "actuatorsMockThread.scala", "RTS.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread.actuatorsMockThread", "<init>", 0);
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init_actuatorsMockThreadBridge(SF_LAST);
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init_entryPoints(SF_LAST);
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init_noData(SF_LAST);
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init_tempPressureActuate_id(SF_LAST);
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init_tempPressureActuate_port(SF_LAST);
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init_saturationActuate_id(SF_LAST);
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init_saturationActuate_port(SF_LAST);
}

RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_actuatorsMockThreadBridge(STACK_FRAME_ONLY) {
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init(CALLER_LAST);
  return (RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge) &_RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_actuatorsMockThreadBridge;
}

art_Bridge_EntryPoints RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_entryPoints(STACK_FRAME_ONLY) {
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_entryPoints;
}

Option_8E9F45 RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_noData(STACK_FRAME_ONLY) {
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init(CALLER_LAST);
  return (Option_8E9F45) &_RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_noData;
}

art_Art_PortId RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_tempPressureActuate_id(STACK_FRAME_ONLY) {
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init(CALLER_LAST);
  return _RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_tempPressureActuate_id;
}

Option_8E9F45 RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_tempPressureActuate_port(STACK_FRAME_ONLY) {
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init(CALLER_LAST);
  return (Option_8E9F45) &_RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_tempPressureActuate_port;
}

void RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_tempPressureActuate_port_a(STACK_FRAME Option_8E9F45 p_tempPressureActuate_port) {
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init(CALLER_LAST);
  Type_assign(&_RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_tempPressureActuate_port, p_tempPressureActuate_port, sizeof(union Option_8E9F45));
}

art_Art_PortId RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_saturationActuate_id(STACK_FRAME_ONLY) {
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init(CALLER_LAST);
  return _RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_saturationActuate_id;
}

Option_8E9F45 RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_saturationActuate_port(STACK_FRAME_ONLY) {
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init(CALLER_LAST);
  return (Option_8E9F45) &_RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_saturationActuate_port;
}

void RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_saturationActuate_port_a(STACK_FRAME Option_8E9F45 p_saturationActuate_port) {
  RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init(CALLER_LAST);
  Type_assign(&_RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_saturationActuate_port, p_saturationActuate_port, sizeof(union Option_8E9F45));
}

Z RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "actuatorsMockThread.scala", "RTS.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread.actuatorsMockThread", "main", 0);

  sfUpdateLoc(89);
  {
    RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(90);
  {
    RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(91);
  {
    RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(92);
  {
    RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(94);
  {
    RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "actuatorsMockThread.scala", "RTS.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread.actuatorsMockThread", "initialiseArchitecture", 0);
}

Unit RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "actuatorsMockThread.scala", "RTS.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread.actuatorsMockThread", "initialiseEntryPoint", 0);

  sfUpdateLoc(80);
  {
    art_Bridge_EntryPoints_initialise_(SF RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_entryPoints(SF_LAST));
  }
}

Unit RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "actuatorsMockThread.scala", "RTS.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread.actuatorsMockThread", "computeEntryPoint", 0);

  sfUpdateLoc(82);
  {
    art_Bridge_EntryPoints_compute_(SF RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_entryPoints(SF_LAST));
  }
}

Unit RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "actuatorsMockThread.scala", "RTS.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread.actuatorsMockThread", "finaliseEntryPoint", 0);

  sfUpdateLoc(84);
  {
    art_Bridge_EntryPoints_finalise_(SF RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_entryPoints(SF_LAST));
  }
}

Unit RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "actuatorsMockThread.scala", "RTS.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread.actuatorsMockThread.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(108);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string(""));
    art_DataContent_string_(SF (String) &t_0, a);
    String_string_(SF (String) &t_0, string(""));
    String_cprint(((String) &t_0), T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "actuatorsMockThread.scala", "RTS.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread.actuatorsMockThread", "touch", 0);

  sfUpdateLoc(100);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(101);
    {
      RTS_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(104);
    DeclNewMBox2_43CC67(_mbox2Boolean_Payload);
    MBox2_43CC67 mbox2Boolean_Payload = (MBox2_43CC67) &_mbox2Boolean_Payload;
    {
      DeclNewRTS_Base_Types_Boolean_Payload(t_2);
      RTS_Base_Types_Boolean_Payload_apply(SF &t_2, T);
      DeclNewMBox2_43CC67(t_1);
      MBox2_43CC67_apply(SF &t_1, art_Art_PortId_C(0), (art_DataContent) (&t_2));
      Type_assign(mbox2Boolean_Payload, (&t_1), sizeof(struct MBox2_43CC67));
    }

    sfUpdateLoc(105);
    DeclNewMBox2_37E193(_mbox2OptionDataContent);
    MBox2_37E193 mbox2OptionDataContent = (MBox2_37E193) &_mbox2OptionDataContent;
    {
      DeclNewNone_964667(t_4);
      None_964667_apply(SF &t_4);
      DeclNewMBox2_37E193(t_3);
      MBox2_37E193_apply(SF &t_3, art_Art_PortId_C(0), (Option_8E9F45) (&t_4));
      Type_assign(mbox2OptionDataContent, (&t_3), sizeof(struct MBox2_37E193));
    }

    sfUpdateLoc(110);
    {
      B t_6 = RTS_Base_Types_Boolean_example(SF_LAST);
      DeclNewRTS_Base_Types_Boolean_Payload(t_5);
      RTS_Base_Types_Boolean_Payload_apply(SF &t_5, t_6);
      RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(SF (art_DataContent) (&t_5));
    }

    sfUpdateLoc(111);
    {
      Z t_8 = RTS_Base_Types_Integer_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_Payload(t_7);
      RTS_Base_Types_Integer_Payload_apply(SF &t_7, t_8);
      RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(SF (art_DataContent) (&t_7));
    }

    sfUpdateLoc(112);
    {
      S8 t_10 = RTS_Base_Types_Integer_8_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_8_Payload(t_9);
      RTS_Base_Types_Integer_8_Payload_apply(SF &t_9, t_10);
      RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(SF (art_DataContent) (&t_9));
    }

    sfUpdateLoc(113);
    {
      S16 t_12 = RTS_Base_Types_Integer_16_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_16_Payload(t_11);
      RTS_Base_Types_Integer_16_Payload_apply(SF &t_11, t_12);
      RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(SF (art_DataContent) (&t_11));
    }

    sfUpdateLoc(114);
    {
      S32 t_14 = RTS_Base_Types_Integer_32_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_32_Payload(t_13);
      RTS_Base_Types_Integer_32_Payload_apply(SF &t_13, t_14);
      RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(SF (art_DataContent) (&t_13));
    }

    sfUpdateLoc(115);
    {
      S64 t_16 = RTS_Base_Types_Integer_64_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_64_Payload(t_15);
      RTS_Base_Types_Integer_64_Payload_apply(SF &t_15, t_16);
      RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(SF (art_DataContent) (&t_15));
    }

    sfUpdateLoc(116);
    {
      U8 t_18 = RTS_Base_Types_Unsigned_8_example(SF_LAST);
      DeclNewRTS_Base_Types_Unsigned_8_Payload(t_17);
      RTS_Base_Types_Unsigned_8_Payload_apply(SF &t_17, t_18);
      RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(SF (art_DataContent) (&t_17));
    }

    sfUpdateLoc(117);
    {
      U16 t_20 = RTS_Base_Types_Unsigned_16_example(SF_LAST);
      DeclNewRTS_Base_Types_Unsigned_16_Payload(t_19);
      RTS_Base_Types_Unsigned_16_Payload_apply(SF &t_19, t_20);
      RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(SF (art_DataContent) (&t_19));
    }

    sfUpdateLoc(118);
    {
      U32 t_22 = RTS_Base_Types_Unsigned_32_example(SF_LAST);
      DeclNewRTS_Base_Types_Unsigned_32_Payload(t_21);
      RTS_Base_Types_Unsigned_32_Payload_apply(SF &t_21, t_22);
      RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(SF (art_DataContent) (&t_21));
    }

    sfUpdateLoc(119);
    {
      U64 t_24 = RTS_Base_Types_Unsigned_64_example(SF_LAST);
      DeclNewRTS_Base_Types_Unsigned_64_Payload(t_23);
      RTS_Base_Types_Unsigned_64_Payload_apply(SF &t_23, t_24);
      RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(SF (art_DataContent) (&t_23));
    }

    sfUpdateLoc(120);
    {
      R t_26 = RTS_Base_Types_Float_example(SF_LAST);
      DeclNewRTS_Base_Types_Float_Payload(t_25);
      RTS_Base_Types_Float_Payload_apply(SF &t_25, t_26);
      RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(SF (art_DataContent) (&t_25));
    }

    sfUpdateLoc(121);
    {
      F32 t_28 = RTS_Base_Types_Float_32_example(SF_LAST);
      DeclNewRTS_Base_Types_Float_32_Payload(t_27);
      RTS_Base_Types_Float_32_Payload_apply(SF &t_27, t_28);
      RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(SF (art_DataContent) (&t_27));
    }

    sfUpdateLoc(122);
    {
      F64 t_30 = RTS_Base_Types_Float_64_example(SF_LAST);
      DeclNewRTS_Base_Types_Float_64_Payload(t_29);
      RTS_Base_Types_Float_64_Payload_apply(SF &t_29, t_30);
      RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(SF (art_DataContent) (&t_29));
    }

    sfUpdateLoc(123);
    {
      C t_32 = RTS_Base_Types_Character_example(SF_LAST);
      DeclNewRTS_Base_Types_Character_Payload(t_31);
      RTS_Base_Types_Character_Payload_apply(SF &t_31, t_32);
      RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(SF (art_DataContent) (&t_31));
    }

    sfUpdateLoc(124);
    {
      DeclNewString(t_34);
      RTS_Base_Types_String_example(SF (String) &t_34);
      DeclNewRTS_Base_Types_String_Payload(t_33);
      RTS_Base_Types_String_Payload_apply(SF &t_33, (String) ((String) &t_34));
      RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(SF (art_DataContent) (&t_33));
    }

    sfUpdateLoc(125);
    {
      DeclNewart_Empty(t_35);
      art_Empty_apply(SF &t_35);
      RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_touch_printDataContent(SF (art_DataContent) (&t_35));
    }

    sfUpdateLoc(127);
    {
      DeclNewRTS_Actuators_ActuatorsMockThread_i_Initialization_Api(t_36);
      Option_638957_get_(SF (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &t_36, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_c_initialization_api(SF_LAST));
      RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_logInfo_(SF ((RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &t_36), (String) string(""));
    }

    sfUpdateLoc(128);
    {
      DeclNewRTS_Actuators_ActuatorsMockThread_i_Initialization_Api(t_37);
      Option_638957_get_(SF (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &t_37, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_c_initialization_api(SF_LAST));
      RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_logDebug_(SF ((RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &t_37), (String) string(""));
    }

    sfUpdateLoc(129);
    {
      DeclNewRTS_Actuators_ActuatorsMockThread_i_Initialization_Api(t_38);
      Option_638957_get_(SF (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &t_38, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_c_initialization_api(SF_LAST));
      RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_logError_(SF ((RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &t_38), (String) string(""));
    }

    sfUpdateLoc(130);
    {
      DeclNewRTS_Actuators_ActuatorsMockThread_i_Operational_Api(t_39);
      Option_549EB3_get_(SF (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_39, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_c_operational_api(SF_LAST));
      RTS_Actuators_ActuatorsMockThread_i_Operational_Api_logInfo_(SF ((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_39), (String) string(""));
    }

    sfUpdateLoc(131);
    {
      DeclNewRTS_Actuators_ActuatorsMockThread_i_Operational_Api(t_40);
      Option_549EB3_get_(SF (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_40, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_c_operational_api(SF_LAST));
      RTS_Actuators_ActuatorsMockThread_i_Operational_Api_logDebug_(SF ((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_40), (String) string(""));
    }

    sfUpdateLoc(132);
    {
      DeclNewRTS_Actuators_ActuatorsMockThread_i_Operational_Api(t_41);
      Option_549EB3_get_(SF (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_41, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_c_operational_api(SF_LAST));
      RTS_Actuators_ActuatorsMockThread_i_Operational_Api_logError_(SF ((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_41), (String) string(""));
    }

    sfUpdateLoc(133);
    Option_8F4D4C apiUsage_tempPressureActuate;
    DeclNewRTS_Actuators_ActuatorsMockThread_i_Operational_Api(t_42);
    Option_549EB3_get_(SF (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_42, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_8F4D4C(t_43);
    RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_tempPressureActuate_(SF (Option_8F4D4C) &t_43, ((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_42));
    apiUsage_tempPressureActuate = (Option_8F4D4C) ((Option_8F4D4C) &t_43);

    sfUpdateLoc(134);
    Option_8F4D4C apiUsage_saturationActuate;
    DeclNewRTS_Actuators_ActuatorsMockThread_i_Operational_Api(t_44);
    Option_549EB3_get_(SF (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_44, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_8F4D4C(t_45);
    RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_saturationActuate_(SF (Option_8F4D4C) &t_45, ((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &t_44));
    apiUsage_saturationActuate = (Option_8F4D4C) ((Option_8F4D4C) &t_45);
  }
}

Unit RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "actuatorsMockThread.scala", "RTS.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread.actuatorsMockThread", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(139);
  {
    String_cprint(RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_name_(RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_actuatorsMockThreadBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(140);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(141);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "actuatorsMockThread.scala", "RTS.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread.actuatorsMockThread", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(151);
  {
    String_cprint(RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_name_(RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_actuatorsMockThreadBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(152);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(153);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "actuatorsMockThread.scala", "RTS.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread.actuatorsMockThread", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(145);
  {
    String_cprint(RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_name_(RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_actuatorsMockThreadBridge(SF_LAST)), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(146);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(147);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_getValue(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId) {
  DeclNewStackFrame(caller, "actuatorsMockThread.scala", "RTS.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread.actuatorsMockThread", "getValue", 0);

  sfUpdateLoc(49);
  B t_0;
  {
    t_0 = art_Art_PortId__eq(portId, RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_tempPressureActuate_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_tempPressureActuate_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(51);
    B t_1;
    {
      t_1 = art_Art_PortId__eq(portId, RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_saturationActuate_id(SF_LAST));
    }
    if (t_1) {
      Type_assign(result, RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_saturationActuate_port(SF_LAST), sizeof(union Option_8E9F45));
      return;
    } else {

      sfUpdateLoc(54);
      {
        DeclNewString(t_2);
        String t_3 = (String) &t_2;
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("Unexpected: actuatorsMockThread.getValue called with: "));
        art_Art_PortId_string_(SF (String) &t_4, portId);
        String_string_(SF (String) &t_4, string(""));
        String_string_(SF t_3, ((String) &t_4));
        sfAbort(t_3->value);
        abort();
      }
    }
  }
}

Unit RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_sendOutput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds) {
  DeclNewStackFrame(caller, "actuatorsMockThread.scala", "RTS.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread.actuatorsMockThread", "sendOutput", 0);
}

Unit RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_receiveInput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds) {
  DeclNewStackFrame(caller, "actuatorsMockThread.scala", "RTS.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread.actuatorsMockThread", "receiveInput", 0);

  sfUpdateLoc(61);
  {
    DeclNewOption_8E9F45(t_0);
    RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_seL4Nix_tempPressureActuate_Receive(SF (Option_8E9F45) &t_0);
    RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_tempPressureActuate_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }

  sfUpdateLoc(63);
  {
    DeclNewOption_8E9F45(t_1);
    RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_seL4Nix_saturationActuate_Receive(SF (Option_8E9F45) &t_1);
    RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_saturationActuate_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_1));
  }
}

void RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init_actuatorsMockThreadBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  {

    sfUpdateLoc(19);
    art_Port_C0524D tempPressureActuate;
    DeclNewart_Port_C0524D(t_0);
    art_Port_C0524D_apply(SF &t_0, art_Art_PortId_C(0), (String) string("RTS_i_Instance_actuatorsMock_actuatorsMockThread_tempPressureActuate"), art_PortMode_Type_DataIn);
    tempPressureActuate = (art_Port_C0524D) (&t_0);

    sfUpdateLoc(20);
    art_Port_C0524D saturationActuate;
    DeclNewart_Port_C0524D(t_1);
    art_Port_C0524D_apply(SF &t_1, art_Art_PortId_C(1), (String) string("RTS_i_Instance_actuatorsMock_actuatorsMockThread_saturationActuate"), art_PortMode_Type_DataIn);
    saturationActuate = (art_Port_C0524D) (&t_1);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_3);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_3, Z_C(1000));
    DeclNewNone_CFD2B0(t_4);
    None_CFD2B0_apply(SF &t_4);
    DeclNewRTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge(t_2);
    RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_apply(SF &t_2, art_Art_BridgeId_C(0), (String) string("RTS_i_Instance_actuatorsMock_actuatorsMockThread"), (art_DispatchPropertyProtocol) (&t_3), (Option_0247A1) (&t_4), (art_Port_C0524D) tempPressureActuate, (art_Port_C0524D) saturationActuate);
    Type_assign(&_RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_actuatorsMockThreadBridge, (&t_2), sizeof(struct RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge));
  }
};

void RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(33);
  Type_assign(&_RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_entryPoints, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_entryPoints_(RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_actuatorsMockThreadBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(34);
  DeclNewNone_964667(t_5);
  None_964667_apply(SF &t_5);
  Type_assign(&_RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_noData, (&t_5), sizeof(struct None_964667));
};

void RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init_tempPressureActuate_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(37);
  _RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_tempPressureActuate_id = art_Port_C0524D_id_(RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_tempPressureActuate_(RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_actuatorsMockThreadBridge(SF_LAST)));
};

void RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init_tempPressureActuate_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(38);
  Type_assign(&_RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_tempPressureActuate_port, RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init_saturationActuate_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(41);
  _RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_saturationActuate_id = art_Port_C0524D_id_(RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_saturationActuate_(RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_actuatorsMockThreadBridge(SF_LAST)));
};

void RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_init_saturationActuate_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(42);
  Type_assign(&_RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_saturationActuate_port, RTS_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_actuatorsMockThread_noData(SF_LAST), sizeof(union Option_8E9F45));
};