#ifndef SIREUM_H_art_scheduling_static_RunToDomain
#define SIREUM_H_art_scheduling_static_RunToDomain

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.RunToDomain

#define art_scheduling_static_RunToDomain_domainId_(this) ((this)->domainId)

B art_scheduling_static_RunToDomain__eq(art_scheduling_static_RunToDomain this, art_scheduling_static_RunToDomain other);
inline B art_scheduling_static_RunToDomain__ne(art_scheduling_static_RunToDomain this, art_scheduling_static_RunToDomain other) {
  return !art_scheduling_static_RunToDomain__eq(this, other);
};
B art_scheduling_static_RunToDomain__equiv(art_scheduling_static_RunToDomain this, art_scheduling_static_RunToDomain other);
inline B art_scheduling_static_RunToDomain__inequiv(art_scheduling_static_RunToDomain this, art_scheduling_static_RunToDomain other) {
  return !art_scheduling_static_RunToDomain__equiv(this, other);
};
void art_scheduling_static_RunToDomain_string_(STACK_FRAME String result, art_scheduling_static_RunToDomain this);
void art_scheduling_static_RunToDomain_cprint(art_scheduling_static_RunToDomain this, B isOut);

inline B art_scheduling_static_RunToDomain__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_RunToDomain) this)->type == Tart_scheduling_static_RunToDomain;
}

inline art_scheduling_static_RunToDomain art_scheduling_static_RunToDomain__as(STACK_FRAME void *this) {
  if (art_scheduling_static_RunToDomain__is(CALLER this)) return (art_scheduling_static_RunToDomain) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.RunToDomain.");
  abort();
}

void art_scheduling_static_RunToDomain_apply(STACK_FRAME art_scheduling_static_RunToDomain this, Z domainId);

#ifdef __cplusplus
}
#endif

#endif