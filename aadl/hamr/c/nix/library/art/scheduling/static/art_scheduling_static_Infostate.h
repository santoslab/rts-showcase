#ifndef SIREUM_H_art_scheduling_static_Infostate
#define SIREUM_H_art_scheduling_static_Infostate

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.Infostate


B art_scheduling_static_Infostate__eq(art_scheduling_static_Infostate this, art_scheduling_static_Infostate other);
inline B art_scheduling_static_Infostate__ne(art_scheduling_static_Infostate this, art_scheduling_static_Infostate other) {
  return !art_scheduling_static_Infostate__eq(this, other);
};
B art_scheduling_static_Infostate__equiv(art_scheduling_static_Infostate this, art_scheduling_static_Infostate other);
inline B art_scheduling_static_Infostate__inequiv(art_scheduling_static_Infostate this, art_scheduling_static_Infostate other) {
  return !art_scheduling_static_Infostate__equiv(this, other);
};
void art_scheduling_static_Infostate_string_(STACK_FRAME String result, art_scheduling_static_Infostate this);
void art_scheduling_static_Infostate_cprint(art_scheduling_static_Infostate this, B isOut);

inline B art_scheduling_static_Infostate__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_Infostate) this)->type == Tart_scheduling_static_Infostate;
}

inline art_scheduling_static_Infostate art_scheduling_static_Infostate__as(STACK_FRAME void *this) {
  if (art_scheduling_static_Infostate__is(CALLER this)) return (art_scheduling_static_Infostate) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.Infostate.");
  abort();
}

void art_scheduling_static_Infostate_apply(STACK_FRAME art_scheduling_static_Infostate this);

#ifdef __cplusplus
}
#endif

#endif