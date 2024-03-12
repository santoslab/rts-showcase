#ifndef SIREUM_H_org_sireum_None_C050C2
#define SIREUM_H_org_sireum_None_C050C2

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[RTS.Actuators.ActuatorsMockThread_i_Operational_Api]


B None_C050C2__eq(None_C050C2 this, None_C050C2 other);
inline B None_C050C2__ne(None_C050C2 this, None_C050C2 other) {
  return !None_C050C2__eq(this, other);
};
B None_C050C2__equiv(None_C050C2 this, None_C050C2 other);
inline B None_C050C2__inequiv(None_C050C2 this, None_C050C2 other) {
  return !None_C050C2__equiv(this, other);
};
void None_C050C2_string_(STACK_FRAME String result, None_C050C2 this);
void None_C050C2_cprint(None_C050C2 this, B isOut);

inline B None_C050C2__is(STACK_FRAME void* this) {
  return ((None_C050C2) this)->type == TNone_C050C2;
}

inline None_C050C2 None_C050C2__as(STACK_FRAME void *this) {
  if (None_C050C2__is(CALLER this)) return (None_C050C2) this;
  sfAbortImpl(CALLER "Invalid cast to None[RTS.Actuators.ActuatorsMockThread_i_Operational_Api].");
  abort();
}

void None_C050C2_apply(STACK_FRAME None_C050C2 this);

#ifdef __cplusplus
}
#endif

#endif