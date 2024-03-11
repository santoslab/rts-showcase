#include <all.h>

B art_Art_initialized_ = F;

Z _art_Art_numComponents;
Z _art_Art_numPorts;
struct StaticString _art_Art_logTitle;
struct MS_83D5EB _art_Art_bridges;
struct MS_9C0286 _art_Art_ports;
struct MS_CA6EDB _art_Art_connections;

void art_Art_init(STACK_FRAME_ONLY) {
  if (art_Art_initialized_) return;
  art_Art_initialized_ = T;
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "<init>", 0);
  art_Art_init_numComponents(SF_LAST);
  art_Art_init_numPorts(SF_LAST);
  art_Art_init_logTitle(SF_LAST);
  art_Art_init_bridges(SF_LAST);
  art_Art_init_ports(SF_LAST);
  art_Art_init_connections(SF_LAST);
}

Z art_Art_numComponents(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return _art_Art_numComponents;
}

Z art_Art_numPorts(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return _art_Art_numPorts;
}

String art_Art_logTitle(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (String) &_art_Art_logTitle;
}

MS_83D5EB art_Art_bridges(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (MS_83D5EB) &_art_Art_bridges;
}

MS_9C0286 art_Art_ports(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (MS_9C0286) &_art_Art_ports;
}

MS_CA6EDB art_Art_connections(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (MS_CA6EDB) &_art_Art_connections;
}

Unit art_Art_run(STACK_FRAME art_ArchitectureDescription system, art_scheduling_Scheduler scheduler) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "run", 0);

  sfUpdateLoc(143);
  {
    art_Art_assemble(SF (art_ArchitectureDescription) system);
  }

  sfUpdateLoc(145);
  {
    art_Art_setUpArchitecture(SF_LAST);
  }

  sfUpdateLoc(146);
  {
    art_Art_setUpPlatform(SF_LAST);
  }

  sfUpdateLoc(147);
  {
    art_Art_setUpSystemState(SF (art_scheduling_Scheduler) scheduler);
  }

  sfUpdateLoc(149);
  {
    art_Art_initializePhase(SF (art_scheduling_Scheduler) scheduler);
  }

  sfUpdateLoc(150);
  {
    art_Art_computePhase(SF (art_scheduling_Scheduler) scheduler);
  }

  sfUpdateLoc(151);
  {
    art_Art_finalizePhase(SF (art_scheduling_Scheduler) scheduler);
  }

  sfUpdateLoc(153);
  {
    art_Art_tearDownSystemState(SF_LAST);
  }

  sfUpdateLoc(154);
  {
    art_Art_tearDownPlatform(SF_LAST);
  }

  sfUpdateLoc(155);
  {
    art_Art_tearDownArchitecture(SF_LAST);
  }
}

Unit art_Art_assemble(STACK_FRAME art_ArchitectureDescription system) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "assemble", 0);

  sfUpdateLoc(131);
  {
    IS_058E6F t_0 = art_ArchitectureDescription_components_(system);
    int8_t t_1 = (art_ArchitectureDescription_components_(system))->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      art_Bridge component = (art_Bridge) &(t_0->value[t_2]);

      sfUpdateLoc(132);
      {
        art_Art_m_register(SF (art_Bridge) component);
      }
    }
  }

  sfUpdateLoc(135);
  {
    IS_996770 t_5 = art_ArchitectureDescription_connections_(system);
    int8_t t_6 = (art_ArchitectureDescription_connections_(system))->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      art_UConnection connection = (art_UConnection) &(t_5->value[t_7]);

      sfUpdateLoc(136);
      {
        DeclNewart_UPort(t_3);
        art_UConnection_from_(SF (art_UPort) &t_3, connection);
        DeclNewart_UPort(t_4);
        art_UConnection_to_(SF (art_UPort) &t_4, connection);
        art_Art_connect(SF (art_UPort) ((art_UPort) &t_3), (art_UPort) ((art_UPort) &t_4));
      }
    }
  }
}

Unit art_Art_setUpArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "setUpArchitecture", 0);
}

Unit art_Art_setUpPlatform(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "setUpPlatform", 0);
}

Unit art_Art_setUpSystemState(STACK_FRAME art_scheduling_Scheduler scheduler) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "setUpSystemState", 0);

  sfUpdateLoc(182);
  {
    art_ArtNativeSlang_setUpSystemState(SF_LAST);
  }

  sfUpdateLoc(183);
  {
    art_scheduling_Scheduler_initialize_(SF scheduler);
  }
}

