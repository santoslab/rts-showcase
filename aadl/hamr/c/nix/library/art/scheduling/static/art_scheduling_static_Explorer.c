#include <all.h>

B art_scheduling_static_Explorer_initialized_ = F;

struct art_scheduling_static_Explorer_ScheduleState _art_scheduling_static_Explorer_scheduleState;

void art_scheduling_static_Explorer_init(STACK_FRAME_ONLY) {
  if (art_scheduling_static_Explorer_initialized_) return;
  art_scheduling_static_Explorer_initialized_ = T;
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "<init>", 0);
  art_scheduling_static_Explorer_init_scheduleState(SF_LAST);
}

art_scheduling_static_Explorer_ScheduleState art_scheduling_static_Explorer_scheduleState(STACK_FRAME_ONLY) {
  art_scheduling_static_Explorer_init(CALLER_LAST);
  return (art_scheduling_static_Explorer_ScheduleState) &_art_scheduling_static_Explorer_scheduleState;
}

void art_scheduling_static_Explorer_scheduleState_a(STACK_FRAME art_scheduling_static_Explorer_ScheduleState p_scheduleState) {
  art_scheduling_static_Explorer_init(CALLER_LAST);
  Type_assign(&_art_scheduling_static_Explorer_scheduleState, p_scheduleState, sizeof(struct art_scheduling_static_Explorer_ScheduleState));
}

Unit art_scheduling_static_Explorer_initializeScheduleStateIMP(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "initializeScheduleStateIMP", 0);

  sfUpdateLoc(66);
  {
    DeclNewart_scheduling_static_Explorer_ScheduleState(t_0);
    art_scheduling_static_Explorer_initialScheduleState(SF (art_scheduling_static_Explorer_ScheduleState) &t_0);
    art_scheduling_static_Explorer_scheduleState_a(SF (art_scheduling_static_Explorer_ScheduleState) ((art_scheduling_static_Explorer_ScheduleState) &t_0));
  }
}

void art_scheduling_static_Explorer_initialScheduleState(STACK_FRAME art_scheduling_static_Explorer_ScheduleState result) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "initialScheduleState", 0);
  DeclNewart_scheduling_static_Explorer_ScheduleState(t_0);
  art_scheduling_static_Explorer_ScheduleState_apply(SF &t_0, Z_C(0), Z_C(0));
  Type_assign(result, (&t_0), sizeof(struct art_scheduling_static_Explorer_ScheduleState));
  return;
}

Unit art_scheduling_static_Explorer_stepSystemNSlotsIMP(STACK_FRAME Z numSlots) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "stepSystemNSlotsIMP", 0);

  sfUpdateLoc(168);
  {
    if (!(Z__gt(numSlots, Z_C(0)))) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(170);
  {
    B t_0 = art_scheduling_static_Explorer_validState(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST), (art_scheduling_static_Schedule_DScheduleSpec) art_scheduling_static_Schedule_dScheduleSpec(SF_LAST));
    if (!(t_0)) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(172);
  {
    Z i;
    {
      i = Z_C(1);
    }
    Z t_1;
    {
      t_1 = numSlots;
    }
    Z t_2;
    {
      t_2 = (Z) 1;
    }
    while (i <= t_1) {

      sfUpdateLoc(173);
      {
        art_scheduling_static_Explorer_stepSystemOneSlotIMP(SF T);
      }

      sfUpdateLoc(172);
      i = (Z) (i + t_2);
    }
  }
}

