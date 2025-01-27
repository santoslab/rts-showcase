#include <all.h>

Unit art_scheduling_static_CliInfoProvider_printHelpMessage(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CliInfoProvider.scala", "art.scheduling.static.CliInfoProvider", "printHelpMessage", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(16);
  {
    String_cprint(string("s <n\?>     - step n slots (default 0)"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(17);
  {
    String_cprint(string("h <n\?>     - step n hyper-periods (default 0)"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(18);
  {
    String_cprint(string("rs <n>     - run to slot n (wrap to next hyper-period if needed)"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(19);
  {
    String_cprint(string("rs <h> <n> - run to state hyperperiod h and slot n (do nothing if past this state)"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(20);
  {
    String_cprint(string("rh <n>     - run to hyper-period n (do nothing if already past the beginning of hyper-period n)"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(21);
  {
    String_cprint(string("rt <name>  - run to slot containing thread with nickname <name>"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(22);
  {
    String_cprint(string("i st       - show current state"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(23);
  {
    String_cprint(string("i sc       - show schedule and current position"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(24);
  {
    String_cprint(string("i out      - show output port values of most recently run thread"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(25);
  {
    String_cprint(string("i in       - show input  port values of next thread to run"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(26);
  {
    String_cprint(string("i cp <nickname> - show port values of component with given nickname"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(27);
  {
    String_cprint(string("i nn       - show thread nicknames"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(28);
  {
    String_cprint(string("x          - exit"), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(29);
  {
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit art_scheduling_static_CliInfoProvider_showState(STACK_FRAME art_scheduling_static_Explorer_ScheduleState scheduleState, Z domain, art_Art_BridgeId bridgeId, String threadNickName) {
  DeclNewStackFrame(caller, "CliInfoProvider.scala", "art.scheduling.static.CliInfoProvider", "showState", 0);

  sfUpdateLoc(55);
  {
    DeclNewString(t_0);
    art_scheduling_static_CliInfoProvider_formatState(SF (String) &t_0, (art_scheduling_static_Explorer_ScheduleState) scheduleState, domain, bridgeId, (String) threadNickName);
    art_scheduling_static_CliInfoProvider_message(SF (String) ((String) &t_0));
  }
}

inline B art_scheduling_static_CliInfoProvider_showSchedule_extract_74_13_EC3B57(STACK_FRAME_SF Tuple2_EC3B57 t_2, Z *_elaspedHPTicks, Z *_remainingHPTicks) {
  *_elaspedHPTicks = Tuple2_EC3B57_1(t_2);
  *_remainingHPTicks = Tuple2_EC3B57_2(t_2);
  return T;
}

Unit art_scheduling_static_CliInfoProvider_showSchedule(STACK_FRAME art_scheduling_static_Explorer_ScheduleState scheduleState, art_scheduling_static_Schedule_DScheduleSpec dScheduleSpec) {
  DeclNewStackFrame(caller, "CliInfoProvider.scala", "art.scheduling.static.CliInfoProvider", "showSchedule", 0);

  sfUpdateLoc(63);
  IS_5AA467 slots;
  slots = (IS_5AA467) art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(dScheduleSpec));

  sfUpdateLoc(64);
  Z hyperPeriodLength;
  {
    hyperPeriodLength = art_scheduling_static_Schedule_DScheduleSpec_hyperPeriod_(dScheduleSpec);
  }

  sfUpdateLoc(65);
  Z hyperPeriodNum;
  {
    hyperPeriodNum = art_scheduling_static_Explorer_ScheduleState_hyperperiodNum_(scheduleState);
  }

  sfUpdateLoc(66);
  Z stateSlotNum;
  {
    stateSlotNum = art_scheduling_static_Explorer_ScheduleState_slotNum_(scheduleState);
  }

  sfUpdateLoc(67);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string(" Schedule ("));
    Z_string_(SF (String) &t_0, hyperPeriodLength);
    String_string_(SF (String) &t_0, string(" tot ticks) HP#: "));
    Z_string_(SF (String) &t_0, hyperPeriodNum);
    String_string_(SF (String) &t_0, string(""));
    art_scheduling_static_CliInfoProvider_message(SF (String) ((String) &t_0));
  }

  sfUpdateLoc(68);
  {
    art_scheduling_static_CliInfoProvider_message(SF (String) string("-------------------------------------------------"));
  }

  sfUpdateLoc(69);
  Z slotNum;
  {
    slotNum = Z_C(0);
  }

  sfUpdateLoc(70);
  {
    IS_5AA467 t_6 = slots;
    int8_t t_7 = (slots)->size;
    for (int8_t t_8 = 0; t_8 < t_7; t_8++) {
      art_scheduling_static_Schedule_Slot s = (art_scheduling_static_Schedule_Slot) &(t_6->value[t_8]);

      sfUpdateLoc(71);
      DeclNewString(_prefix);
      String prefix = (String) &_prefix;
      {
        Type_assign(prefix, string("  "), sizeof(struct StaticString));
      }

      sfUpdateLoc(72);
      DeclNewString(_suffix);
      String suffix = (String) &_suffix;
      {
        Type_assign(suffix, string(""), sizeof(struct StaticString));
      }

      sfUpdateLoc(73);
      B t_1;
      {
        t_1 = Z__eq(slotNum, stateSlotNum);
      }
      if (t_1) {

        sfUpdateLoc(74);
        Tuple2_EC3B57 t_2;
        DeclNewTuple2_EC3B57(t_3);
        art_scheduling_static_Schedule_computeElaspedRemainingHPTicks(SF (Tuple2_EC3B57) &t_3, slotNum, (art_scheduling_static_Schedule_DScheduleSpec) dScheduleSpec);
        t_2 = (Tuple2_EC3B57) ((Tuple2_EC3B57) &t_3);
        Z elaspedHPTicks;
        Z remainingHPTicks;
        sfAssert(art_scheduling_static_CliInfoProvider_showSchedule_extract_74_13_EC3B57(SF t_2, &elaspedHPTicks, &remainingHPTicks), "Error during var pattern matching.");

        sfUpdateLoc(75);
        {
          Type_assign(prefix, string(" *"), sizeof(struct StaticString));
        }

        sfUpdateLoc(76);
        {
          DeclNewString(t_4);
          String_string_(SF (String) &t_4, string("(elapsed= "));
          Z_string_(SF (String) &t_4, elaspedHPTicks);
          String_string_(SF (String) &t_4, string(", remaining="));
          Z_string_(SF (String) &t_4, remainingHPTicks);
          String_string_(SF (String) &t_4, string(")"));
          Type_assign(suffix, ((String) &t_4), sizeof(struct StaticString));
        }
      }

      sfUpdateLoc(78);
      {
        DeclNewString(t_5);
        String_string_(SF (String) &t_5, string(""));
        String_string_(SF (String) &t_5, prefix);
        String_string_(SF (String) &t_5, string(""));
        Z_string_(SF (String) &t_5, slotNum);
        String_string_(SF (String) &t_5, string(" [domain="));
        Z_string_(SF (String) &t_5, art_scheduling_static_Schedule_Slot_domain_(s));
        String_string_(SF (String) &t_5, string(",length="));
        Z_string_(SF (String) &t_5, art_scheduling_static_Schedule_Slot_length_(s));
        String_string_(SF (String) &t_5, string("] "));
        String_string_(SF (String) &t_5, suffix);
        String_string_(SF (String) &t_5, string(""));
        art_scheduling_static_CliInfoProvider_message(SF (String) ((String) &t_5));
      }

      sfUpdateLoc(79);
      {
        slotNum = Z__add(slotNum, Z_C(1));
      }
    }
  }

  sfUpdateLoc(81);
  {
    art_scheduling_static_CliInfoProvider_message(SF (String) string("-------------------------------------------------"));
  }
}

Unit art_scheduling_static_CliInfoProvider_showNickNames(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CliInfoProvider.scala", "art.scheduling.static.CliInfoProvider", "showNickNames", 0);

  sfUpdateLoc(47);
  {
    art_scheduling_static_CliInfoProvider_message(SF (String) string(" Thread Nicknames"));
  }

  sfUpdateLoc(48);
  {
    art_scheduling_static_CliInfoProvider_message(SF (String) string("-------------------"));
  }

  sfUpdateLoc(49);
  {
    DeclNewIS_948B60(t_3);
    Map_EB5A91_keys_(SF (IS_948B60) &t_3, art_scheduling_static_StaticScheduler_threadNickNames(SF_LAST));
    IS_948B60 t_0 = ((IS_948B60) &t_3);
    int8_t t_1 = (((IS_948B60) &t_3))->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      String e = (String) &(t_0->value[t_2]);

      sfUpdateLoc(50);
      {
        art_scheduling_static_CliInfoProvider_message(SF (String) e);
      }
    }
  }
}

Unit art_scheduling_static_CliInfoProvider_message(STACK_FRAME String m) {
  DeclNewStackFrame(caller, "CliInfoProvider.scala", "art.scheduling.static.CliInfoProvider", "message", 0);

  sfUpdateLoc(12);
  {
    art_scheduling_static_StaticSchedulerIO_message(SF (String) m);
  }
}

Unit art_scheduling_static_CliInfoProvider_showHyperPeriodBoundary(STACK_FRAME art_scheduling_static_Explorer_ScheduleState scheduleState) {
  DeclNewStackFrame(caller, "CliInfoProvider.scala", "art.scheduling.static.CliInfoProvider", "showHyperPeriodBoundary", 0);

  sfUpdateLoc(99);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string("********* Hyper-Period "));
    Z_string_(SF (String) &t_0, art_scheduling_static_Explorer_ScheduleState_hyperperiodNum_(scheduleState));
    String_string_(SF (String) &t_0, string(" (beginning) **********"));
    art_scheduling_static_CliInfoProvider_message(SF (String) ((String) &t_0));
  }
}

Unit art_scheduling_static_CliInfoProvider_showStateH(STACK_FRAME art_scheduling_static_Explorer_ScheduleState scheduleState) {
  DeclNewStackFrame(caller, "CliInfoProvider.scala", "art.scheduling.static.CliInfoProvider", "showStateH", 0);

  sfUpdateLoc(59);
  {
    DeclNewString(t_0);
    art_scheduling_static_CliInfoProvider_formatStateH(SF (String) &t_0, (art_scheduling_static_Explorer_ScheduleState) scheduleState);
    art_scheduling_static_CliInfoProvider_message(SF (String) ((String) &t_0));
  }
}

void art_scheduling_static_CliInfoProvider_formatState(STACK_FRAME String result, art_scheduling_static_Explorer_ScheduleState scheduleState, Z domain, art_Art_BridgeId bridgeId, String threadNickName) {
  DeclNewStackFrame(caller, "CliInfoProvider.scala", "art.scheduling.static.CliInfoProvider", "formatState", 0);
  DeclNewString(t_0);
  String_string_(SF (String) &t_0, string("STATE: HP#: "));
  Z_string_(SF (String) &t_0, art_scheduling_static_Explorer_ScheduleState_hyperperiodNum_(scheduleState));
  String_string_(SF (String) &t_0, string(" slot#: "));
  Z_string_(SF (String) &t_0, art_scheduling_static_Explorer_ScheduleState_slotNum_(scheduleState));
  String_string_(SF (String) &t_0, string(" domain: "));
  Z_string_(SF (String) &t_0, domain);
  String_string_(SF (String) &t_0, string("  thread: "));
  String_string_(SF (String) &t_0, threadNickName);
  String_string_(SF (String) &t_0, string(" ("));
  art_Art_BridgeId_string_(SF (String) &t_0, bridgeId);
  String_string_(SF (String) &t_0, string(")"));
  Type_assign(result, ((String) &t_0), sizeof(struct StaticString));
  return;
}

Unit art_scheduling_static_CliInfoProvider_showStep(STACK_FRAME art_scheduling_static_Explorer_ScheduleState preScheduleState, art_scheduling_static_Explorer_ScheduleState postScheduleState, art_scheduling_static_Schedule_DScheduleSpec dScheduleSpec) {
  DeclNewStackFrame(caller, "CliInfoProvider.scala", "art.scheduling.static.CliInfoProvider", "showStep", 0);

  sfUpdateLoc(87);
  Z slotNum;
  {
    slotNum = art_scheduling_static_Explorer_ScheduleState_slotNum_(preScheduleState);
  }

  sfUpdateLoc(88);
  art_scheduling_static_Schedule_Slot slot;
  slot = (art_scheduling_static_Schedule_Slot) IS_5AA467_at(art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(dScheduleSpec)), slotNum);

  sfUpdateLoc(89);
  Z domain;
  {
    domain = art_scheduling_static_Schedule_Slot_domain_(slot);
  }

  sfUpdateLoc(90);
  art_Art_BridgeId bridgeId;
  {
    art_Art_BridgeId t_0 = art_scheduling_static_Schedule_getBridgeIdFromSlotNumber(SF slotNum);
    bridgeId = t_0;
  }

  sfUpdateLoc(91);
  Z length;
  {
    length = art_scheduling_static_Schedule_Slot_length_(slot);
  }

  sfUpdateLoc(92);
  {
    art_scheduling_static_CliInfoProvider_message(SF (String) string("============= S t e p ============="));
  }

  sfUpdateLoc(93);
  {
    DeclNewString(t_1);
    String_string_(SF (String) &t_1, string("PRE-"));
    Z t_2 = art_scheduling_static_Schedule_getDomainFromScheduleState(SF (art_scheduling_static_Explorer_ScheduleState) preScheduleState);
    art_Art_BridgeId t_3 = art_scheduling_static_Schedule_getBridgeIdFromScheduleState(SF (art_scheduling_static_Explorer_ScheduleState) preScheduleState);
    DeclNewString(t_4);
    art_scheduling_static_Schedule_getThreadNickNameFromScheduleState(SF (String) &t_4, (art_scheduling_static_Explorer_ScheduleState) preScheduleState);
    DeclNewString(t_5);
    art_scheduling_static_CliInfoProvider_formatState(SF (String) &t_5, (art_scheduling_static_Explorer_ScheduleState) preScheduleState, t_2, t_3, (String) ((String) &t_4));
    String_string_(SF (String) &t_1, ((String) &t_5));
    String_string_(SF (String) &t_1, string(""));
    art_scheduling_static_CliInfoProvider_message(SF (String) ((String) &t_1));
  }

  sfUpdateLoc(94);
  {
    DeclNewString(t_6);
    String_string_(SF (String) &t_6, string("   Executing:  Domain#: "));
    Z_string_(SF (String) &t_6, domain);
    String_string_(SF (String) &t_6, string("   Max Duration: "));
    Z_string_(SF (String) &t_6, length);
    String_string_(SF (String) &t_6, string(""));
    art_scheduling_static_CliInfoProvider_message(SF (String) ((String) &t_6));
  }

  sfUpdateLoc(95);
  {
    DeclNewString(t_7);
    String_string_(SF (String) &t_7, string("POST-"));
    Z t_8 = art_scheduling_static_Schedule_getDomainFromScheduleState(SF (art_scheduling_static_Explorer_ScheduleState) postScheduleState);
    art_Art_BridgeId t_9 = art_scheduling_static_Schedule_getBridgeIdFromScheduleState(SF (art_scheduling_static_Explorer_ScheduleState) postScheduleState);
    DeclNewString(t_10);
    art_scheduling_static_Schedule_getThreadNickNameFromScheduleState(SF (String) &t_10, (art_scheduling_static_Explorer_ScheduleState) postScheduleState);
    DeclNewString(t_11);
    art_scheduling_static_CliInfoProvider_formatState(SF (String) &t_11, (art_scheduling_static_Explorer_ScheduleState) postScheduleState, t_8, t_9, (String) ((String) &t_10));
    String_string_(SF (String) &t_7, ((String) &t_11));
    String_string_(SF (String) &t_7, string(""));
    art_scheduling_static_CliInfoProvider_message(SF (String) ((String) &t_7));
  }
}

void art_scheduling_static_CliInfoProvider_formatStateH(STACK_FRAME String result, art_scheduling_static_Explorer_ScheduleState scheduleState) {
  DeclNewStackFrame(caller, "CliInfoProvider.scala", "art.scheduling.static.CliInfoProvider", "formatStateH", 0);

  sfUpdateLoc(38);
  Z domain;
  {
    Z t_0 = art_scheduling_static_Schedule_getDomainFromScheduleState(SF (art_scheduling_static_Explorer_ScheduleState) scheduleState);
    domain = t_0;
  }

  sfUpdateLoc(39);
  art_Art_BridgeId bridgeId;
  {
    art_Art_BridgeId t_1 = art_scheduling_static_Schedule_getBridgeIdFromScheduleState(SF (art_scheduling_static_Explorer_ScheduleState) scheduleState);
    bridgeId = t_1;
  }

  sfUpdateLoc(40);
  String threadNickName;
  DeclNewString(t_2);
  art_scheduling_static_Schedule_getThreadNickNameFromScheduleState(SF (String) &t_2, (art_scheduling_static_Explorer_ScheduleState) scheduleState);
  threadNickName = (String) ((String) &t_2);
  DeclNewString(t_3);
  art_scheduling_static_CliInfoProvider_formatState(SF (String) &t_3, (art_scheduling_static_Explorer_ScheduleState) scheduleState, domain, bridgeId, (String) threadNickName);
  Type_assign(result, ((String) &t_3), sizeof(struct StaticString));
  return;
}