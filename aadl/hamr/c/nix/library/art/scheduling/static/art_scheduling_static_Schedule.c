#include <all.h>

B art_scheduling_static_Schedule_initialized_ = F;

struct art_scheduling_static_Schedule_DScheduleSpec _art_scheduling_static_Schedule_emptyDScheduleSpec;
struct art_scheduling_static_Schedule_DScheduleSpec _art_scheduling_static_Schedule_dScheduleSpec;
struct IS_FDDCB6 _art_scheduling_static_Schedule_domainToBridgeIdMap;

void art_scheduling_static_Schedule_init(STACK_FRAME_ONLY) {
  if (art_scheduling_static_Schedule_initialized_) return;
  art_scheduling_static_Schedule_initialized_ = T;
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule", "<init>", 0);
  art_scheduling_static_Schedule_init_emptyDScheduleSpec(SF_LAST);
  art_scheduling_static_Schedule_init_dScheduleSpec(SF_LAST);
  art_scheduling_static_Schedule_init_domainToBridgeIdMap(SF_LAST);
}

art_scheduling_static_Schedule_DScheduleSpec art_scheduling_static_Schedule_emptyDScheduleSpec(STACK_FRAME_ONLY) {
  art_scheduling_static_Schedule_init(CALLER_LAST);
  return (art_scheduling_static_Schedule_DScheduleSpec) &_art_scheduling_static_Schedule_emptyDScheduleSpec;
}

art_scheduling_static_Schedule_DScheduleSpec art_scheduling_static_Schedule_dScheduleSpec(STACK_FRAME_ONLY) {
  art_scheduling_static_Schedule_init(CALLER_LAST);
  return (art_scheduling_static_Schedule_DScheduleSpec) &_art_scheduling_static_Schedule_dScheduleSpec;
}

void art_scheduling_static_Schedule_dScheduleSpec_a(STACK_FRAME art_scheduling_static_Schedule_DScheduleSpec p_dScheduleSpec) {
  art_scheduling_static_Schedule_init(CALLER_LAST);
  Type_assign(&_art_scheduling_static_Schedule_dScheduleSpec, p_dScheduleSpec, sizeof(struct art_scheduling_static_Schedule_DScheduleSpec));
}

IS_FDDCB6 art_scheduling_static_Schedule_domainToBridgeIdMap(STACK_FRAME_ONLY) {
  art_scheduling_static_Schedule_init(CALLER_LAST);
  return (IS_FDDCB6) &_art_scheduling_static_Schedule_domainToBridgeIdMap;
}

void art_scheduling_static_Schedule_domainToBridgeIdMap_a(STACK_FRAME IS_FDDCB6 p_domainToBridgeIdMap) {
  art_scheduling_static_Schedule_init(CALLER_LAST);
  Type_assign(&_art_scheduling_static_Schedule_domainToBridgeIdMap, p_domainToBridgeIdMap, sizeof(struct IS_FDDCB6));
}

Unit art_scheduling_static_Schedule_setSchedule(STACK_FRAME art_scheduling_static_Schedule_DScheduleSpec spec, IS_FDDCB6 domainsToBridgeMap) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule", "setSchedule", 0);

  sfUpdateLoc(45);
  {
    B t_0 = art_scheduling_static_Schedule_validDScheduleSpec(SF (art_scheduling_static_Schedule_DScheduleSpec) spec);
    B t_1 = t_0;
  }

  sfUpdateLoc(48);
  {
    art_scheduling_static_Schedule_dScheduleSpec_a(SF (art_scheduling_static_Schedule_DScheduleSpec) spec);
  }

  sfUpdateLoc(49);
  {
    art_scheduling_static_Schedule_domainToBridgeIdMap_a(SF (IS_FDDCB6) domainsToBridgeMap);
  }
}

B art_scheduling_static_Schedule_validDScheduleSpec(STACK_FRAME art_scheduling_static_Schedule_DScheduleSpec dScheduleSpec) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule", "validDScheduleSpec", 0);
  B t_0 = F;
  B t_1 = F;
  B t_2 = art_scheduling_static_Schedule_checkMaxDomain(SF (art_scheduling_static_Schedule_DScheduleSpec) dScheduleSpec);
  if (t_2) {
    B t_3 = art_scheduling_static_Schedule_checkNoMissingDomain(SF (art_scheduling_static_Schedule_DScheduleSpec) dScheduleSpec);
    t_1 = t_3;
  }
  if (t_1) {
    B t_4 = art_scheduling_static_Schedule_checkHyperPeriodTicks(SF (art_scheduling_static_Schedule_DScheduleSpec) dScheduleSpec);
    t_0 = t_4;
  }
  return t_0;
}

Z art_scheduling_static_Schedule_getDomainFromScheduleState(STACK_FRAME art_scheduling_static_Explorer_ScheduleState scheduleState) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule", "getDomainFromScheduleState", 0);
  Z t_0 = art_scheduling_static_Schedule_getDomainFromSlotNum(SF art_scheduling_static_Explorer_ScheduleState_slotNum_(scheduleState));
  return t_0;
}

