#ifndef SIREUM_H_art_scheduling_static_Schedule_DSchedule
#define SIREUM_H_art_scheduling_static_Schedule_DSchedule

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.Schedule.DSchedule

#define art_scheduling_static_Schedule_DSchedule_slots_(this) ((IS_5AA467) &(this)->slots)

B art_scheduling_static_Schedule_DSchedule__eq(art_scheduling_static_Schedule_DSchedule this, art_scheduling_static_Schedule_DSchedule other);
inline B art_scheduling_static_Schedule_DSchedule__ne(art_scheduling_static_Schedule_DSchedule this, art_scheduling_static_Schedule_DSchedule other) {
  return !art_scheduling_static_Schedule_DSchedule__eq(this, other);
};
B art_scheduling_static_Schedule_DSchedule__equiv(art_scheduling_static_Schedule_DSchedule this, art_scheduling_static_Schedule_DSchedule other);
inline B art_scheduling_static_Schedule_DSchedule__inequiv(art_scheduling_static_Schedule_DSchedule this, art_scheduling_static_Schedule_DSchedule other) {
  return !art_scheduling_static_Schedule_DSchedule__equiv(this, other);
};
void art_scheduling_static_Schedule_DSchedule_string_(STACK_FRAME String result, art_scheduling_static_Schedule_DSchedule this);
void art_scheduling_static_Schedule_DSchedule_cprint(art_scheduling_static_Schedule_DSchedule this, B isOut);

inline B art_scheduling_static_Schedule_DSchedule__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_Schedule_DSchedule) this)->type == Tart_scheduling_static_Schedule_DSchedule;
}

inline art_scheduling_static_Schedule_DSchedule art_scheduling_static_Schedule_DSchedule__as(STACK_FRAME void *this) {
  if (art_scheduling_static_Schedule_DSchedule__is(CALLER this)) return (art_scheduling_static_Schedule_DSchedule) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.Schedule.DSchedule.");
  abort();
}

void art_scheduling_static_Schedule_DSchedule_apply(STACK_FRAME art_scheduling_static_Schedule_DSchedule this, IS_5AA467 slots);

#ifdef __cplusplus
}
#endif

#endif