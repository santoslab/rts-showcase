#ifndef SIREUM_H_art_Bridge
#define SIREUM_H_art_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.Bridge

#define art_Bridge__eq(this, other) Type__eq(this, other)
#define art_Bridge__ne(this, other) (!Type__eq(this, other))
#define art_Bridge__equiv(this, other) Type__equiv(this, other)
#define art_Bridge__inequiv(this, other) (!Type__equiv(this, other))
#define art_Bridge_cprint(this, isOut) Type_cprint(this, isOut)
B art_Bridge__is(STACK_FRAME void *this);
art_Bridge art_Bridge__as(STACK_FRAME void *this);
inline void art_Bridge_string_(STACK_FRAME String result, art_Bridge this) {
  Type_string_(CALLER result, this);
}

void art_Bridge_name_(STACK_FRAME String result, art_Bridge this);

#ifdef __cplusplus
}
#endif

#endif