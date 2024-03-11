#ifndef SIREUM_H_art_scheduling_static_RunToHP
#define SIREUM_H_art_scheduling_static_RunToHP

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.RunToHP

#define art_scheduling_static_RunToHP_hpNum_(this) ((this)->hpNum)

B art_scheduling_static_RunToHP__eq(art_scheduling_static_RunToHP this, art_scheduling_static_RunToHP other);
inline B art_scheduling_static_RunToHP__ne(art_scheduling_static_RunToHP this, art_scheduling_static_RunToHP other) {
  return !art_scheduling_static_RunToHP__eq(this, other);
};
B art_scheduling_static_RunToHP__equiv(art_scheduling_static_RunToHP this, art_scheduling_static_RunToHP other);
inline B art_scheduling_static_RunToHP__inequiv(art_scheduling_static_RunToHP this, art_scheduling_static_RunToHP other) {
  return !art_scheduling_static_RunToHP__equiv(this, other);
};
void art_scheduling_static_RunToHP_string_(STACK_FRAME String result, art_scheduling_static_RunToHP this);
void art_scheduling_static_RunToHP_cprint(art_scheduling_static_RunToHP this, B isOut);

inline B art_scheduling_static_RunToHP__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_RunToHP) this)->type == Tart_scheduling_static_RunToHP;
}

inline art_scheduling_static_RunToHP art_scheduling_static_RunToHP__as(STACK_FRAME void *this) {
  if (art_scheduling_static_RunToHP__is(CALLER this)) return (art_scheduling_static_RunToHP) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.RunToHP.");
  abort();
}

void art_scheduling_static_RunToHP_apply(STACK_FRAME art_scheduling_static_RunToHP this, Z hpNum);

#ifdef __cplusplus
}
#endif

#endif