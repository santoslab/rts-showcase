#include <all.h>

B art_scheduling_static_StaticScheduler_initialized_ = F;

struct Map_EB5A91 _art_scheduling_static_StaticScheduler_threadNickNames;
struct IS_FDDCB6 _art_scheduling_static_StaticScheduler_domainToBridgeIdMap;

void art_scheduling_static_StaticScheduler_init(STACK_FRAME_ONLY) {
  if (art_scheduling_static_StaticScheduler_initialized_) return;
  art_scheduling_static_StaticScheduler_initialized_ = T;
  DeclNewStackFrame(caller, "StaticScheduler.scala", "art.scheduling.static.StaticScheduler", "<init>", 0);
  art_scheduling_static_StaticScheduler_init_threadNickNames(SF_LAST);
  art_scheduling_static_StaticScheduler_init_domainToBridgeIdMap(SF_LAST);
}

Map_EB5A91 art_scheduling_static_StaticScheduler_threadNickNames(STACK_FRAME_ONLY) {
  art_scheduling_static_StaticScheduler_init(CALLER_LAST);
  return (Map_EB5A91) &_art_scheduling_static_StaticScheduler_threadNickNames;
}

void art_scheduling_static_StaticScheduler_threadNickNames_a(STACK_FRAME Map_EB5A91 p_threadNickNames) {
  art_scheduling_static_StaticScheduler_init(CALLER_LAST);
  Type_assign(&_art_scheduling_static_StaticScheduler_threadNickNames, p_threadNickNames, sizeof(struct Map_EB5A91));
}

IS_FDDCB6 art_scheduling_static_StaticScheduler_domainToBridgeIdMap(STACK_FRAME_ONLY) {
  art_scheduling_static_StaticScheduler_init(CALLER_LAST);
  return (IS_FDDCB6) &_art_scheduling_static_StaticScheduler_domainToBridgeIdMap;
}

void art_scheduling_static_StaticScheduler_domainToBridgeIdMap_a(STACK_FRAME IS_FDDCB6 p_domainToBridgeIdMap) {
  art_scheduling_static_StaticScheduler_init(CALLER_LAST);
  Type_assign(&_art_scheduling_static_StaticScheduler_domainToBridgeIdMap, p_domainToBridgeIdMap, sizeof(struct IS_FDDCB6));
}

// art.scheduling.static.StaticScheduler

B art_scheduling_static_StaticScheduler__eq(art_scheduling_static_StaticScheduler this, art_scheduling_static_StaticScheduler other) {
  if (art_scheduling_static_Schedule_DScheduleSpec__ne((art_scheduling_static_Schedule_DScheduleSpec) &this->staticSchedule, (art_scheduling_static_Schedule_DScheduleSpec) &other->staticSchedule)) return F;
  if (IS_058E6F__ne((IS_058E6F) &this->bridges, (IS_058E6F) &other->bridges)) return F;
  if (IS_FDDCB6__ne((IS_FDDCB6) &this->domainToBridgeIdMap, (IS_FDDCB6) &other->domainToBridgeIdMap)) return F;
  if (Map_EB5A91__ne((Map_EB5A91) &this->threadNickNames, (Map_EB5A91) &other->threadNickNames)) return F;
  if (art_scheduling_static_CommandProvider__ne((art_scheduling_static_CommandProvider) &this->commandProvider, (art_scheduling_static_CommandProvider) &other->commandProvider)) return F;
  return T;
}

B art_scheduling_static_StaticScheduler__equiv(art_scheduling_static_StaticScheduler this, art_scheduling_static_StaticScheduler other) {
  if (art_scheduling_static_Schedule_DScheduleSpec__inequiv((art_scheduling_static_Schedule_DScheduleSpec) &this->staticSchedule, (art_scheduling_static_Schedule_DScheduleSpec) &other->staticSchedule)) return F;
  if (IS_058E6F__inequiv((IS_058E6F) &this->bridges, (IS_058E6F) &other->bridges)) return F;
  if (IS_FDDCB6__inequiv((IS_FDDCB6) &this->domainToBridgeIdMap, (IS_FDDCB6) &other->domainToBridgeIdMap)) return F;
  if (Map_EB5A91__inequiv((Map_EB5A91) &this->threadNickNames, (Map_EB5A91) &other->threadNickNames)) return F;
  if (art_scheduling_static_CommandProvider__inequiv((art_scheduling_static_CommandProvider) &this->commandProvider, (art_scheduling_static_CommandProvider) &other->commandProvider)) return F;
  return T;
}

