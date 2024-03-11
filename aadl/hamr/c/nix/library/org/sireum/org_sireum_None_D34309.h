#ifndef SIREUM_H_org_sireum_None_D34309
#define SIREUM_H_org_sireum_None_D34309

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[art.Art.BridgeId]


B None_D34309__eq(None_D34309 this, None_D34309 other);
inline B None_D34309__ne(None_D34309 this, None_D34309 other) {
  return !None_D34309__eq(this, other);
};
B None_D34309__equiv(None_D34309 this, None_D34309 other);
inline B None_D34309__inequiv(None_D34309 this, None_D34309 other) {
  return !None_D34309__equiv(this, other);
};
void None_D34309_string_(STACK_FRAME String result, None_D34309 this);
void None_D34309_cprint(None_D34309 this, B isOut);

inline B None_D34309__is(STACK_FRAME void* this) {
  return ((None_D34309) this)->type == TNone_D34309;
}

inline None_D34309 None_D34309__as(STACK_FRAME void *this) {
  if (None_D34309__is(CALLER this)) return (None_D34309) this;
  sfAbortImpl(CALLER "Invalid cast to None[art.Art.BridgeId].");
  abort();
}

void None_D34309_apply(STACK_FRAME None_D34309 this);

#ifdef __cplusplus
}
#endif

#endif