Unit art_Art_initializePhase(STACK_FRAME art_scheduling_Scheduler scheduler) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "initializePhase", 0);

  sfUpdateLoc(159);
  {
    art_ArtNativeSlang_initializePhase(SF_LAST);
  }

  sfUpdateLoc(160);
  {
    art_scheduling_Scheduler_initializationPhase_(SF scheduler);
  }
}

Unit art_Art_computePhase(STACK_FRAME art_scheduling_Scheduler scheduler) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "computePhase", 0);

  sfUpdateLoc(164);
  {
    art_ArtNativeSlang_computePhase(SF_LAST);
  }

  sfUpdateLoc(165);
  {
    art_scheduling_Scheduler_computePhase_(SF scheduler);
  }
}

Unit art_Art_finalizePhase(STACK_FRAME art_scheduling_Scheduler scheduler) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "finalizePhase", 0);

  sfUpdateLoc(169);
  {
    art_ArtNativeSlang_finalizePhase(SF_LAST);
  }

  sfUpdateLoc(170);
  {
    art_scheduling_Scheduler_finalizePhase_(SF scheduler);
  }
}

Unit art_Art_tearDownSystemState(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "tearDownSystemState", 0);

  sfUpdateLoc(187);
  {
    art_ArtNativeSlang_tearDownSystemState(SF_LAST);
  }
}

Unit art_Art_tearDownPlatform(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "tearDownPlatform", 0);
}

Unit art_Art_tearDownArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "tearDownArchitecture", 0);
}

Unit art_Art_register_r(STACK_FRAME IS_820232 uports) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art.register", "r", 0);

  sfUpdateLoc(53);
  {
    IS_820232 t_12 = uports;
    int8_t t_13 = (uports)->size;
    for (int8_t t_14 = 0; t_14 < t_13; t_14++) {
      art_UPort port = (art_UPort) &(t_12->value[t_14]);

      sfUpdateLoc(54);
      {
        art_Art_PortId t_0 = art_UPort_id_(SF port);
        DeclNewSome_3E197E(t_1);
        Some_3E197E_apply(SF &t_1, (art_UPort) port);
        MS_9C0286_up(art_Art_ports(SF_LAST), t_0, (Option_6239DB) (&t_1));
      }

      sfUpdateLoc(63);
      String typ;
      art_PortMode_Type t_2 = art_UPort_mode_(SF port);
      DeclNewString(t_3);
      if (art_PortMode_Type__eq(t_2, art_PortMode_Type_DataIn)) {
        Type_assign(&t_3, string("(data in)"), sizeof(struct StaticString));
      } else {
        art_PortMode_Type t_4 = art_UPort_mode_(SF port);
        DeclNewString(t_5);
        if (art_PortMode_Type__eq(t_4, art_PortMode_Type_DataOut)) {
          Type_assign(&t_5, string("(data out)"), sizeof(struct StaticString));
        } else {
          art_PortMode_Type t_6 = art_UPort_mode_(SF port);
          DeclNewString(t_7);
          if (art_PortMode_Type__eq(t_6, art_PortMode_Type_EventOut)) {
            Type_assign(&t_7, string("(event out)"), sizeof(struct StaticString));
          } else {
            art_PortMode_Type t_8 = art_UPort_mode_(SF port);
            DeclNewString(t_9);
            if (art_PortMode_Type__eq(t_8, art_PortMode_Type_EventIn)) {
              Type_assign(&t_9, string("(event in)"), sizeof(struct StaticString));
            } else {
              Type_assign(&t_9, string("(infeasible)"), sizeof(struct StaticString));
            }
            Type_assign(&t_7, ((String) &t_9), sizeof(struct StaticString));
          }
          Type_assign(&t_5, ((String) &t_7), sizeof(struct StaticString));
        }
        Type_assign(&t_3, ((String) &t_5), sizeof(struct StaticString));
      }
      typ = (String) ((String) &t_3);

      sfUpdateLoc(64);
      {
        DeclNewString(t_10);
        String_string_(SF (String) &t_10, string("- Registered port: "));
        DeclNewString(t_11);
        art_UPort_name_(SF (String) &t_11, port);
        String_string_(SF (String) &t_10, ((String) &t_11));
        String_string_(SF (String) &t_10, string(" "));
        String_string_(SF (String) &t_10, typ);
        String_string_(SF (String) &t_10, string(""));
        art_ArtNativeSlang_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_10));
      }
    }
  }
}

