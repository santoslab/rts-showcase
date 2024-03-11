#include <all.h>

B art_ArtNativeSlang_initialized_ = F;

struct Map_9C6840 _art_ArtNativeSlang_inInfrastructurePorts;
struct Map_9C6840 _art_ArtNativeSlang_outInfrastructurePorts;
struct Map_9C6840 _art_ArtNativeSlang_inPortVariables;
struct Map_9C6840 _art_ArtNativeSlang_outPortVariables;

void art_ArtNativeSlang_init(STACK_FRAME_ONLY) {
  if (art_ArtNativeSlang_initialized_) return;
  art_ArtNativeSlang_initialized_ = T;
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "<init>", 0);
  art_ArtNativeSlang_init_inInfrastructurePorts(SF_LAST);
  art_ArtNativeSlang_init_outInfrastructurePorts(SF_LAST);
  art_ArtNativeSlang_init_inPortVariables(SF_LAST);
  art_ArtNativeSlang_init_outPortVariables(SF_LAST);
}

Map_9C6840 art_ArtNativeSlang_inInfrastructurePorts(STACK_FRAME_ONLY) {
  art_ArtNativeSlang_init(CALLER_LAST);
  return (Map_9C6840) &_art_ArtNativeSlang_inInfrastructurePorts;
}

void art_ArtNativeSlang_inInfrastructurePorts_a(STACK_FRAME Map_9C6840 p_inInfrastructurePorts) {
  art_ArtNativeSlang_init(CALLER_LAST);
  Type_assign(&_art_ArtNativeSlang_inInfrastructurePorts, p_inInfrastructurePorts, sizeof(struct Map_9C6840));
}

Map_9C6840 art_ArtNativeSlang_outInfrastructurePorts(STACK_FRAME_ONLY) {
  art_ArtNativeSlang_init(CALLER_LAST);
  return (Map_9C6840) &_art_ArtNativeSlang_outInfrastructurePorts;
}

void art_ArtNativeSlang_outInfrastructurePorts_a(STACK_FRAME Map_9C6840 p_outInfrastructurePorts) {
  art_ArtNativeSlang_init(CALLER_LAST);
  Type_assign(&_art_ArtNativeSlang_outInfrastructurePorts, p_outInfrastructurePorts, sizeof(struct Map_9C6840));
}

Map_9C6840 art_ArtNativeSlang_inPortVariables(STACK_FRAME_ONLY) {
  art_ArtNativeSlang_init(CALLER_LAST);
  return (Map_9C6840) &_art_ArtNativeSlang_inPortVariables;
}

void art_ArtNativeSlang_inPortVariables_a(STACK_FRAME Map_9C6840 p_inPortVariables) {
  art_ArtNativeSlang_init(CALLER_LAST);
  Type_assign(&_art_ArtNativeSlang_inPortVariables, p_inPortVariables, sizeof(struct Map_9C6840));
}

Map_9C6840 art_ArtNativeSlang_outPortVariables(STACK_FRAME_ONLY) {
  art_ArtNativeSlang_init(CALLER_LAST);
  return (Map_9C6840) &_art_ArtNativeSlang_outPortVariables;
}

void art_ArtNativeSlang_outPortVariables_a(STACK_FRAME Map_9C6840 p_outPortVariables) {
  art_ArtNativeSlang_init(CALLER_LAST);
  Type_assign(&_art_ArtNativeSlang_outPortVariables, p_outPortVariables, sizeof(struct Map_9C6840));
}

Unit art_ArtNativeSlang_setUpSystemState(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "setUpSystemState", 0);
}

Unit art_ArtNativeSlang_initializePhase(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "initializePhase", 0);
}

Unit art_ArtNativeSlang_computePhase(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "computePhase", 0);
}

Unit art_ArtNativeSlang_finalizePhase(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "finalizePhase", 0);
}

Unit art_ArtNativeSlang_tearDownSystemState(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "tearDownSystemState", 0);
}

Unit art_ArtNativeSlang_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(275);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(276);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(277);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit art_ArtNativeSlang_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(281);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(282);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(283);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

