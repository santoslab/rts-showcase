#ifndef SIREUM_H_org_sireum_None_8D8A06
#define SIREUM_H_org_sireum_None_8D8A06

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api]


B None_8D8A06__eq(None_8D8A06 this, None_8D8A06 other);
inline B None_8D8A06__ne(None_8D8A06 this, None_8D8A06 other) {
  return !None_8D8A06__eq(this, other);
};
B None_8D8A06__equiv(None_8D8A06 this, None_8D8A06 other);
inline B None_8D8A06__inequiv(None_8D8A06 this, None_8D8A06 other) {
  return !None_8D8A06__equiv(this, other);
};
void None_8D8A06_string_(STACK_FRAME String result, None_8D8A06 this);
void None_8D8A06_cprint(None_8D8A06 this, B isOut);

inline B None_8D8A06__is(STACK_FRAME void* this) {
  return ((None_8D8A06) this)->type == TNone_8D8A06;
}

inline None_8D8A06 None_8D8A06__as(STACK_FRAME void *this) {
  if (None_8D8A06__is(CALLER this)) return (None_8D8A06) this;
  sfAbortImpl(CALLER "Invalid cast to None[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api].");
  abort();
}

void None_8D8A06_apply(STACK_FRAME None_8D8A06 this);

#ifdef __cplusplus
}
#endif

#endif