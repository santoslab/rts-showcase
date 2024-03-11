#ifndef SIREUM_H_art_scheduling_static_RunToThread
#define SIREUM_H_art_scheduling_static_RunToThread

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.RunToThread

#define art_scheduling_static_RunToThread_ThreadId_(this) ((String) &(this)->ThreadId)

B art_scheduling_static_RunToThread__eq(art_scheduling_static_RunToThread this, art_scheduling_static_RunToThread other);
inline B art_scheduling_static_RunToThread__ne(art_scheduling_static_RunToThread this, art_scheduling_static_RunToThread other) {
  return !art_scheduling_static_RunToThread__eq(this, other);
};
B art_scheduling_static_RunToThread__equiv(art_scheduling_static_RunToThread this, art_scheduling_static_RunToThread other);
inline B art_scheduling_static_RunToThread__inequiv(art_scheduling_static_RunToThread this, art_scheduling_static_RunToThread other) {
  return !art_scheduling_static_RunToThread__equiv(this, other);
};
void art_scheduling_static_RunToThread_string_(STACK_FRAME String result, art_scheduling_static_RunToThread this);
void art_scheduling_static_RunToThread_cprint(art_scheduling_static_RunToThread this, B isOut);

inline B art_scheduling_static_RunToThread__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_RunToThread) this)->type == Tart_scheduling_static_RunToThread;
}

inline art_scheduling_static_RunToThread art_scheduling_static_RunToThread__as(STACK_FRAME void *this) {
  if (art_scheduling_static_RunToThread__is(CALLER this)) return (art_scheduling_static_RunToThread) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.RunToThread.");
  abort();
}

void art_scheduling_static_RunToThread_apply(STACK_FRAME art_scheduling_static_RunToThread this, String ThreadId);

#ifdef __cplusplus
}
#endif

#endif