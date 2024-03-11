#ifndef SIREUM_H_org_sireum_None_8D6171
#define SIREUM_H_org_sireum_None_8D6171

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]


B None_8D6171__eq(None_8D6171 this, None_8D6171 other);
inline B None_8D6171__ne(None_8D6171 this, None_8D6171 other) {
  return !None_8D6171__eq(this, other);
};
B None_8D6171__equiv(None_8D6171 this, None_8D6171 other);
inline B None_8D6171__inequiv(None_8D6171 this, None_8D6171 other) {
  return !None_8D6171__equiv(this, other);
};
void None_8D6171_string_(STACK_FRAME String result, None_8D6171 this);
void None_8D6171_cprint(None_8D6171 this, B isOut);

inline B None_8D6171__is(STACK_FRAME void* this) {
  return ((None_8D6171) this)->type == TNone_8D6171;
}

inline None_8D6171 None_8D6171__as(STACK_FRAME void *this) {
  if (None_8D6171__is(CALLER this)) return (None_8D6171) this;
  sfAbortImpl(CALLER "Invalid cast to None[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api].");
  abort();
}

void None_8D6171_apply(STACK_FRAME None_8D6171 this);

#ifdef __cplusplus
}
#endif

#endif