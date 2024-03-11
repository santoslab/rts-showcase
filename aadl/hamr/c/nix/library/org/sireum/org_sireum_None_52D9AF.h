#ifndef SIREUM_H_org_sireum_None_52D9AF
#define SIREUM_H_org_sireum_None_52D9AF

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[RTS.Actuation.Actuator_i_Operational_Api]


B None_52D9AF__eq(None_52D9AF this, None_52D9AF other);
inline B None_52D9AF__ne(None_52D9AF this, None_52D9AF other) {
  return !None_52D9AF__eq(this, other);
};
B None_52D9AF__equiv(None_52D9AF this, None_52D9AF other);
inline B None_52D9AF__inequiv(None_52D9AF this, None_52D9AF other) {
  return !None_52D9AF__equiv(this, other);
};
void None_52D9AF_string_(STACK_FRAME String result, None_52D9AF this);
void None_52D9AF_cprint(None_52D9AF this, B isOut);

inline B None_52D9AF__is(STACK_FRAME void* this) {
  return ((None_52D9AF) this)->type == TNone_52D9AF;
}

inline None_52D9AF None_52D9AF__as(STACK_FRAME void *this) {
  if (None_52D9AF__is(CALLER this)) return (None_52D9AF) this;
  sfAbortImpl(CALLER "Invalid cast to None[RTS.Actuation.Actuator_i_Operational_Api].");
  abort();
}

void None_52D9AF_apply(STACK_FRAME None_52D9AF this);

#ifdef __cplusplus
}
#endif

#endif