Unit art_ArtNativeSlang_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(287);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(288);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(289);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit art_ArtNativeSlang_putValue(STACK_FRAME art_Art_PortId portId, art_DataContent data) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "putValue", 0);

  sfUpdateLoc(147);
  {
    Z t_0 = art_Art_PortId_toZ_(SF portId);
    DeclNewNone_B2694B(t_2);
    None_B2694B_apply(SF &t_2);
    S64 t_3 = art_Art_time(SF_LAST);
    DeclNewart_ArtSlangMessage(t_1);
    art_ArtSlangMessage_apply(SF &t_1, (art_DataContent) data, portId, (Option_1CF021) (&t_2), t_3, art_ArtSlangMessage_UNSET_TIME(SF_LAST), art_ArtSlangMessage_UNSET_TIME(SF_LAST), art_ArtSlangMessage_UNSET_TIME(SF_LAST));
    DeclNewTuple2_4DFC06(t_4);
    Tuple2_4DFC06_apply(SF &t_4, t_0, (&t_1));
    DeclNewMap_9C6840(t_5);
    Map_9C6840__add_(SF (Map_9C6840) &t_5, art_ArtNativeSlang_outPortVariables(SF_LAST), (Tuple2_4DFC06) (&t_4));
    art_ArtNativeSlang_outPortVariables_a(SF (Map_9C6840) ((Map_9C6840) &t_5));
  }
}

void art_ArtNativeSlang_getValue(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "getValue", 0);

  sfUpdateLoc(157);
  B t_0;
  {
    Z t_1 = art_Art_PortId_toZ_(SF portId);
    B t_2 = Map_9C6840_contains_(SF art_ArtNativeSlang_inPortVariables(SF_LAST), t_1);
    t_0 = t_2;
  }
  if (t_0) {
    Z t_4 = art_Art_PortId_toZ_(SF portId);
    DeclNewOption_376396(t_5);
    Map_9C6840_get_(SF (Option_376396) &t_5, art_ArtNativeSlang_inPortVariables(SF_LAST), t_4);
    DeclNewart_ArtSlangMessage(t_6);
    Option_376396_get_(SF (art_ArtSlangMessage) &t_6, ((Option_376396) &t_5));
    DeclNewSome_D29615(t_3);
    Some_D29615_apply(SF &t_3, (art_DataContent) art_ArtSlangMessage_data_(((art_ArtSlangMessage) &t_6)));
    Type_assign(result, (&t_3), sizeof(struct Some_D29615));
    return;
  } else {
    DeclNewNone_964667(t_7);
    None_964667_apply(SF &t_7);
    Type_assign(result, (&t_7), sizeof(struct None_964667));
    return;
  }
}

inline B art_ArtNativeSlang_shouldDispatch_extract_42_12(STACK_FRAME_SF art_DispatchPropertyProtocol t_3) {
  if (!art_DispatchPropertyProtocol_Periodic__is(SF t_3)) return F;
  return T;
}

inline B art_ArtNativeSlang_shouldDispatch_extract_43_12(STACK_FRAME_SF art_DispatchPropertyProtocol t_3, Z *_minRate_43_46) {
  if (!art_DispatchPropertyProtocol_Sporadic__is(SF t_3)) return F;
  *_minRate_43_46 = art_DispatchPropertyProtocol_Sporadic_min_(art_DispatchPropertyProtocol_Sporadic__as(SF t_3));
  return T;
}

