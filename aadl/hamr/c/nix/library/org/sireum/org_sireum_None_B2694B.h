#ifndef SIREUM_H_org_sireum_None_B2694B
#define SIREUM_H_org_sireum_None_B2694B

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[art.Art.PortId]


B None_B2694B__eq(None_B2694B this, None_B2694B other);
inline B None_B2694B__ne(None_B2694B this, None_B2694B other) {
  return !None_B2694B__eq(this, other);
};
B None_B2694B__equiv(None_B2694B this, None_B2694B other);
inline B None_B2694B__inequiv(None_B2694B this, None_B2694B other) {
  return !None_B2694B__equiv(this, other);
};
void None_B2694B_string_(STACK_FRAME String result, None_B2694B this);
void None_B2694B_cprint(None_B2694B this, B isOut);

inline B None_B2694B__is(STACK_FRAME void* this) {
  return ((None_B2694B) this)->type == TNone_B2694B;
}

inline None_B2694B None_B2694B__as(STACK_FRAME void *this) {
  if (None_B2694B__is(CALLER this)) return (None_B2694B) this;
  sfAbortImpl(CALLER "Invalid cast to None[art.Art.PortId].");
  abort();
}

void None_B2694B_apply(STACK_FRAME None_B2694B this);

#ifdef __cplusplus
}
#endif

#endif