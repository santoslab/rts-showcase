#ifndef SIREUM_H_art_scheduling_static_InfoComponentStateId
#define SIREUM_H_art_scheduling_static_InfoComponentStateId

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.InfoComponentStateId

#define art_scheduling_static_InfoComponentStateId_bridgeId_(this) ((this)->bridgeId)

B art_scheduling_static_InfoComponentStateId__eq(art_scheduling_static_InfoComponentStateId this, art_scheduling_static_InfoComponentStateId other);
inline B art_scheduling_static_InfoComponentStateId__ne(art_scheduling_static_InfoComponentStateId this, art_scheduling_static_InfoComponentStateId other) {
  return !art_scheduling_static_InfoComponentStateId__eq(this, other);
};
B art_scheduling_static_InfoComponentStateId__equiv(art_scheduling_static_InfoComponentStateId this, art_scheduling_static_InfoComponentStateId other);
inline B art_scheduling_static_InfoComponentStateId__inequiv(art_scheduling_static_InfoComponentStateId this, art_scheduling_static_InfoComponentStateId other) {
  return !art_scheduling_static_InfoComponentStateId__equiv(this, other);
};
void art_scheduling_static_InfoComponentStateId_string_(STACK_FRAME String result, art_scheduling_static_InfoComponentStateId this);
void art_scheduling_static_InfoComponentStateId_cprint(art_scheduling_static_InfoComponentStateId this, B isOut);

inline B art_scheduling_static_InfoComponentStateId__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_InfoComponentStateId) this)->type == Tart_scheduling_static_InfoComponentStateId;
}

inline art_scheduling_static_InfoComponentStateId art_scheduling_static_InfoComponentStateId__as(STACK_FRAME void *this) {
  if (art_scheduling_static_InfoComponentStateId__is(CALLER this)) return (art_scheduling_static_InfoComponentStateId) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.InfoComponentStateId.");
  abort();
}

void art_scheduling_static_InfoComponentStateId_apply(STACK_FRAME art_scheduling_static_InfoComponentStateId this, Z bridgeId);

#ifdef __cplusplus
}
#endif

#endif