B art_ArtNativeSlang_shouldDispatch(STACK_FRAME art_Art_BridgeId bridgeId) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "shouldDispatch", 0);

  sfUpdateLoc(39);
  {
    Z t_0 = art_Art_BridgeId_toZ_(SF bridgeId);
    B t_1 = Option_7BBFBE_nonEmpty_(SF MS_83D5EB_at(art_Art_bridges(SF_LAST), t_0));
    if (!(t_1)) {
      DeclNewString(t_2);
      String_string_(SF (String) &t_2, string("Bridge "));
      art_Art_BridgeId_string_(SF (String) &t_2, bridgeId);
      String_string_(SF (String) &t_2, string(" does not exist"));
      sfAbort((((String) &t_2))->value);
    }
  }

  sfUpdateLoc(41);
  Z t_4 = art_Art_BridgeId_toZ_(SF bridgeId);
  DeclNewart_Bridge(t_5);
  Option_7BBFBE_get_(SF (art_Bridge) &t_5, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_4));
  DeclNewart_DispatchPropertyProtocol(t_6);
  art_Bridge_dispatchProtocol_(SF (art_DispatchPropertyProtocol) &t_6, ((art_Bridge) &t_5));
  art_DispatchPropertyProtocol t_3 = ((art_DispatchPropertyProtocol) &t_6);
  B match_41_35 = F;
  if (!match_41_35) {
    match_41_35 = art_ArtNativeSlang_shouldDispatch_extract_42_12(SF t_3);
    if (match_41_35) {
      return T;
    }
  }
  if (!match_41_35) {
    Z minRate_43_46;
    match_41_35 = art_ArtNativeSlang_shouldDispatch_extract_43_12(SF t_3, &minRate_43_46);
    if (match_41_35) {

      sfUpdateLoc(45);
      IS_820232 eventIns;
      Z t_7 = art_Art_BridgeId_toZ_(SF bridgeId);
      DeclNewart_Bridge(t_8);
      Option_7BBFBE_get_(SF (art_Bridge) &t_8, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_7));
      DeclNewart_Bridge_Ports(t_9);
      art_Bridge_ports_(SF (art_Bridge_Ports) &t_9, ((art_Bridge) &t_8));
      eventIns = (IS_820232) art_Bridge_Ports_eventIns_(((art_Bridge_Ports) &t_9));

      sfUpdateLoc(47);
      B hasEvents;
      {
        hasEvents = F;
      }

      sfUpdateLoc(49);
      {
        IS_820232 t_14 = eventIns;
        int8_t t_15 = (eventIns)->size;
        for (int8_t t_16 = 0; t_16 < t_15; t_16++) {
          art_UPort e = (art_UPort) &(t_14->value[t_16]);

          sfUpdateLoc(50);
          B t_10;
          {
            art_Art_PortId t_11 = art_UPort_id_(SF e);
            Z t_12 = art_Art_PortId_toZ_(SF t_11);
            B t_13 = Map_9C6840_contains_(SF art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), t_12);
            t_10 = t_13;
          }
          if (t_10) {

            sfUpdateLoc(51);
            {
              hasEvents = T;
            }
          }
        }
      }
      return hasEvents;
    }
  }
  sfAssert(match_41_35, "Error when pattern matching.");
  exit(-1);
}

S64 art_ArtNativeSlang_time(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "time", 0);
  return art_Process_time(SF_LAST);
}

inline B art_ArtNativeSlang_sendOutput_extract_167_14_376396(STACK_FRAME_SF Option_376396 t_0, art_ArtSlangMessage *_msg_167_19) {
  if (!Some_24B656__is(SF t_0)) return F;
  *_msg_167_19 = (art_ArtSlangMessage) Some_24B656_value_(Some_24B656__as(SF t_0));
  return T;
}

inline B art_ArtNativeSlang_sendOutput_extract_186_14_376396(STACK_FRAME_SF Option_376396 t_0) {
  return T;
}

