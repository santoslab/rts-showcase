#ifndef SIREUM_H_org_sireum_None_7E20F8
#define SIREUM_H_org_sireum_None_7E20F8

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[B]


B None_7E20F8__eq(None_7E20F8 this, None_7E20F8 other);
inline B None_7E20F8__ne(None_7E20F8 this, None_7E20F8 other) {
  return !None_7E20F8__eq(this, other);
};
B None_7E20F8__equiv(None_7E20F8 this, None_7E20F8 other);
inline B None_7E20F8__inequiv(None_7E20F8 this, None_7E20F8 other) {
  return !None_7E20F8__equiv(this, other);
};
void None_7E20F8_string_(STACK_FRAME String result, None_7E20F8 this);
void None_7E20F8_cprint(None_7E20F8 this, B isOut);

inline B None_7E20F8__is(STACK_FRAME void* this) {
  return ((None_7E20F8) this)->type == TNone_7E20F8;
}

inline None_7E20F8 None_7E20F8__as(STACK_FRAME void *this) {
  if (None_7E20F8__is(CALLER this)) return (None_7E20F8) this;
  sfAbortImpl(CALLER "Invalid cast to None[B].");
  abort();
}

void None_7E20F8_apply(STACK_FRAME None_7E20F8 this);

#ifdef __cplusplus
}
#endif

#endif