inline B art_Art_register_extract_46_12(STACK_FRAME_SF art_DispatchPropertyProtocol t_3, Z *_period_46_46) {
  if (!art_DispatchPropertyProtocol_Periodic__is(SF t_3)) return F;
  *_period_46_46 = art_DispatchPropertyProtocol_Periodic_period_(art_DispatchPropertyProtocol_Periodic__as(SF t_3));
  return T;
}

inline B art_Art_register_extract_48_12(STACK_FRAME_SF art_DispatchPropertyProtocol t_3, Z *_min_48_46) {
  if (!art_DispatchPropertyProtocol_Sporadic__is(SF t_3)) return F;
  *_min_48_46 = art_DispatchPropertyProtocol_Sporadic_min_(art_DispatchPropertyProtocol_Sporadic__as(SF t_3));
  return T;
}

Unit art_Art_m_register(STACK_FRAME art_Bridge bridge) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "register", 0);

  sfUpdateLoc(44);
  {
    art_Art_BridgeId t_0 = art_Bridge_id_(SF bridge);
    Z t_1 = art_Art_BridgeId_toZ_(SF t_0);
    DeclNewSome_482E57(t_2);
    Some_482E57_apply(SF &t_2, (art_Bridge) bridge);
    MS_83D5EB_up(art_Art_bridges(SF_LAST), t_1, (Option_7BBFBE) (&t_2));
  }

  sfUpdateLoc(45);
  DeclNewart_DispatchPropertyProtocol(t_4);
  art_Bridge_dispatchProtocol_(SF (art_DispatchPropertyProtocol) &t_4, bridge);
  art_DispatchPropertyProtocol t_3 = ((art_DispatchPropertyProtocol) &t_4);
  B match_45_12 = F;
  if (!match_45_12) {
    Z period_46_46;
    match_45_12 = art_Art_register_extract_46_12(SF t_3, &period_46_46);
    if (match_45_12) {

      sfUpdateLoc(47);
      {
        DeclNewString(t_5);
        String_string_(SF (String) &t_5, string("Registered component: "));
        DeclNewString(t_6);
        art_Bridge_name_(SF (String) &t_6, bridge);
        String_string_(SF (String) &t_5, ((String) &t_6));
        String_string_(SF (String) &t_5, string(" (periodic: "));
        Z_string_(SF (String) &t_5, period_46_46);
        String_string_(SF (String) &t_5, string(")"));
        art_ArtNativeSlang_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_5));
      }
    }
  }
  if (!match_45_12) {
    Z min_48_46;
    match_45_12 = art_Art_register_extract_48_12(SF t_3, &min_48_46);
    if (match_45_12) {

      sfUpdateLoc(49);
      {
        DeclNewString(t_7);
        String_string_(SF (String) &t_7, string("Registered component: "));
        DeclNewString(t_8);
        art_Bridge_name_(SF (String) &t_8, bridge);
        String_string_(SF (String) &t_7, ((String) &t_8));
        String_string_(SF (String) &t_7, string(" (sporadic: "));
        Z_string_(SF (String) &t_7, min_48_46);
        String_string_(SF (String) &t_7, string(")"));
        art_ArtNativeSlang_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_7));
      }
    }
  }
  sfAssert(match_45_12, "Error when pattern matching.");

  sfUpdateLoc(68);
  {
    DeclNewart_Bridge_Ports(t_9);
    art_Bridge_ports_(SF (art_Bridge_Ports) &t_9, bridge);
    art_Art_register_r(SF (IS_820232) art_Bridge_Ports_dataIns_(((art_Bridge_Ports) &t_9)));
  }

  sfUpdateLoc(69);
  {
    DeclNewart_Bridge_Ports(t_10);
    art_Bridge_ports_(SF (art_Bridge_Ports) &t_10, bridge);
    art_Art_register_r(SF (IS_820232) art_Bridge_Ports_dataOuts_(((art_Bridge_Ports) &t_10)));
  }

  sfUpdateLoc(70);
  {
    DeclNewart_Bridge_Ports(t_11);
    art_Bridge_ports_(SF (art_Bridge_Ports) &t_11, bridge);
    art_Art_register_r(SF (IS_820232) art_Bridge_Ports_eventIns_(((art_Bridge_Ports) &t_11)));
  }

  sfUpdateLoc(71);
  {
    DeclNewart_Bridge_Ports(t_12);
    art_Bridge_ports_(SF (art_Bridge_Ports) &t_12, bridge);
    art_Art_register_r(SF (IS_820232) art_Bridge_Ports_eventOuts_(((art_Bridge_Ports) &t_12)));
  }
}

