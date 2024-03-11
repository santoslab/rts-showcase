#ifndef SIREUM_H_art_scheduling_static_RunToSlot
#define SIREUM_H_art_scheduling_static_RunToSlot

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.RunToSlot

#define art_scheduling_static_RunToSlot_slotNum_(this) ((this)->slotNum)

B art_scheduling_static_RunToSlot__eq(art_scheduling_static_RunToSlot this, art_scheduling_static_RunToSlot other);
inline B art_scheduling_static_RunToSlot__ne(art_scheduling_static_RunToSlot this, art_scheduling_static_RunToSlot other) {
  return !art_scheduling_static_RunToSlot__eq(this, other);
};
B art_scheduling_static_RunToSlot__equiv(art_scheduling_static_RunToSlot this, art_scheduling_static_RunToSlot other);
inline B art_scheduling_static_RunToSlot__inequiv(art_scheduling_static_RunToSlot this, art_scheduling_static_RunToSlot other) {
  return !art_scheduling_static_RunToSlot__equiv(this, other);
};
void art_scheduling_static_RunToSlot_string_(STACK_FRAME String result, art_scheduling_static_RunToSlot this);
void art_scheduling_static_RunToSlot_cprint(art_scheduling_static_RunToSlot this, B isOut);

inline B art_scheduling_static_RunToSlot__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_RunToSlot) this)->type == Tart_scheduling_static_RunToSlot;
}

inline art_scheduling_static_RunToSlot art_scheduling_static_RunToSlot__as(STACK_FRAME void *this) {
  if (art_scheduling_static_RunToSlot__is(CALLER this)) return (art_scheduling_static_RunToSlot) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.RunToSlot.");
  abort();
}

void art_scheduling_static_RunToSlot_apply(STACK_FRAME art_scheduling_static_RunToSlot this, Z slotNum);

#ifdef __cplusplus
}
#endif

#endif