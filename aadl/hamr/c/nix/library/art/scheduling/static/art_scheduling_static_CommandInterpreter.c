#include <all.h>

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_16_12(STACK_FRAME_SF art_scheduling_static_Command t_0) {
  if (!art_scheduling_static_Help__is(SF t_0)) return F;
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_19_12(STACK_FRAME_SF art_scheduling_static_Command t_0, Z *_n_19_18) {
  if (!art_scheduling_static_Sstep__is(SF t_0)) return F;
  *_n_19_18 = art_scheduling_static_Sstep_numSteps_(art_scheduling_static_Sstep__as(SF t_0));
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_24_12(STACK_FRAME_SF art_scheduling_static_Command t_0, Z *_n_24_18) {
  if (!art_scheduling_static_Hstep__is(SF t_0)) return F;
  *_n_24_18 = art_scheduling_static_Hstep_numSteps_(art_scheduling_static_Hstep__as(SF t_0));
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_35_12(STACK_FRAME_SF art_scheduling_static_Command t_0, Z *_hpNum_35_20) {
  if (!art_scheduling_static_RunToHP__is(SF t_0)) return F;
  *_hpNum_35_20 = art_scheduling_static_RunToHP_hpNum_(art_scheduling_static_RunToHP__as(SF t_0));
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_39_12(STACK_FRAME_SF art_scheduling_static_Command t_0, Z *_slotNum_39_22) {
  if (!art_scheduling_static_RunToSlot__is(SF t_0)) return F;
  *_slotNum_39_22 = art_scheduling_static_RunToSlot_slotNum_(art_scheduling_static_RunToSlot__as(SF t_0));
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_44_12(STACK_FRAME_SF art_scheduling_static_Command t_0, String *_threadNickName_44_24) {
  if (!art_scheduling_static_RunToThread__is(SF t_0)) return F;
  *_threadNickName_44_24 = (String) art_scheduling_static_RunToThread_ThreadId_(art_scheduling_static_RunToThread__as(SF t_0));
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_47_12(STACK_FRAME_SF art_scheduling_static_Command t_0, Z *_hpNum_47_23, Z *_slotNum_47_30) {
  if (!art_scheduling_static_RunToState__is(SF t_0)) return F;
  *_hpNum_47_23 = art_scheduling_static_RunToState_hpNum_(art_scheduling_static_RunToState__as(SF t_0));
  *_slotNum_47_30 = art_scheduling_static_RunToState_slotNum_(art_scheduling_static_RunToState__as(SF t_0));
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_52_12(STACK_FRAME_SF art_scheduling_static_Command t_0, Z *_domainId_52_24) {
  if (!art_scheduling_static_RunToDomain__is(SF t_0)) return F;
  *_domainId_52_24 = art_scheduling_static_RunToDomain_domainId_(art_scheduling_static_RunToDomain__as(SF t_0));
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_56_12(STACK_FRAME_SF art_scheduling_static_Command t_0) {
  if (!art_scheduling_static_Stop__is(SF t_0)) return F;
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_58_12(STACK_FRAME_SF art_scheduling_static_Command t_0) {
  if (!art_scheduling_static_Infostate__is(SF t_0)) return F;
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_62_12(STACK_FRAME_SF art_scheduling_static_Command t_0) {
  if (!art_scheduling_static_Infoschedule__is(SF t_0)) return F;
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_65_12(STACK_FRAME_SF art_scheduling_static_Command t_0) {
  if (!art_scheduling_static_InfoInputs__is(SF t_0)) return F;
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_68_12(STACK_FRAME_SF art_scheduling_static_Command t_0) {
  if (!art_scheduling_static_InfoOutputs__is(SF t_0)) return F;
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_71_12(STACK_FRAME_SF art_scheduling_static_Command t_0, Z *_bridgId_71_33) {
  if (!art_scheduling_static_InfoComponentStateId__is(SF t_0)) return F;
  *_bridgId_71_33 = art_scheduling_static_InfoComponentStateId_bridgeId_(art_scheduling_static_InfoComponentStateId__as(SF t_0));
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_74_12(STACK_FRAME_SF art_scheduling_static_Command t_0, String *_threadNickName_74_31) {
  if (!art_scheduling_static_InfoComponentState__is(SF t_0)) return F;
  *_threadNickName_74_31 = (String) art_scheduling_static_InfoComponentState_threadNickName_(art_scheduling_static_InfoComponentState__as(SF t_0));
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_77_12(STACK_FRAME_SF art_scheduling_static_Command t_0) {
  if (!art_scheduling_static_InfoThreadNickNames__is(SF t_0)) return F;
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_80_12(STACK_FRAME_SF art_scheduling_static_Command t_0) {
  if (!art_scheduling_static_Unrecognized__is(SF t_0)) return F;
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_82_12(STACK_FRAME_SF art_scheduling_static_Command t_0) {
  if (!art_scheduling_static_Unsupported__is(SF t_0)) return F;
  return T;
}

inline B art_scheduling_static_CommandInterpreter_interpretCmd_extract_84_12(STACK_FRAME_SF art_scheduling_static_Command t_0) {
  return T;
}

B art_scheduling_static_CommandInterpreter_interpretCmd(STACK_FRAME art_scheduling_static_Command cmd) {
  DeclNewStackFrame(caller, "CommandInterpreter.scala", "art.scheduling.static.CommandInterpreter", "interpretCmd", 0);

  sfUpdateLoc(14);
  B done;
  {
    done = F;
  }

  sfUpdateLoc(15);
  art_scheduling_static_Command t_0 = cmd;
  B match_15_5 = F;
  if (!match_15_5) {
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_16_12(SF t_0);
    if (match_15_5) {

      sfUpdateLoc(17);
      {
        art_scheduling_static_CliInfoProvider_printHelpMessage(SF_LAST);
      }
    }
  }
  if (!match_15_5) {
    Z n_19_18;
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_19_12(SF t_0, &n_19_18);
    if (match_15_5) {

      sfUpdateLoc(20);
      {
        if (!(Z__ge(n_19_18, Z_C(1)))) { sfAbort("Assertion failure"); }
      }

      sfUpdateLoc(21);
      {
        DeclNewString(t_1);
        String_string_(SF (String) &t_1, string("...Stepping "));
        Z_string_(SF (String) &t_1, n_19_18);
        String_string_(SF (String) &t_1, string(" slot(s)"));
        art_scheduling_static_CommandInterpreter_message(SF (String) ((String) &t_1));
      }

      sfUpdateLoc(22);
      {
        art_scheduling_static_Explorer_stepSystemNSlotsIMP(SF n_19_18);
      }
    }
  }
  if (!match_15_5) {
    Z n_24_18;
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_24_12(SF t_0, &n_24_18);
    if (match_15_5) {

      sfUpdateLoc(25);
      {
        if (!(Z__ge(n_24_18, Z_C(1)))) { sfAbort("Assertion failure"); }
      }

      sfUpdateLoc(26);
      {
        DeclNewString(t_2);
        String_string_(SF (String) &t_2, string("...Stepping "));
        Z_string_(SF (String) &t_2, n_24_18);
        String_string_(SF (String) &t_2, string(" hyper-period(s)"));
        art_scheduling_static_CommandInterpreter_message(SF (String) ((String) &t_2));
      }

      sfUpdateLoc(27);
      B t_3;
      {
        t_3 = Z__eq(n_24_18, Z_C(1));
      }
      if (t_3) {

        sfUpdateLoc(28);
        {
          art_scheduling_static_Explorer_stepSystemOneHPIMP(SF_LAST);
        }
      } else {

        sfUpdateLoc(29);
        B t_4;
        {
          B t_5 = art_scheduling_static_Explorer_isHyperPeriodBoundaryH(SF_LAST);
          t_4 = t_5;
        }
        if (t_4) {

          sfUpdateLoc(30);
          {
            art_scheduling_static_Explorer_stepSystemNHPIMP(SF n_24_18);
          }
        } else {

          sfUpdateLoc(32);
          {
            art_scheduling_static_CommandInterpreter_message(SF (String) string("Command not applicable: not on hyper-period boundary"));
          }
        }
      }
    }
  }
  if (!match_15_5) {
    Z hpNum_35_20;
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_35_12(SF t_0, &hpNum_35_20);
    if (match_15_5) {

      sfUpdateLoc(36);
      {
        if (!(B__and(Z__ge(hpNum_35_20, Z_C(0)), Z__le(hpNum_35_20, Z_C(1000))))) { sfAbort("Assertion failure"); }
      }

      sfUpdateLoc(37);
      {
        art_scheduling_static_Explorer_runToHP(SF hpNum_35_20);
      }
    }
  }
  if (!match_15_5) {
    Z slotNum_39_22;
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_39_12(SF t_0, &slotNum_39_22);
    if (match_15_5) {

      sfUpdateLoc(40);
      {
        Z t_6 = IS_5AA467_size(SF art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST))));
        if (!(B__and(Z__ge(slotNum_39_22, Z_C(0)), Z__lt(slotNum_39_22, t_6)))) { sfAbort("Assertion failure"); }
      }

      sfUpdateLoc(41);
      {
        DeclNewString(t_7);
        String_string_(SF (String) &t_7, string("...Running to slot# "));
        Z_string_(SF (String) &t_7, slotNum_39_22);
        String_string_(SF (String) &t_7, string(""));
        art_scheduling_static_CommandInterpreter_message(SF (String) ((String) &t_7));
      }

      sfUpdateLoc(42);
      {
        art_scheduling_static_Explorer_runToSlot(SF slotNum_39_22);
      }
    }
  }
  if (!match_15_5) {
    String threadNickName_44_24;
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_44_12(SF t_0, &threadNickName_44_24);
    if (match_15_5) {

      sfUpdateLoc(45);
      {
        art_scheduling_static_Explorer_runToThread(SF (String) threadNickName_44_24);
      }
    }
  }
  if (!match_15_5) {
    Z hpNum_47_23;
    Z slotNum_47_30;
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_47_12(SF t_0, &hpNum_47_23, &slotNum_47_30);
    if (match_15_5) {

      sfUpdateLoc(48);
      {
        if (!(B__and(Z__ge(hpNum_47_23, Z_C(0)), Z__le(hpNum_47_23, Z_C(1000))))) { sfAbort("Assertion failure"); }
      }

      sfUpdateLoc(49);
      {
        Z t_8 = IS_5AA467_size(SF art_scheduling_static_Schedule_DSchedule_slots_(art_scheduling_static_Schedule_DScheduleSpec_schedule_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST))));
        if (!(B__and(Z__ge(slotNum_47_30, Z_C(0)), Z__lt(slotNum_47_30, t_8)))) { sfAbort("Assertion failure"); }
      }

      sfUpdateLoc(50);
      {
        art_scheduling_static_Explorer_runToState(SF hpNum_47_23, slotNum_47_30);
      }
    }
  }
  if (!match_15_5) {
    Z domainId_52_24;
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_52_12(SF t_0, &domainId_52_24);
    if (match_15_5) {

      sfUpdateLoc(53);
      {
        if (!(B__and(Z__le(Z_C(0), domainId_52_24), Z__le(domainId_52_24, art_scheduling_static_Schedule_DScheduleSpec_maxDomain_(art_scheduling_static_Schedule_dScheduleSpec(SF_LAST)))))) { sfAbort("Assertion failure"); }
      }

      sfUpdateLoc(54);
      {
        art_scheduling_static_Explorer_runToDomain(SF domainId_52_24);
      }
    }
  }
  if (!match_15_5) {
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_56_12(SF t_0);
    if (match_15_5) {

      sfUpdateLoc(56);
      {
        done = T;
      }
    }
  }
  if (!match_15_5) {
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_58_12(SF t_0);
    if (match_15_5) {

      sfUpdateLoc(59);
      art_scheduling_static_Explorer_ScheduleState s;
      s = (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST);

      sfUpdateLoc(60);
      {
        Z t_9 = art_scheduling_static_Schedule_getDomainFromScheduleState(SF (art_scheduling_static_Explorer_ScheduleState) s);
        art_Art_BridgeId t_10 = art_scheduling_static_Schedule_getBridgeIdFromScheduleState(SF (art_scheduling_static_Explorer_ScheduleState) s);
        art_Art_BridgeId t_11 = art_scheduling_static_Schedule_getBridgeIdFromScheduleState(SF (art_scheduling_static_Explorer_ScheduleState) s);
        DeclNewString(t_12);
        art_scheduling_static_Schedule_threadNickName(SF (String) &t_12, t_11);
        art_scheduling_static_CliInfoProvider_showState(SF (art_scheduling_static_Explorer_ScheduleState) s, t_9, t_10, (String) ((String) &t_12));
      }
    }
  }
  if (!match_15_5) {
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_62_12(SF t_0);
    if (match_15_5) {

      sfUpdateLoc(63);
      {
        art_scheduling_static_CliInfoProvider_showSchedule(SF (art_scheduling_static_Explorer_ScheduleState) art_scheduling_static_Explorer_scheduleState(SF_LAST), (art_scheduling_static_Schedule_DScheduleSpec) art_scheduling_static_Schedule_dScheduleSpec(SF_LAST));
      }
    }
  }
  if (!match_15_5) {
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_65_12(SF t_0);
    if (match_15_5) {

      sfUpdateLoc(66);
      {
        art_scheduling_static_StateObserver_printPortContentsInputsCurrent(SF_LAST);
      }
    }
  }
  if (!match_15_5) {
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_68_12(SF t_0);
    if (match_15_5) {

      sfUpdateLoc(69);
      {
        art_scheduling_static_StateObserver_printPortContentsOutputsCurrent(SF_LAST);
      }
    }
  }
  if (!match_15_5) {
    Z bridgId_71_33;
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_71_12(SF t_0, &bridgId_71_33);
    if (match_15_5) {

      sfUpdateLoc(72);
      {
        art_scheduling_static_StateObserver_printPortContents(SF art_Art_BridgeId_fromZ(SF bridgId_71_33));
      }
    }
  }
  if (!match_15_5) {
    String threadNickName_74_31;
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_74_12(SF t_0, &threadNickName_74_31);
    if (match_15_5) {

      sfUpdateLoc(75);
      {
        art_scheduling_static_StateObserver_printPortContentsByNickName(SF (String) threadNickName_74_31);
      }
    }
  }
  if (!match_15_5) {
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_77_12(SF t_0);
    if (match_15_5) {

      sfUpdateLoc(78);
      {
        art_scheduling_static_CliInfoProvider_showNickNames(SF_LAST);
      }
    }
  }
  if (!match_15_5) {
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_80_12(SF t_0);
    if (match_15_5) {

      sfUpdateLoc(80);
      {
        art_scheduling_static_CommandInterpreter_message(SF (String) string("Unrecognized command"));
      }
    }
  }
  if (!match_15_5) {
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_82_12(SF t_0);
    if (match_15_5) {

      sfUpdateLoc(82);
      {
        art_scheduling_static_CommandInterpreter_message(SF (String) string("Unsupported command"));
      }
    }
  }
  if (!match_15_5) {
    match_15_5 = art_scheduling_static_CommandInterpreter_interpretCmd_extract_84_12(SF t_0);
    if (match_15_5) {
    }
  }
  sfAssert(match_15_5, "Error when pattern matching.");
  return done;
}

Unit art_scheduling_static_CommandInterpreter_message(STACK_FRAME String str) {
  DeclNewStackFrame(caller, "CommandInterpreter.scala", "art.scheduling.static.CommandInterpreter", "message", 0);

  sfUpdateLoc(10);
  {
    art_scheduling_static_CliInfoProvider_message(SF (String) str);
  }
}