Unit art_Art_connect(STACK_FRAME art_UPort from, art_UPort to) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "connect", 0);

  sfUpdateLoc(124);
  {
    art_Art_PortId t_0 = art_UPort_id_(SF from);
    art_Art_PortId t_1 = art_UPort_id_(SF from);
    art_Art_PortId t_2 = art_UPort_id_(SF to);
    DeclNewIS_7267A0(t_3);
    IS_7267A0__append(SF (IS_7267A0) &t_3, MS_CA6EDB_at(art_Art_connections(SF_LAST), t_1), t_2);
    MS_CA6EDB_up(art_Art_connections(SF_LAST), t_0, (IS_7267A0) ((IS_7267A0) &t_3));
  }

  sfUpdateLoc(125);
  {
    DeclNewString(t_4);
    String_string_(SF (String) &t_4, string("Connected ports: "));
    DeclNewString(t_5);
    art_UPort_name_(SF (String) &t_5, from);
    String_string_(SF (String) &t_4, ((String) &t_5));
    String_string_(SF (String) &t_4, string(" -> "));
    DeclNewString(t_6);
    art_UPort_name_(SF (String) &t_6, to);
    String_string_(SF (String) &t_4, ((String) &t_6));
    String_string_(SF (String) &t_4, string(""));
    art_ArtNativeSlang_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_4));
  }
}

Unit art_Art_logInfo(STACK_FRAME art_Art_BridgeId bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logInfo", 0);

  sfUpdateLoc(100);
  B t_0;
  {
    Z t_1 = art_Art_BridgeId_toZ_(SF bridgeId);
    B t_2 = Option_7BBFBE_nonEmpty_(SF MS_83D5EB_at(art_Art_bridges(SF_LAST), t_1));
    t_0 = t_2;
  }
  if (t_0) {

    sfUpdateLoc(101);
    {
      Z t_3 = art_Art_BridgeId_toZ_(SF bridgeId);
      DeclNewart_Bridge(t_4);
      Option_7BBFBE_get_(SF (art_Bridge) &t_4, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_3));
      DeclNewString(t_5);
      art_Bridge_name_(SF (String) &t_5, ((art_Bridge) &t_4));
      art_ArtNativeSlang_logInfo(SF (String) ((String) &t_5), (String) msg);
    }
  } else {

    sfUpdateLoc(103);
    {
      art_ArtNativeSlang_logInfo(SF (String) string(""), (String) msg);
    }
  }
}

Unit art_Art_logDebug(STACK_FRAME art_Art_BridgeId bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logDebug", 0);

  sfUpdateLoc(116);
  B t_0;
  {
    Z t_1 = art_Art_BridgeId_toZ_(SF bridgeId);
    B t_2 = Option_7BBFBE_nonEmpty_(SF MS_83D5EB_at(art_Art_bridges(SF_LAST), t_1));
    t_0 = t_2;
  }
  if (t_0) {

    sfUpdateLoc(117);
    {
      Z t_3 = art_Art_BridgeId_toZ_(SF bridgeId);
      DeclNewart_Bridge(t_4);
      Option_7BBFBE_get_(SF (art_Bridge) &t_4, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_3));
      DeclNewString(t_5);
      art_Bridge_name_(SF (String) &t_5, ((art_Bridge) &t_4));
      art_ArtNativeSlang_logDebug(SF (String) ((String) &t_5), (String) msg);
    }
  } else {

    sfUpdateLoc(119);
    {
      art_ArtNativeSlang_logDebug(SF (String) string(""), (String) msg);
    }
  }
}

Unit art_Art_logError(STACK_FRAME art_Art_BridgeId bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logError", 0);

  sfUpdateLoc(108);
  B t_0;
  {
    Z t_1 = art_Art_BridgeId_toZ_(SF bridgeId);
    B t_2 = Option_7BBFBE_nonEmpty_(SF MS_83D5EB_at(art_Art_bridges(SF_LAST), t_1));
    t_0 = t_2;
  }
  if (t_0) {

    sfUpdateLoc(109);
    {
      Z t_3 = art_Art_BridgeId_toZ_(SF bridgeId);
      DeclNewart_Bridge(t_4);
      Option_7BBFBE_get_(SF (art_Bridge) &t_4, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_3));
      DeclNewString(t_5);
      art_Bridge_name_(SF (String) &t_5, ((art_Bridge) &t_4));
      art_ArtNativeSlang_logError(SF (String) ((String) &t_5), (String) msg);
    }
  } else {

    sfUpdateLoc(111);
    {
      art_ArtNativeSlang_logError(SF (String) string(""), (String) msg);
    }
  }
}

