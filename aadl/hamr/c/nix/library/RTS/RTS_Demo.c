#include <all.h>

inline B RTS_Demo_main_extract_30_16(STACK_FRAME_SF RTS_Cli_RunChoice_Type t_3) {
  if (!RTS_Cli_RunChoice_Type__eq(t_3, RTS_Cli_RunChoice_Type_Default)) return F;
  return T;
}

inline B RTS_Demo_main_extract_31_16(STACK_FRAME_SF RTS_Cli_RunChoice_Type t_3) {
  if (!RTS_Cli_RunChoice_Type__eq(t_3, RTS_Cli_RunChoice_Type_RoundRobin)) return F;
  return T;
}

inline B RTS_Demo_main_extract_32_16(STACK_FRAME_SF RTS_Cli_RunChoice_Type t_3) {
  if (!RTS_Cli_RunChoice_Type__eq(t_3, RTS_Cli_RunChoice_Type_Static)) return F;
  return T;
}

inline B RTS_Demo_main_extract_33_16(STACK_FRAME_SF RTS_Cli_RunChoice_Type t_3) {
  if (!RTS_Cli_RunChoice_Type__eq(t_3, RTS_Cli_RunChoice_Type_Legacy)) return F;
  return T;
}

inline B RTS_Demo_main_extract_28_12_BF489E(STACK_FRAME_SF Option_BF489E t_0, RTS_Cli_RunOption *_o_28_17) {
  if (!Some_2BC073__is(SF t_0)) return F;
  if (!RTS_Cli_RunOption__is(SF Some_2BC073_value_(Some_2BC073__as(SF t_0)))) return F;
  *_o_28_17 = (RTS_Cli_RunOption) Some_2BC073_value_(Some_2BC073__as(SF t_0));
  return T;
}

inline B RTS_Demo_main_extract_41_12_BF489E(STACK_FRAME_SF Option_BF489E t_0, RTS_Cli_HelpOption *_o_41_17) {
  if (!Some_2BC073__is(SF t_0)) return F;
  if (!RTS_Cli_HelpOption__is(SF Some_2BC073_value_(Some_2BC073__as(SF t_0)))) return F;
  *_o_41_17 = (RTS_Cli_HelpOption) Some_2BC073_value_(Some_2BC073__as(SF t_0));
  return T;
}

inline B RTS_Demo_main_extract_42_12_BF489E(STACK_FRAME_SF Option_BF489E t_0) {
  return T;
}

Z RTS_Demo_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "Demo.scala", "RTS.Demo", "main", 0);

  sfUpdateLoc(27);
  DeclNewRTS_Cli(t_1);
  RTS_Cli_apply(SF &t_1, ' ');
  DeclNewOption_BF489E(t_2);
  RTS_Cli_parseRun_(SF (Option_BF489E) &t_2, (&t_1), (IS_948B60) args, Z_C(0));
  Option_BF489E t_0 = ((Option_BF489E) &t_2);
  B match_27_5 = F;
  if (!match_27_5) {
    RTS_Cli_RunOption o_28_17;
    match_27_5 = RTS_Demo_main_extract_28_12_BF489E(SF t_0, &o_28_17);
    if (match_27_5) {

      sfUpdateLoc(29);
      DeclNewart_scheduling_Scheduler(_scheduler);
      art_scheduling_Scheduler scheduler = (art_scheduling_Scheduler) &_scheduler;
      {
        RTS_Cli_RunChoice_Type t_3 = RTS_Cli_RunOption_scheduler_(o_28_17);
        B match_29_38 = F;
        if (!match_29_38) {
          match_29_38 = RTS_Demo_main_extract_30_16(SF t_3);
          if (match_29_38) {
            DeclNewart_scheduling_Scheduler(t_4);
            RTS_Demo_defaultScheduler(SF (art_scheduling_Scheduler) &t_4);
            Type_assign(scheduler, ((art_scheduling_Scheduler) &t_4), sizeof(union art_scheduling_Scheduler));
          }
        }
        if (!match_29_38) {
          match_29_38 = RTS_Demo_main_extract_31_16(SF t_3);
          if (match_29_38) {
            DeclNewNone_00347F(t_5);
            None_00347F_apply(SF &t_5);
            DeclNewart_scheduling_roundrobin_RoundRobin(t_6);
            RTS_Schedulers_getRoundRobinScheduler(SF (art_scheduling_roundrobin_RoundRobin) &t_6, (Option_FEE1DB) (&t_5));
            Type_assign(scheduler, ((art_scheduling_roundrobin_RoundRobin) &t_6), sizeof(struct art_scheduling_roundrobin_RoundRobin));
          }
        }
        if (!match_29_38) {
          match_29_38 = RTS_Demo_main_extract_32_16(SF t_3);
          if (match_29_38) {
            DeclNewMNone_6579ED(t_7);
            MNone_6579ED_apply(SF &t_7);
            DeclNewart_scheduling_static_StaticScheduler(t_8);
            RTS_Schedulers_getStaticSchedulerH(SF (art_scheduling_static_StaticScheduler) &t_8, (MOption_AEC260) (&t_7));
            Type_assign(scheduler, ((art_scheduling_static_StaticScheduler) &t_8), sizeof(struct art_scheduling_static_StaticScheduler));
          }
        }
        if (!match_29_38) {
          match_29_38 = RTS_Demo_main_extract_33_16(SF t_3);
          if (match_29_38) {
            DeclNewart_scheduling_legacy_Legacy(t_9);
            RTS_Schedulers_getLegacyScheduler(SF (art_scheduling_legacy_Legacy) &t_9);
            Type_assign(scheduler, ((art_scheduling_legacy_Legacy) &t_9), sizeof(struct art_scheduling_legacy_Legacy));
          }
        }
        sfAssert(match_29_38, "Error when pattern matching.");
      }

      sfUpdateLoc(36);
      {
        RTS_Platform_setup(SF_LAST);
      }

      sfUpdateLoc(38);
      {
        art_Art_run(SF (art_ArchitectureDescription) RTS_Arch_ad(SF_LAST), (art_scheduling_Scheduler) scheduler);
      }

      sfUpdateLoc(40);
      {
        RTS_Platform_tearDown(SF_LAST);
      }
    }
  }
  if (!match_27_5) {
    RTS_Cli_HelpOption o_41_17;
    match_27_5 = RTS_Demo_main_extract_41_12_BF489E(SF t_0, &o_41_17);
    if (match_27_5) {
    }
  }
  if (!match_27_5) {
    match_27_5 = RTS_Demo_main_extract_42_12_BF489E(SF t_0);
    if (match_27_5) {
      return Z_C(1);
    }
  }
  sfAssert(match_27_5, "Error when pattern matching.");
  return Z_C(0);
}

void RTS_Demo_defaultScheduler(STACK_FRAME art_scheduling_Scheduler result) {
  DeclNewStackFrame(caller, "Demo.scala", "RTS.Demo", "defaultScheduler", 0);
  DeclNewNone_00347F(t_0);
  None_00347F_apply(SF &t_0);
  DeclNewart_scheduling_roundrobin_RoundRobin(t_1);
  RTS_Schedulers_getRoundRobinScheduler(SF (art_scheduling_roundrobin_RoundRobin) &t_1, (Option_FEE1DB) (&t_0));
  Type_assign(result, ((art_scheduling_roundrobin_RoundRobin) &t_1), sizeof(struct art_scheduling_roundrobin_RoundRobin));
  return;
}