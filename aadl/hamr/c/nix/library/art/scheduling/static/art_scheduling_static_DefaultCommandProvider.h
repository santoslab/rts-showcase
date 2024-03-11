#ifndef SIREUM_H_art_scheduling_static_DefaultCommandProvider
#define SIREUM_H_art_scheduling_static_DefaultCommandProvider

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.DefaultCommandProvider


B art_scheduling_static_DefaultCommandProvider__eq(art_scheduling_static_DefaultCommandProvider this, art_scheduling_static_DefaultCommandProvider other);
inline B art_scheduling_static_DefaultCommandProvider__ne(art_scheduling_static_DefaultCommandProvider this, art_scheduling_static_DefaultCommandProvider other) {
  return !art_scheduling_static_DefaultCommandProvider__eq(this, other);
};
B art_scheduling_static_DefaultCommandProvider__equiv(art_scheduling_static_DefaultCommandProvider this, art_scheduling_static_DefaultCommandProvider other);
inline B art_scheduling_static_DefaultCommandProvider__inequiv(art_scheduling_static_DefaultCommandProvider this, art_scheduling_static_DefaultCommandProvider other) {
  return !art_scheduling_static_DefaultCommandProvider__equiv(this, other);
};
void art_scheduling_static_DefaultCommandProvider_string_(STACK_FRAME String result, art_scheduling_static_DefaultCommandProvider this);
void art_scheduling_static_DefaultCommandProvider_cprint(art_scheduling_static_DefaultCommandProvider this, B isOut);

inline B art_scheduling_static_DefaultCommandProvider__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_DefaultCommandProvider) this)->type == Tart_scheduling_static_DefaultCommandProvider;
}

inline art_scheduling_static_DefaultCommandProvider art_scheduling_static_DefaultCommandProvider__as(STACK_FRAME void *this) {
  if (art_scheduling_static_DefaultCommandProvider__is(CALLER this)) return (art_scheduling_static_DefaultCommandProvider) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.DefaultCommandProvider.");
  abort();
}

void art_scheduling_static_DefaultCommandProvider_apply(STACK_FRAME art_scheduling_static_DefaultCommandProvider this);

void art_scheduling_static_DefaultCommandProvider_nextCommand_(STACK_FRAME art_scheduling_static_Command result, art_scheduling_static_DefaultCommandProvider this);

#ifdef __cplusplus
}
#endif

#endif