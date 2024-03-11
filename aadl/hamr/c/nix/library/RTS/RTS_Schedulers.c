#include <all.h>

B RTS_Schedulers_initialized_ = F;

struct Map_EB5A91 _RTS_Schedulers_threadNickNames;
struct RTS_ProcessorTimingProperties _RTS_Schedulers_RTS_i_Instance_rts_processor_timingProperties;
struct RTS_ThreadTimingProperties _RTS_Schedulers_RTS_i_Instance_instrumentationMock_instrumentationMockThread_timingProperties;
struct RTS_ThreadTimingProperties _RTS_Schedulers_RTS_i_Instance_eventControlMock_eventControlMockThread_timingProperties;
struct RTS_ThreadTimingProperties _RTS_Schedulers_RTS_i_Instance_actuatorsMock_actuatorsMockThread_timingProperties;
struct RTS_ThreadTimingProperties _RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_timingProperties;
struct RTS_ThreadTimingProperties _RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_timingProperties;
struct RTS_ThreadTimingProperties _RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_timingProperties;
struct RTS_ThreadTimingProperties _RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_timingProperties;
struct RTS_ThreadTimingProperties _RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_timingProperties;
struct RTS_ThreadTimingProperties _RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_timingProperties;
struct RTS_ThreadTimingProperties _RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_timingProperties;
struct RTS_ThreadTimingProperties _RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_timingProperties;
struct RTS_ThreadTimingProperties _RTS_Schedulers_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_timingProperties;
struct RTS_ThreadTimingProperties _RTS_Schedulers_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_timingProperties;
struct RTS_ThreadTimingProperties _RTS_Schedulers_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_timingProperties;
struct RTS_ThreadTimingProperties _RTS_Schedulers_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_timingProperties;
struct IS_FDDCB6 _RTS_Schedulers_roundRobinSchedule;
Z _RTS_Schedulers_framePeriod;
Z _RTS_Schedulers_numComponents;
Z _RTS_Schedulers_maxExecutionTime;
struct art_scheduling_static_Schedule_DScheduleSpec _RTS_Schedulers_defaultStaticSchedule;
struct IS_FDDCB6 _RTS_Schedulers_defaultDomainToBridgeIdMap;

void RTS_Schedulers_init(STACK_FRAME_ONLY) {
  if (RTS_Schedulers_initialized_) return;
  RTS_Schedulers_initialized_ = T;
  DeclNewStackFrame(caller, "Schedulers.scala", "RTS.Schedulers", "<init>", 0);
  RTS_Schedulers_init_threadNickNames(SF_LAST);
  RTS_Schedulers_init_RTS_i_Instance_rts_processor_timingProperties(SF_LAST);
  RTS_Schedulers_init_RTS_i_Instance_instrumentationMock_instrumentationMockThread_timingProperties(SF_LAST);
  RTS_Schedulers_init_RTS_i_Instance_eventControlMock_eventControlMockThread_timingProperties(SF_LAST);
  RTS_Schedulers_init_RTS_i_Instance_actuatorsMock_actuatorsMockThread_timingProperties(SF_LAST);
  RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_timingProperties(SF_LAST);
  RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_timingProperties(SF_LAST);
  RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_timingProperties(SF_LAST);
  RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_timingProperties(SF_LAST);
  RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_timingProperties(SF_LAST);
  RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_timingProperties(SF_LAST);
  RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_timingProperties(SF_LAST);
  RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_timingProperties(SF_LAST);
  RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_timingProperties(SF_LAST);
  RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_timingProperties(SF_LAST);
  RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_timingProperties(SF_LAST);
  RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_timingProperties(SF_LAST);
  RTS_Schedulers_init_roundRobinSchedule(SF_LAST);
  RTS_Schedulers_init_framePeriod(SF_LAST);
  RTS_Schedulers_init_numComponents(SF_LAST);
  RTS_Schedulers_init_maxExecutionTime(SF_LAST);
  RTS_Schedulers_init_defaultStaticSchedule(SF_LAST);
  RTS_Schedulers_init_defaultDomainToBridgeIdMap(SF_LAST);
}

Map_EB5A91 RTS_Schedulers_threadNickNames(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (Map_EB5A91) &_RTS_Schedulers_threadNickNames;
}

RTS_ProcessorTimingProperties RTS_Schedulers_RTS_i_Instance_rts_processor_timingProperties(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (RTS_ProcessorTimingProperties) &_RTS_Schedulers_RTS_i_Instance_rts_processor_timingProperties;
}

RTS_ThreadTimingProperties RTS_Schedulers_RTS_i_Instance_instrumentationMock_instrumentationMockThread_timingProperties(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (RTS_ThreadTimingProperties) &_RTS_Schedulers_RTS_i_Instance_instrumentationMock_instrumentationMockThread_timingProperties;
}

RTS_ThreadTimingProperties RTS_Schedulers_RTS_i_Instance_eventControlMock_eventControlMockThread_timingProperties(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (RTS_ThreadTimingProperties) &_RTS_Schedulers_RTS_i_Instance_eventControlMock_eventControlMockThread_timingProperties;
}

RTS_ThreadTimingProperties RTS_Schedulers_RTS_i_Instance_actuatorsMock_actuatorsMockThread_timingProperties(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (RTS_ThreadTimingProperties) &_RTS_Schedulers_RTS_i_Instance_actuatorsMock_actuatorsMockThread_timingProperties;
}

RTS_ThreadTimingProperties RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_timingProperties(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (RTS_ThreadTimingProperties) &_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_timingProperties;
}

RTS_ThreadTimingProperties RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_timingProperties(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (RTS_ThreadTimingProperties) &_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_timingProperties;
}