Unit art_scheduling_static_Explorer_stepSystemOneHPIMP(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "stepSystemOneHPIMP", 0);

  sfUpdateLoc(182);
  {
    B t_0 = art_scheduling_static_Explorer_validState(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST), (art_scheduling_static_Schedule_DScheduleSpec) art_scheduling_static_Schedule_dScheduleSpec(SF_LAST));
    if (!(t_0)) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(184);
  Z numStepsToStartOfHP;
  {
    Z t_1 = IS_5AA467_size(SF art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST))));
    numStepsToStartOfHP = Z__sub(t_1, art_scheduling_static_Explorer_ScheduleState_slotNum_(art_scheduling_static_Explorer_scheduleState(SF_LAST)));
  }

  sfUpdateLoc(185);
  {
    art_scheduling_static_Explorer_stepSystemNSlotsIMP(SF numStepsToStartOfHP);
  }

  sfUpdateLoc(187);
  {
    B t_2 = art_scheduling_static_Explorer_isHyperPeriodBoundary(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST));
    if (!(t_2)) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(189);
  {
    art_scheduling_static_CliInfoProvider_showHyperPeriodBoundary(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST));
  }
}

B art_scheduling_static_Explorer_isHyperPeriodBoundaryH(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "isHyperPeriodBoundaryH", 0);
  B t_0 = art_scheduling_static_Explorer_isHyperPeriodBoundary(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST));
  return t_0;
}

Unit art_scheduling_static_Explorer_stepSystemNHPIMP(STACK_FRAME Z numHyperPeriods) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "stepSystemNHPIMP", 0);

  sfUpdateLoc(196);
  {
    Z hpcount;
    {
      hpcount = Z_C(1);
    }
    Z t_0;
    {
      t_0 = numHyperPeriods;
    }
    Z t_1;
    {
      t_1 = (Z) 1;
    }
    while (hpcount <= t_0) {

      sfUpdateLoc(197);
      {
        art_scheduling_static_Explorer_stepSystemOneHPIMP(SF_LAST);
      }

      sfUpdateLoc(196);
      hpcount = (Z) (hpcount + t_1);
    }
  }
}

Unit art_scheduling_static_Explorer_runToHP(STACK_FRAME Z hpNum) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "runToHP", 0);

  sfUpdateLoc(204);
  {
    B t_0 = art_scheduling_static_Explorer_validState(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST), (art_scheduling_static_Schedule_DScheduleSpec) art_scheduling_static_Schedule_dScheduleSpec(SF_LAST));
    if (!(t_0)) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(205);
  {
    if (!(Z__ge(hpNum, Z_C(0)))) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(208);
  {
    DeclNewString(t_1);
    String_string_(SF (String) &t_1, string("...Running to beginning of hyper-period# "));
    Z_string_(SF (String) &t_1, hpNum);
    String_string_(SF (String) &t_1, string(""));
    art_scheduling_static_CliInfoProvider_message(SF (String) ((String) &t_1));
  }

  sfUpdateLoc(210);
  B t_210_5;
  {
    t_210_5 = Z__lt(art_scheduling_static_Explorer_ScheduleState_hyperperiodNum_(art_scheduling_static_Explorer_scheduleState(SF_LAST)), hpNum);
  }
  while(t_210_5) {

    sfUpdateLoc(211);
    {
      art_scheduling_static_Explorer_stepSystemOneSlotIMP(SF F);
    }

    sfUpdateLoc(210);
    t_210_5 = Z__lt(art_scheduling_static_Explorer_ScheduleState_hyperperiodNum_(art_scheduling_static_Explorer_scheduleState(SF_LAST)), hpNum);
  }

  sfUpdateLoc(214);
  {
    art_scheduling_static_CliInfoProvider_message(SF (String) string("*********** Run to ... Completed *************"));
  }

  sfUpdateLoc(216);
  {
    art_scheduling_static_CliInfoProvider_showStateH(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST));
  }
}