Unit art_ArtNativeSlang_sendOutput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "sendOutput", 0);

  sfUpdateLoc(165);
  {
    DeclNewIS_D10119(t_26);
    IS_D10119__appendAll(SF (IS_D10119) &t_26, eventPortIds, (IS_D10119) dataPortIds);
    IS_D10119 t_23 = ((IS_D10119) &t_26);
    int8_t t_24 = (((IS_D10119) &t_26))->size;
    for (int8_t t_25 = 0; t_25 < t_24; t_25++) {
      art_Art_PortId srcPortId = t_23->value[t_25];

      sfUpdateLoc(166);
      Z t_1 = art_Art_PortId_toZ_(SF srcPortId);
      DeclNewOption_376396(t_2);
      Map_9C6840_get_(SF (Option_376396) &t_2, art_ArtNativeSlang_outPortVariables(SF_LAST), t_1);
      Option_376396 t_0 = ((Option_376396) &t_2);
      B match_166_7 = F;
      if (!match_166_7) {
        art_ArtSlangMessage msg_167_19;
        match_166_7 = art_ArtNativeSlang_sendOutput_extract_167_14_376396(SF t_0, &msg_167_19);
        if (match_166_7) {

          sfUpdateLoc(170);
          {
            Z t_3 = art_Art_PortId_toZ_(SF srcPortId);
            DeclNewTuple2_4DFC06(t_4);
            Tuple2_4DFC06_apply(SF &t_4, t_3, msg_167_19);
            DeclNewMap_9C6840(t_5);
            Map_9C6840__add_(SF (Map_9C6840) &t_5, art_ArtNativeSlang_outInfrastructurePorts(SF_LAST), (Tuple2_4DFC06) (&t_4));
            art_ArtNativeSlang_outInfrastructurePorts_a(SF (Map_9C6840) ((Map_9C6840) &t_5));
          }

          sfUpdateLoc(171);
          {
            Z t_7 = art_Art_PortId_toZ_(SF srcPortId);
            DeclNewTuple2_4DFC06(t_6);
            Tuple2_4DFC06_apply(SF &t_6, t_7, msg_167_19);
            DeclNewMap_9C6840(t_8);
            Map_9C6840__sub_(SF (Map_9C6840) &t_8, art_ArtNativeSlang_outPortVariables(SF_LAST), (Tuple2_4DFC06) (&t_6));
            art_ArtNativeSlang_outPortVariables_a(SF (Map_9C6840) ((Map_9C6840) &t_8));
          }

          sfUpdateLoc(174);
          {
            IS_7267A0 t_17 = MS_CA6EDB_at(art_Art_connections(SF_LAST), srcPortId);
            int8_t t_18 = (MS_CA6EDB_at(art_Art_connections(SF_LAST), srcPortId))->size;
            for (int8_t t_19 = 0; t_19 < t_18; t_19++) {
              art_Art_PortId dstPortId = t_17->value[t_19];

              sfUpdateLoc(175);
              art_ArtSlangMessage _msg;
              DeclNewSome_A0133F(t_10);
              Some_A0133F_apply(SF &t_10, dstPortId);
              S64 t_11 = art_Art_time(SF_LAST);
              DeclNewart_ArtSlangMessage(t_9);
              art_ArtSlangMessage_apply(SF &t_9, (art_DataContent) art_ArtSlangMessage_data_(msg_167_19), art_ArtSlangMessage_srcPortId_(msg_167_19), (Option_1CF021) (&t_10), art_ArtSlangMessage_putValueTimestamp_(msg_167_19), t_11, art_ArtSlangMessage_dstArrivalTimestamp_(msg_167_19), art_ArtSlangMessage_receiveInputTimestamp_(msg_167_19));
              _msg = (art_ArtSlangMessage) (&t_9);

              sfUpdateLoc(179);
              {
                Z t_12 = art_Art_PortId_toZ_(SF dstPortId);
                S64 t_14 = art_Art_time(SF_LAST);
                DeclNewart_ArtSlangMessage(t_13);
                art_ArtSlangMessage_apply(SF &t_13, (art_DataContent) art_ArtSlangMessage_data_(_msg), art_ArtSlangMessage_srcPortId_(_msg), (Option_1CF021) art_ArtSlangMessage_dstPortId_(_msg), art_ArtSlangMessage_putValueTimestamp_(_msg), art_ArtSlangMessage_sendOutputTimestamp_(_msg), t_14, art_ArtSlangMessage_receiveInputTimestamp_(_msg));
                DeclNewTuple2_4DFC06(t_15);
                Tuple2_4DFC06_apply(SF &t_15, t_12, (&t_13));
                DeclNewMap_9C6840(t_16);
                Map_9C6840__add_(SF (Map_9C6840) &t_16, art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), (Tuple2_4DFC06) (&t_15));
                art_ArtNativeSlang_inInfrastructurePorts_a(SF (Map_9C6840) ((Map_9C6840) &t_16));
              }
            }
          }

          sfUpdateLoc(184);
          {
            Z t_21 = art_Art_PortId_toZ_(SF srcPortId);
            DeclNewTuple2_4DFC06(t_20);
            Tuple2_4DFC06_apply(SF &t_20, t_21, msg_167_19);
            DeclNewMap_9C6840(t_22);
            Map_9C6840__sub_(SF (Map_9C6840) &t_22, art_ArtNativeSlang_outInfrastructurePorts(SF_LAST), (Tuple2_4DFC06) (&t_20));
            art_ArtNativeSlang_outInfrastructurePorts_a(SF (Map_9C6840) ((Map_9C6840) &t_22));
          }
        }
      }
      if (!match_166_7) {
        match_166_7 = art_ArtNativeSlang_sendOutput_extract_186_14_376396(SF t_0);
        if (match_166_7) {
        }
      }
      sfAssert(match_166_7, "Error when pattern matching.");
    }
  }
}

