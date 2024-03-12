#ifndef SIREUM_H_org_sireum_None_080F67
#define SIREUM_H_org_sireum_None_080F67

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]


B None_080F67__eq(None_080F67 this, None_080F67 other);
inline B None_080F67__ne(None_080F67 this, None_080F67 other) {
  return !None_080F67__eq(this, other);
};
B None_080F67__equiv(None_080F67 this, None_080F67 other);
inline B None_080F67__inequiv(None_080F67 this, None_080F67 other) {
  return !None_080F67__equiv(this, other);
};
void None_080F67_string_(STACK_FRAME String result, None_080F67 this);
void None_080F67_cprint(None_080F67 this, B isOut);

inline B None_080F67__is(STACK_FRAME void* this) {
  return ((None_080F67) this)->type == TNone_080F67;
}

inline None_080F67 None_080F67__as(STACK_FRAME void *this) {
  if (None_080F67__is(CALLER this)) return (None_080F67) this;
  sfAbortImpl(CALLER "Invalid cast to None[RTS.Actuation.CoincidenceLogic_i_Initialization_Api].");
  abort();
}

void None_080F67_apply(STACK_FRAME None_080F67 this);

#ifdef __cplusplus
}
#endif

#endif