RTS_ThreadTimingProperties RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_timingProperties(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (RTS_ThreadTimingProperties) &_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_timingProperties;
}

RTS_ThreadTimingProperties RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_timingProperties(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (RTS_ThreadTimingProperties) &_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_timingProperties;
}

RTS_ThreadTimingProperties RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_timingProperties(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (RTS_ThreadTimingProperties) &_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_timingProperties;
}

RTS_ThreadTimingProperties RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_timingProperties(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (RTS_ThreadTimingProperties) &_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_timingProperties;
}

RTS_ThreadTimingProperties RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_timingProperties(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (RTS_ThreadTimingProperties) &_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_timingProperties;
}

RTS_ThreadTimingProperties RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_timingProperties(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (RTS_ThreadTimingProperties) &_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_timingProperties;
}

RTS_ThreadTimingProperties RTS_Schedulers_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_timingProperties(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (RTS_ThreadTimingProperties) &_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_timingProperties;
}

RTS_ThreadTimingProperties RTS_Schedulers_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_timingProperties(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (RTS_ThreadTimingProperties) &_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_timingProperties;
}

RTS_ThreadTimingProperties RTS_Schedulers_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_timingProperties(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (RTS_ThreadTimingProperties) &_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_timingProperties;
}

RTS_ThreadTimingProperties RTS_Schedulers_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_timingProperties(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (RTS_ThreadTimingProperties) &_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_timingProperties;
}

IS_FDDCB6 RTS_Schedulers_roundRobinSchedule(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (IS_FDDCB6) &_RTS_Schedulers_roundRobinSchedule;
}

Z RTS_Schedulers_framePeriod(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return _RTS_Schedulers_framePeriod;
}

Z RTS_Schedulers_numComponents(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return _RTS_Schedulers_numComponents;
}

Z RTS_Schedulers_maxExecutionTime(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return _RTS_Schedulers_maxExecutionTime;
}

art_scheduling_static_Schedule_DScheduleSpec RTS_Schedulers_defaultStaticSchedule(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (art_scheduling_static_Schedule_DScheduleSpec) &_RTS_Schedulers_defaultStaticSchedule;
}

IS_FDDCB6 RTS_Schedulers_defaultDomainToBridgeIdMap(STACK_FRAME_ONLY) {
  RTS_Schedulers_init(CALLER_LAST);
  return (IS_FDDCB6) &_RTS_Schedulers_defaultDomainToBridgeIdMap;
}

inline B RTS_Schedulers_getRoundRobinScheduler_extract_129_12_FEE1DB(STACK_FRAME_SF Option_FEE1DB t_2, IS_FDDCB6 *_s_129_17) {
  if (!Some_C4F557__is(SF t_2)) return F;
  *_s_129_17 = (IS_FDDCB6) Some_C4F557_value_(Some_C4F557__as(SF t_2));
  return T;
}

inline B RTS_Schedulers_getRoundRobinScheduler_extract_130_12_FEE1DB(STACK_FRAME_SF Option_FEE1DB t_2) {
  return T;
}