Unit art_scheduling_static_Explorer_runToSlot(STACK_FRAME Z slotNum) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "runToSlot", 0);

  sfUpdateLoc(244);
  {
    B t_0 = art_scheduling_static_Explorer_validState(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST), (art_scheduling_static_Schedule_DScheduleSpec) art_scheduling_static_Schedule_dScheduleSpec(SF_LAST));
    if (!(t_0)) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(245);
  {
    Z t_1 = IS_5AA467_size(SF art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST))));
    if (!(B__and(Z__ge(slotNum, Z_C(0)), Z__lt(slotNum, t_1)))) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(247);
  B t_247_5;
  {
    t_247_5 = Z__ne(art_scheduling_static_Explorer_ScheduleState_slotNum_(art_scheduling_static_Explorer_scheduleState(SF_LAST)), slotNum);
  }
  while(t_247_5) {

    sfUpdateLoc(248);
    {
      art_scheduling_static_Explorer_stepSystemOneSlotIMP(SF F);
    }

    sfUpdateLoc(247);
    t_247_5 = Z__ne(art_scheduling_static_Explorer_ScheduleState_slotNum_(art_scheduling_static_Explorer_scheduleState(SF_LAST)), slotNum);
  }

  sfUpdateLoc(251);
  {
    art_scheduling_static_CliInfoProvider_message(SF (String) string("*********** Run to ... Completed *************"));
  }

  sfUpdateLoc(253);
  {
    art_scheduling_static_CliInfoProvider_showStateH(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST));
  }
}

Unit art_scheduling_static_Explorer_runToThread(STACK_FRAME String threadNickName) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "runToThread", 0);

  sfUpdateLoc(277);
  {
    B t_0 = art_scheduling_static_Explorer_validState(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST), (art_scheduling_static_Schedule_DScheduleSpec) art_scheduling_static_Schedule_dScheduleSpec(SF_LAST));
    if (!(t_0)) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(278);
  art_Art_BridgeId bridgeId;
  {
    DeclNewOption_0E107D(t_1);
    Map_EB5A91_get_(SF (Option_0E107D) &t_1, art_scheduling_static_StaticScheduler_threadNickNames(SF_LAST), (String) threadNickName);
    art_Art_BridgeId t_2 = Option_0E107D_get_(SF ((Option_0E107D) &t_1));
    bridgeId = t_2;
  }

  sfUpdateLoc(279);
  Z domainId;
  {
    Z t_3 = art_scheduling_static_StaticScheduler_bridgeIdToDomainMap(SF bridgeId);
    domainId = t_3;
  }

  sfUpdateLoc(281);
  {
    DeclNewString(t_4);
    String_string_(SF (String) &t_4, string("...Running to thread "));
    String_string_(SF (String) &t_4, threadNickName);
    String_string_(SF (String) &t_4, string(" (domain "));
    Z_string_(SF (String) &t_4, domainId);
    String_string_(SF (String) &t_4, string(")"));
    art_scheduling_static_CliInfoProvider_message(SF (String) ((String) &t_4));
  }

  sfUpdateLoc(282);
  B t_282_5;
  {
    t_282_5 = Z__ne(art_scheduling_static_Schedule_Slot_domain_(IS_5AA467_at(art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST))), art_scheduling_static_Explorer_ScheduleState_slotNum_(art_scheduling_static_Explorer_scheduleState(SF_LAST)))), domainId);
  }
  while(t_282_5) {

    sfUpdateLoc(283);
    {
      art_scheduling_static_Explorer_stepSystemOneSlotIMP(SF F);
    }

    sfUpdateLoc(282);
    t_282_5 = Z__ne(art_scheduling_static_Schedule_Slot_domain_(IS_5AA467_at(art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST))), art_scheduling_static_Explorer_ScheduleState_slotNum_(art_scheduling_static_Explorer_scheduleState(SF_LAST)))), domainId);
  }

  sfUpdateLoc(285);
  {
    art_scheduling_static_CliInfoProvider_message(SF (String) string("*********** Run to ... Completed *************"));
  }

  sfUpdateLoc(287);
  {
    art_scheduling_static_CliInfoProvider_showStateH(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST));
  }
}

