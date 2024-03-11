#ifndef SIREUM_H_art_scheduling_static_Infoschedule
#define SIREUM_H_art_scheduling_static_Infoschedule

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.Infoschedule


B art_scheduling_static_Infoschedule__eq(art_scheduling_static_Infoschedule this, art_scheduling_static_Infoschedule other);
inline B art_scheduling_static_Infoschedule__ne(art_scheduling_static_Infoschedule this, art_scheduling_static_Infoschedule other) {
  return !art_scheduling_static_Infoschedule__eq(this, other);
};
B art_scheduling_static_Infoschedule__equiv(art_scheduling_static_Infoschedule this, art_scheduling_static_Infoschedule other);
inline B art_scheduling_static_Infoschedule__inequiv(art_scheduling_static_Infoschedule this, art_scheduling_static_Infoschedule other) {
  return !art_scheduling_static_Infoschedule__equiv(this, other);
};
void art_scheduling_static_Infoschedule_string_(STACK_FRAME String result, art_scheduling_static_Infoschedule this);
void art_scheduling_static_Infoschedule_cprint(art_scheduling_static_Infoschedule this, B isOut);

inline B art_scheduling_static_Infoschedule__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_Infoschedule) this)->type == Tart_scheduling_static_Infoschedule;
}

inline art_scheduling_static_Infoschedule art_scheduling_static_Infoschedule__as(STACK_FRAME void *this) {
  if (art_scheduling_static_Infoschedule__is(CALLER this)) return (art_scheduling_static_Infoschedule) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.Infoschedule.");
  abort();
}

void art_scheduling_static_Infoschedule_apply(STACK_FRAME art_scheduling_static_Infoschedule this);

#ifdef __cplusplus
}
#endif

#endif