Unit art_Art_putValue(STACK_FRAME art_Art_PortId portId, art_DataContent data) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "putValue", 0);

  sfUpdateLoc(84);
  {
    art_ArtNativeSlang_putValue(SF portId, (art_DataContent) data);
  }
}

void art_Art_getValue(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "getValue", 0);
  DeclNewOption_8E9F45(t_0);
  art_ArtNativeSlang_getValue(SF (Option_8E9F45) &t_0, portId);
  Type_assign(result, ((Option_8E9F45) &t_0), sizeof(union Option_8E9F45));
  return;
}

S64 art_Art_time(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "time", 0);
  return art_ArtNativeSlang_time(SF_LAST);
}

Unit art_Art_sendOutput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "sendOutput", 0);

  sfUpdateLoc(92);
  {
    art_ArtNativeSlang_sendOutput(SF (IS_D10119) eventPortIds, (IS_D10119) dataPortIds);
  }
}

Unit art_Art_receiveInput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "receiveInput", 0);

  sfUpdateLoc(80);
  {
    art_ArtNativeSlang_receiveInput(SF (IS_D10119) eventPortIds, (IS_D10119) dataPortIds);
  }
}

void art_Art_observeInInfrastructurePort(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "observeInInfrastructurePort", 0);
  DeclNewOption_8E9F45(t_0);
  art_ArtNativeSlang_observeInInfrastructurePort(SF (Option_8E9F45) &t_0, portId);
  Type_assign(result, ((Option_8E9F45) &t_0), sizeof(union Option_8E9F45));
  return;
}

void art_Art_observeOutPortVariable(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "observeOutPortVariable", 0);
  DeclNewOption_8E9F45(t_0);
  art_ArtNativeSlang_observeOutPortVariable(SF (Option_8E9F45) &t_0, portId);
  Type_assign(result, ((Option_8E9F45) &t_0), sizeof(union Option_8E9F45));
  return;
}

void art_Art_port(STACK_FRAME art_UPort result, art_Art_PortId p) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "port", 0);
  DeclNewart_UPort(t_0);
  Option_6239DB_get_(SF (art_UPort) &t_0, MS_9C0286_at(art_Art_ports(SF_LAST), p));
  Type_assign(result, ((art_UPort) &t_0), sizeof(union art_UPort));
  return;
}

void art_Art_init_numComponents(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  _art_Art_numComponents = Z_C(15);
};

void art_Art_init_numPorts(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(19);
  _art_Art_numPorts = Z_C(92);
};

void art_Art_init_logTitle(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(22);
  Type_assign(&_art_Art_logTitle, string("Art"), sizeof(struct StaticString));
};

void art_Art_init_bridges(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(24);
  DeclNewNone_734370(t_0);
  None_734370_apply(SF &t_0);
  DeclNewMS_83D5EB(t_1);
  MS_83D5EB_create(SF (MS_83D5EB) &t_1, art_Art_numComponents(SF_LAST), (Option_7BBFBE) (&t_0));
  Type_assign(&_art_Art_bridges, ((MS_83D5EB) &t_1), sizeof(struct MS_83D5EB));
};

void art_Art_init_ports(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(25);
  DeclNewNone_39BC5F(t_2);
  None_39BC5F_apply(SF &t_2);
  DeclNewMS_9C0286(t_3);
  MS_9C0286_create(SF (MS_9C0286) &t_3, art_Art_numPorts(SF_LAST), (Option_6239DB) (&t_2));
  Type_assign(&_art_Art_ports, ((MS_9C0286) &t_3), sizeof(struct MS_9C0286));
};

void art_Art_init_connections(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(26);
  STATIC_ASSERT(0 <= MaxIS_7267A0, "Insufficient maximum for IS[art.Art.ConnectionId, art.Art.PortId] elements.");
  DeclNewIS_7267A0(t_4);
  t_4.size = (int8_t) 0;
  DeclNewMS_CA6EDB(t_5);
  MS_CA6EDB_create(SF (MS_CA6EDB) &t_5, art_Art_numPorts(SF_LAST), (IS_7267A0) (&t_4));
  Type_assign(&_art_Art_connections, ((MS_CA6EDB) &t_5), sizeof(struct MS_CA6EDB));
};