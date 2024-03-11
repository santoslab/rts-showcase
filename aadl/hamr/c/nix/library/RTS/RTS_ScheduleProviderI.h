#ifndef SIREUM_H_RTS_ScheduleProviderI
#define SIREUM_H_RTS_ScheduleProviderI

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void RTS_ScheduleProviderI_getRoundRobinOrder(STACK_FRAME IS_FDDCB6 result);

void RTS_ScheduleProviderI_getStaticSchedule(STACK_FRAME art_scheduling_static_Schedule_DScheduleSpec result);

#ifdef __cplusplus
}
#endif

#endif