void RTS_Schedulers_getRoundRobinScheduler(STACK_FRAME art_scheduling_roundrobin_RoundRobin result, Option_FEE1DB schedule) {
  DeclNewStackFrame(caller, "Schedulers.scala", "RTS.Schedulers", "getRoundRobinScheduler", 0);

  sfUpdateLoc(127);
  B t_0;
  {
    B t_1 = IS_FDDCB6_isEmpty(SF RTS_Schedulers_roundRobinSchedule(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {
  }

  sfUpdateLoc(128);
  Option_FEE1DB t_2 = schedule;
  B match_128_5 = F;
  if (!match_128_5) {
    IS_FDDCB6 s_129_17;
    match_128_5 = RTS_Schedulers_getRoundRobinScheduler_extract_129_12_FEE1DB(SF t_2, &s_129_17);
    if (match_128_5) {
      DeclNewart_scheduling_roundrobin_RoundRobin(t_3);
      art_scheduling_roundrobin_RoundRobin_apply(SF &t_3, (IS_FDDCB6) s_129_17);
      Type_assign(result, (&t_3), sizeof(struct art_scheduling_roundrobin_RoundRobin));
      return;
    }
  }
  if (!match_128_5) {
    match_128_5 = RTS_Schedulers_getRoundRobinScheduler_extract_130_12_FEE1DB(SF t_2);
    if (match_128_5) {
      DeclNewIS_FDDCB6(t_5);
      RTS_ScheduleProviderI_getRoundRobinOrder(SF (IS_FDDCB6) &t_5);
      DeclNewart_scheduling_roundrobin_RoundRobin(t_4);
      art_scheduling_roundrobin_RoundRobin_apply(SF &t_4, (IS_FDDCB6) ((IS_FDDCB6) &t_5));
      Type_assign(result, (&t_4), sizeof(struct art_scheduling_roundrobin_RoundRobin));
      return;
    }
  }
  sfAssert(match_128_5, "Error when pattern matching.");
  exit(-1);
}

inline B RTS_Schedulers_getStaticSchedulerH_extract_182_12_AEC260(STACK_FRAME_SF MOption_AEC260 t_6, art_scheduling_static_Schedule_DScheduleSpec *_schedule__182_19, IS_FDDCB6 *_domainToBridgeIdMap__182_30, Map_EB5A91 *_threadNickNames__182_52, art_scheduling_static_CommandProvider *_commandProvider_182_70) {
  if (!MSome_30C95B__is(SF t_6)) return F;
  Type_assign(*_schedule__182_19, Tuple4_FA9F23_1(MSome_30C95B_value_(MSome_30C95B__as(SF t_6))), sizeof(struct art_scheduling_static_Schedule_DScheduleSpec));
  Type_assign(*_domainToBridgeIdMap__182_30, Tuple4_FA9F23_2(MSome_30C95B_value_(MSome_30C95B__as(SF t_6))), sizeof(struct IS_FDDCB6));
  Type_assign(*_threadNickNames__182_52, Tuple4_FA9F23_3(MSome_30C95B_value_(MSome_30C95B__as(SF t_6))), sizeof(struct Map_EB5A91));
  Type_assign(*_commandProvider_182_70, Tuple4_FA9F23_4(MSome_30C95B_value_(MSome_30C95B__as(SF t_6))), sizeof(union art_scheduling_static_CommandProvider));
  return T;
}

inline B RTS_Schedulers_getStaticSchedulerH_extract_184_12_AEC260(STACK_FRAME_SF MOption_AEC260 t_6) {
  return T;
}

void RTS_Schedulers_getStaticSchedulerH(STACK_FRAME art_scheduling_static_StaticScheduler result, MOption_AEC260 userProvided) {
  DeclNewStackFrame(caller, "Schedulers.scala", "RTS.Schedulers", "getStaticSchedulerH", 0);

  sfUpdateLoc(180);
  B t_0;
  {
    B t_1 = F;
    B t_2 = F;
    B t_3 = IS_5AA467_isEmpty(SF art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(RTS_Schedulers_defaultStaticSchedule(SF_LAST))));
    if (t_3) {
      B t_4 = IS_FDDCB6_isEmpty(SF RTS_Schedulers_defaultDomainToBridgeIdMap(SF_LAST));
      t_2 = t_4;
    }
    if (t_2) {
      B t_5 = Map_EB5A91_isEmpty_(SF RTS_Schedulers_threadNickNames(SF_LAST));
      t_1 = t_5;
    }
    t_0 = t_1;
  }
  if (t_0) {
  }

  sfUpdateLoc(181);
  MOption_AEC260 t_6 = userProvided;
  B match_181_5 = F;
  if (!match_181_5) {
    DeclNewart_scheduling_static_Schedule_DScheduleSpec(_schedule__182_19);
    art_scheduling_static_Schedule_DScheduleSpec schedule__182_19 = &_schedule__182_19;
    DeclNewIS_FDDCB6(_domainToBridgeIdMap__182_30);
    IS_FDDCB6 domainToBridgeIdMap__182_30 = &_domainToBridgeIdMap__182_30;
    DeclNewMap_EB5A91(_threadNickNames__182_52);
    Map_EB5A91 threadNickNames__182_52 = &_threadNickNames__182_52;
    DeclNewart_scheduling_static_CommandProvider(_commandProvider_182_70);
    art_scheduling_static_CommandProvider commandProvider_182_70 = &_commandProvider_182_70;
    match_181_5 = RTS_Schedulers_getStaticSchedulerH_extract_182_12_AEC260(SF t_6, &schedule__182_19, &domainToBridgeIdMap__182_30, &threadNickNames__182_52, &commandProvider_182_70);
    if (match_181_5) {
      DeclNewart_scheduling_static_StaticScheduler(t_7);
      RTS_Schedulers_getStaticScheduler(SF (art_scheduling_static_StaticScheduler) &t_7, (art_scheduling_static_Schedule_DScheduleSpec) schedule__182_19, (IS_FDDCB6) domainToBridgeIdMap__182_30, (Map_EB5A91) threadNickNames__182_52, (art_scheduling_static_CommandProvider) commandProvider_182_70);
      Type_assign(result, ((art_scheduling_static_StaticScheduler) &t_7), sizeof(struct art_scheduling_static_StaticScheduler));
      return;
    }
  }
  if (!match_181_5) {
    match_181_5 = RTS_Schedulers_getStaticSchedulerH_extract_184_12_AEC260(SF t_6);
    if (match_181_5) {
      DeclNewart_scheduling_static_Schedule_DScheduleSpec(t_8);
      RTS_ScheduleProviderI_getStaticSchedule(SF (art_scheduling_static_Schedule_DScheduleSpec) &t_8);
      DeclNewart_scheduling_static_DefaultCommandProvider(t_9);
      art_scheduling_static_DefaultCommandProvider_apply(SF &t_9);
      DeclNewart_scheduling_static_StaticScheduler(t_10);
      RTS_Schedulers_getStaticScheduler(SF (art_scheduling_static_StaticScheduler) &t_10, (art_scheduling_static_Schedule_DScheduleSpec) ((art_scheduling_static_Schedule_DScheduleSpec) &t_8), (IS_FDDCB6) RTS_Schedulers_defaultDomainToBridgeIdMap(SF_LAST), (Map_EB5A91) RTS_Schedulers_threadNickNames(SF_LAST), (art_scheduling_static_CommandProvider) (&t_9));
      Type_assign(result, ((art_scheduling_static_StaticScheduler) &t_10), sizeof(struct art_scheduling_static_StaticScheduler));
      return;
    }
  }
  sfAssert(match_181_5, "Error when pattern matching.");
  exit(-1);
}

void RTS_Schedulers_getLegacyScheduler(STACK_FRAME art_scheduling_legacy_Legacy result) {
  DeclNewStackFrame(caller, "Schedulers.scala", "RTS.Schedulers", "getLegacyScheduler", 0);
  DeclNewart_scheduling_legacy_Legacy(t_0);
  art_scheduling_legacy_Legacy_apply(SF &t_0, (IS_058E6F) art_ArchitectureDescription_components_(RTS_Arch_ad(SF_LAST)));
  Type_assign(result, (&t_0), sizeof(struct art_scheduling_legacy_Legacy));
  return;
}

void RTS_Schedulers_getStaticScheduler(STACK_FRAME art_scheduling_static_StaticScheduler result, art_scheduling_static_Schedule_DScheduleSpec schedule, IS_FDDCB6 domainToBridgeIdMap, Map_EB5A91 threadNickNames, art_scheduling_static_CommandProvider commandProvider) {
  DeclNewStackFrame(caller, "Schedulers.scala", "RTS.Schedulers", "getStaticScheduler", 0);
  DeclNewart_scheduling_static_CommandProvider(t_1);
  if (art_scheduling_static_InfoCommandProvider__is(SF commandProvider)) {
    Z t_2 = IS_5AA467_size(SF art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(schedule)));
    DeclNewart_scheduling_static_CommandProvider(t_3);
    art_scheduling_static_InfoCommandProvider_init_(SF (art_scheduling_static_CommandProvider) &t_3, art_scheduling_static_InfoCommandProvider__as(SF commandProvider), (Map_EB5A91) threadNickNames, t_2, (IS_FDDCB6) domainToBridgeIdMap);
    Type_assign(&t_1, ((art_scheduling_static_CommandProvider) &t_3), sizeof(union art_scheduling_static_CommandProvider));
  } else {
    Type_assign(&t_1, commandProvider, sizeof(union art_scheduling_static_CommandProvider));
  }
  DeclNewart_scheduling_static_StaticScheduler(t_0);
  art_scheduling_static_StaticScheduler_apply(SF &t_0, (art_scheduling_static_Schedule_DScheduleSpec) schedule, (IS_058E6F) art_ArchitectureDescription_components_(RTS_Arch_ad(SF_LAST)), (IS_FDDCB6) domainToBridgeIdMap, (Map_EB5A91) threadNickNames, (art_scheduling_static_CommandProvider) &t_1);
  Type_assign(result, (&t_0), sizeof(struct art_scheduling_static_StaticScheduler));
  return;
}

void RTS_Schedulers_init_threadNickNames(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(23);
  STATIC_ASSERT(15 <= MaxIS_588B23, "Insufficient maximum for IS[Z, (String, art.Art.BridgeId)] elements.");
  DeclNewIS_588B23(t_1);
  t_1.size = (int8_t) 15;
  DeclNewTuple2_E0098E(t_2);
  Tuple2_E0098E_apply(SF &t_2, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_name_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_id_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)));
  IS_588B23_up(&t_1, 0, (Tuple2_E0098E) (&t_2));
  DeclNewTuple2_E0098E(t_3);
  Tuple2_E0098E_apply(SF &t_3, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_name_(RTS_Arch_RTS_i_Instance_eventControlMock_eventControlMockThread(SF_LAST)), RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_id_(RTS_Arch_RTS_i_Instance_eventControlMock_eventControlMockThread(SF_LAST)));
  IS_588B23_up(&t_1, 1, (Tuple2_E0098E) (&t_3));
  DeclNewTuple2_E0098E(t_4);
  Tuple2_E0098E_apply(SF &t_4, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_name_(RTS_Arch_RTS_i_Instance_actuatorsMock_actuatorsMockThread(SF_LAST)), RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_id_(RTS_Arch_RTS_i_Instance_actuatorsMock_actuatorsMockThread(SF_LAST)));
  IS_588B23_up(&t_1, 2, (Tuple2_E0098E) (&t_4));
  DeclNewTuple2_E0098E(t_5);
  Tuple2_E0098E_apply(SF &t_5, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_name_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic(SF_LAST)), RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic(SF_LAST)));
  IS_588B23_up(&t_1, 3, (Tuple2_E0098E) (&t_5));
  DeclNewTuple2_E0098E(t_6);
  Tuple2_E0098E_apply(SF &t_6, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_name_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic(SF_LAST)), RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic(SF_LAST)));
  IS_588B23_up(&t_1, 4, (Tuple2_E0098E) (&t_6));
  DeclNewTuple2_E0098E(t_7);
  Tuple2_E0098E_apply(SF &t_7, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_name_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic(SF_LAST)), RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic(SF_LAST)));
  IS_588B23_up(&t_1, 5, (Tuple2_E0098E) (&t_7));
  DeclNewTuple2_E0098E(t_8);
  Tuple2_E0098E_apply(SF &t_8, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_name_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic(SF_LAST)), RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic(SF_LAST)));
  IS_588B23_up(&t_1, 6, (Tuple2_E0098E) (&t_8));
  DeclNewTuple2_E0098E(t_9);
  Tuple2_E0098E_apply(SF &t_9, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_name_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic(SF_LAST)), RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic(SF_LAST)));
  IS_588B23_up(&t_1, 7, (Tuple2_E0098E) (&t_9));
  DeclNewTuple2_E0098E(t_10);
  Tuple2_E0098E_apply(SF &t_10, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_name_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic(SF_LAST)), RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic(SF_LAST)));
  IS_588B23_up(&t_1, 8, (Tuple2_E0098E) (&t_10));
  DeclNewTuple2_E0098E(t_11);
  Tuple2_E0098E_apply(SF &t_11, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_name_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic(SF_LAST)), RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic(SF_LAST)));
  IS_588B23_up(&t_1, 9, (Tuple2_E0098E) (&t_11));
  DeclNewTuple2_E0098E(t_12);
  Tuple2_E0098E_apply(SF &t_12, RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_name_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic(SF_LAST)), RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic(SF_LAST)));
  IS_588B23_up(&t_1, 10, (Tuple2_E0098E) (&t_12));
  DeclNewTuple2_E0098E(t_13);
  Tuple2_E0098E_apply(SF &t_13, RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_name_(RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic(SF_LAST)), RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic(SF_LAST)));
  IS_588B23_up(&t_1, 11, (Tuple2_E0098E) (&t_13));
  DeclNewTuple2_E0098E(t_14);
  Tuple2_E0098E_apply(SF &t_14, RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_name_(RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator(SF_LAST)), RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator(SF_LAST)));
  IS_588B23_up(&t_1, 12, (Tuple2_E0098E) (&t_14));
  DeclNewTuple2_E0098E(t_15);
  Tuple2_E0098E_apply(SF &t_15, RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_name_(RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic(SF_LAST)), RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic(SF_LAST)));
  IS_588B23_up(&t_1, 13, (Tuple2_E0098E) (&t_15));
  DeclNewTuple2_E0098E(t_16);
  Tuple2_E0098E_apply(SF &t_16, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_name_(RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator(SF_LAST)), RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator(SF_LAST)));
  IS_588B23_up(&t_1, 14, (Tuple2_E0098E) (&t_16));
  DeclNewMap_EB5A91(t_0);
  Map_EB5A91_apply(SF &t_0, (IS_588B23) (&t_1));
  Type_assign(&_RTS_Schedulers_threadNickNames, (&t_0), sizeof(struct Map_EB5A91));
};

