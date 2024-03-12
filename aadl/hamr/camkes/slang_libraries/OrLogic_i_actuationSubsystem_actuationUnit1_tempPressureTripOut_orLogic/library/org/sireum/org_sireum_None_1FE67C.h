#ifndef SIREUM_H_org_sireum_None_1FE67C
#define SIREUM_H_org_sireum_None_1FE67C

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[RTS.Actuation.OrLogic_i_Initialization_Api]


B None_1FE67C__eq(None_1FE67C this, None_1FE67C other);
inline B None_1FE67C__ne(None_1FE67C this, None_1FE67C other) {
  return !None_1FE67C__eq(this, other);
};
B None_1FE67C__equiv(None_1FE67C this, None_1FE67C other);
inline B None_1FE67C__inequiv(None_1FE67C this, None_1FE67C other) {
  return !None_1FE67C__equiv(this, other);
};
void None_1FE67C_string_(STACK_FRAME String result, None_1FE67C this);
void None_1FE67C_cprint(None_1FE67C this, B isOut);

inline B None_1FE67C__is(STACK_FRAME void* this) {
  return ((None_1FE67C) this)->type == TNone_1FE67C;
}

inline None_1FE67C None_1FE67C__as(STACK_FRAME void *this) {
  if (None_1FE67C__is(CALLER this)) return (None_1FE67C) this;
  sfAbortImpl(CALLER "Invalid cast to None[RTS.Actuation.OrLogic_i_Initialization_Api].");
  abort();
}

void None_1FE67C_apply(STACK_FRAME None_1FE67C this);

#ifdef __cplusplus
}
#endif

#endif