#include <all.h>

B RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_initialized_ = F;

struct RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge _RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_eventControlMockThreadBridge;
union art_Bridge_EntryPoints _RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_entryPoints;
union Option_8E9F45 _RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_noData;
art_Art_PortId _RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput1_id;
union Option_8E9F45 _RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput1_port;
art_Art_PortId _RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput2_id;
union Option_8E9F45 _RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput2_port;

void RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init(STACK_FRAME_ONLY) {
  if (RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_initialized_) return;
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_initialized_ = T;
  DeclNewStackFrame(caller, "eventControlMockThread.scala", "RTS.EventControlMockThread_i_eventControlMock_eventControlMockThread.eventControlMockThread", "<init>", 0);
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init_eventControlMockThreadBridge(SF_LAST);
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init_entryPoints(SF_LAST);
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init_noData(SF_LAST);
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init_manualActuatorInput1_id(SF_LAST);
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init_manualActuatorInput1_port(SF_LAST);
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init_manualActuatorInput2_id(SF_LAST);
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init_manualActuatorInput2_port(SF_LAST);
}

RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_eventControlMockThreadBridge(STACK_FRAME_ONLY) {
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init(CALLER_LAST);
  return (RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge) &_RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_eventControlMockThreadBridge;
}

art_Bridge_EntryPoints RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_entryPoints(STACK_FRAME_ONLY) {
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_entryPoints;
}

Option_8E9F45 RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_noData(STACK_FRAME_ONLY) {
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init(CALLER_LAST);
  return (Option_8E9F45) &_RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_noData;
}

art_Art_PortId RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput1_id(STACK_FRAME_ONLY) {
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init(CALLER_LAST);
  return _RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput1_id;
}

Option_8E9F45 RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput1_port(STACK_FRAME_ONLY) {
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init(CALLER_LAST);
  return (Option_8E9F45) &_RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput1_port;
}

void RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput1_port_a(STACK_FRAME Option_8E9F45 p_manualActuatorInput1_port) {
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init(CALLER_LAST);
  Type_assign(&_RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput1_port, p_manualActuatorInput1_port, sizeof(union Option_8E9F45));
}

art_Art_PortId RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput2_id(STACK_FRAME_ONLY) {
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init(CALLER_LAST);
  return _RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput2_id;
}

Option_8E9F45 RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput2_port(STACK_FRAME_ONLY) {
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init(CALLER_LAST);
  return (Option_8E9F45) &_RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput2_port;
}

void RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput2_port_a(STACK_FRAME Option_8E9F45 p_manualActuatorInput2_port) {
  RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init(CALLER_LAST);
  Type_assign(&_RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput2_port, p_manualActuatorInput2_port, sizeof(union Option_8E9F45));
}

Z RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "eventControlMockThread.scala", "RTS.EventControlMockThread_i_eventControlMock_eventControlMockThread.eventControlMockThread", "main", 0);

  sfUpdateLoc(95);
  {
    RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(96);
  {
    RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(97);
  {
    RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(98);
  {
    RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(100);
  {
    RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "eventControlMockThread.scala", "RTS.EventControlMockThread_i_eventControlMock_eventControlMockThread.eventControlMockThread", "initialiseArchitecture", 0);
}

Unit RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "eventControlMockThread.scala", "RTS.EventControlMockThread_i_eventControlMock_eventControlMockThread.eventControlMockThread", "initialiseEntryPoint", 0);

  sfUpdateLoc(86);
  {
    art_Bridge_EntryPoints_initialise_(SF RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_entryPoints(SF_LAST));
  }
}

Unit RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "eventControlMockThread.scala", "RTS.EventControlMockThread_i_eventControlMock_eventControlMockThread.eventControlMockThread", "computeEntryPoint", 0);

  sfUpdateLoc(88);
  {
    art_Bridge_EntryPoints_compute_(SF RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_entryPoints(SF_LAST));
  }
}

Unit RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "eventControlMockThread.scala", "RTS.EventControlMockThread_i_eventControlMock_eventControlMockThread.eventControlMockThread", "finaliseEntryPoint", 0);

  sfUpdateLoc(90);
  {
    art_Bridge_EntryPoints_finalise_(SF RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_entryPoints(SF_LAST));
  }
}