art_Art_BridgeId art_scheduling_static_Schedule_getBridgeIdFromScheduleState(STACK_FRAME art_scheduling_static_Explorer_ScheduleState scheduleState) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule", "getBridgeIdFromScheduleState", 0);
  art_Art_BridgeId t_0 = art_scheduling_static_Schedule_getBridgeIdFromSlotNumber(SF art_scheduling_static_Explorer_ScheduleState_slotNum_(scheduleState));
  return t_0;
}

void art_scheduling_static_Schedule_threadNickName(STACK_FRAME String result, art_Art_BridgeId bridgeId) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule", "threadNickName", 0);

  sfUpdateLoc(78);
  {
    IS_588B23 t_1 = Map_EB5A91_entries_(art_scheduling_static_StaticScheduler_threadNickNames(SF_LAST));
    int8_t t_2 = (Map_EB5A91_entries_(art_scheduling_static_StaticScheduler_threadNickNames(SF_LAST)))->size;
    for (int8_t t_3 = 0; t_3 < t_2; t_3++) {
      Tuple2_E0098E e = (Tuple2_E0098E) &(t_1->value[t_3]);

      sfUpdateLoc(79);
      B t_0;
      {
        t_0 = art_Art_BridgeId__eq(Tuple2_E0098E_2(e), bridgeId);
      }
      if (t_0) {
        Type_assign(result, Tuple2_E0098E_1(e), sizeof(struct StaticString));
        return;
      }
    }
  }
  Type_assign(result, string("<not found>"), sizeof(struct StaticString));
  return;
}

B art_scheduling_static_Schedule_checkMaxDomain(STACK_FRAME art_scheduling_static_Schedule_DScheduleSpec dScheduleSpec) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule", "checkMaxDomain", 0);

  sfUpdateLoc(104);
  {
    IS_5AA467 t_0 = art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(dScheduleSpec));
    int8_t t_1 = (art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(dScheduleSpec)))->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      art_scheduling_static_Schedule_Slot s = (art_scheduling_static_Schedule_Slot) &(t_0->value[t_2]);
      if (Z__gt(art_scheduling_static_Schedule_Slot_domain_(s), art_scheduling_static_Schedule_DScheduleSpec_maxDomain_(dScheduleSpec))) {
        return F;
      }
    }
  }
  return T;
}

B art_scheduling_static_Schedule_checkNoMissingDomain(STACK_FRAME art_scheduling_static_Schedule_DScheduleSpec dScheduleSpec) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule", "checkNoMissingDomain", 0);

  sfUpdateLoc(116);
  {
    Z d;
    {
      d = Z_C(0);
    }
    Z t_5;
    {
      t_5 = art_scheduling_static_Schedule_DScheduleSpec_maxDomain_(dScheduleSpec);
    }
    Z t_6;
    {
      t_6 = (Z) 1;
    }
    while (d < t_5) {

      sfUpdateLoc(117);
      B exists;
      {
        exists = F;
      }

      sfUpdateLoc(118);
      {
        IS_5AA467 t_1 = art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(dScheduleSpec));
        int8_t t_2 = (art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(dScheduleSpec)))->size;
        for (int8_t t_3 = 0; t_3 < t_2; t_3++) {
          art_scheduling_static_Schedule_Slot s = (art_scheduling_static_Schedule_Slot) &(t_1->value[t_3]);
          if ((!exists)) {

            sfUpdateLoc(119);
            {
              B t_0 = T;
              if (!exists) {
                t_0 = Z__eq(art_scheduling_static_Schedule_Slot_domain_(s), d);
              }
              exists = t_0;
            }
          }
        }
      }

      sfUpdateLoc(121);
      B t_4;
      {
        t_4 = (!exists);
      }
      if (t_4) {
        return F;
      }

      sfUpdateLoc(116);
      d = (Z) (d + t_6);
    }
  }
  return T;
}

B art_scheduling_static_Schedule_checkHyperPeriodTicks(STACK_FRAME art_scheduling_static_Schedule_DScheduleSpec dScheduleSpec) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule", "checkHyperPeriodTicks", 0);

  sfUpdateLoc(130);
  Z computedHyperPeriod;
  {
    computedHyperPeriod = Z_C(0);
  }

  sfUpdateLoc(131);
  {
    IS_5AA467 t_0 = art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(dScheduleSpec));
    int8_t t_1 = (art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(dScheduleSpec)))->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      art_scheduling_static_Schedule_Slot s = (art_scheduling_static_Schedule_Slot) &(t_0->value[t_2]);

      sfUpdateLoc(132);
      {
        computedHyperPeriod = Z__add(computedHyperPeriod, art_scheduling_static_Schedule_Slot_length_(s));
      }
    }
  }
  return Z__eq(computedHyperPeriod, art_scheduling_static_Schedule_DScheduleSpec_hyperPeriod_(dScheduleSpec));
}

Z art_scheduling_static_Schedule_getDomainFromSlotNum(STACK_FRAME Z slotNum) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule", "getDomainFromSlotNum", 0);
  return art_scheduling_static_Schedule_Slot_domain_(IS_5AA467_at(art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST))), slotNum));
}