void RTS_Schedulers_init_RTS_i_Instance_rts_processor_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(44);
  DeclNewSome_488F47(t_18);
  Some_488F47_apply(SF &t_18, Z_C(2));
  DeclNewSome_488F47(t_19);
  Some_488F47_apply(SF &t_19, Z_C(1000));
  DeclNewSome_488F47(t_20);
  Some_488F47_apply(SF &t_20, Z_C(16));
  DeclNewNone_76463B(t_21);
  None_76463B_apply(SF &t_21);
  DeclNewRTS_ProcessorTimingProperties(t_17);
  RTS_ProcessorTimingProperties_apply(SF &t_17, (Option_882048) (&t_18), (Option_882048) (&t_19), (Option_882048) (&t_20), (Option_882048) (&t_21));
  Type_assign(&_RTS_Schedulers_RTS_i_Instance_rts_processor_timingProperties, (&t_17), sizeof(struct RTS_ProcessorTimingProperties));
};

void RTS_Schedulers_init_RTS_i_Instance_instrumentationMock_instrumentationMockThread_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(50);
  DeclNewSome_488F47(t_23);
  Some_488F47_apply(SF &t_23, Z_C(2));
  DeclNewTuple2_EC3B57(t_25);
  Tuple2_EC3B57_apply(SF &t_25, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_24);
  Some_80A548_apply(SF &t_24, (Tuple2_EC3B57) (&t_25));
  DeclNewRTS_ThreadTimingProperties(t_22);
  RTS_ThreadTimingProperties_apply(SF &t_22, (Option_882048) (&t_23), (Option_B47750) (&t_24));
  Type_assign(&_RTS_Schedulers_RTS_i_Instance_instrumentationMock_instrumentationMockThread_timingProperties, (&t_22), sizeof(struct RTS_ThreadTimingProperties));
};

