#ifndef SIREUM_H_art_scheduling_static_Stop
#define SIREUM_H_art_scheduling_static_Stop

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.Stop


B art_scheduling_static_Stop__eq(art_scheduling_static_Stop this, art_scheduling_static_Stop other);
inline B art_scheduling_static_Stop__ne(art_scheduling_static_Stop this, art_scheduling_static_Stop other) {
  return !art_scheduling_static_Stop__eq(this, other);
};
B art_scheduling_static_Stop__equiv(art_scheduling_static_Stop this, art_scheduling_static_Stop other);
inline B art_scheduling_static_Stop__inequiv(art_scheduling_static_Stop this, art_scheduling_static_Stop other) {
  return !art_scheduling_static_Stop__equiv(this, other);
};
void art_scheduling_static_Stop_string_(STACK_FRAME String result, art_scheduling_static_Stop this);
void art_scheduling_static_Stop_cprint(art_scheduling_static_Stop this, B isOut);

inline B art_scheduling_static_Stop__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_Stop) this)->type == Tart_scheduling_static_Stop;
}

inline art_scheduling_static_Stop art_scheduling_static_Stop__as(STACK_FRAME void *this) {
  if (art_scheduling_static_Stop__is(CALLER this)) return (art_scheduling_static_Stop) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.Stop.");
  abort();
}

void art_scheduling_static_Stop_apply(STACK_FRAME art_scheduling_static_Stop this);

#ifdef __cplusplus
}
#endif

#endif