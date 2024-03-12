#ifndef SIREUM_H_org_sireum_None_8BED90
#define SIREUM_H_org_sireum_None_8BED90

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[RTS.Actuation.Actuator_i_Initialization_Api]


B None_8BED90__eq(None_8BED90 this, None_8BED90 other);
inline B None_8BED90__ne(None_8BED90 this, None_8BED90 other) {
  return !None_8BED90__eq(this, other);
};
B None_8BED90__equiv(None_8BED90 this, None_8BED90 other);
inline B None_8BED90__inequiv(None_8BED90 this, None_8BED90 other) {
  return !None_8BED90__equiv(this, other);
};
void None_8BED90_string_(STACK_FRAME String result, None_8BED90 this);
void None_8BED90_cprint(None_8BED90 this, B isOut);

inline B None_8BED90__is(STACK_FRAME void* this) {
  return ((None_8BED90) this)->type == TNone_8BED90;
}

inline None_8BED90 None_8BED90__as(STACK_FRAME void *this) {
  if (None_8BED90__is(CALLER this)) return (None_8BED90) this;
  sfAbortImpl(CALLER "Invalid cast to None[RTS.Actuation.Actuator_i_Initialization_Api].");
  abort();
}

void None_8BED90_apply(STACK_FRAME None_8BED90 this);

#ifdef __cplusplus
}
#endif

#endif