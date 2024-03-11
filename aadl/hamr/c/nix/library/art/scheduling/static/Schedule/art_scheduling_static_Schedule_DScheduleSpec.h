#ifndef SIREUM_H_art_scheduling_static_Schedule_DScheduleSpec
#define SIREUM_H_art_scheduling_static_Schedule_DScheduleSpec

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.Schedule.DScheduleSpec

#define art_scheduling_static_Schedule_DScheduleSpec_maxDomain_(this) ((this)->maxDomain)
#define art_scheduling_static_Schedule_DScheduleSpec_hyperPeriod_(this) ((this)->hyperPeriod)
#define art_scheduling_static_Schedule_DScheduleSpec_schedule_(this) ((art_scheduling_static_Schedule_DSchedule) &(this)->schedule)

B art_scheduling_static_Schedule_DScheduleSpec__eq(art_scheduling_static_Schedule_DScheduleSpec this, art_scheduling_static_Schedule_DScheduleSpec other);
inline B art_scheduling_static_Schedule_DScheduleSpec__ne(art_scheduling_static_Schedule_DScheduleSpec this, art_scheduling_static_Schedule_DScheduleSpec other) {
  return !art_scheduling_static_Schedule_DScheduleSpec__eq(this, other);
};
B art_scheduling_static_Schedule_DScheduleSpec__equiv(art_scheduling_static_Schedule_DScheduleSpec this, art_scheduling_static_Schedule_DScheduleSpec other);
inline B art_scheduling_static_Schedule_DScheduleSpec__inequiv(art_scheduling_static_Schedule_DScheduleSpec this, art_scheduling_static_Schedule_DScheduleSpec other) {
  return !art_scheduling_static_Schedule_DScheduleSpec__equiv(this, other);
};
void art_scheduling_static_Schedule_DScheduleSpec_string_(STACK_FRAME String result, art_scheduling_static_Schedule_DScheduleSpec this);
void art_scheduling_static_Schedule_DScheduleSpec_cprint(art_scheduling_static_Schedule_DScheduleSpec this, B isOut);

inline B art_scheduling_static_Schedule_DScheduleSpec__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_Schedule_DScheduleSpec) this)->type == Tart_scheduling_static_Schedule_DScheduleSpec;
}

inline art_scheduling_static_Schedule_DScheduleSpec art_scheduling_static_Schedule_DScheduleSpec__as(STACK_FRAME void *this) {
  if (art_scheduling_static_Schedule_DScheduleSpec__is(CALLER this)) return (art_scheduling_static_Schedule_DScheduleSpec) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.Schedule.DScheduleSpec.");
  abort();
}

void art_scheduling_static_Schedule_DScheduleSpec_apply(STACK_FRAME art_scheduling_static_Schedule_DScheduleSpec this, Z maxDomain, Z hyperPeriod, art_scheduling_static_Schedule_DSchedule schedule);

#ifdef __cplusplus
}
#endif

#endif