Unit art_scheduling_static_Explorer_runToState(STACK_FRAME Z hpNum, Z slotNum) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "runToState", 0);

  sfUpdateLoc(222);
  {
    B t_0 = art_scheduling_static_Explorer_validState(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST), (art_scheduling_static_Schedule_DScheduleSpec) art_scheduling_static_Schedule_dScheduleSpec(SF_LAST));
    if (!(t_0)) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(223);
  {
    if (!(Z__ge(hpNum, Z_C(0)))) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(224);
  {
    Z t_1 = IS_5AA467_size(SF art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST))));
    if (!(B__and(Z__ge(slotNum, Z_C(0)), Z__lt(slotNum, t_1)))) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(227);
  {
    DeclNewString(t_2);
    String_string_(SF (String) &t_2, string("...Running to state [hp = "));
    Z_string_(SF (String) &t_2, hpNum);
    String_string_(SF (String) &t_2, string(", slot = "));
    Z_string_(SF (String) &t_2, slotNum);
    String_string_(SF (String) &t_2, string("]"));
    art_scheduling_static_CliInfoProvider_message(SF (String) ((String) &t_2));
  }

  sfUpdateLoc(229);
  B t_229_5;
  {
    t_229_5 = Z__lt(art_scheduling_static_Explorer_ScheduleState_hyperperiodNum_(art_scheduling_static_Explorer_scheduleState(SF_LAST)), hpNum);
  }
  while(t_229_5) {

    sfUpdateLoc(230);
    {
      art_scheduling_static_Explorer_stepSystemOneSlotIMP(SF F);
    }

    sfUpdateLoc(229);
    t_229_5 = Z__lt(art_scheduling_static_Explorer_ScheduleState_hyperperiodNum_(art_scheduling_static_Explorer_scheduleState(SF_LAST)), hpNum);
  }

  sfUpdateLoc(232);
  B t_232_5;
  {
    t_232_5 = Z__lt(art_scheduling_static_Explorer_ScheduleState_slotNum_(art_scheduling_static_Explorer_scheduleState(SF_LAST)), slotNum);
  }
  while(t_232_5) {

    sfUpdateLoc(233);
    {
      art_scheduling_static_Explorer_stepSystemOneSlotIMP(SF F);
    }

    sfUpdateLoc(232);
    t_232_5 = Z__lt(art_scheduling_static_Explorer_ScheduleState_slotNum_(art_scheduling_static_Explorer_scheduleState(SF_LAST)), slotNum);
  }

  sfUpdateLoc(236);
  {
    art_scheduling_static_CliInfoProvider_message(SF (String) string("*********** Run to ... Completed *************"));
  }

  sfUpdateLoc(238);
  {
    art_scheduling_static_CliInfoProvider_showStateH(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST));
  }
}

Unit art_scheduling_static_Explorer_runToDomain(STACK_FRAME Z domainId) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "runToDomain", 0);

  sfUpdateLoc(259);
  {
    B t_0 = art_scheduling_static_Explorer_validState(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST), (art_scheduling_static_Schedule_DScheduleSpec) art_scheduling_static_Schedule_dScheduleSpec(SF_LAST));
    if (!(t_0)) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(260);
  {
    if (!(B__and(Z__ge(domainId, Z_C(0)), Z__le(domainId, art_scheduling_static_Schedule_DScheduleSpec_maxDomain_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST)))))) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(262);
  {
    DeclNewString(t_1);
    String_string_(SF (String) &t_1, string("...Running to domain "));
    Z_string_(SF (String) &t_1, domainId);
    String_string_(SF (String) &t_1, string(""));
    art_scheduling_static_CliInfoProvider_message(SF (String) ((String) &t_1));
  }

  sfUpdateLoc(264);
  B t_264_5;
  {
    t_264_5 = Z__ne(art_scheduling_static_Schedule_Slot_domain_(IS_5AA467_at(art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST))), art_scheduling_static_Explorer_ScheduleState_slotNum_(art_scheduling_static_Explorer_scheduleState(SF_LAST)))), domainId);
  }
  while(t_264_5) {

    sfUpdateLoc(265);
    {
      art_scheduling_static_Explorer_stepSystemOneSlotIMP(SF F);
    }

    sfUpdateLoc(264);
    t_264_5 = Z__ne(art_scheduling_static_Schedule_Slot_domain_(IS_5AA467_at(art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST))), art_scheduling_static_Explorer_ScheduleState_slotNum_(art_scheduling_static_Explorer_scheduleState(SF_LAST)))), domainId);
  }

  sfUpdateLoc(268);
  {
    art_scheduling_static_CliInfoProvider_message(SF (String) string("*********** Run to ... Completed *************"));
  }

  sfUpdateLoc(270);
  {
    art_scheduling_static_CliInfoProvider_showStateH(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST));
  }
}