inline B art_ArtNativeSlang_receiveInput_extract_130_14_376396(STACK_FRAME_SF Option_376396 t_11, art_ArtSlangMessage *_data_130_19) {
  if (!Some_24B656__is(SF t_11)) return F;
  *_data_130_19 = (art_ArtSlangMessage) Some_24B656_value_(Some_24B656__as(SF t_11));
  return T;
}

inline B art_ArtNativeSlang_receiveInput_extract_133_14_376396(STACK_FRAME_SF Option_376396 t_11) {
  return T;
}

inline B art_ArtNativeSlang_receiveInput_extract_138_14_376396(STACK_FRAME_SF Option_376396 t_25, art_ArtSlangMessage *_data_138_19) {
  if (!Some_24B656__is(SF t_25)) return F;
  *_data_138_19 = (art_ArtSlangMessage) Some_24B656_value_(Some_24B656__as(SF t_25));
  return T;
}

inline B art_ArtNativeSlang_receiveInput_extract_140_14_376396(STACK_FRAME_SF Option_376396 t_25) {
  return T;
}

Unit art_ArtNativeSlang_receiveInput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "receiveInput", 0);

  sfUpdateLoc(123);
  {
    IS_D10119 t_8 = eventPortIds;
    int8_t t_9 = (eventPortIds)->size;
    for (int8_t t_10 = 0; t_10 < t_9; t_10++) {
      art_Art_PortId portId = t_8->value[t_10];
      Z t_6 = art_Art_PortId_toZ_(SF portId);
      B t_7 = Map_9C6840_contains_(SF art_ArtNativeSlang_inPortVariables(SF_LAST), t_6);
      if (t_7) {

        sfUpdateLoc(124);
        {
          Z t_1 = art_Art_PortId_toZ_(SF portId);
          Z t_2 = art_Art_PortId_toZ_(SF portId);
          DeclNewOption_376396(t_3);
          Map_9C6840_get_(SF (Option_376396) &t_3, art_ArtNativeSlang_inPortVariables(SF_LAST), t_2);
          DeclNewart_ArtSlangMessage(t_4);
          Option_376396_get_(SF (art_ArtSlangMessage) &t_4, ((Option_376396) &t_3));
          DeclNewTuple2_4DFC06(t_0);
          Tuple2_4DFC06_apply(SF &t_0, t_1, ((art_ArtSlangMessage) &t_4));
          DeclNewMap_9C6840(t_5);
          Map_9C6840__sub_(SF (Map_9C6840) &t_5, art_ArtNativeSlang_inPortVariables(SF_LAST), (Tuple2_4DFC06) (&t_0));
          art_ArtNativeSlang_inPortVariables_a(SF (Map_9C6840) ((Map_9C6840) &t_5));
        }
      }
    }
  }

  sfUpdateLoc(128);
  {
    IS_D10119 t_22 = eventPortIds;
    int8_t t_23 = (eventPortIds)->size;
    for (int8_t t_24 = 0; t_24 < t_23; t_24++) {
      art_Art_PortId portId = t_22->value[t_24];

      sfUpdateLoc(129);
      Z t_12 = art_Art_PortId_toZ_(SF portId);
      DeclNewOption_376396(t_13);
      Map_9C6840_get_(SF (Option_376396) &t_13, art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), t_12);
      Option_376396 t_11 = ((Option_376396) &t_13);
      B match_129_7 = F;
      if (!match_129_7) {
        art_ArtSlangMessage data_130_19;
        match_129_7 = art_ArtNativeSlang_receiveInput_extract_130_14_376396(SF t_11, &data_130_19);
        if (match_129_7) {

          sfUpdateLoc(131);
          {
            Z t_15 = art_Art_PortId_toZ_(SF portId);
            DeclNewTuple2_4DFC06(t_14);
            Tuple2_4DFC06_apply(SF &t_14, t_15, data_130_19);
            DeclNewMap_9C6840(t_16);
            Map_9C6840__sub_(SF (Map_9C6840) &t_16, art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), (Tuple2_4DFC06) (&t_14));
            art_ArtNativeSlang_inInfrastructurePorts_a(SF (Map_9C6840) ((Map_9C6840) &t_16));
          }

          sfUpdateLoc(132);
          {
            Z t_17 = art_Art_PortId_toZ_(SF portId);
            S64 t_19 = art_Art_time(SF_LAST);
            DeclNewart_ArtSlangMessage(t_18);
            art_ArtSlangMessage_apply(SF &t_18, (art_DataContent) art_ArtSlangMessage_data_(data_130_19), art_ArtSlangMessage_srcPortId_(data_130_19), (Option_1CF021) art_ArtSlangMessage_dstPortId_(data_130_19), art_ArtSlangMessage_putValueTimestamp_(data_130_19), art_ArtSlangMessage_sendOutputTimestamp_(data_130_19), art_ArtSlangMessage_dstArrivalTimestamp_(data_130_19), t_19);
            DeclNewTuple2_4DFC06(t_20);
            Tuple2_4DFC06_apply(SF &t_20, t_17, (&t_18));
            DeclNewMap_9C6840(t_21);
            Map_9C6840__add_(SF (Map_9C6840) &t_21, art_ArtNativeSlang_inPortVariables(SF_LAST), (Tuple2_4DFC06) (&t_20));
            art_ArtNativeSlang_inPortVariables_a(SF (Map_9C6840) ((Map_9C6840) &t_21));
          }
        }
      }
      if (!match_129_7) {
        match_129_7 = art_ArtNativeSlang_receiveInput_extract_133_14_376396(SF t_11);
        if (match_129_7) {
        }
      }
      sfAssert(match_129_7, "Error when pattern matching.");
    }
  }

  sfUpdateLoc(136);
  {
    IS_D10119 t_31 = dataPortIds;
    int8_t t_32 = (dataPortIds)->size;
    for (int8_t t_33 = 0; t_33 < t_32; t_33++) {
      art_Art_PortId portId = t_31->value[t_33];

      sfUpdateLoc(137);
      Z t_26 = art_Art_PortId_toZ_(SF portId);
      DeclNewOption_376396(t_27);
      Map_9C6840_get_(SF (Option_376396) &t_27, art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), t_26);
      Option_376396 t_25 = ((Option_376396) &t_27);
      B match_137_7 = F;
      if (!match_137_7) {
        art_ArtSlangMessage data_138_19;
        match_137_7 = art_ArtNativeSlang_receiveInput_extract_138_14_376396(SF t_25, &data_138_19);
        if (match_137_7) {

          sfUpdateLoc(139);
          {
            Z t_28 = art_Art_PortId_toZ_(SF portId);
            DeclNewTuple2_4DFC06(t_29);
            Tuple2_4DFC06_apply(SF &t_29, t_28, data_138_19);
            DeclNewMap_9C6840(t_30);
            Map_9C6840__add_(SF (Map_9C6840) &t_30, art_ArtNativeSlang_inPortVariables(SF_LAST), (Tuple2_4DFC06) (&t_29));
            art_ArtNativeSlang_inPortVariables_a(SF (Map_9C6840) ((Map_9C6840) &t_30));
          }
        }
      }
      if (!match_137_7) {
        match_137_7 = art_ArtNativeSlang_receiveInput_extract_140_14_376396(SF t_25);
        if (match_137_7) {
        }
      }
      sfAssert(match_137_7, "Error when pattern matching.");
    }
  }
}

