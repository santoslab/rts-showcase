#ifndef SIREUM_H_org_sireum_None_1A60DD
#define SIREUM_H_org_sireum_None_1A60DD

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[RTS.EventControl.EventControlMockThread_i_Operational_Api]


B None_1A60DD__eq(None_1A60DD this, None_1A60DD other);
inline B None_1A60DD__ne(None_1A60DD this, None_1A60DD other) {
  return !None_1A60DD__eq(this, other);
};
B None_1A60DD__equiv(None_1A60DD this, None_1A60DD other);
inline B None_1A60DD__inequiv(None_1A60DD this, None_1A60DD other) {
  return !None_1A60DD__equiv(this, other);
};
void None_1A60DD_string_(STACK_FRAME String result, None_1A60DD this);
void None_1A60DD_cprint(None_1A60DD this, B isOut);

inline B None_1A60DD__is(STACK_FRAME void* this) {
  return ((None_1A60DD) this)->type == TNone_1A60DD;
}

inline None_1A60DD None_1A60DD__as(STACK_FRAME void *this) {
  if (None_1A60DD__is(CALLER this)) return (None_1A60DD) this;
  sfAbortImpl(CALLER "Invalid cast to None[RTS.EventControl.EventControlMockThread_i_Operational_Api].");
  abort();
}

void None_1A60DD_apply(STACK_FRAME None_1A60DD this);

#ifdef __cplusplus
}
#endif

#endif