B art_scheduling_static_Explorer_validState(STACK_FRAME art_scheduling_static_Explorer_ScheduleState state, art_scheduling_static_Schedule_DScheduleSpec dScheduleSpec) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "validState", 0);

  sfUpdateLoc(41);
  Z slotNum;
  {
    slotNum = art_scheduling_static_Explorer_ScheduleState_slotNum_(state);
  }

  sfUpdateLoc(43);
  B slotInRange;
  {
    Z t_0 = IS_5AA467_size(SF art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(dScheduleSpec)));
    slotInRange = B__and(Z__ge(slotNum, Z_C(0)), Z__lt(slotNum, t_0));
  }

  sfUpdateLoc(44);
  B hyperperiodInRange;
  {
    hyperperiodInRange = Z__ge(art_scheduling_static_Explorer_ScheduleState_hyperperiodNum_(state), Z_C(0));
  }
  return B__and(slotInRange, hyperperiodInRange);
}

Unit art_scheduling_static_Explorer_stepSystemOneSlotIMP(STACK_FRAME B info) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "stepSystemOneSlotIMP", 0);

  sfUpdateLoc(153);
  {
    B t_0 = art_scheduling_static_Explorer_validState(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST), (art_scheduling_static_Schedule_DScheduleSpec) art_scheduling_static_Schedule_dScheduleSpec(SF_LAST));
    if (!(t_0)) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(156);
  art_scheduling_static_Explorer_ScheduleState preScheduleState;
  preScheduleState = (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST);

  sfUpdateLoc(157);
  {
    art_scheduling_static_Explorer_executeSlotNumIMP(SF art_scheduling_static_Explorer_ScheduleState_slotNum_(art_scheduling_static_Explorer_scheduleState(SF_LAST)));
  }

  sfUpdateLoc(159);
  {
    art_scheduling_static_Explorer_advanceStateIMP(SF_LAST);
  }

  sfUpdateLoc(160);
  art_scheduling_static_Explorer_ScheduleState postScheduleState;
  postScheduleState = (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST);

  sfUpdateLoc(161);
  B t_1;
  {
    t_1 = info;
  }
  if (t_1) {

    sfUpdateLoc(162);
    {
      art_scheduling_static_CliInfoProvider_showStep(SF (art_scheduling_static_Explorer_ScheduleState) preScheduleState, (art_scheduling_static_Explorer_ScheduleState) postScheduleState, (art_scheduling_static_Schedule_DScheduleSpec) art_scheduling_static_Schedule_dScheduleSpec(SF_LAST));
    }
  }
}

B art_scheduling_static_Explorer_isHyperPeriodBoundary(STACK_FRAME art_scheduling_static_Explorer_ScheduleState state) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "isHyperPeriodBoundary", 0);
  return Z__eq(art_scheduling_static_Explorer_ScheduleState_slotNum_(state), Z_C(0));
}