inline B art_ArtNativeSlang_observeInInfrastructurePort_extract_204_16_376396(STACK_FRAME_SF Option_376396 t_3, art_ArtSlangMessage *_value_204_21) {
  if (!Some_24B656__is(SF t_3)) return F;
  *_value_204_21 = (art_ArtSlangMessage) Some_24B656_value_(Some_24B656__as(SF t_3));
  return T;
}

inline B art_ArtNativeSlang_observeInInfrastructurePort_extract_205_16_376396(STACK_FRAME_SF Option_376396 t_3) {
  return T;
}

inline B art_ArtNativeSlang_observeInInfrastructurePort_extract_202_12(STACK_FRAME_SF art_PortMode_Type t_0) {
  if (!art_PortMode_Type__eq(t_0, art_PortMode_Type_DataIn)) return F;
  return T;
}

inline B art_ArtNativeSlang_observeInInfrastructurePort_extract_209_16_376396(STACK_FRAME_SF Option_376396 t_8, art_ArtSlangMessage *_value_209_21) {
  if (!Some_24B656__is(SF t_8)) return F;
  *_value_209_21 = (art_ArtSlangMessage) Some_24B656_value_(Some_24B656__as(SF t_8));
  return T;
}

inline B art_ArtNativeSlang_observeInInfrastructurePort_extract_210_16_376396(STACK_FRAME_SF Option_376396 t_8) {
  return T;
}

