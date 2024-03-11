#ifndef SIREUM_H_org_sireum_None_00347F
#define SIREUM_H_org_sireum_None_00347F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[IS[Z, art.Art.BridgeId]]


B None_00347F__eq(None_00347F this, None_00347F other);
inline B None_00347F__ne(None_00347F this, None_00347F other) {
  return !None_00347F__eq(this, other);
};
B None_00347F__equiv(None_00347F this, None_00347F other);
inline B None_00347F__inequiv(None_00347F this, None_00347F other) {
  return !None_00347F__equiv(this, other);
};
void None_00347F_string_(STACK_FRAME String result, None_00347F this);
void None_00347F_cprint(None_00347F this, B isOut);

inline B None_00347F__is(STACK_FRAME void* this) {
  return ((None_00347F) this)->type == TNone_00347F;
}

inline None_00347F None_00347F__as(STACK_FRAME void *this) {
  if (None_00347F__is(CALLER this)) return (None_00347F) this;
  sfAbortImpl(CALLER "Invalid cast to None[IS[Z, art.Art.BridgeId]].");
  abort();
}

void None_00347F_apply(STACK_FRAME None_00347F this);

#ifdef __cplusplus
}
#endif

#endif