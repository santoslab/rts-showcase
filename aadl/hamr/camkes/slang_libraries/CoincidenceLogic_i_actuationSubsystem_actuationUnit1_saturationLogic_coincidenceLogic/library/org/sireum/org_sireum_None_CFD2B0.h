#ifndef SIREUM_H_org_sireum_None_CFD2B0
#define SIREUM_H_org_sireum_None_CFD2B0

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[IS[Z, art.Art.PortId]]


B None_CFD2B0__eq(None_CFD2B0 this, None_CFD2B0 other);
inline B None_CFD2B0__ne(None_CFD2B0 this, None_CFD2B0 other) {
  return !None_CFD2B0__eq(this, other);
};
B None_CFD2B0__equiv(None_CFD2B0 this, None_CFD2B0 other);
inline B None_CFD2B0__inequiv(None_CFD2B0 this, None_CFD2B0 other) {
  return !None_CFD2B0__equiv(this, other);
};
void None_CFD2B0_string_(STACK_FRAME String result, None_CFD2B0 this);
void None_CFD2B0_cprint(None_CFD2B0 this, B isOut);

inline B None_CFD2B0__is(STACK_FRAME void* this) {
  return ((None_CFD2B0) this)->type == TNone_CFD2B0;
}

inline None_CFD2B0 None_CFD2B0__as(STACK_FRAME void *this) {
  if (None_CFD2B0__is(CALLER this)) return (None_CFD2B0) this;
  sfAbortImpl(CALLER "Invalid cast to None[IS[Z, art.Art.PortId]].");
  abort();
}

void None_CFD2B0_apply(STACK_FRAME None_CFD2B0 this);

#ifdef __cplusplus
}
#endif

#endif