Unit RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "eventControlMockThread.scala", "RTS.EventControlMockThread_i_eventControlMock_eventControlMockThread.eventControlMockThread.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(114);
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

Unit RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "eventControlMockThread.scala", "RTS.EventControlMockThread_i_eventControlMock_eventControlMockThread.eventControlMockThread", "touch", 0);

  sfUpdateLoc(106);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(107);
    {
      RTS_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(110);
    DeclNewMBox2_43CC67(_mbox2Boolean_Payload);
    MBox2_43CC67 mbox2Boolean_Payload = (MBox2_43CC67) &_mbox2Boolean_Payload;
    {
      DeclNewRTS_Base_Types_Boolean_Payload(t_2);
      RTS_Base_Types_Boolean_Payload_apply(SF &t_2, T);
      DeclNewMBox2_43CC67(t_1);
      MBox2_43CC67_apply(SF &t_1, art_Art_PortId_C(0), (art_DataContent) (&t_2));
      Type_assign(mbox2Boolean_Payload, (&t_1), sizeof(struct MBox2_43CC67));
    }

    sfUpdateLoc(111);
    DeclNewMBox2_37E193(_mbox2OptionDataContent);
    MBox2_37E193 mbox2OptionDataContent = (MBox2_37E193) &_mbox2OptionDataContent;
    {
      DeclNewNone_964667(t_4);
      None_964667_apply(SF &t_4);
      DeclNewMBox2_37E193(t_3);
      MBox2_37E193_apply(SF &t_3, art_Art_PortId_C(0), (Option_8E9F45) (&t_4));
      Type_assign(mbox2OptionDataContent, (&t_3), sizeof(struct MBox2_37E193));
    }

    sfUpdateLoc(116);
    {
      B t_6 = RTS_Base_Types_Boolean_example(SF_LAST);
      DeclNewRTS_Base_Types_Boolean_Payload(t_5);
      RTS_Base_Types_Boolean_Payload_apply(SF &t_5, t_6);
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(SF (art_DataContent) (&t_5));
    }

    sfUpdateLoc(117);
    {
      Z t_8 = RTS_Base_Types_Integer_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_Payload(t_7);
      RTS_Base_Types_Integer_Payload_apply(SF &t_7, t_8);
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(SF (art_DataContent) (&t_7));
    }

    sfUpdateLoc(118);
    {
      S8 t_10 = RTS_Base_Types_Integer_8_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_8_Payload(t_9);
      RTS_Base_Types_Integer_8_Payload_apply(SF &t_9, t_10);
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(SF (art_DataContent) (&t_9));
    }

    sfUpdateLoc(119);
    {
      S16 t_12 = RTS_Base_Types_Integer_16_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_16_Payload(t_11);
      RTS_Base_Types_Integer_16_Payload_apply(SF &t_11, t_12);
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(SF (art_DataContent) (&t_11));
    }

    sfUpdateLoc(120);
    {
      S32 t_14 = RTS_Base_Types_Integer_32_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_32_Payload(t_13);
      RTS_Base_Types_Integer_32_Payload_apply(SF &t_13, t_14);
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(SF (art_DataContent) (&t_13));
    }

    sfUpdateLoc(121);
    {
      S64 t_16 = RTS_Base_Types_Integer_64_example(SF_LAST);
      DeclNewRTS_Base_Types_Integer_64_Payload(t_15);
      RTS_Base_Types_Integer_64_Payload_apply(SF &t_15, t_16);
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(SF (art_DataContent) (&t_15));
    }

    sfUpdateLoc(122);
    {
      U8 t_18 = RTS_Base_Types_Unsigned_8_example(SF_LAST);
      DeclNewRTS_Base_Types_Unsigned_8_Payload(t_17);
      RTS_Base_Types_Unsigned_8_Payload_apply(SF &t_17, t_18);
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(SF (art_DataContent) (&t_17));
    }

    sfUpdateLoc(123);
    {
      U16 t_20 = RTS_Base_Types_Unsigned_16_example(SF_LAST);
      DeclNewRTS_Base_Types_Unsigned_16_Payload(t_19);
      RTS_Base_Types_Unsigned_16_Payload_apply(SF &t_19, t_20);
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(SF (art_DataContent) (&t_19));
    }

    sfUpdateLoc(124);
    {
      U32 t_22 = RTS_Base_Types_Unsigned_32_example(SF_LAST);
      DeclNewRTS_Base_Types_Unsigned_32_Payload(t_21);
      RTS_Base_Types_Unsigned_32_Payload_apply(SF &t_21, t_22);
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(SF (art_DataContent) (&t_21));
    }

    sfUpdateLoc(125);
    {
      U64 t_24 = RTS_Base_Types_Unsigned_64_example(SF_LAST);
      DeclNewRTS_Base_Types_Unsigned_64_Payload(t_23);
      RTS_Base_Types_Unsigned_64_Payload_apply(SF &t_23, t_24);
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(SF (art_DataContent) (&t_23));
    }

    sfUpdateLoc(126);
    {
      R t_26 = RTS_Base_Types_Float_example(SF_LAST);
      DeclNewRTS_Base_Types_Float_Payload(t_25);
      RTS_Base_Types_Float_Payload_apply(SF &t_25, t_26);
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(SF (art_DataContent) (&t_25));
    }

    sfUpdateLoc(127);
    {
      F32 t_28 = RTS_Base_Types_Float_32_example(SF_LAST);
      DeclNewRTS_Base_Types_Float_32_Payload(t_27);
      RTS_Base_Types_Float_32_Payload_apply(SF &t_27, t_28);
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(SF (art_DataContent) (&t_27));
    }

    sfUpdateLoc(128);
    {
      F64 t_30 = RTS_Base_Types_Float_64_example(SF_LAST);
      DeclNewRTS_Base_Types_Float_64_Payload(t_29);
      RTS_Base_Types_Float_64_Payload_apply(SF &t_29, t_30);
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(SF (art_DataContent) (&t_29));
    }

    sfUpdateLoc(129);
    {
      C t_32 = RTS_Base_Types_Character_example(SF_LAST);
      DeclNewRTS_Base_Types_Character_Payload(t_31);
      RTS_Base_Types_Character_Payload_apply(SF &t_31, t_32);
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(SF (art_DataContent) (&t_31));
    }

    sfUpdateLoc(130);
    {
      DeclNewString(t_34);
      RTS_Base_Types_String_example(SF (String) &t_34);
      DeclNewRTS_Base_Types_String_Payload(t_33);
      RTS_Base_Types_String_Payload_apply(SF &t_33, (String) ((String) &t_34));
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(SF (art_DataContent) (&t_33));
    }

    sfUpdateLoc(131);
    {
      DeclNewart_Empty(t_35);
      art_Empty_apply(SF &t_35);
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_touch_printDataContent(SF (art_DataContent) (&t_35));
    }

    sfUpdateLoc(133);
    {
      DeclNewRTS_EventControl_EventControlMockThread_i_Initialization_Api(t_36);
      Option_06B15F_get_(SF (RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_36, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api(SF_LAST));
      RTS_EventControl_EventControlMockThread_i_Initialization_Api_logInfo_(SF ((RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_36), (String) string(""));
    }

    sfUpdateLoc(134);
    {
      DeclNewRTS_EventControl_EventControlMockThread_i_Initialization_Api(t_37);
      Option_06B15F_get_(SF (RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_37, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api(SF_LAST));
      RTS_EventControl_EventControlMockThread_i_Initialization_Api_logDebug_(SF ((RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_37), (String) string(""));
    }

    sfUpdateLoc(135);
    {
      DeclNewRTS_EventControl_EventControlMockThread_i_Initialization_Api(t_38);
      Option_06B15F_get_(SF (RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_38, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api(SF_LAST));
      RTS_EventControl_EventControlMockThread_i_Initialization_Api_logError_(SF ((RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_38), (String) string(""));
    }

    sfUpdateLoc(136);
    {
      DeclNewRTS_EventControl_EventControlMockThread_i_Operational_Api(t_39);
      Option_73E809_get_(SF (RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_39, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api(SF_LAST));
      RTS_EventControl_EventControlMockThread_i_Operational_Api_logInfo_(SF ((RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_39), (String) string(""));
    }

    sfUpdateLoc(137);
    {
      DeclNewRTS_EventControl_EventControlMockThread_i_Operational_Api(t_40);
      Option_73E809_get_(SF (RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_40, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api(SF_LAST));
      RTS_EventControl_EventControlMockThread_i_Operational_Api_logDebug_(SF ((RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_40), (String) string(""));
    }

    sfUpdateLoc(138);
    {
      DeclNewRTS_EventControl_EventControlMockThread_i_Operational_Api(t_41);
      Option_73E809_get_(SF (RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_41, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api(SF_LAST));
      RTS_EventControl_EventControlMockThread_i_Operational_Api_logError_(SF ((RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_41), (String) string(""));
    }

    sfUpdateLoc(139);
    {
      DeclNewRTS_EventControl_EventControlMockThread_i_Initialization_Api(t_42);
      Option_06B15F_get_(SF (RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_42, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api(SF_LAST));
      B t_43 = RTS_Base_Types_Boolean_example(SF_LAST);
      RTS_EventControl_EventControlMockThread_i_Initialization_Api_put_manualActuatorInput1_(SF ((RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_42), t_43);
    }

    sfUpdateLoc(140);
    {
      DeclNewRTS_EventControl_EventControlMockThread_i_Operational_Api(t_44);
      Option_73E809_get_(SF (RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_44, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api(SF_LAST));
      B t_45 = RTS_Base_Types_Boolean_example(SF_LAST);
      RTS_EventControl_EventControlMockThread_i_Operational_Api_put_manualActuatorInput1_(SF ((RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_44), t_45);
    }

    sfUpdateLoc(141);
    {
      DeclNewRTS_EventControl_EventControlMockThread_i_Initialization_Api(t_46);
      Option_06B15F_get_(SF (RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_46, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api(SF_LAST));
      B t_47 = RTS_Base_Types_Boolean_example(SF_LAST);
      RTS_EventControl_EventControlMockThread_i_Initialization_Api_put_manualActuatorInput2_(SF ((RTS_EventControl_EventControlMockThread_i_Initialization_Api) &t_46), t_47);
    }

    sfUpdateLoc(142);
    {
      DeclNewRTS_EventControl_EventControlMockThread_i_Operational_Api(t_48);
      Option_73E809_get_(SF (RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_48, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api(SF_LAST));
      B t_49 = RTS_Base_Types_Boolean_example(SF_LAST);
      RTS_EventControl_EventControlMockThread_i_Operational_Api_put_manualActuatorInput2_(SF ((RTS_EventControl_EventControlMockThread_i_Operational_Api) &t_48), t_49);
    }
  }
}

Unit RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "eventControlMockThread.scala", "RTS.EventControlMockThread_i_eventControlMock_eventControlMockThread.eventControlMockThread", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(147);
  {
    String_cprint(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_name_(RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_eventControlMockThreadBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(148);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(149);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "eventControlMockThread.scala", "RTS.EventControlMockThread_i_eventControlMock_eventControlMockThread.eventControlMockThread", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(159);
  {
    String_cprint(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_name_(RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_eventControlMockThreadBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(160);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(161);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "eventControlMockThread.scala", "RTS.EventControlMockThread_i_eventControlMock_eventControlMockThread.eventControlMockThread", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(153);
  {
    String_cprint(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_name_(RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_eventControlMockThreadBridge(SF_LAST)), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(154);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(155);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

Unit RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_putValue(STACK_FRAME art_Art_PortId portId, art_DataContent data) {
  DeclNewStackFrame(caller, "eventControlMockThread.scala", "RTS.EventControlMockThread_i_eventControlMock_eventControlMockThread.eventControlMockThread", "putValue", 0);

  sfUpdateLoc(59);
  B t_0;
  {
    t_0 = art_Art_PortId__eq(portId, RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput1_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(60);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput1_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(61);
    B t_2;
    {
      t_2 = art_Art_PortId__eq(portId, RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput2_id(SF_LAST));
    }
    if (t_2) {

      sfUpdateLoc(62);
      {
        DeclNewSome_D29615(t_3);
        Some_D29615_apply(SF &t_3, (art_DataContent) data);
        RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput2_port_a(SF (Option_8E9F45) (&t_3));
      }
    } else {

      sfUpdateLoc(64);
      {
        DeclNewString(t_4);
        String t_5 = (String) &t_4;
        DeclNewString(t_6);
        String_string_(SF (String) &t_6, string("Unexpected: eventControlMockThread.putValue called with: "));
        art_Art_PortId_string_(SF (String) &t_6, portId);
        String_string_(SF (String) &t_6, string(""));
        String_string_(SF t_5, ((String) &t_6));
        sfAbort(t_5->value);
        abort();
      }
    }
  }
}

Unit RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_sendOutput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds) {
  DeclNewStackFrame(caller, "eventControlMockThread.scala", "RTS.EventControlMockThread_i_eventControlMock_eventControlMockThread.eventControlMockThread", "sendOutput", 0);

  sfUpdateLoc(71);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput1_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(72);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput1_port(SF_LAST));
      RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_seL4Nix_manualActuatorInput1_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(73);
    {
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput1_port_a(SF (Option_8E9F45) RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_noData(SF_LAST));
    }
  }

  sfUpdateLoc(76);
  B t_3;
  {
    B t_4 = Option_8E9F45_nonEmpty_(SF RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput2_port(SF_LAST));
    t_3 = t_4;
  }
  if (t_3) {

    sfUpdateLoc(77);
    {
      DeclNewart_DataContent(t_5);
      Option_8E9F45_get_(SF (art_DataContent) &t_5, RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput2_port(SF_LAST));
      RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_seL4Nix_manualActuatorInput2_Send(SF (art_DataContent) ((art_DataContent) &t_5));
    }

    sfUpdateLoc(78);
    {
      RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput2_port_a(SF (Option_8E9F45) RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_noData(SF_LAST));
    }
  }
}

Unit RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_receiveInput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds) {
  DeclNewStackFrame(caller, "eventControlMockThread.scala", "RTS.EventControlMockThread_i_eventControlMock_eventControlMockThread.eventControlMockThread", "receiveInput", 0);
}

void RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init_eventControlMockThreadBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  {

    sfUpdateLoc(19);
    art_Port_C0524D manualActuatorInput1;
    DeclNewart_Port_C0524D(t_0);
    art_Port_C0524D_apply(SF &t_0, art_Art_PortId_C(0), (String) string("RTS_i_Instance_eventControlMock_eventControlMockThread_manualActuatorInput1"), art_PortMode_Type_DataOut);
    manualActuatorInput1 = (art_Port_C0524D) (&t_0);

    sfUpdateLoc(20);
    art_Port_C0524D manualActuatorInput2;
    DeclNewart_Port_C0524D(t_1);
    art_Port_C0524D_apply(SF &t_1, art_Art_PortId_C(1), (String) string("RTS_i_Instance_eventControlMock_eventControlMockThread_manualActuatorInput2"), art_PortMode_Type_DataOut);
    manualActuatorInput2 = (art_Port_C0524D) (&t_1);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_3);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_3, Z_C(1000));
    DeclNewNone_CFD2B0(t_4);
    None_CFD2B0_apply(SF &t_4);
    DeclNewRTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge(t_2);
    RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_apply(SF &t_2, art_Art_BridgeId_C(0), (String) string("RTS_i_Instance_eventControlMock_eventControlMockThread"), (art_DispatchPropertyProtocol) (&t_3), (Option_0247A1) (&t_4), (art_Port_C0524D) manualActuatorInput1, (art_Port_C0524D) manualActuatorInput2);
    Type_assign(&_RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_eventControlMockThreadBridge, (&t_2), sizeof(struct RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge));
  }
};

void RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(33);
  Type_assign(&_RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_entryPoints, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_entryPoints_(RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_eventControlMockThreadBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(34);
  DeclNewNone_964667(t_5);
  None_964667_apply(SF &t_5);
  Type_assign(&_RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_noData, (&t_5), sizeof(struct None_964667));
};

void RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init_manualActuatorInput1_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(37);
  _RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput1_id = art_Port_C0524D_id_(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_manualActuatorInput1_(RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_eventControlMockThreadBridge(SF_LAST)));
};

void RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init_manualActuatorInput1_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(38);
  Type_assign(&_RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput1_port, RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init_manualActuatorInput2_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(41);
  _RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput2_id = art_Port_C0524D_id_(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_manualActuatorInput2_(RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_eventControlMockThreadBridge(SF_LAST)));
};

void RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_init_manualActuatorInput2_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(42);
  Type_assign(&_RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_manualActuatorInput2_port, RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread_noData(SF_LAST), sizeof(union Option_8E9F45));
};