void art_scheduling_static_Explorer_previousState(STACK_FRAME Option_069397 result, art_scheduling_static_Explorer_ScheduleState state, art_scheduling_static_Schedule_DScheduleSpec dScheduleSpec) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "previousState", 0);

  sfUpdateLoc(126);
  {
    B t_0 = art_scheduling_static_Explorer_validState(SF (art_scheduling_static_Explorer_ScheduleState) state, (art_scheduling_static_Schedule_DScheduleSpec) dScheduleSpec);
    if (!(t_0)) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(128);
  B t_1;
  {
    B t_2 = art_scheduling_static_Explorer_isInitial(SF (art_scheduling_static_Explorer_ScheduleState) state);
    t_1 = t_2;
  }
  if (t_1) {
    DeclNewNone_336F0A(t_3);
    None_336F0A_apply(SF &t_3);
    Type_assign(result, (&t_3), sizeof(struct None_336F0A));
    return;
  }

  sfUpdateLoc(132);
  IS_5AA467 slots;
  slots = (IS_5AA467) art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(dScheduleSpec));

  sfUpdateLoc(134);
  Z nextSlotNum;
  {
    nextSlotNum = Z__sub(art_scheduling_static_Explorer_ScheduleState_slotNum_(state), Z_C(1));
  }

  sfUpdateLoc(135);
  Z nextHyperPeriodNum;
  {
    nextHyperPeriodNum = art_scheduling_static_Explorer_ScheduleState_hyperperiodNum_(state);
  }

  sfUpdateLoc(138);
  B t_4;
  {
    t_4 = Z__eq(art_scheduling_static_Explorer_ScheduleState_slotNum_(state), Z_C(0));
  }
  if (t_4) {

    sfUpdateLoc(139);
    {
      Z t_5 = IS_5AA467_size(SF slots);
      nextSlotNum = Z__sub(t_5, Z_C(1));
    }

    sfUpdateLoc(140);
    {
      nextHyperPeriodNum = Z__sub(nextHyperPeriodNum, Z_C(1));
    }
  }
  DeclNewart_scheduling_static_Explorer_ScheduleState(t_7);
  art_scheduling_static_Explorer_ScheduleState_apply(SF &t_7, nextSlotNum, nextHyperPeriodNum);
  DeclNewSome_6D5259(t_6);
  Some_6D5259_apply(SF &t_6, (art_scheduling_static_Explorer_ScheduleState) (&t_7));
  Type_assign(result, (&t_6), sizeof(struct Some_6D5259));
  return;
}

Unit art_scheduling_static_Explorer_executeSlotNumIMP(STACK_FRAME Z slotNum) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "executeSlotNumIMP", 0);

  sfUpdateLoc(99);
  {
    Z t_0 = IS_5AA467_size(SF art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST))));
    if (!(B__and(Z__ge(slotNum, Z_C(0)), Z__lt(slotNum, t_0)))) {
      DeclNewString(t_1);
      String_string_(SF (String) &t_1, string("slotNum: "));
      Z_string_(SF (String) &t_1, slotNum);
      String_string_(SF (String) &t_1, string(", Slot Size: "));
      Z t_2 = IS_5AA467_size(SF art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST))));
      Z_string_(SF (String) &t_1, t_2);
      String_string_(SF (String) &t_1, string(""));
      sfAbort((((String) &t_1))->value);
    }
  }

  sfUpdateLoc(101);
  IS_5AA467 slots;
  slots = (IS_5AA467) art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST)));

  sfUpdateLoc(102);
  {
    art_scheduling_static_Explorer_executeSlotIMP(SF (art_scheduling_static_Schedule_Slot) IS_5AA467_at(slots, slotNum));
  }
}

Unit art_scheduling_static_Explorer_advanceStateIMP(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "advanceStateIMP", 0);

  sfUpdateLoc(147);
  {
    DeclNewart_scheduling_static_Explorer_ScheduleState(t_0);
    art_scheduling_static_Explorer_nextState(SF (art_scheduling_static_Explorer_ScheduleState) &t_0, (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST), (art_scheduling_static_Schedule_DScheduleSpec) art_scheduling_static_Schedule_dScheduleSpec(SF_LAST));
    art_scheduling_static_Explorer_scheduleState_a(SF (art_scheduling_static_Explorer_ScheduleState) ((art_scheduling_static_Explorer_ScheduleState) &t_0));
  }
}

B art_scheduling_static_Explorer_isInitial(STACK_FRAME art_scheduling_static_Explorer_ScheduleState scheduleState) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "isInitial", 0);
  DeclNewart_scheduling_static_Explorer_ScheduleState(t_0);
  art_scheduling_static_Explorer_initialScheduleState(SF (art_scheduling_static_Explorer_ScheduleState) &t_0);
  return art_scheduling_static_Explorer_ScheduleState__eq(scheduleState, ((art_scheduling_static_Explorer_ScheduleState) &t_0));
}

