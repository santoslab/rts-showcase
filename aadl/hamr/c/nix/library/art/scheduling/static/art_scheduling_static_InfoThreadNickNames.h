#ifndef SIREUM_H_art_scheduling_static_InfoThreadNickNames
#define SIREUM_H_art_scheduling_static_InfoThreadNickNames

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.InfoThreadNickNames


B art_scheduling_static_InfoThreadNickNames__eq(art_scheduling_static_InfoThreadNickNames this, art_scheduling_static_InfoThreadNickNames other);
inline B art_scheduling_static_InfoThreadNickNames__ne(art_scheduling_static_InfoThreadNickNames this, art_scheduling_static_InfoThreadNickNames other) {
  return !art_scheduling_static_InfoThreadNickNames__eq(this, other);
};
B art_scheduling_static_InfoThreadNickNames__equiv(art_scheduling_static_InfoThreadNickNames this, art_scheduling_static_InfoThreadNickNames other);
inline B art_scheduling_static_InfoThreadNickNames__inequiv(art_scheduling_static_InfoThreadNickNames this, art_scheduling_static_InfoThreadNickNames other) {
  return !art_scheduling_static_InfoThreadNickNames__equiv(this, other);
};
void art_scheduling_static_InfoThreadNickNames_string_(STACK_FRAME String result, art_scheduling_static_InfoThreadNickNames this);
void art_scheduling_static_InfoThreadNickNames_cprint(art_scheduling_static_InfoThreadNickNames this, B isOut);

inline B art_scheduling_static_InfoThreadNickNames__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_InfoThreadNickNames) this)->type == Tart_scheduling_static_InfoThreadNickNames;
}

inline art_scheduling_static_InfoThreadNickNames art_scheduling_static_InfoThreadNickNames__as(STACK_FRAME void *this) {
  if (art_scheduling_static_InfoThreadNickNames__is(CALLER this)) return (art_scheduling_static_InfoThreadNickNames) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.InfoThreadNickNames.");
  abort();
}

void art_scheduling_static_InfoThreadNickNames_apply(STACK_FRAME art_scheduling_static_InfoThreadNickNames this);

#ifdef __cplusplus
}
#endif

#endif