void RTS_Schedulers_init_RTS_i_Instance_eventControlMock_eventControlMockThread_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(54);
  DeclNewSome_488F47(t_27);
  Some_488F47_apply(SF &t_27, Z_C(3));
  DeclNewTuple2_EC3B57(t_29);
  Tuple2_EC3B57_apply(SF &t_29, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_28);
  Some_80A548_apply(SF &t_28, (Tuple2_EC3B57) (&t_29));
  DeclNewRTS_ThreadTimingProperties(t_26);
  RTS_ThreadTimingProperties_apply(SF &t_26, (Option_882048) (&t_27), (Option_B47750) (&t_28));
  Type_assign(&_RTS_Schedulers_RTS_i_Instance_eventControlMock_eventControlMockThread_timingProperties, (&t_26), sizeof(struct RTS_ThreadTimingProperties));
};

void RTS_Schedulers_init_RTS_i_Instance_actuatorsMock_actuatorsMockThread_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(58);
  DeclNewSome_488F47(t_31);
  Some_488F47_apply(SF &t_31, Z_C(4));
  DeclNewTuple2_EC3B57(t_33);
  Tuple2_EC3B57_apply(SF &t_33, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_32);
  Some_80A548_apply(SF &t_32, (Tuple2_EC3B57) (&t_33));
  DeclNewRTS_ThreadTimingProperties(t_30);
  RTS_ThreadTimingProperties_apply(SF &t_30, (Option_882048) (&t_31), (Option_B47750) (&t_32));
  Type_assign(&_RTS_Schedulers_RTS_i_Instance_actuatorsMock_actuatorsMockThread_timingProperties, (&t_30), sizeof(struct RTS_ThreadTimingProperties));
};

void RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(62);
  DeclNewSome_488F47(t_35);
  Some_488F47_apply(SF &t_35, Z_C(5));
  DeclNewTuple2_EC3B57(t_37);
  Tuple2_EC3B57_apply(SF &t_37, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_36);
  Some_80A548_apply(SF &t_36, (Tuple2_EC3B57) (&t_37));
  DeclNewRTS_ThreadTimingProperties(t_34);
  RTS_ThreadTimingProperties_apply(SF &t_34, (Option_882048) (&t_35), (Option_B47750) (&t_36));
  Type_assign(&_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_timingProperties, (&t_34), sizeof(struct RTS_ThreadTimingProperties));
};

void RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(66);
  DeclNewSome_488F47(t_39);
  Some_488F47_apply(SF &t_39, Z_C(6));
  DeclNewTuple2_EC3B57(t_41);
  Tuple2_EC3B57_apply(SF &t_41, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_40);
  Some_80A548_apply(SF &t_40, (Tuple2_EC3B57) (&t_41));
  DeclNewRTS_ThreadTimingProperties(t_38);
  RTS_ThreadTimingProperties_apply(SF &t_38, (Option_882048) (&t_39), (Option_B47750) (&t_40));
  Type_assign(&_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_timingProperties, (&t_38), sizeof(struct RTS_ThreadTimingProperties));
};

void RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(70);
  DeclNewSome_488F47(t_43);
  Some_488F47_apply(SF &t_43, Z_C(7));
  DeclNewTuple2_EC3B57(t_45);
  Tuple2_EC3B57_apply(SF &t_45, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_44);
  Some_80A548_apply(SF &t_44, (Tuple2_EC3B57) (&t_45));
  DeclNewRTS_ThreadTimingProperties(t_42);
  RTS_ThreadTimingProperties_apply(SF &t_42, (Option_882048) (&t_43), (Option_B47750) (&t_44));
  Type_assign(&_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_timingProperties, (&t_42), sizeof(struct RTS_ThreadTimingProperties));
};

void RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(74);
  DeclNewSome_488F47(t_47);
  Some_488F47_apply(SF &t_47, Z_C(8));
  DeclNewTuple2_EC3B57(t_49);
  Tuple2_EC3B57_apply(SF &t_49, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_48);
  Some_80A548_apply(SF &t_48, (Tuple2_EC3B57) (&t_49));
  DeclNewRTS_ThreadTimingProperties(t_46);
  RTS_ThreadTimingProperties_apply(SF &t_46, (Option_882048) (&t_47), (Option_B47750) (&t_48));
  Type_assign(&_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_timingProperties, (&t_46), sizeof(struct RTS_ThreadTimingProperties));
};

void RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(78);
  DeclNewSome_488F47(t_51);
  Some_488F47_apply(SF &t_51, Z_C(9));
  DeclNewTuple2_EC3B57(t_53);
  Tuple2_EC3B57_apply(SF &t_53, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_52);
  Some_80A548_apply(SF &t_52, (Tuple2_EC3B57) (&t_53));
  DeclNewRTS_ThreadTimingProperties(t_50);
  RTS_ThreadTimingProperties_apply(SF &t_50, (Option_882048) (&t_51), (Option_B47750) (&t_52));
  Type_assign(&_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_timingProperties, (&t_50), sizeof(struct RTS_ThreadTimingProperties));
};

void RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(82);
  DeclNewSome_488F47(t_55);
  Some_488F47_apply(SF &t_55, Z_C(10));
  DeclNewTuple2_EC3B57(t_57);
  Tuple2_EC3B57_apply(SF &t_57, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_56);
  Some_80A548_apply(SF &t_56, (Tuple2_EC3B57) (&t_57));
  DeclNewRTS_ThreadTimingProperties(t_54);
  RTS_ThreadTimingProperties_apply(SF &t_54, (Option_882048) (&t_55), (Option_B47750) (&t_56));
  Type_assign(&_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_timingProperties, (&t_54), sizeof(struct RTS_ThreadTimingProperties));
};

void RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(86);
  DeclNewSome_488F47(t_59);
  Some_488F47_apply(SF &t_59, Z_C(11));
  DeclNewTuple2_EC3B57(t_61);
  Tuple2_EC3B57_apply(SF &t_61, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_60);
  Some_80A548_apply(SF &t_60, (Tuple2_EC3B57) (&t_61));
  DeclNewRTS_ThreadTimingProperties(t_58);
  RTS_ThreadTimingProperties_apply(SF &t_58, (Option_882048) (&t_59), (Option_B47750) (&t_60));
  Type_assign(&_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_timingProperties, (&t_58), sizeof(struct RTS_ThreadTimingProperties));
};

void RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(90);
  DeclNewSome_488F47(t_63);
  Some_488F47_apply(SF &t_63, Z_C(12));
  DeclNewTuple2_EC3B57(t_65);
  Tuple2_EC3B57_apply(SF &t_65, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_64);
  Some_80A548_apply(SF &t_64, (Tuple2_EC3B57) (&t_65));
  DeclNewRTS_ThreadTimingProperties(t_62);
  RTS_ThreadTimingProperties_apply(SF &t_62, (Option_882048) (&t_63), (Option_B47750) (&t_64));
  Type_assign(&_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_timingProperties, (&t_62), sizeof(struct RTS_ThreadTimingProperties));
};

void RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(94);
  DeclNewSome_488F47(t_67);
  Some_488F47_apply(SF &t_67, Z_C(13));
  DeclNewTuple2_EC3B57(t_69);
  Tuple2_EC3B57_apply(SF &t_69, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_68);
  Some_80A548_apply(SF &t_68, (Tuple2_EC3B57) (&t_69));
  DeclNewRTS_ThreadTimingProperties(t_66);
  RTS_ThreadTimingProperties_apply(SF &t_66, (Option_882048) (&t_67), (Option_B47750) (&t_68));
  Type_assign(&_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_timingProperties, (&t_66), sizeof(struct RTS_ThreadTimingProperties));
};

void RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(98);
  DeclNewSome_488F47(t_71);
  Some_488F47_apply(SF &t_71, Z_C(14));
  DeclNewTuple2_EC3B57(t_73);
  Tuple2_EC3B57_apply(SF &t_73, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_72);
  Some_80A548_apply(SF &t_72, (Tuple2_EC3B57) (&t_73));
  DeclNewRTS_ThreadTimingProperties(t_70);
  RTS_ThreadTimingProperties_apply(SF &t_70, (Option_882048) (&t_71), (Option_B47750) (&t_72));
  Type_assign(&_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_timingProperties, (&t_70), sizeof(struct RTS_ThreadTimingProperties));
};

void RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(102);
  DeclNewSome_488F47(t_75);
  Some_488F47_apply(SF &t_75, Z_C(15));
  DeclNewTuple2_EC3B57(t_77);
  Tuple2_EC3B57_apply(SF &t_77, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_76);
  Some_80A548_apply(SF &t_76, (Tuple2_EC3B57) (&t_77));
  DeclNewRTS_ThreadTimingProperties(t_74);
  RTS_ThreadTimingProperties_apply(SF &t_74, (Option_882048) (&t_75), (Option_B47750) (&t_76));
  Type_assign(&_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_timingProperties, (&t_74), sizeof(struct RTS_ThreadTimingProperties));
};

void RTS_Schedulers_init_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(106);
  DeclNewSome_488F47(t_79);
  Some_488F47_apply(SF &t_79, Z_C(16));
  DeclNewTuple2_EC3B57(t_81);
  Tuple2_EC3B57_apply(SF &t_81, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_80);
  Some_80A548_apply(SF &t_80, (Tuple2_EC3B57) (&t_81));
  DeclNewRTS_ThreadTimingProperties(t_78);
  RTS_ThreadTimingProperties_apply(SF &t_78, (Option_882048) (&t_79), (Option_B47750) (&t_80));
  Type_assign(&_RTS_Schedulers_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_timingProperties, (&t_78), sizeof(struct RTS_ThreadTimingProperties));
};

void RTS_Schedulers_init_roundRobinSchedule(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(116);
  {

    sfUpdateLoc(119);
    DeclNewIS_FDDCB6(_ret);
    IS_FDDCB6 ret = (IS_FDDCB6) &_ret;
    {
      STATIC_ASSERT(0 <= MaxIS_FDDCB6, "Insufficient maximum for IS[Z, art.Art.BridgeId] elements.");
      DeclNewIS_FDDCB6(t_82);
      t_82.size = (int8_t) 0;
      Type_assign(ret, (&t_82), sizeof(struct IS_FDDCB6));
    }

    sfUpdateLoc(120);
    {
      IS_058E6F t_85 = art_ArchitectureDescription_components_(RTS_Arch_ad(SF_LAST));
      int8_t t_86 = (art_ArchitectureDescription_components_(RTS_Arch_ad(SF_LAST)))->size;
      for (int8_t t_87 = 0; t_87 < t_86; t_87++) {
        art_Bridge e = (art_Bridge) &(t_85->value[t_87]);

        sfUpdateLoc(121);
        {
          art_Art_BridgeId t_83 = art_Bridge_id_(SF e);
          DeclNewIS_FDDCB6(t_84);
          IS_FDDCB6__append(SF (IS_FDDCB6) &t_84, ret, t_83);
          Type_assign(ret, ((IS_FDDCB6) &t_84), sizeof(struct IS_FDDCB6));
        }
      }
    }
    Type_assign(&_RTS_Schedulers_roundRobinSchedule, ret, sizeof(struct IS_FDDCB6));
  }
};

void RTS_Schedulers_init_framePeriod(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(138);
  _RTS_Schedulers_framePeriod = Z_C(1000);
};

void RTS_Schedulers_init_numComponents(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(139);
  Z t_88 = IS_058E6F_size(SF art_ArchitectureDescription_components_(RTS_Arch_ad(SF_LAST)));
  _RTS_Schedulers_numComponents = t_88;
};

void RTS_Schedulers_init_maxExecutionTime(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(140);
  _RTS_Schedulers_maxExecutionTime = Z__div(RTS_Schedulers_numComponents(SF_LAST), RTS_Schedulers_framePeriod(SF_LAST));
};

