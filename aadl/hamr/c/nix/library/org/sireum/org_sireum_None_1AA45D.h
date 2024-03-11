#ifndef SIREUM_H_org_sireum_None_1AA45D
#define SIREUM_H_org_sireum_None_1AA45D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[RTS.Actuation.OrLogic_i_Operational_Api]


B None_1AA45D__eq(None_1AA45D this, None_1AA45D other);
inline B None_1AA45D__ne(None_1AA45D this, None_1AA45D other) {
  return !None_1AA45D__eq(this, other);
};
B None_1AA45D__equiv(None_1AA45D this, None_1AA45D other);
inline B None_1AA45D__inequiv(None_1AA45D this, None_1AA45D other) {
  return !None_1AA45D__equiv(this, other);
};
void None_1AA45D_string_(STACK_FRAME String result, None_1AA45D this);
void None_1AA45D_cprint(None_1AA45D this, B isOut);

inline B None_1AA45D__is(STACK_FRAME void* this) {
  return ((None_1AA45D) this)->type == TNone_1AA45D;
}

inline None_1AA45D None_1AA45D__as(STACK_FRAME void *this) {
  if (None_1AA45D__is(CALLER this)) return (None_1AA45D) this;
  sfAbortImpl(CALLER "Invalid cast to None[RTS.Actuation.OrLogic_i_Operational_Api].");
  abort();
}

void None_1AA45D_apply(STACK_FRAME None_1AA45D this);

#ifdef __cplusplus
}
#endif

#endif