inline B art_ArtNativeSlang_observeInInfrastructurePort_extract_207_12(STACK_FRAME_SF art_PortMode_Type t_0) {
  if (!art_PortMode_Type__eq(t_0, art_PortMode_Type_EventIn)) return F;
  return T;
}

inline B art_ArtNativeSlang_observeInInfrastructurePort_extract_212_12(STACK_FRAME_SF art_PortMode_Type t_0) {
  return T;
}

void art_ArtNativeSlang_observeInInfrastructurePort(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "observeInInfrastructurePort", 0);

  sfUpdateLoc(201);
  DeclNewart_UPort(t_1);
  art_Art_port(SF (art_UPort) &t_1, portId);
  art_PortMode_Type t_2 = art_UPort_mode_(SF ((art_UPort) &t_1));
  art_PortMode_Type t_0 = t_2;
  B match_201_22 = F;
  if (!match_201_22) {
    match_201_22 = art_ArtNativeSlang_observeInInfrastructurePort_extract_202_12(SF t_0);
    if (match_201_22) {

      sfUpdateLoc(203);
      Z t_4 = art_Art_PortId_toZ_(SF portId);
      DeclNewOption_376396(t_5);
      Map_9C6840_get_(SF (Option_376396) &t_5, art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), t_4);
      Option_376396 t_3 = ((Option_376396) &t_5);
      B match_203_9 = F;
      if (!match_203_9) {
        art_ArtSlangMessage value_204_21;
        match_203_9 = art_ArtNativeSlang_observeInInfrastructurePort_extract_204_16_376396(SF t_3, &value_204_21);
        if (match_203_9) {
          DeclNewSome_D29615(t_6);
          Some_D29615_apply(SF &t_6, (art_DataContent) art_ArtSlangMessage_data_(value_204_21));
          Type_assign(result, (&t_6), sizeof(struct Some_D29615));
          return;
        }
      }
      if (!match_203_9) {
        match_203_9 = art_ArtNativeSlang_observeInInfrastructurePort_extract_205_16_376396(SF t_3);
        if (match_203_9) {
          DeclNewNone_964667(t_7);
          None_964667_apply(SF &t_7);
          Type_assign(result, (&t_7), sizeof(struct None_964667));
          return;
        }
      }
      sfAssert(match_203_9, "Error when pattern matching.");
      exit(-1);
    }
  }
  if (!match_201_22) {
    match_201_22 = art_ArtNativeSlang_observeInInfrastructurePort_extract_207_12(SF t_0);
    if (match_201_22) {

      sfUpdateLoc(208);
      Z t_9 = art_Art_PortId_toZ_(SF portId);
      DeclNewOption_376396(t_10);
      Map_9C6840_get_(SF (Option_376396) &t_10, art_ArtNativeSlang_inInfrastructurePorts(SF_LAST), t_9);
      Option_376396 t_8 = ((Option_376396) &t_10);
      B match_208_9 = F;
      if (!match_208_9) {
        art_ArtSlangMessage value_209_21;
        match_208_9 = art_ArtNativeSlang_observeInInfrastructurePort_extract_209_16_376396(SF t_8, &value_209_21);
        if (match_208_9) {
          DeclNewSome_D29615(t_11);
          Some_D29615_apply(SF &t_11, (art_DataContent) art_ArtSlangMessage_data_(value_209_21));
          Type_assign(result, (&t_11), sizeof(struct Some_D29615));
          return;
        }
      }
      if (!match_208_9) {
        match_208_9 = art_ArtNativeSlang_observeInInfrastructurePort_extract_210_16_376396(SF t_8);
        if (match_208_9) {
          DeclNewNone_964667(t_12);
          None_964667_apply(SF &t_12);
          Type_assign(result, (&t_12), sizeof(struct None_964667));
          return;
        }
      }
      sfAssert(match_208_9, "Error when pattern matching.");
      exit(-1);
    }
  }
  if (!match_201_22) {
    match_201_22 = art_ArtNativeSlang_observeInInfrastructurePort_extract_212_12(SF t_0);
    if (match_201_22) {

      sfUpdateLoc(213);
      {
        if (!(F)) {
          sfAbort((string("expecting in port"))->value);
        }
      }
      DeclNewNone_964667(t_13);
      None_964667_apply(SF &t_13);
      Type_assign(result, (&t_13), sizeof(struct None_964667));
      return;
    }
  }
  sfAssert(match_201_22, "Error when pattern matching.");
  exit(-1);
}

