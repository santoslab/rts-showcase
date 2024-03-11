#ifndef SIREUM_TYPE_H_art_scheduling_static_Schedule_DScheduleSpec
#define SIREUM_TYPE_H_art_scheduling_static_Schedule_DScheduleSpec

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.Schedule.DScheduleSpec
#include <type-art_scheduling_static_Schedule_DSchedule.h>

typedef struct art_scheduling_static_Schedule_DScheduleSpec *art_scheduling_static_Schedule_DScheduleSpec;
struct art_scheduling_static_Schedule_DScheduleSpec {
  TYPE type;
  struct art_scheduling_static_Schedule_DSchedule schedule;
  Z maxDomain;
  Z hyperPeriod;
};

#define DeclNewart_scheduling_static_Schedule_DScheduleSpec(x) struct art_scheduling_static_Schedule_DScheduleSpec x = { .type = Tart_scheduling_static_Schedule_DScheduleSpec }

#ifdef __cplusplus
}
#endif

#endif