art_Art_BridgeId art_scheduling_static_Schedule_getBridgeIdFromSlotNumber(STACK_FRAME Z slotNum) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule", "getBridgeIdFromSlotNumber", 0);
  art_Art_BridgeId t_0 = art_scheduling_static_Schedule_getBridgeIdFromSlot(SF (art_scheduling_static_Schedule_Slot) IS_5AA467_at(art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST))), slotNum));
  return t_0;
}

void art_scheduling_static_Schedule_computeElaspedRemainingHPTicks(STACK_FRAME Tuple2_EC3B57 result, Z slotNum, art_scheduling_static_Schedule_DScheduleSpec dScheduleSpec) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule", "computeElaspedRemainingHPTicks", 0);

  sfUpdateLoc(195);
  {
    Z t_0 = IS_5AA467_size(SF art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(dScheduleSpec)));
    if (!(B__and(Z__le(Z_C(0), slotNum), Z__lt(slotNum, t_0)))) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(197);
  Z elaspedHPTicks;
  {
    elaspedHPTicks = Z_C(0);
  }

  sfUpdateLoc(198);
  {
    Z s;
    {
      s = Z_C(0);
    }
    Z t_1;
    {
      t_1 = slotNum;
    }
    Z t_2;
    {
      t_2 = (Z) 1;
    }
    while (s < t_1) {

      sfUpdateLoc(199);
      {
        elaspedHPTicks = Z__add(elaspedHPTicks, art_scheduling_static_Schedule_Slot_length_(IS_5AA467_at(art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(dScheduleSpec)), Z_C(0))));
      }

      sfUpdateLoc(198);
      s = (Z) (s + t_2);
    }
  }

  sfUpdateLoc(201);
  Z remainingHPTicks;
  {
    remainingHPTicks = Z__sub(art_scheduling_static_Schedule_DScheduleSpec_hyperPeriod_(dScheduleSpec), elaspedHPTicks);
  }
  DeclNewTuple2_EC3B57(t_3);
  Tuple2_EC3B57_apply(SF &t_3, elaspedHPTicks, remainingHPTicks);
  Type_assign(result, (&t_3), sizeof(struct Tuple2_EC3B57));
  return;
}

art_Art_BridgeId art_scheduling_static_Schedule_getBridgeIdFromSlot(STACK_FRAME art_scheduling_static_Schedule_Slot slot) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule", "getBridgeIdFromSlot", 0);
  return IS_FDDCB6_at(art_scheduling_static_Schedule_domainToBridgeIdMap(SF_LAST), art_scheduling_static_Schedule_Slot_domain_(slot));
}

void art_scheduling_static_Schedule_getThreadNickNameFromScheduleState(STACK_FRAME String result, art_scheduling_static_Explorer_ScheduleState scheduleState) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule", "getThreadNickNameFromScheduleState", 0);

  sfUpdateLoc(87);
  art_Art_BridgeId bridgeId;
  {
    art_Art_BridgeId t_0 = art_scheduling_static_Schedule_getBridgeIdFromSlotNumber(SF art_scheduling_static_Explorer_ScheduleState_slotNum_(scheduleState));
    bridgeId = t_0;
  }
  DeclNewString(t_1);
  art_scheduling_static_Schedule_threadNickName(SF (String) &t_1, bridgeId);
  Type_assign(result, ((String) &t_1), sizeof(struct StaticString));
  return;
}

void art_scheduling_static_Schedule_init_emptyDScheduleSpec(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(35);
  STATIC_ASSERT(0 <= MaxIS_5AA467, "Insufficient maximum for IS[Z, art.scheduling.static.Schedule.Slot] elements.");
  DeclNewIS_5AA467(t_2);
  t_2.size = (int8_t) 0;
  DeclNewart_scheduling_static_Schedule_DSchedule(t_1);
  art_scheduling_static_Schedule_DSchedule_apply(SF &t_1, (IS_5AA467) (&t_2));
  DeclNewart_scheduling_static_Schedule_DScheduleSpec(t_0);
  art_scheduling_static_Schedule_DScheduleSpec_apply(SF &t_0, Z_C(0), Z_C(0), (art_scheduling_static_Schedule_DSchedule) (&t_1));
  Type_assign(&_art_scheduling_static_Schedule_emptyDScheduleSpec, (&t_0), sizeof(struct art_scheduling_static_Schedule_DScheduleSpec));
};

void art_scheduling_static_Schedule_init_dScheduleSpec(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(39);
  Type_assign(&_art_scheduling_static_Schedule_dScheduleSpec, art_scheduling_static_Schedule_emptyDScheduleSpec(SF_LAST), sizeof(struct art_scheduling_static_Schedule_DScheduleSpec));
};

void art_scheduling_static_Schedule_init_domainToBridgeIdMap(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(40);
  STATIC_ASSERT(0 <= MaxIS_FDDCB6, "Insufficient maximum for IS[Z, art.Art.BridgeId] elements.");
  DeclNewIS_FDDCB6(t_3);
  t_3.size = (int8_t) 0;
  Type_assign(&_art_scheduling_static_Schedule_domainToBridgeIdMap, (&t_3), sizeof(struct IS_FDDCB6));
};