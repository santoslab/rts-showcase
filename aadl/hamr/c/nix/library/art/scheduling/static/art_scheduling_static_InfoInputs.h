#ifndef SIREUM_H_art_scheduling_static_InfoInputs
#define SIREUM_H_art_scheduling_static_InfoInputs

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.InfoInputs


B art_scheduling_static_InfoInputs__eq(art_scheduling_static_InfoInputs this, art_scheduling_static_InfoInputs other);
inline B art_scheduling_static_InfoInputs__ne(art_scheduling_static_InfoInputs this, art_scheduling_static_InfoInputs other) {
  return !art_scheduling_static_InfoInputs__eq(this, other);
};
B art_scheduling_static_InfoInputs__equiv(art_scheduling_static_InfoInputs this, art_scheduling_static_InfoInputs other);
inline B art_scheduling_static_InfoInputs__inequiv(art_scheduling_static_InfoInputs this, art_scheduling_static_InfoInputs other) {
  return !art_scheduling_static_InfoInputs__equiv(this, other);
};
void art_scheduling_static_InfoInputs_string_(STACK_FRAME String result, art_scheduling_static_InfoInputs this);
void art_scheduling_static_InfoInputs_cprint(art_scheduling_static_InfoInputs this, B isOut);

inline B art_scheduling_static_InfoInputs__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_InfoInputs) this)->type == Tart_scheduling_static_InfoInputs;
}

inline art_scheduling_static_InfoInputs art_scheduling_static_InfoInputs__as(STACK_FRAME void *this) {
  if (art_scheduling_static_InfoInputs__is(CALLER this)) return (art_scheduling_static_InfoInputs) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.InfoInputs.");
  abort();
}

void art_scheduling_static_InfoInputs_apply(STACK_FRAME art_scheduling_static_InfoInputs this);

#ifdef __cplusplus
}
#endif

#endif