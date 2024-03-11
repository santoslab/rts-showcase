#ifndef SIREUM_H_art_scheduling_static_Explorer_ScheduleState
#define SIREUM_H_art_scheduling_static_Explorer_ScheduleState

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.Explorer.ScheduleState

#define art_scheduling_static_Explorer_ScheduleState_slotNum_(this) ((this)->slotNum)
#define art_scheduling_static_Explorer_ScheduleState_hyperperiodNum_(this) ((this)->hyperperiodNum)

B art_scheduling_static_Explorer_ScheduleState__eq(art_scheduling_static_Explorer_ScheduleState this, art_scheduling_static_Explorer_ScheduleState other);
inline B art_scheduling_static_Explorer_ScheduleState__ne(art_scheduling_static_Explorer_ScheduleState this, art_scheduling_static_Explorer_ScheduleState other) {
  return !art_scheduling_static_Explorer_ScheduleState__eq(this, other);
};
B art_scheduling_static_Explorer_ScheduleState__equiv(art_scheduling_static_Explorer_ScheduleState this, art_scheduling_static_Explorer_ScheduleState other);
inline B art_scheduling_static_Explorer_ScheduleState__inequiv(art_scheduling_static_Explorer_ScheduleState this, art_scheduling_static_Explorer_ScheduleState other) {
  return !art_scheduling_static_Explorer_ScheduleState__equiv(this, other);
};
void art_scheduling_static_Explorer_ScheduleState_string_(STACK_FRAME String result, art_scheduling_static_Explorer_ScheduleState this);
void art_scheduling_static_Explorer_ScheduleState_cprint(art_scheduling_static_Explorer_ScheduleState this, B isOut);

inline B art_scheduling_static_Explorer_ScheduleState__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_Explorer_ScheduleState) this)->type == Tart_scheduling_static_Explorer_ScheduleState;
}

inline art_scheduling_static_Explorer_ScheduleState art_scheduling_static_Explorer_ScheduleState__as(STACK_FRAME void *this) {
  if (art_scheduling_static_Explorer_ScheduleState__is(CALLER this)) return (art_scheduling_static_Explorer_ScheduleState) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.Explorer.ScheduleState.");
  abort();
}

void art_scheduling_static_Explorer_ScheduleState_apply(STACK_FRAME art_scheduling_static_Explorer_ScheduleState this, Z slotNum, Z hyperperiodNum);

#ifdef __cplusplus
}
#endif

#endif