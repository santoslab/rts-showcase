#include <all.h>

B RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_initialized_ = F;

struct RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge _RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_actuatorBridge;
union art_Bridge_EntryPoints _RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_entryPoints;
union Option_8E9F45 _RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_noData;
art_Art_PortId _RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_input_id;
union Option_8E9F45 _RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_input_port;
art_Art_PortId _RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_manualActuatorInput_id;
union Option_8E9F45 _RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_manualActuatorInput_port;
art_Art_PortId _RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_id;
union Option_8E9F45 _RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_port;

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init(STACK_FRAME_ONLY) {
  if (RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_initialized_) return;
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_initialized_ = T;
  DeclNewStackFrame(caller, "actuator.scala", "RTS.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.actuator", "<init>", 0);
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_actuatorBridge(SF_LAST);
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_entryPoints(SF_LAST);
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_noData(SF_LAST);
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_input_id(SF_LAST);
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_input_port(SF_LAST);
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_manualActuatorInput_id(SF_LAST);
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_manualActuatorInput_port(SF_LAST);
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_output_id(SF_LAST);
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_output_port(SF_LAST);
}

RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_actuatorBridge(STACK_FRAME_ONLY) {
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init(CALLER_LAST);
  return (RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge) &_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_actuatorBridge;
}

art_Bridge_EntryPoints RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_entryPoints(STACK_FRAME_ONLY) {
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_entryPoints;
}

Option_8E9F45 RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_noData(STACK_FRAME_ONLY) {
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init(CALLER_LAST);
  return (Option_8E9F45) &_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_noData;
}

art_Art_PortId RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_input_id(STACK_FRAME_ONLY) {
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init(CALLER_LAST);
  return _RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_input_id;
}

Option_8E9F45 RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_input_port(STACK_FRAME_ONLY) {
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init(CALLER_LAST);
  return (Option_8E9F45) &_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_input_port;
}

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_input_port_a(STACK_FRAME Option_8E9F45 p_input_port) {
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init(CALLER_LAST);
  Type_assign(&_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_input_port, p_input_port, sizeof(union Option_8E9F45));
}

art_Art_PortId RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_manualActuatorInput_id(STACK_FRAME_ONLY) {
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init(CALLER_LAST);
  return _RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_manualActuatorInput_id;
}

Option_8E9F45 RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_manualActuatorInput_port(STACK_FRAME_ONLY) {
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init(CALLER_LAST);
  return (Option_8E9F45) &_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_manualActuatorInput_port;
}

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_manualActuatorInput_port_a(STACK_FRAME Option_8E9F45 p_manualActuatorInput_port) {
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init(CALLER_LAST);
  Type_assign(&_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_manualActuatorInput_port, p_manualActuatorInput_port, sizeof(union Option_8E9F45));
}

art_Art_PortId RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_id(STACK_FRAME_ONLY) {
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init(CALLER_LAST);
  return _RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_id;
}

Option_8E9F45 RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_port(STACK_FRAME_ONLY) {
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init(CALLER_LAST);
  return (Option_8E9F45) &_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_port;
}

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_port_a(STACK_FRAME Option_8E9F45 p_output_port) {
  RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init(CALLER_LAST);
  Type_assign(&_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_port, p_output_port, sizeof(union Option_8E9F45));
}

