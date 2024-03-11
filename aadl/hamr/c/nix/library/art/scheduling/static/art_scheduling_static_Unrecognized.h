#ifndef SIREUM_H_art_scheduling_static_Unrecognized
#define SIREUM_H_art_scheduling_static_Unrecognized

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.Unrecognized


B art_scheduling_static_Unrecognized__eq(art_scheduling_static_Unrecognized this, art_scheduling_static_Unrecognized other);
inline B art_scheduling_static_Unrecognized__ne(art_scheduling_static_Unrecognized this, art_scheduling_static_Unrecognized other) {
  return !art_scheduling_static_Unrecognized__eq(this, other);
};
B art_scheduling_static_Unrecognized__equiv(art_scheduling_static_Unrecognized this, art_scheduling_static_Unrecognized other);
inline B art_scheduling_static_Unrecognized__inequiv(art_scheduling_static_Unrecognized this, art_scheduling_static_Unrecognized other) {
  return !art_scheduling_static_Unrecognized__equiv(this, other);
};
void art_scheduling_static_Unrecognized_string_(STACK_FRAME String result, art_scheduling_static_Unrecognized this);
void art_scheduling_static_Unrecognized_cprint(art_scheduling_static_Unrecognized this, B isOut);

inline B art_scheduling_static_Unrecognized__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_Unrecognized) this)->type == Tart_scheduling_static_Unrecognized;
}

inline art_scheduling_static_Unrecognized art_scheduling_static_Unrecognized__as(STACK_FRAME void *this) {
  if (art_scheduling_static_Unrecognized__is(CALLER this)) return (art_scheduling_static_Unrecognized) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.Unrecognized.");
  abort();
}

void art_scheduling_static_Unrecognized_apply(STACK_FRAME art_scheduling_static_Unrecognized this);

#ifdef __cplusplus
}
#endif

#endif