Unit art_scheduling_static_Explorer_executeSlotIMP(STACK_FRAME art_scheduling_static_Schedule_Slot slot) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "executeSlotIMP", 0);

  sfUpdateLoc(84);
  Z domainId;
  {
    domainId = art_scheduling_static_Schedule_Slot_domain_(slot);
  }

  sfUpdateLoc(85);
  art_Art_BridgeId bridgeId;
  {
    bridgeId = IS_FDDCB6_at(art_scheduling_static_Schedule_domainToBridgeIdMap(SF_LAST), domainId);
  }

  sfUpdateLoc(91);
  B t_0;
  {
    t_0 = art_ArtNativeSlang_shouldDispatch(SF bridgeId);
  }
  if (t_0) {

    sfUpdateLoc(92);
    {
      Z t_1 = art_Art_BridgeId_toZ_(SF bridgeId);
      DeclNewart_Bridge(t_2);
      Option_7BBFBE_get_(SF (art_Bridge) &t_2, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_1));
      DeclNewart_Bridge_EntryPoints(t_3);
      art_Bridge_entryPoints_(SF (art_Bridge_EntryPoints) &t_3, ((art_Bridge) &t_2));
      art_Bridge_EntryPoints_compute_(SF ((art_Bridge_EntryPoints) &t_3));
    }
  }
}

void art_scheduling_static_Explorer_nextState(STACK_FRAME art_scheduling_static_Explorer_ScheduleState result, art_scheduling_static_Explorer_ScheduleState state, art_scheduling_static_Schedule_DScheduleSpec dScheduleSpec) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer", "nextState", 0);

  sfUpdateLoc(110);
  {
    B t_0 = art_scheduling_static_Explorer_validState(SF (art_scheduling_static_Explorer_ScheduleState) state, (art_scheduling_static_Schedule_DScheduleSpec) dScheduleSpec);
    if (!(t_0)) { sfAbort("Assertion failure"); }
  }

  sfUpdateLoc(112);
  IS_5AA467 slots;
  slots = (IS_5AA467) art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(dScheduleSpec));

  sfUpdateLoc(113);
  Z nextSlotNum;
  {
    nextSlotNum = Z__add(art_scheduling_static_Explorer_ScheduleState_slotNum_(state), Z_C(1));
  }

  sfUpdateLoc(114);
  Z nextHyperPeriodNum;
  {
    nextHyperPeriodNum = art_scheduling_static_Explorer_ScheduleState_hyperperiodNum_(state);
  }

  sfUpdateLoc(116);
  B t_1;
  {
    Z t_2 = IS_5AA467_size(SF slots);
    t_1 = Z__eq(nextSlotNum, t_2);
  }
  if (t_1) {

    sfUpdateLoc(117);
    {
      nextSlotNum = Z_C(0);
    }

    sfUpdateLoc(118);
    {
      nextHyperPeriodNum = Z__add(nextHyperPeriodNum, Z_C(1));
    }
  }
  DeclNewart_scheduling_static_Explorer_ScheduleState(t_3);
  art_scheduling_static_Explorer_ScheduleState_apply(SF &t_3, nextSlotNum, nextHyperPeriodNum);
  Type_assign(result, (&t_3), sizeof(struct art_scheduling_static_Explorer_ScheduleState));
  return;
}

void art_scheduling_static_Explorer_init_scheduleState(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(57);
  DeclNewart_scheduling_static_Explorer_ScheduleState(t_0);
  art_scheduling_static_Explorer_initialScheduleState(SF (art_scheduling_static_Explorer_ScheduleState) &t_0);
  Type_assign(&_art_scheduling_static_Explorer_scheduleState, ((art_scheduling_static_Explorer_ScheduleState) &t_0), sizeof(struct art_scheduling_static_Explorer_ScheduleState));
};