inline B art_ArtNativeSlang_observeOutPortVariable_extract_269_12_376396(STACK_FRAME_SF Option_376396 t_0, art_ArtSlangMessage *_value_269_17) {
  if (!Some_24B656__is(SF t_0)) return F;
  *_value_269_17 = (art_ArtSlangMessage) Some_24B656_value_(Some_24B656__as(SF t_0));
  return T;
}

inline B art_ArtNativeSlang_observeOutPortVariable_extract_270_12_376396(STACK_FRAME_SF Option_376396 t_0) {
  return T;
}

void art_ArtNativeSlang_observeOutPortVariable(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId) {
  DeclNewStackFrame(caller, "ArtNativeSlang.scala", "art.ArtNativeSlang", "observeOutPortVariable", 0);

  sfUpdateLoc(268);
  Z t_1 = art_Art_PortId_toZ_(SF portId);
  DeclNewOption_376396(t_2);
  Map_9C6840_get_(SF (Option_376396) &t_2, art_ArtNativeSlang_outPortVariables(SF_LAST), t_1);
  Option_376396 t_0 = ((Option_376396) &t_2);
  B match_268_5 = F;
  if (!match_268_5) {
    art_ArtSlangMessage value_269_17;
    match_268_5 = art_ArtNativeSlang_observeOutPortVariable_extract_269_12_376396(SF t_0, &value_269_17);
    if (match_268_5) {
      DeclNewSome_D29615(t_3);
      Some_D29615_apply(SF &t_3, (art_DataContent) art_ArtSlangMessage_data_(value_269_17));
      Type_assign(result, (&t_3), sizeof(struct Some_D29615));
      return;
    }
  }
  if (!match_268_5) {
    match_268_5 = art_ArtNativeSlang_observeOutPortVariable_extract_270_12_376396(SF t_0);
    if (match_268_5) {
      DeclNewNone_964667(t_4);
      None_964667_apply(SF &t_4);
      Type_assign(result, (&t_4), sizeof(struct None_964667));
      return;
    }
  }
  sfAssert(match_268_5, "Error when pattern matching.");
  exit(-1);
}

void art_ArtNativeSlang_init_inInfrastructurePorts(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(33);
  DeclNewMap_9C6840(t_0);
  Map_empty_595DD7(SF (Map_9C6840) &t_0);
  Type_assign(&_art_ArtNativeSlang_inInfrastructurePorts, ((Map_9C6840) &t_0), sizeof(struct Map_9C6840));
};

void art_ArtNativeSlang_init_outInfrastructurePorts(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(34);
  DeclNewMap_9C6840(t_1);
  Map_empty_595DD7(SF (Map_9C6840) &t_1);
  Type_assign(&_art_ArtNativeSlang_outInfrastructurePorts, ((Map_9C6840) &t_1), sizeof(struct Map_9C6840));
};

void art_ArtNativeSlang_init_inPortVariables(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(35);
  DeclNewMap_9C6840(t_2);
  Map_empty_595DD7(SF (Map_9C6840) &t_2);
  Type_assign(&_art_ArtNativeSlang_inPortVariables, ((Map_9C6840) &t_2), sizeof(struct Map_9C6840));
};

void art_ArtNativeSlang_init_outPortVariables(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(36);
  DeclNewMap_9C6840(t_3);
  Map_empty_595DD7(SF (Map_9C6840) &t_3);
  Type_assign(&_art_ArtNativeSlang_outPortVariables, ((Map_9C6840) &t_3), sizeof(struct Map_9C6840));
};