void RTS_Schedulers_init_defaultStaticSchedule(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(143);
  STATIC_ASSERT(15 <= MaxIS_5AA467, "Insufficient maximum for IS[Z, art.scheduling.static.Schedule.Slot] elements.");
  DeclNewIS_5AA467(t_91);
  t_91.size = (int8_t) 15;
  DeclNewart_scheduling_static_Schedule_Slot(t_92);
  art_scheduling_static_Schedule_Slot_apply(SF &t_92, Z_C(0), RTS_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_91, 0, (art_scheduling_static_Schedule_Slot) (&t_92));
  DeclNewart_scheduling_static_Schedule_Slot(t_93);
  art_scheduling_static_Schedule_Slot_apply(SF &t_93, Z_C(1), RTS_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_91, 1, (art_scheduling_static_Schedule_Slot) (&t_93));
  DeclNewart_scheduling_static_Schedule_Slot(t_94);
  art_scheduling_static_Schedule_Slot_apply(SF &t_94, Z_C(2), RTS_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_91, 2, (art_scheduling_static_Schedule_Slot) (&t_94));
  DeclNewart_scheduling_static_Schedule_Slot(t_95);
  art_scheduling_static_Schedule_Slot_apply(SF &t_95, Z_C(3), RTS_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_91, 3, (art_scheduling_static_Schedule_Slot) (&t_95));
  DeclNewart_scheduling_static_Schedule_Slot(t_96);
  art_scheduling_static_Schedule_Slot_apply(SF &t_96, Z_C(4), RTS_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_91, 4, (art_scheduling_static_Schedule_Slot) (&t_96));
  DeclNewart_scheduling_static_Schedule_Slot(t_97);
  art_scheduling_static_Schedule_Slot_apply(SF &t_97, Z_C(5), RTS_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_91, 5, (art_scheduling_static_Schedule_Slot) (&t_97));
  DeclNewart_scheduling_static_Schedule_Slot(t_98);
  art_scheduling_static_Schedule_Slot_apply(SF &t_98, Z_C(6), RTS_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_91, 6, (art_scheduling_static_Schedule_Slot) (&t_98));
  DeclNewart_scheduling_static_Schedule_Slot(t_99);
  art_scheduling_static_Schedule_Slot_apply(SF &t_99, Z_C(7), RTS_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_91, 7, (art_scheduling_static_Schedule_Slot) (&t_99));
  DeclNewart_scheduling_static_Schedule_Slot(t_100);
  art_scheduling_static_Schedule_Slot_apply(SF &t_100, Z_C(8), RTS_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_91, 8, (art_scheduling_static_Schedule_Slot) (&t_100));
  DeclNewart_scheduling_static_Schedule_Slot(t_101);
  art_scheduling_static_Schedule_Slot_apply(SF &t_101, Z_C(9), RTS_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_91, 9, (art_scheduling_static_Schedule_Slot) (&t_101));
  DeclNewart_scheduling_static_Schedule_Slot(t_102);
  art_scheduling_static_Schedule_Slot_apply(SF &t_102, Z_C(10), RTS_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_91, 10, (art_scheduling_static_Schedule_Slot) (&t_102));
  DeclNewart_scheduling_static_Schedule_Slot(t_103);
  art_scheduling_static_Schedule_Slot_apply(SF &t_103, Z_C(11), RTS_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_91, 11, (art_scheduling_static_Schedule_Slot) (&t_103));
  DeclNewart_scheduling_static_Schedule_Slot(t_104);
  art_scheduling_static_Schedule_Slot_apply(SF &t_104, Z_C(12), RTS_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_91, 12, (art_scheduling_static_Schedule_Slot) (&t_104));
  DeclNewart_scheduling_static_Schedule_Slot(t_105);
  art_scheduling_static_Schedule_Slot_apply(SF &t_105, Z_C(13), RTS_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_91, 13, (art_scheduling_static_Schedule_Slot) (&t_105));
  DeclNewart_scheduling_static_Schedule_Slot(t_106);
  art_scheduling_static_Schedule_Slot_apply(SF &t_106, Z_C(14), RTS_Schedulers_maxExecutionTime(SF_LAST));
  IS_5AA467_up(&t_91, 14, (art_scheduling_static_Schedule_Slot) (&t_106));
  DeclNewart_scheduling_static_Schedule_DSchedule(t_90);
  art_scheduling_static_Schedule_DSchedule_apply(SF &t_90, (IS_5AA467) (&t_91));
  DeclNewart_scheduling_static_Schedule_DScheduleSpec(t_89);
  art_scheduling_static_Schedule_DScheduleSpec_apply(SF &t_89, Z_C(0), Z_C(0), (art_scheduling_static_Schedule_DSchedule) (&t_90));
  Type_assign(&_RTS_Schedulers_defaultStaticSchedule, (&t_89), sizeof(struct art_scheduling_static_Schedule_DScheduleSpec));
};

void RTS_Schedulers_init_defaultDomainToBridgeIdMap(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(161);
  STATIC_ASSERT(15 <= MaxIS_FDDCB6, "Insufficient maximum for IS[Z, art.Art.BridgeId] elements.");
  DeclNewIS_FDDCB6(t_107);
  t_107.size = (int8_t) 15;
  IS_FDDCB6_up(&t_107, 0, (art_Art_BridgeId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_id_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)));
  IS_FDDCB6_up(&t_107, 1, (art_Art_BridgeId) RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_id_(RTS_Arch_RTS_i_Instance_eventControlMock_eventControlMockThread(SF_LAST)));
  IS_FDDCB6_up(&t_107, 2, (art_Art_BridgeId) RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_id_(RTS_Arch_RTS_i_Instance_actuatorsMock_actuatorsMockThread(SF_LAST)));
  IS_FDDCB6_up(&t_107, 3, (art_Art_BridgeId) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic(SF_LAST)));
  IS_FDDCB6_up(&t_107, 4, (art_Art_BridgeId) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic(SF_LAST)));
  IS_FDDCB6_up(&t_107, 5, (art_Art_BridgeId) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic(SF_LAST)));
  IS_FDDCB6_up(&t_107, 6, (art_Art_BridgeId) RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic(SF_LAST)));
  IS_FDDCB6_up(&t_107, 7, (art_Art_BridgeId) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic(SF_LAST)));
  IS_FDDCB6_up(&t_107, 8, (art_Art_BridgeId) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic(SF_LAST)));
  IS_FDDCB6_up(&t_107, 9, (art_Art_BridgeId) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic(SF_LAST)));
  IS_FDDCB6_up(&t_107, 10, (art_Art_BridgeId) RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic(SF_LAST)));
  IS_FDDCB6_up(&t_107, 11, (art_Art_BridgeId) RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic(SF_LAST)));
  IS_FDDCB6_up(&t_107, 12, (art_Art_BridgeId) RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator(SF_LAST)));
  IS_FDDCB6_up(&t_107, 13, (art_Art_BridgeId) RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic(SF_LAST)));
  IS_FDDCB6_up(&t_107, 14, (art_Art_BridgeId) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_id_(RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator(SF_LAST)));
  Type_assign(&_RTS_Schedulers_defaultDomainToBridgeIdMap, (&t_107), sizeof(struct IS_FDDCB6));
};