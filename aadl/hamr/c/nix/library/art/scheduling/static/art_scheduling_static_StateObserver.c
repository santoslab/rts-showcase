#include <all.h>

Unit art_scheduling_static_StateObserver_printPortContentsInputsCurrent(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "StateObserver.scala", "art.scheduling.static.StateObserver", "printPortContentsInputsCurrent", 0);

  sfUpdateLoc(63);
  art_Art_BridgeId bridgeId;
  {
    art_Art_BridgeId t_0 = art_scheduling_static_Schedule_getBridgeIdFromSlotNumber(SF art_scheduling_static_Explorer_ScheduleState_slotNum_(art_scheduling_static_Explorer_scheduleState(SF_LAST)));
    bridgeId = t_0;
  }

  sfUpdateLoc(64);
  IS_39643F inPortInfo;
  DeclNewIS_39643F(t_1);
  art_scheduling_static_StateObserver_observeInPortValues(SF (IS_39643F) &t_1, bridgeId);
  inPortInfo = (IS_39643F) ((IS_39643F) &t_1);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(66);
  {
    String_cprint(string("****************************"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(67);
  {
    DeclNewString(t_2);
    String_string_(SF (String) &t_2, string("   Next Component: "));
    DeclNewString(t_3);
    art_scheduling_static_Schedule_threadNickName(SF (String) &t_3, bridgeId);
    String_string_(SF (String) &t_2, ((String) &t_3));
    String_string_(SF (String) &t_2, string(" (id = "));
    art_Art_BridgeId_string_(SF (String) &t_2, bridgeId);
    String_string_(SF (String) &t_2, string(")"));
    String_cprint(((String) &t_2), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(68);
  {
    String_cprint(string("****************************"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(69);
  {
    String_cprint(string(" Input Ports"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(70);
  {
    String_cprint(string(" ==============="), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  sfUpdateLoc(71);
  {
    art_scheduling_static_StateObserver_printPortInfo(SF (IS_39643F) inPortInfo);
  }
}

inline B art_scheduling_static_StateObserver_printPortContentsOutputsCurrent_extract_79_12_069397(STACK_FRAME_SF Option_069397 t_1, art_scheduling_static_Explorer_ScheduleState *_previousState_79_17) {
  if (!Some_6D5259__is(SF t_1)) return F;
  *_previousState_79_17 = (art_scheduling_static_Explorer_ScheduleState) Some_6D5259_value_(Some_6D5259__as(SF t_1));
  return T;
}

inline B art_scheduling_static_StateObserver_printPortContentsOutputsCurrent_extract_89_12_069397(STACK_FRAME_SF Option_069397 t_1) {
  if (!None_336F0A__is(SF t_1)) return F;
  return T;
}

Unit art_scheduling_static_StateObserver_printPortContentsOutputsCurrent(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "StateObserver.scala", "art.scheduling.static.StateObserver", "printPortContentsOutputsCurrent", 0);

  sfUpdateLoc(75);
  Option_069397 previousStateOpt;
  DeclNewOption_069397(t_0);
  art_scheduling_static_Explorer_previousState(SF (Option_069397) &t_0, (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST), (art_scheduling_static_Schedule_DScheduleSpec) art_scheduling_static_Schedule_dScheduleSpec(SF_LAST));
  previousStateOpt = (Option_069397) ((Option_069397) &t_0);

  sfUpdateLoc(78);
  Option_069397 t_1 = previousStateOpt;
  B match_78_5 = F;
  if (!match_78_5) {
    art_scheduling_static_Explorer_ScheduleState previousState_79_17;
    match_78_5 = art_scheduling_static_StateObserver_printPortContentsOutputsCurrent_extract_79_12_069397(SF t_1, &previousState_79_17);
    if (match_78_5) {

      sfUpdateLoc(80);
      art_Art_BridgeId bridgeId;
      {
        art_Art_BridgeId t_2 = art_scheduling_static_Schedule_getBridgeIdFromSlotNumber(SF art_scheduling_static_Explorer_ScheduleState_slotNum_(previousState_79_17));
        bridgeId = t_2;
      }

      sfUpdateLoc(81);
      IS_39643F outPortInfo;
      DeclNewIS_39643F(t_3);
      art_scheduling_static_StateObserver_observeOutPortValues(SF (IS_39643F) &t_3, bridgeId);
      outPortInfo = (IS_39643F) ((IS_39643F) &t_3);

      #ifndef SIREUM_NO_PRINT

      sfUpdateLoc(82);
      {
        String_cprint(string("****************************"), T);
        cprintln(T);
        cflush(T);
      }

      #endif

      #ifndef SIREUM_NO_PRINT

      sfUpdateLoc(83);
      {
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("   Previous Component: "));
        DeclNewString(t_5);
        art_scheduling_static_Schedule_threadNickName(SF (String) &t_5, bridgeId);
        String_string_(SF (String) &t_4, ((String) &t_5));
        String_string_(SF (String) &t_4, string(" (id = "));
        art_Art_BridgeId_string_(SF (String) &t_4, bridgeId);
        String_string_(SF (String) &t_4, string(")"));
        String_cprint(((String) &t_4), T);
        cprintln(T);
        cflush(T);
      }

      #endif

      #ifndef SIREUM_NO_PRINT

      sfUpdateLoc(84);
      {
        String_cprint(string("****************************"), T);
        cprintln(T);
        cflush(T);
      }

      #endif

      #ifndef SIREUM_NO_PRINT

      sfUpdateLoc(85);
      {
        String_cprint(string(" Output Ports"), T);
        cprintln(T);
        cflush(T);
      }

      #endif

      #ifndef SIREUM_NO_PRINT

      sfUpdateLoc(86);
      {
        String_cprint(string(" ==============="), T);
        cprintln(T);
        cflush(T);
      }

      #endif

      sfUpdateLoc(87);
      {
        art_scheduling_static_StateObserver_printPortInfo(SF (IS_39643F) outPortInfo);
      }
    }
  }
  if (!match_78_5) {
    match_78_5 = art_scheduling_static_StateObserver_printPortContentsOutputsCurrent_extract_89_12_069397(SF t_1);
    if (match_78_5) {

      #ifndef SIREUM_NO_PRINT

      sfUpdateLoc(90);
      {
        String_cprint(string("(initial state - no previous state to show)"), T);
        cprintln(T);
        cflush(T);
      }

      #endif
    }
  }
  sfAssert(match_78_5, "Error when pattern matching.");
}

Unit art_scheduling_static_StateObserver_printPortContents(STACK_FRAME art_Art_BridgeId bridgeId) {
  DeclNewStackFrame(caller, "StateObserver.scala", "art.scheduling.static.StateObserver", "printPortContents", 0);

  sfUpdateLoc(102);
  IS_39643F inPortInfo;
  DeclNewIS_39643F(t_0);
  art_scheduling_static_StateObserver_observeInPortValues(SF (IS_39643F) &t_0, bridgeId);
  inPortInfo = (IS_39643F) ((IS_39643F) &t_0);

  sfUpdateLoc(103);
  IS_39643F outPortInfo;
  DeclNewIS_39643F(t_1);
  art_scheduling_static_StateObserver_observeOutPortValues(SF (IS_39643F) &t_1, bridgeId);
  outPortInfo = (IS_39643F) ((IS_39643F) &t_1);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(104);
  {
    String_cprint(string("****************************"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(105);
  {
    DeclNewString(t_2);
    String_string_(SF (String) &t_2, string("   Component: "));
    DeclNewString(t_3);
    art_scheduling_static_Schedule_threadNickName(SF (String) &t_3, bridgeId);
    String_string_(SF (String) &t_2, ((String) &t_3));
    String_string_(SF (String) &t_2, string(" (id = "));
    art_Art_BridgeId_string_(SF (String) &t_2, bridgeId);
    String_string_(SF (String) &t_2, string(")"));
    String_cprint(((String) &t_2), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(106);
  {
    String_cprint(string("****************************"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(107);
  {
    String_cprint(string(" Input Ports"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(108);
  {
    String_cprint(string(" ==============="), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  sfUpdateLoc(109);
  {
    art_scheduling_static_StateObserver_printPortInfo(SF (IS_39643F) inPortInfo);
  }

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(110);
  {
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(111);
  {
    String_cprint(string(" Output Ports"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(112);
  {
    String_cprint(string(" ================"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  sfUpdateLoc(113);
  {
    art_scheduling_static_StateObserver_printPortInfo(SF (IS_39643F) outPortInfo);
  }
}

Unit art_scheduling_static_StateObserver_printPortContentsByNickName(STACK_FRAME String threadNickName) {
  DeclNewStackFrame(caller, "StateObserver.scala", "art.scheduling.static.StateObserver", "printPortContentsByNickName", 0);

  sfUpdateLoc(117);
  art_Art_BridgeId bridgeId;
  {
    DeclNewOption_0E107D(t_0);
    Map_EB5A91_get_(SF (Option_0E107D) &t_0, art_scheduling_static_StaticScheduler_threadNickNames(SF_LAST), (String) threadNickName);
    art_Art_BridgeId t_1 = Option_0E107D_get_(SF ((Option_0E107D) &t_0));
    bridgeId = t_1;
  }

  sfUpdateLoc(118);
  {
    art_scheduling_static_StateObserver_printPortContents(SF bridgeId);
  }
}

void art_scheduling_static_StateObserver_observeInPortValues(STACK_FRAME IS_39643F result, art_Art_BridgeId bridgeId) {
  DeclNewStackFrame(caller, "StateObserver.scala", "art.scheduling.static.StateObserver", "observeInPortValues", 0);

  sfUpdateLoc(19);
  art_Bridge bridge;
  Z t_0 = art_Art_BridgeId_toZ_(SF bridgeId);
  DeclNewart_Bridge(t_1);
  Option_7BBFBE_get_(SF (art_Bridge) &t_1, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_0));
  bridge = (art_Bridge) ((art_Bridge) &t_1);

  sfUpdateLoc(20);
  DeclNewIS_39643F(_portValues);
  IS_39643F portValues = (IS_39643F) &_portValues;
  {
    STATIC_ASSERT(0 <= MaxIS_39643F, "Insufficient maximum for IS[Z, (String, Option[art.DataContent])] elements.");
    DeclNewIS_39643F(t_2);
    t_2.size = (int8_t) 0;
    Type_assign(portValues, (&t_2), sizeof(struct IS_39643F));
  }

  sfUpdateLoc(22);
  {
    DeclNewart_Bridge_Ports(t_11);
    art_Bridge_ports_(SF (art_Bridge_Ports) &t_11, bridge);
    IS_820232 t_8 = art_Bridge_Ports_dataIns_(((art_Bridge_Ports) &t_11));
    int8_t t_9 = (art_Bridge_Ports_dataIns_(((art_Bridge_Ports) &t_11)))->size;
    for (int8_t t_10 = 0; t_10 < t_9; t_10++) {
      art_UPort port = (art_UPort) &(t_8->value[t_10]);

      sfUpdateLoc(23);
      {
        DeclNewString(t_4);
        art_UPort_name_(SF (String) &t_4, port);
        art_Art_PortId t_5 = art_UPort_id_(SF port);
        DeclNewOption_8E9F45(t_6);
        art_Art_observeInInfrastructurePort(SF (Option_8E9F45) &t_6, t_5);
        DeclNewTuple2_275908(t_3);
        Tuple2_275908_apply(SF &t_3, ((String) &t_4), ((Option_8E9F45) &t_6));
        DeclNewIS_39643F(t_7);
        IS_39643F__append(SF (IS_39643F) &t_7, portValues, (Tuple2_275908) (&t_3));
        Type_assign(portValues, ((IS_39643F) &t_7), sizeof(struct IS_39643F));
      }
    }
  }

  sfUpdateLoc(26);
  {
    DeclNewart_Bridge_Ports(t_20);
    art_Bridge_ports_(SF (art_Bridge_Ports) &t_20, bridge);
    IS_820232 t_17 = art_Bridge_Ports_eventIns_(((art_Bridge_Ports) &t_20));
    int8_t t_18 = (art_Bridge_Ports_eventIns_(((art_Bridge_Ports) &t_20)))->size;
    for (int8_t t_19 = 0; t_19 < t_18; t_19++) {
      art_UPort port = (art_UPort) &(t_17->value[t_19]);

      sfUpdateLoc(27);
      {
        DeclNewString(t_13);
        art_UPort_name_(SF (String) &t_13, port);
        art_Art_PortId t_14 = art_UPort_id_(SF port);
        DeclNewOption_8E9F45(t_15);
        art_Art_observeInInfrastructurePort(SF (Option_8E9F45) &t_15, t_14);
        DeclNewTuple2_275908(t_12);
        Tuple2_275908_apply(SF &t_12, ((String) &t_13), ((Option_8E9F45) &t_15));
        DeclNewIS_39643F(t_16);
        IS_39643F__append(SF (IS_39643F) &t_16, portValues, (Tuple2_275908) (&t_12));
        Type_assign(portValues, ((IS_39643F) &t_16), sizeof(struct IS_39643F));
      }
    }
  }
  Type_assign(result, portValues, sizeof(struct IS_39643F));
  return;
}

Unit art_scheduling_static_StateObserver_printPortInfo(STACK_FRAME IS_39643F portVals) {
  DeclNewStackFrame(caller, "StateObserver.scala", "art.scheduling.static.StateObserver", "printPortInfo", 0);

  sfUpdateLoc(96);
  {
    IS_39643F t_1 = portVals;
    int8_t t_2 = (portVals)->size;
    for (int8_t t_3 = 0; t_3 < t_2; t_3++) {
      Tuple2_275908 e = (Tuple2_275908) &(t_1->value[t_3]);

      #ifndef SIREUM_NO_PRINT

      sfUpdateLoc(97);
      {
        DeclNewString(t_0);
        String_string_(SF (String) &t_0, string(""));
        String_string_(SF (String) &t_0, Tuple2_275908_1(e));
        String_string_(SF (String) &t_0, string(" = "));
        Option_8E9F45_string_(SF (String) &t_0, Tuple2_275908_2(e));
        String_string_(SF (String) &t_0, string(""));
        String_cprint(((String) &t_0), T);
        cprintln(T);
        cflush(T);
      }

      #endif
    }
  }
}

void art_scheduling_static_StateObserver_observeOutPortValues(STACK_FRAME IS_39643F result, art_Art_BridgeId bridgeId) {
  DeclNewStackFrame(caller, "StateObserver.scala", "art.scheduling.static.StateObserver", "observeOutPortValues", 0);

  sfUpdateLoc(33);
  art_Bridge bridge;
  Z t_0 = art_Art_BridgeId_toZ_(SF bridgeId);
  DeclNewart_Bridge(t_1);
  Option_7BBFBE_get_(SF (art_Bridge) &t_1, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_0));
  bridge = (art_Bridge) ((art_Bridge) &t_1);

  sfUpdateLoc(34);
  DeclNewIS_39643F(_portValues);
  IS_39643F portValues = (IS_39643F) &_portValues;
  {
    STATIC_ASSERT(0 <= MaxIS_39643F, "Insufficient maximum for IS[Z, (String, Option[art.DataContent])] elements.");
    DeclNewIS_39643F(t_2);
    t_2.size = (int8_t) 0;
    Type_assign(portValues, (&t_2), sizeof(struct IS_39643F));
  }

  sfUpdateLoc(36);
  {
    DeclNewart_Bridge_Ports(t_11);
    art_Bridge_ports_(SF (art_Bridge_Ports) &t_11, bridge);
    IS_820232 t_8 = art_Bridge_Ports_dataOuts_(((art_Bridge_Ports) &t_11));
    int8_t t_9 = (art_Bridge_Ports_dataOuts_(((art_Bridge_Ports) &t_11)))->size;
    for (int8_t t_10 = 0; t_10 < t_9; t_10++) {
      art_UPort port = (art_UPort) &(t_8->value[t_10]);

      sfUpdateLoc(37);
      {
        DeclNewString(t_4);
        art_UPort_name_(SF (String) &t_4, port);
        art_Art_PortId t_5 = art_UPort_id_(SF port);
        DeclNewOption_8E9F45(t_6);
        art_Art_observeOutPortVariable(SF (Option_8E9F45) &t_6, t_5);
        DeclNewTuple2_275908(t_3);
        Tuple2_275908_apply(SF &t_3, ((String) &t_4), ((Option_8E9F45) &t_6));
        DeclNewIS_39643F(t_7);
        IS_39643F__append(SF (IS_39643F) &t_7, portValues, (Tuple2_275908) (&t_3));
        Type_assign(portValues, ((IS_39643F) &t_7), sizeof(struct IS_39643F));
      }
    }
  }

  sfUpdateLoc(40);
  {
    DeclNewart_Bridge_Ports(t_20);
    art_Bridge_ports_(SF (art_Bridge_Ports) &t_20, bridge);
    IS_820232 t_17 = art_Bridge_Ports_eventOuts_(((art_Bridge_Ports) &t_20));
    int8_t t_18 = (art_Bridge_Ports_eventOuts_(((art_Bridge_Ports) &t_20)))->size;
    for (int8_t t_19 = 0; t_19 < t_18; t_19++) {
      art_UPort port = (art_UPort) &(t_17->value[t_19]);

      sfUpdateLoc(41);
      {
        DeclNewString(t_13);
        art_UPort_name_(SF (String) &t_13, port);
        art_Art_PortId t_14 = art_UPort_id_(SF port);
        DeclNewOption_8E9F45(t_15);
        art_Art_observeOutPortVariable(SF (Option_8E9F45) &t_15, t_14);
        DeclNewTuple2_275908(t_12);
        Tuple2_275908_apply(SF &t_12, ((String) &t_13), ((Option_8E9F45) &t_15));
        DeclNewIS_39643F(t_16);
        IS_39643F__append(SF (IS_39643F) &t_16, portValues, (Tuple2_275908) (&t_12));
        Type_assign(portValues, ((IS_39643F) &t_16), sizeof(struct IS_39643F));
      }
    }
  }
  Type_assign(result, portValues, sizeof(struct IS_39643F));
  return;
}