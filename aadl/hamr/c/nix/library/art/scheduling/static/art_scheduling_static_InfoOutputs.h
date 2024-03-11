#ifndef SIREUM_H_art_scheduling_static_InfoOutputs
#define SIREUM_H_art_scheduling_static_InfoOutputs

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.InfoOutputs


B art_scheduling_static_InfoOutputs__eq(art_scheduling_static_InfoOutputs this, art_scheduling_static_InfoOutputs other);
inline B art_scheduling_static_InfoOutputs__ne(art_scheduling_static_InfoOutputs this, art_scheduling_static_InfoOutputs other) {
  return !art_scheduling_static_InfoOutputs__eq(this, other);
};
B art_scheduling_static_InfoOutputs__equiv(art_scheduling_static_InfoOutputs this, art_scheduling_static_InfoOutputs other);
inline B art_scheduling_static_InfoOutputs__inequiv(art_scheduling_static_InfoOutputs this, art_scheduling_static_InfoOutputs other) {
  return !art_scheduling_static_InfoOutputs__equiv(this, other);
};
void art_scheduling_static_InfoOutputs_string_(STACK_FRAME String result, art_scheduling_static_InfoOutputs this);
void art_scheduling_static_InfoOutputs_cprint(art_scheduling_static_InfoOutputs this, B isOut);

inline B art_scheduling_static_InfoOutputs__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_InfoOutputs) this)->type == Tart_scheduling_static_InfoOutputs;
}

inline art_scheduling_static_InfoOutputs art_scheduling_static_InfoOutputs__as(STACK_FRAME void *this) {
  if (art_scheduling_static_InfoOutputs__is(CALLER this)) return (art_scheduling_static_InfoOutputs) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.InfoOutputs.");
  abort();
}

void art_scheduling_static_InfoOutputs_apply(STACK_FRAME art_scheduling_static_InfoOutputs this);

#ifdef __cplusplus
}
#endif

#endif