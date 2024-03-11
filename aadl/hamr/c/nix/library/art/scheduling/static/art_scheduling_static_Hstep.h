#ifndef SIREUM_H_art_scheduling_static_Hstep
#define SIREUM_H_art_scheduling_static_Hstep

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.Hstep

#define art_scheduling_static_Hstep_numSteps_(this) ((this)->numSteps)

B art_scheduling_static_Hstep__eq(art_scheduling_static_Hstep this, art_scheduling_static_Hstep other);
inline B art_scheduling_static_Hstep__ne(art_scheduling_static_Hstep this, art_scheduling_static_Hstep other) {
  return !art_scheduling_static_Hstep__eq(this, other);
};
B art_scheduling_static_Hstep__equiv(art_scheduling_static_Hstep this, art_scheduling_static_Hstep other);
inline B art_scheduling_static_Hstep__inequiv(art_scheduling_static_Hstep this, art_scheduling_static_Hstep other) {
  return !art_scheduling_static_Hstep__equiv(this, other);
};
void art_scheduling_static_Hstep_string_(STACK_FRAME String result, art_scheduling_static_Hstep this);
void art_scheduling_static_Hstep_cprint(art_scheduling_static_Hstep this, B isOut);

inline B art_scheduling_static_Hstep__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_Hstep) this)->type == Tart_scheduling_static_Hstep;
}

inline art_scheduling_static_Hstep art_scheduling_static_Hstep__as(STACK_FRAME void *this) {
  if (art_scheduling_static_Hstep__is(CALLER this)) return (art_scheduling_static_Hstep) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.Hstep.");
  abort();
}

void art_scheduling_static_Hstep_apply(STACK_FRAME art_scheduling_static_Hstep this, Z numSteps);

#ifdef __cplusplus
}
#endif

#endif