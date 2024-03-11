#ifndef SIREUM_H_art_scheduling_static_RunToState
#define SIREUM_H_art_scheduling_static_RunToState

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.RunToState

#define art_scheduling_static_RunToState_hpNum_(this) ((this)->hpNum)
#define art_scheduling_static_RunToState_slotNum_(this) ((this)->slotNum)

B art_scheduling_static_RunToState__eq(art_scheduling_static_RunToState this, art_scheduling_static_RunToState other);
inline B art_scheduling_static_RunToState__ne(art_scheduling_static_RunToState this, art_scheduling_static_RunToState other) {
  return !art_scheduling_static_RunToState__eq(this, other);
};
B art_scheduling_static_RunToState__equiv(art_scheduling_static_RunToState this, art_scheduling_static_RunToState other);
inline B art_scheduling_static_RunToState__inequiv(art_scheduling_static_RunToState this, art_scheduling_static_RunToState other) {
  return !art_scheduling_static_RunToState__equiv(this, other);
};
void art_scheduling_static_RunToState_string_(STACK_FRAME String result, art_scheduling_static_RunToState this);
void art_scheduling_static_RunToState_cprint(art_scheduling_static_RunToState this, B isOut);

inline B art_scheduling_static_RunToState__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_RunToState) this)->type == Tart_scheduling_static_RunToState;
}

inline art_scheduling_static_RunToState art_scheduling_static_RunToState__as(STACK_FRAME void *this) {
  if (art_scheduling_static_RunToState__is(CALLER this)) return (art_scheduling_static_RunToState) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.RunToState.");
  abort();
}

void art_scheduling_static_RunToState_apply(STACK_FRAME art_scheduling_static_RunToState this, Z hpNum, Z slotNum);

#ifdef __cplusplus
}
#endif

#endif