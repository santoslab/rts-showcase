#ifndef SIREUM_H_art_scheduling_static_Help
#define SIREUM_H_art_scheduling_static_Help

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.Help


B art_scheduling_static_Help__eq(art_scheduling_static_Help this, art_scheduling_static_Help other);
inline B art_scheduling_static_Help__ne(art_scheduling_static_Help this, art_scheduling_static_Help other) {
  return !art_scheduling_static_Help__eq(this, other);
};
B art_scheduling_static_Help__equiv(art_scheduling_static_Help this, art_scheduling_static_Help other);
inline B art_scheduling_static_Help__inequiv(art_scheduling_static_Help this, art_scheduling_static_Help other) {
  return !art_scheduling_static_Help__equiv(this, other);
};
void art_scheduling_static_Help_string_(STACK_FRAME String result, art_scheduling_static_Help this);
void art_scheduling_static_Help_cprint(art_scheduling_static_Help this, B isOut);

inline B art_scheduling_static_Help__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_Help) this)->type == Tart_scheduling_static_Help;
}

inline art_scheduling_static_Help art_scheduling_static_Help__as(STACK_FRAME void *this) {
  if (art_scheduling_static_Help__is(CALLER this)) return (art_scheduling_static_Help) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.Help.");
  abort();
}

void art_scheduling_static_Help_apply(STACK_FRAME art_scheduling_static_Help this);

#ifdef __cplusplus
}
#endif

#endif