B art_scheduling_static_StaticScheduler__ne(art_scheduling_static_StaticScheduler this, art_scheduling_static_StaticScheduler other);
B art_scheduling_static_StaticScheduler__inequiv(art_scheduling_static_StaticScheduler this, art_scheduling_static_StaticScheduler other);

void art_scheduling_static_StaticScheduler_string_(STACK_FRAME String result, art_scheduling_static_StaticScheduler this) {
  DeclNewStackFrame(caller, "StaticScheduler.scala", "art.scheduling.static.StaticScheduler", "string", 0);
  String_string_(SF result, string("StaticScheduler("));
  String sep = string(", ");
  art_scheduling_static_Schedule_DScheduleSpec_string_(SF result, (art_scheduling_static_Schedule_DScheduleSpec) &this->staticSchedule);
  String_string_(SF result, sep);
  IS_058E6F_string_(SF result, (IS_058E6F) &this->bridges);
  String_string_(SF result, sep);
  IS_FDDCB6_string_(SF result, (IS_FDDCB6) &this->domainToBridgeIdMap);
  String_string_(SF result, sep);
  Map_EB5A91_string_(SF result, (Map_EB5A91) &this->threadNickNames);
  String_string_(SF result, sep);
  art_scheduling_static_CommandProvider_string_(SF result, (art_scheduling_static_CommandProvider) &this->commandProvider);
  String_string_(SF result, string(")"));
}

