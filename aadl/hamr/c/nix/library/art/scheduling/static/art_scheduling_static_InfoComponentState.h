#ifndef SIREUM_H_art_scheduling_static_InfoComponentState
#define SIREUM_H_art_scheduling_static_InfoComponentState

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.InfoComponentState

#define art_scheduling_static_InfoComponentState_threadNickName_(this) ((String) &(this)->threadNickName)

B art_scheduling_static_InfoComponentState__eq(art_scheduling_static_InfoComponentState this, art_scheduling_static_InfoComponentState other);
inline B art_scheduling_static_InfoComponentState__ne(art_scheduling_static_InfoComponentState this, art_scheduling_static_InfoComponentState other) {
  return !art_scheduling_static_InfoComponentState__eq(this, other);
};
B art_scheduling_static_InfoComponentState__equiv(art_scheduling_static_InfoComponentState this, art_scheduling_static_InfoComponentState other);
inline B art_scheduling_static_InfoComponentState__inequiv(art_scheduling_static_InfoComponentState this, art_scheduling_static_InfoComponentState other) {
  return !art_scheduling_static_InfoComponentState__equiv(this, other);
};
void art_scheduling_static_InfoComponentState_string_(STACK_FRAME String result, art_scheduling_static_InfoComponentState this);
void art_scheduling_static_InfoComponentState_cprint(art_scheduling_static_InfoComponentState this, B isOut);

inline B art_scheduling_static_InfoComponentState__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_InfoComponentState) this)->type == Tart_scheduling_static_InfoComponentState;
}

inline art_scheduling_static_InfoComponentState art_scheduling_static_InfoComponentState__as(STACK_FRAME void *this) {
  if (art_scheduling_static_InfoComponentState__is(CALLER this)) return (art_scheduling_static_InfoComponentState) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.InfoComponentState.");
  abort();
}

void art_scheduling_static_InfoComponentState_apply(STACK_FRAME art_scheduling_static_InfoComponentState this, String threadNickName);

#ifdef __cplusplus
}
#endif

#endif