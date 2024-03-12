#ifndef SIREUM_H_org_sireum_None_37A019
#define SIREUM_H_org_sireum_None_37A019

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[RTS.Actuation.CoincidenceLogic_i_Operational_Api]


B None_37A019__eq(None_37A019 this, None_37A019 other);
inline B None_37A019__ne(None_37A019 this, None_37A019 other) {
  return !None_37A019__eq(this, other);
};
B None_37A019__equiv(None_37A019 this, None_37A019 other);
inline B None_37A019__inequiv(None_37A019 this, None_37A019 other) {
  return !None_37A019__equiv(this, other);
};
void None_37A019_string_(STACK_FRAME String result, None_37A019 this);
void None_37A019_cprint(None_37A019 this, B isOut);

inline B None_37A019__is(STACK_FRAME void* this) {
  return ((None_37A019) this)->type == TNone_37A019;
}

inline None_37A019 None_37A019__as(STACK_FRAME void *this) {
  if (None_37A019__is(CALLER this)) return (None_37A019) this;
  sfAbortImpl(CALLER "Invalid cast to None[RTS.Actuation.CoincidenceLogic_i_Operational_Api].");
  abort();
}

void None_37A019_apply(STACK_FRAME None_37A019 this);

#ifdef __cplusplus
}
#endif

#endif