void art_scheduling_static_StaticScheduler_cprint(art_scheduling_static_StaticScheduler this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("StaticScheduler("), isOut);
  String sep = string(", ");
  art_scheduling_static_Schedule_DScheduleSpec_cprint((art_scheduling_static_Schedule_DScheduleSpec) &this->staticSchedule, isOut);
  String_cprint(sep, isOut);
  IS_058E6F_cprint((IS_058E6F) &this->bridges, isOut);
  String_cprint(sep, isOut);
  IS_FDDCB6_cprint((IS_FDDCB6) &this->domainToBridgeIdMap, isOut);
  String_cprint(sep, isOut);
  Map_EB5A91_cprint((Map_EB5A91) &this->threadNickNames, isOut);
  String_cprint(sep, isOut);
  art_scheduling_static_CommandProvider_cprint((art_scheduling_static_CommandProvider) &this->commandProvider, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_StaticScheduler__is(STACK_FRAME void* this);
art_scheduling_static_StaticScheduler art_scheduling_static_StaticScheduler__as(STACK_FRAME void *this);

void art_scheduling_static_StaticScheduler_apply(STACK_FRAME art_scheduling_static_StaticScheduler this, art_scheduling_static_Schedule_DScheduleSpec staticSchedule, IS_058E6F bridges, IS_FDDCB6 domainToBridgeIdMap, Map_EB5A91 threadNickNames, art_scheduling_static_CommandProvider commandProvider) {
  DeclNewStackFrame(caller, "StaticScheduler.scala", "art.scheduling.static.StaticScheduler", "apply", 0);
  Type_assign(&this->staticSchedule, staticSchedule, sizeof(struct art_scheduling_static_Schedule_DScheduleSpec));
  Type_assign(&this->bridges, bridges, sizeof(struct IS_058E6F));
  Type_assign(&this->domainToBridgeIdMap, domainToBridgeIdMap, sizeof(struct IS_FDDCB6));
  Type_assign(&this->threadNickNames, threadNickNames, sizeof(struct Map_EB5A91));
  Type_assign(&this->commandProvider, commandProvider, sizeof(union art_scheduling_static_CommandProvider));
}

Unit art_scheduling_static_StaticScheduler_initialize_(STACK_FRAME art_scheduling_static_StaticScheduler this) {
  DeclNewStackFrame(caller, "StaticScheduler.scala", "art.scheduling.static.StaticScheduler", "initialize", 0);

  sfUpdateLoc(29);
  {
    art_scheduling_static_StaticScheduler_threadNickNames_a(SF (Map_EB5A91) art_scheduling_static_StaticScheduler_threadNickNames_(this));
  }

  sfUpdateLoc(30);
  {
    art_scheduling_static_StaticScheduler_domainToBridgeIdMap_a(SF (IS_FDDCB6) art_scheduling_static_StaticScheduler_domainToBridgeIdMap_(this));
  }

  sfUpdateLoc(32);
  {
    art_scheduling_static_Schedule_setSchedule(SF (art_scheduling_static_Schedule_DScheduleSpec) art_scheduling_static_StaticScheduler_staticSchedule_(this), (IS_FDDCB6) art_scheduling_static_StaticScheduler_domainToBridgeIdMap_(this));
  }

  sfUpdateLoc(34);
  {
    art_scheduling_static_Explorer_initializeScheduleStateIMP(SF_LAST);
  }
}

Unit art_scheduling_static_StaticScheduler_initializationPhase_(STACK_FRAME art_scheduling_static_StaticScheduler this) {
  DeclNewStackFrame(caller, "StaticScheduler.scala", "art.scheduling.static.StaticScheduler", "initializationPhase", 0);

  sfUpdateLoc(38);
  {
    IS_FDDCB6 t_3 = art_scheduling_static_StaticScheduler_domainToBridgeIdMap_(this);
    int8_t t_4 = (art_scheduling_static_StaticScheduler_domainToBridgeIdMap_(this))->size;
    for (int8_t t_5 = 0; t_5 < t_4; t_5++) {
      art_Art_BridgeId bridgeId = t_3->value[t_5];

      sfUpdateLoc(39);
      {
        DeclNewart_Bridge_EntryPoints(t_0);
        art_Bridge_entryPoints_(SF (art_Bridge_EntryPoints) &t_0, IS_058E6F_at(art_scheduling_static_StaticScheduler_bridges_(this), bridgeId));
        art_Bridge_EntryPoints_initialise_(SF ((art_Bridge_EntryPoints) &t_0));
      }

      sfUpdateLoc(40);
      {
        DeclNewString(t_1);
        String_string_(SF (String) &t_1, string("Initialized bridge: "));
        DeclNewString(t_2);
        art_Bridge_name_(SF (String) &t_2, IS_058E6F_at(art_scheduling_static_StaticScheduler_bridges_(this), bridgeId));
        String_string_(SF (String) &t_1, ((String) &t_2));
        String_string_(SF (String) &t_1, string(""));
        art_Art_logInfo(SF bridgeId, (String) ((String) &t_1));
      }
    }
  }
}

Unit art_scheduling_static_StaticScheduler_computePhase_(STACK_FRAME art_scheduling_static_StaticScheduler this) {
  DeclNewStackFrame(caller, "StaticScheduler.scala", "art.scheduling.static.StaticScheduler", "computePhase", 0);

  sfUpdateLoc(45);
  B done;
  {
    done = F;
  }

  sfUpdateLoc(46);
  B t_46_5;
  {
    t_46_5 = (!done);
  }
  while(t_46_5) {

    sfUpdateLoc(47);
    {
      DeclNewart_scheduling_static_Command(t_0);
      art_scheduling_static_CommandProvider_nextCommand_(SF (art_scheduling_static_Command) &t_0, art_scheduling_static_StaticScheduler_commandProvider_(this));
      B t_1 = art_scheduling_static_CommandInterpreter_interpretCmd(SF (art_scheduling_static_Command) ((art_scheduling_static_Command) &t_0));
      done = t_1;
    }

    sfUpdateLoc(46);
    t_46_5 = (!done);
  }
}

Unit art_scheduling_static_StaticScheduler_finalizePhase_(STACK_FRAME art_scheduling_static_StaticScheduler this) {
  DeclNewStackFrame(caller, "StaticScheduler.scala", "art.scheduling.static.StaticScheduler", "finalizePhase", 0);

  sfUpdateLoc(52);
  {
    IS_FDDCB6 t_3 = art_scheduling_static_StaticScheduler_domainToBridgeIdMap_(this);
    int8_t t_4 = (art_scheduling_static_StaticScheduler_domainToBridgeIdMap_(this))->size;
    for (int8_t t_5 = 0; t_5 < t_4; t_5++) {
      art_Art_BridgeId bridgeId = t_3->value[t_5];

      sfUpdateLoc(53);
      {
        DeclNewart_Bridge_EntryPoints(t_0);
        art_Bridge_entryPoints_(SF (art_Bridge_EntryPoints) &t_0, IS_058E6F_at(art_scheduling_static_StaticScheduler_bridges_(this), bridgeId));
        art_Bridge_EntryPoints_finalise_(SF ((art_Bridge_EntryPoints) &t_0));
      }

      sfUpdateLoc(54);
      {
        DeclNewString(t_1);
        String_string_(SF (String) &t_1, string("Finalized bridge: "));
        DeclNewString(t_2);
        art_Bridge_name_(SF (String) &t_2, IS_058E6F_at(art_scheduling_static_StaticScheduler_bridges_(this), bridgeId));
        String_string_(SF (String) &t_1, ((String) &t_2));
        String_string_(SF (String) &t_1, string(""));
        art_Art_logInfo(SF bridgeId, (String) ((String) &t_1));
      }
    }
  }
}

Z art_scheduling_static_StaticScheduler_bridgeIdToDomainMap(STACK_FRAME art_Art_BridgeId bridgeId) {
  DeclNewStackFrame(caller, "StaticScheduler.scala", "art.scheduling.static.StaticScheduler", "bridgeIdToDomainMap", 0);

  sfUpdateLoc(14);
  {
    Z i;
    {
      i = Z_C(0);
    }
    Z t_0;
    {
      Z t_1 = IS_FDDCB6_size(SF art_scheduling_static_StaticScheduler_domainToBridgeIdMap(SF_LAST));
      t_0 = t_1;
    }
    Z t_2;
    {
      t_2 = (Z) 1;
    }
    while (i < t_0) {
      if (art_Art_BridgeId__eq(bridgeId, IS_FDDCB6_at(art_scheduling_static_StaticScheduler_domainToBridgeIdMap(SF_LAST), i))) {
        return i;
      }

      sfUpdateLoc(14);
      i = (Z) (i + t_2);
    }
  }

  sfUpdateLoc(17);
  {
    if (!(F)) {
      DeclNewString(t_3);
      String_string_(SF (String) &t_3, string("domain for "));
      art_Art_BridgeId_string_(SF (String) &t_3, bridgeId);
      String_string_(SF (String) &t_3, string(" not found"));
      sfAbort((((String) &t_3))->value);
    }
  }

  sfUpdateLoc(18);
  {
    DeclNewString(t_4);
    String t_5 = (String) &t_4;
    DeclNewString(t_6);
    String_string_(SF (String) &t_6, string("domain for "));
    art_Art_BridgeId_string_(SF (String) &t_6, bridgeId);
    String_string_(SF (String) &t_6, string(" not found"));
    String_string_(SF t_5, ((String) &t_6));
    sfAbort(t_5->value);
    abort();
  }
}

void art_scheduling_static_StaticScheduler_init_threadNickNames(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(10);
  DeclNewMap_EB5A91(t_0);
  Map_empty_E4CC14(SF (Map_EB5A91) &t_0);
  Type_assign(&_art_scheduling_static_StaticScheduler_threadNickNames, ((Map_EB5A91) &t_0), sizeof(struct Map_EB5A91));
};

void art_scheduling_static_StaticScheduler_init_domainToBridgeIdMap(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(11);
  STATIC_ASSERT(0 <= MaxIS_FDDCB6, "Insufficient maximum for IS[Z, art.Art.BridgeId] elements.");
  DeclNewIS_FDDCB6(t_1);
  t_1.size = (int8_t) 0;
  Type_assign(&_art_scheduling_static_StaticScheduler_domainToBridgeIdMap, (&t_1), sizeof(struct IS_FDDCB6));
};