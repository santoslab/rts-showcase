#ifndef SIREUM_H_org_sireum_None_174952
#define SIREUM_H_org_sireum_None_174952

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]


B None_174952__eq(None_174952 this, None_174952 other);
inline B None_174952__ne(None_174952 this, None_174952 other) {
  return !None_174952__eq(this, other);
};
B None_174952__equiv(None_174952 this, None_174952 other);
inline B None_174952__inequiv(None_174952 this, None_174952 other) {
  return !None_174952__equiv(this, other);
};
void None_174952_string_(STACK_FRAME String result, None_174952 this);
void None_174952_cprint(None_174952 this, B isOut);

inline B None_174952__is(STACK_FRAME void* this) {
  return ((None_174952) this)->type == TNone_174952;
}

inline None_174952 None_174952__as(STACK_FRAME void *this) {
  if (None_174952__is(CALLER this)) return (None_174952) this;
  sfAbortImpl(CALLER "Invalid cast to None[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api].");
  abort();
}

void None_174952_apply(STACK_FRAME None_174952 this);

#ifdef __cplusplus
}
#endif

#endif