#ifndef SIREUM_H_org_sireum_None_2939E3
#define SIREUM_H_org_sireum_None_2939E3

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[RTS.EventControl.EventControlMockThread_i_Initialization_Api]


B None_2939E3__eq(None_2939E3 this, None_2939E3 other);
inline B None_2939E3__ne(None_2939E3 this, None_2939E3 other) {
  return !None_2939E3__eq(this, other);
};
B None_2939E3__equiv(None_2939E3 this, None_2939E3 other);
inline B None_2939E3__inequiv(None_2939E3 this, None_2939E3 other) {
  return !None_2939E3__equiv(this, other);
};
void None_2939E3_string_(STACK_FRAME String result, None_2939E3 this);
void None_2939E3_cprint(None_2939E3 this, B isOut);

inline B None_2939E3__is(STACK_FRAME void* this) {
  return ((None_2939E3) this)->type == TNone_2939E3;
}

inline None_2939E3 None_2939E3__as(STACK_FRAME void *this) {
  if (None_2939E3__is(CALLER this)) return (None_2939E3) this;
  sfAbortImpl(CALLER "Invalid cast to None[RTS.EventControl.EventControlMockThread_i_Initialization_Api].");
  abort();
}

void None_2939E3_apply(STACK_FRAME None_2939E3 this);

#ifdef __cplusplus
}
#endif

#endif