Z RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "actuator.scala", "RTS.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.actuator", "main", 0);

  sfUpdateLoc(102);
  {
    RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(103);
  {
    RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(104);
  {
    RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(105);
  {
    RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(107);
  {
    RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "actuator.scala", "RTS.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.actuator", "initialiseArchitecture", 0);
}

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "actuator.scala", "RTS.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.actuator", "initialiseEntryPoint", 0);

  sfUpdateLoc(93);
  {
    art_Bridge_EntryPoints_initialise_(SF RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_entryPoints(SF_LAST));
  }
}

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "actuator.scala", "RTS.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.actuator", "computeEntryPoint", 0);

  sfUpdateLoc(95);
  {
    art_Bridge_EntryPoints_compute_(SF RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_entryPoints(SF_LAST));
  }
}

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "actuator.scala", "RTS.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.actuator", "finaliseEntryPoint", 0);

  sfUpdateLoc(97);
  {
    art_Bridge_EntryPoints_finalise_(SF RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_entryPoints(SF_LAST));
  }
}

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "actuator.scala", "RTS.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.actuator.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(121);
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

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "actuator.scala", "RTS.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.actuator", "touch", 0);

  sfUpdateLoc(113);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(114);
    {
      RTS_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(117);
    DeclNewMBox2_43CC67(_mbox2Boolean_Payload);
    MBox2_43CC67 mbox2Boolean_Payload = (MBox2_43CC67) &_mbox2Boolean_Payload;
    {
      DeclNewRTS_Base_Types_Boolean_Payload(t_2);
      RTS_Base_Types_Boolean_Payload_apply(SF &t_2, T);
      DeclNewMBox2_43CC67(t_1);
      MBox2_43CC67_apply(SF &t_1, art_Art_PortId_C(0), (art_DataContent) (&t_2));
      Type_assign(mbox2Boolean_Payload, (&t_1), sizeof(struct MBox2_43CC67));
    }

    sfUpdateLoc(118);
    DeclNewMBox2_37E193(_mbox2OptionDataContent);
    MBox2_37E193 mbox2OptionDataContent = (MBox2_37E193) &_mbox2OptionDataContent;
    {
      DeclNewNone_964667(t_4);
      None_964667_apply(SF &t_4);
      DeclNewMBox2_37E193(t_3);
      MBox2_37E193_apply(SF &t_3, art_Art_PortId_C(0), (Option_8E9F45) (&t_4));
      Type_assign(mbox2OptionDataContent, (&t_3), sizeof(struct MBox2_37E193));
    }

    sfUpdateLoc(123);
    {
      B t_6 = RTS_Base_Types_Boolean_example(SF_LAST);
      DeclNewRTS_Base_Types_Boolean_Payload(t_5);
      RTS_Base_Types_Boolean_Payload_apply(SF &t_5, t_6);
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(SF (art_DataContent) (&t_5));
    }

    sfUpdateLoc(124);
    {
      Z t_8 = RTS_Base_Types_Integer_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_Payload(t_7);
      RTS_Base_Types_Integer_Payload_apply(SF &t_7, t_8);
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(SF (art_DataContent) (&t_7));
    }

    sfUpdateLoc(125);
    {
      S8 t_10 = RTS_Base_Types_Integer_8_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_8_Payload(t_9);
      RTS_Base_Types_Integer_8_Payload_apply(SF &t_9, t_10);
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(SF (art_DataContent) (&t_9));
    }

    sfUpdateLoc(126);
    {
      S16 t_12 = RTS_Base_Types_Integer_16_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_16_Payload(t_11);
      RTS_Base_Types_Integer_16_Payload_apply(SF &t_11, t_12);
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(SF (art_DataContent) (&t_11));
    }

    sfUpdateLoc(127);
    {
      S32 t_14 = RTS_Base_Types_Integer_32_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_32_Payload(t_13);
      RTS_Base_Types_Integer_32_Payload_apply(SF &t_13, t_14);
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(SF (art_DataContent) (&t_13));
    }

    sfUpdateLoc(128);
    {
      S64 t_16 = RTS_Base_Types_Integer_64_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_64_Payload(t_15);
      RTS_Base_Types_Integer_64_Payload_apply(SF &t_15, t_16);
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(SF (art_DataContent) (&t_15));
    }

    sfUpdateLoc(129);
    {
      U8 t_18 = RTS_Base_Types_Unsigned_8_example(SF_LAST);
      DeclNewRTS_Base_Types_Unsigned_8_Payload(t_17);
      RTS_Base_Types_Unsigned_8_Payload_apply(SF &t_17, t_18);
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(SF (art_DataContent) (&t_17));
    }

    sfUpdateLoc(130);
    {
      U16 t_20 = RTS_Base_Types_Unsigned_16_example(SF_LAST);
      DeclNewRTS_Base_Types_Unsigned_16_Payload(t_19);
      RTS_Base_Types_Unsigned_16_Payload_apply(SF &t_19, t_20);
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(SF (art_DataContent) (&t_19));
    }

    sfUpdateLoc(131);
    {
      U32 t_22 = RTS_Base_Types_Unsigned_32_example(SF_LAST);
      DeclNewRTS_Base_Types_Unsigned_32_Payload(t_21);
      RTS_Base_Types_Unsigned_32_Payload_apply(SF &t_21, t_22);
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(SF (art_DataContent) (&t_21));
    }

    sfUpdateLoc(132);
    {
      U64 t_24 = RTS_Base_Types_Unsigned_64_example(SF_LAST);
      DeclNewRTS_Base_Types_Unsigned_64_Payload(t_23);
      RTS_Base_Types_Unsigned_64_Payload_apply(SF &t_23, t_24);
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(SF (art_DataContent) (&t_23));
    }

    sfUpdateLoc(133);
    {
      R t_26 = RTS_Base_Types_Float_example(SF_LAST);
      DeclNewRTS_Base_Types_Float_Payload(t_25);
      RTS_Base_Types_Float_Payload_apply(SF &t_25, t_26);
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(SF (art_DataContent) (&t_25));
    }

    sfUpdateLoc(134);
    {
      F32 t_28 = RTS_Base_Types_Float_32_example(SF_LAST);
      DeclNewRTS_Base_Types_Float_32_Payload(t_27);
      RTS_Base_Types_Float_32_Payload_apply(SF &t_27, t_28);
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(SF (art_DataContent) (&t_27));
    }

    sfUpdateLoc(135);
    {
      F64 t_30 = RTS_Base_Types_Float_64_example(SF_LAST);
      DeclNewRTS_Base_Types_Float_64_Payload(t_29);
      RTS_Base_Types_Float_64_Payload_apply(SF &t_29, t_30);
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(SF (art_DataContent) (&t_29));
    }

    sfUpdateLoc(136);
    {
      C t_32 = RTS_Base_Types_Character_example(SF_LAST);
      DeclNewRTS_Base_Types_Character_Payload(t_31);
      RTS_Base_Types_Character_Payload_apply(SF &t_31, t_32);
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(SF (art_DataContent) (&t_31));
    }

    sfUpdateLoc(137);
    {
      DeclNewString(t_34);
      RTS_Base_Types_String_example(SF (String) &t_34);
      DeclNewRTS_Base_Types_String_Payload(t_33);
      RTS_Base_Types_String_Payload_apply(SF &t_33, (String) ((String) &t_34));
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(SF (art_DataContent) (&t_33));
    }

    sfUpdateLoc(138);
    {
      DeclNewart_Empty(t_35);
      art_Empty_apply(SF &t_35);
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(SF (art_DataContent) (&t_35));
    }

    sfUpdateLoc(140);
    {
      DeclNewRTS_Actuation_Actuator_i_Initialization_Api(t_36);
      Option_DB2CFC_get_(SF (RTS_Actuation_Actuator_i_Initialization_Api) &t_36, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_initialization_api(SF_LAST));
      RTS_Actuation_Actuator_i_Initialization_Api_logInfo_(SF ((RTS_Actuation_Actuator_i_Initialization_Api) &t_36), (String) string(""));
    }

    sfUpdateLoc(141);
    {
      DeclNewRTS_Actuation_Actuator_i_Initialization_Api(t_37);
      Option_DB2CFC_get_(SF (RTS_Actuation_Actuator_i_Initialization_Api) &t_37, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_initialization_api(SF_LAST));
      RTS_Actuation_Actuator_i_Initialization_Api_logDebug_(SF ((RTS_Actuation_Actuator_i_Initialization_Api) &t_37), (String) string(""));
    }

    sfUpdateLoc(142);
    {
      DeclNewRTS_Actuation_Actuator_i_Initialization_Api(t_38);
      Option_DB2CFC_get_(SF (RTS_Actuation_Actuator_i_Initialization_Api) &t_38, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_initialization_api(SF_LAST));
      RTS_Actuation_Actuator_i_Initialization_Api_logError_(SF ((RTS_Actuation_Actuator_i_Initialization_Api) &t_38), (String) string(""));
    }

    sfUpdateLoc(143);
    {
      DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_39);
      Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_39, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api(SF_LAST));
      RTS_Actuation_Actuator_i_Operational_Api_logInfo_(SF ((RTS_Actuation_Actuator_i_Operational_Api) &t_39), (String) string(""));
    }

    sfUpdateLoc(144);
    {
      DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_40);
      Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_40, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api(SF_LAST));
      RTS_Actuation_Actuator_i_Operational_Api_logDebug_(SF ((RTS_Actuation_Actuator_i_Operational_Api) &t_40), (String) string(""));
    }

    sfUpdateLoc(145);
    {
      DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_41);
      Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_41, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api(SF_LAST));
      RTS_Actuation_Actuator_i_Operational_Api_logError_(SF ((RTS_Actuation_Actuator_i_Operational_Api) &t_41), (String) string(""));
    }

    sfUpdateLoc(146);
    Option_8F4D4C apiUsage_input;
    DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_42);
    Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_42, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_8F4D4C(t_43);
    RTS_Actuation_Actuator_i_Operational_Api_get_input_(SF (Option_8F4D4C) &t_43, ((RTS_Actuation_Actuator_i_Operational_Api) &t_42));
    apiUsage_input = (Option_8F4D4C) ((Option_8F4D4C) &t_43);

    sfUpdateLoc(147);
    Option_8F4D4C apiUsage_manualActuatorInput;
    DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_44);
    Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_44, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_8F4D4C(t_45);
    RTS_Actuation_Actuator_i_Operational_Api_get_manualActuatorInput_(SF (Option_8F4D4C) &t_45, ((RTS_Actuation_Actuator_i_Operational_Api) &t_44));
    apiUsage_manualActuatorInput = (Option_8F4D4C) ((Option_8F4D4C) &t_45);

    sfUpdateLoc(148);
    {
      DeclNewRTS_Actuation_Actuator_i_Initialization_Api(t_46);
      Option_DB2CFC_get_(SF (RTS_Actuation_Actuator_i_Initialization_Api) &t_46, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_initialization_api(SF_LAST));
      B t_47 = RTS_Base_Types_Boolean_example(SF_LAST);
      RTS_Actuation_Actuator_i_Initialization_Api_put_output_(SF ((RTS_Actuation_Actuator_i_Initialization_Api) &t_46), t_47);
    }

    sfUpdateLoc(149);
    {
      DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_48);
      Option_4ACA0C_get_(SF (RTS_Actuation_Actuator_i_Operational_Api) &t_48, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api(SF_LAST));
      B t_49 = RTS_Base_Types_Boolean_example(SF_LAST);
      RTS_Actuation_Actuator_i_Operational_Api_put_output_(SF ((RTS_Actuation_Actuator_i_Operational_Api) &t_48), t_49);
    }
  }
}

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "actuator.scala", "RTS.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.actuator", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(154);
  {
    String_cprint(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_name_(RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_actuatorBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(155);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(156);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "actuator.scala", "RTS.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.actuator", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(166);
  {
    String_cprint(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_name_(RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_actuatorBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(167);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(168);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "actuator.scala", "RTS.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.actuator", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(160);
  {
    String_cprint(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_name_(RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_actuatorBridge(SF_LAST)), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(161);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(162);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_getValue(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId) {
  DeclNewStackFrame(caller, "actuator.scala", "RTS.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.actuator", "getValue", 0);

  sfUpdateLoc(55);
  B t_0;
  {
    t_0 = art_Art_PortId__eq(portId, RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_input_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_input_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(57);
    B t_1;
    {
      t_1 = art_Art_PortId__eq(portId, RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_manualActuatorInput_id(SF_LAST));
    }
    if (t_1) {
      Type_assign(result, RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_manualActuatorInput_port(SF_LAST), sizeof(union Option_8E9F45));
      return;
    } else {

      sfUpdateLoc(60);
      {
        DeclNewString(t_2);
        String t_3 = (String) &t_2;
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("Unexpected: actuator.getValue called with: "));
        art_Art_PortId_string_(SF (String) &t_4, portId);
        String_string_(SF (String) &t_4, string(""));
        String_string_(SF t_3, ((String) &t_4));
        sfAbort(t_3->value);
        abort();
      }
    }
  }
}

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_putValue(STACK_FRAME art_Art_PortId portId, art_DataContent data) {
  DeclNewStackFrame(caller, "actuator.scala", "RTS.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.actuator", "putValue", 0);

  sfUpdateLoc(73);
  B t_0;
  {
    t_0 = art_Art_PortId__eq(portId, RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(74);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(76);
    {
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected: actuator.putValue called with: "));
      art_Art_PortId_string_(SF (String) &t_4, portId);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
}

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_sendOutput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds) {
  DeclNewStackFrame(caller, "actuator.scala", "RTS.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.actuator", "sendOutput", 0);

  sfUpdateLoc(83);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(84);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_port(SF_LAST));
      RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_seL4Nix_output_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(85);
    {
      RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_port_a(SF (Option_8E9F45) RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_noData(SF_LAST));
    }
  }
}

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_receiveInput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds) {
  DeclNewStackFrame(caller, "actuator.scala", "RTS.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.actuator", "receiveInput", 0);

  sfUpdateLoc(67);
  {
    DeclNewOption_8E9F45(t_0);
    RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_seL4Nix_input_Receive(SF (Option_8E9F45) &t_0);
    RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_input_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }

  sfUpdateLoc(69);
  {
    DeclNewOption_8E9F45(t_1);
    RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_seL4Nix_manualActuatorInput_Receive(SF (Option_8E9F45) &t_1);
    RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_manualActuatorInput_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_1));
  }
}

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_actuatorBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  {

    sfUpdateLoc(19);
    art_Port_C0524D input;
    DeclNewart_Port_C0524D(t_0);
    art_Port_C0524D_apply(SF &t_0, art_Art_PortId_C(0), (String) string("RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_input"), art_PortMode_Type_DataIn);
    input = (art_Port_C0524D) (&t_0);

    sfUpdateLoc(20);
    art_Port_C0524D manualActuatorInput;
    DeclNewart_Port_C0524D(t_1);
    art_Port_C0524D_apply(SF &t_1, art_Art_PortId_C(1), (String) string("RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_manualActuatorInput"), art_PortMode_Type_DataIn);
    manualActuatorInput = (art_Port_C0524D) (&t_1);

    sfUpdateLoc(21);
    art_Port_C0524D output;
    DeclNewart_Port_C0524D(t_2);
    art_Port_C0524D_apply(SF &t_2, art_Art_PortId_C(2), (String) string("RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_output"), art_PortMode_Type_DataOut);
    output = (art_Port_C0524D) (&t_2);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_4);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_4, Z_C(1000));
    DeclNewNone_CFD2B0(t_5);
    None_CFD2B0_apply(SF &t_5);
    DeclNewRTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge(t_3);
    RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_apply(SF &t_3, art_Art_BridgeId_C(0), (String) string("RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator"), (art_DispatchPropertyProtocol) (&t_4), (Option_0247A1) (&t_5), (art_Port_C0524D) input, (art_Port_C0524D) manualActuatorInput, (art_Port_C0524D) output);
    Type_assign(&_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_actuatorBridge, (&t_3), sizeof(struct RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge));
  }
};

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(35);
  Type_assign(&_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_entryPoints, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_entryPoints_(RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_actuatorBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(36);
  DeclNewNone_964667(t_6);
  None_964667_apply(SF &t_6);
  Type_assign(&_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_noData, (&t_6), sizeof(struct None_964667));
};

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_input_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(39);
  _RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_input_id = art_Port_C0524D_id_(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_input_(RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_actuatorBridge(SF_LAST)));
};

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_input_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(40);
  Type_assign(&_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_input_port, RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_manualActuatorInput_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(43);
  _RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_manualActuatorInput_id = art_Port_C0524D_id_(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_manualActuatorInput_(RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_actuatorBridge(SF_LAST)));
};

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_manualActuatorInput_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(44);
  Type_assign(&_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_manualActuatorInput_port, RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_output_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(47);
  _RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_id = art_Port_C0524D_id_(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_output_(RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_actuatorBridge(SF_LAST)));
};

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_output_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(48);
  Type_assign(&_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_port, RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_noData(SF_LAST), sizeof(union Option_8E9F45));
};