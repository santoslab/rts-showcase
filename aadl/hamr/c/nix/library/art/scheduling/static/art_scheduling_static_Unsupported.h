#ifndef SIREUM_H_art_scheduling_static_Unsupported
#define SIREUM_H_art_scheduling_static_Unsupported

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.Unsupported


B art_scheduling_static_Unsupported__eq(art_scheduling_static_Unsupported this, art_scheduling_static_Unsupported other);
inline B art_scheduling_static_Unsupported__ne(art_scheduling_static_Unsupported this, art_scheduling_static_Unsupported other) {
  return !art_scheduling_static_Unsupported__eq(this, other);
};
B art_scheduling_static_Unsupported__equiv(art_scheduling_static_Unsupported this, art_scheduling_static_Unsupported other);
inline B art_scheduling_static_Unsupported__inequiv(art_scheduling_static_Unsupported this, art_scheduling_static_Unsupported other) {
  return !art_scheduling_static_Unsupported__equiv(this, other);
};
void art_scheduling_static_Unsupported_string_(STACK_FRAME String result, art_scheduling_static_Unsupported this);
void art_scheduling_static_Unsupported_cprint(art_scheduling_static_Unsupported this, B isOut);

inline B art_scheduling_static_Unsupported__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_Unsupported) this)->type == Tart_scheduling_static_Unsupported;
}

inline art_scheduling_static_Unsupported art_scheduling_static_Unsupported__as(STACK_FRAME void *this) {
  if (art_scheduling_static_Unsupported__is(CALLER this)) return (art_scheduling_static_Unsupported) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.Unsupported.");
  abort();
}

void art_scheduling_static_Unsupported_apply(STACK_FRAME art_scheduling_static_Unsupported this);

#ifdef __cplusplus
}
#endif

#endif