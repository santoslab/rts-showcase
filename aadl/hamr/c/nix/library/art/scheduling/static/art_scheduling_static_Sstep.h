#ifndef SIREUM_H_art_scheduling_static_Sstep
#define SIREUM_H_art_scheduling_static_Sstep

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.Sstep

#define art_scheduling_static_Sstep_numSteps_(this) ((this)->numSteps)

B art_scheduling_static_Sstep__eq(art_scheduling_static_Sstep this, art_scheduling_static_Sstep other);
inline B art_scheduling_static_Sstep__ne(art_scheduling_static_Sstep this, art_scheduling_static_Sstep other) {
  return !art_scheduling_static_Sstep__eq(this, other);
};
B art_scheduling_static_Sstep__equiv(art_scheduling_static_Sstep this, art_scheduling_static_Sstep other);
inline B art_scheduling_static_Sstep__inequiv(art_scheduling_static_Sstep this, art_scheduling_static_Sstep other) {
  return !art_scheduling_static_Sstep__equiv(this, other);
};
void art_scheduling_static_Sstep_string_(STACK_FRAME String result, art_scheduling_static_Sstep this);
void art_scheduling_static_Sstep_cprint(art_scheduling_static_Sstep this, B isOut);

inline B art_scheduling_static_Sstep__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_Sstep) this)->type == Tart_scheduling_static_Sstep;
}

inline art_scheduling_static_Sstep art_scheduling_static_Sstep__as(STACK_FRAME void *this) {
  if (art_scheduling_static_Sstep__is(CALLER this)) return (art_scheduling_static_Sstep) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.Sstep.");
  abort();
}

void art_scheduling_static_Sstep_apply(STACK_FRAME art_scheduling_static_Sstep this, Z numSteps);

#ifdef __cplusplus
}
#endif

#endif