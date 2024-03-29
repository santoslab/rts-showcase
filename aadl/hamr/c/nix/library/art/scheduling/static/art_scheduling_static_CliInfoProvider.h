#ifndef SIREUM_H_art_scheduling_static_CliInfoProvider
#define SIREUM_H_art_scheduling_static_CliInfoProvider

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit art_scheduling_static_CliInfoProvider_printHelpMessage(STACK_FRAME_ONLY);

Unit art_scheduling_static_CliInfoProvider_showState(STACK_FRAME art_scheduling_static_Explorer_ScheduleState scheduleState, Z domain, art_Art_BridgeId bridgeId, String threadNickName);

Unit art_scheduling_static_CliInfoProvider_showSchedule(STACK_FRAME art_scheduling_static_Explorer_ScheduleState scheduleState, art_scheduling_static_Schedule_DScheduleSpec dScheduleSpec);

Unit art_scheduling_static_CliInfoProvider_showNickNames(STACK_FRAME_ONLY);

Unit art_scheduling_static_CliInfoProvider_message(STACK_FRAME String m);

Unit art_scheduling_static_CliInfoProvider_showHyperPeriodBoundary(STACK_FRAME art_scheduling_static_Explorer_ScheduleState scheduleState);

Unit art_scheduling_static_CliInfoProvider_showStateH(STACK_FRAME art_scheduling_static_Explorer_ScheduleState scheduleState);

void art_scheduling_static_CliInfoProvider_formatState(STACK_FRAME String result, art_scheduling_static_Explorer_ScheduleState scheduleState, Z domain, art_Art_BridgeId bridgeId, String threadNickName);

Unit art_scheduling_static_CliInfoProvider_showStep(STACK_FRAME art_scheduling_static_Explorer_ScheduleState preScheduleState, art_scheduling_static_Explorer_ScheduleState postScheduleState, art_scheduling_static_Schedule_DScheduleSpec dScheduleSpec);

void art_scheduling_static_CliInfoProvider_formatStateH(STACK_FRAME String result, art_scheduling_static_Explorer_ScheduleState scheduleState);

#ifdef __cplusplus
}
#endif

#endif