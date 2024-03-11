#ifndef SIREUM_H_org_sireum_None_5F3A7A
#define SIREUM_H_org_sireum_None_5F3A7A

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[RTS.Cli.RunTopOption]


B None_5F3A7A__eq(None_5F3A7A this, None_5F3A7A other);
inline B None_5F3A7A__ne(None_5F3A7A this, None_5F3A7A other) {
  return !None_5F3A7A__eq(this, other);
};
B None_5F3A7A__equiv(None_5F3A7A this, None_5F3A7A other);
inline B None_5F3A7A__inequiv(None_5F3A7A this, None_5F3A7A other) {
  return !None_5F3A7A__equiv(this, other);
};
void None_5F3A7A_string_(STACK_FRAME String result, None_5F3A7A this);
void None_5F3A7A_cprint(None_5F3A7A this, B isOut);

inline B None_5F3A7A__is(STACK_FRAME void* this) {
  return ((None_5F3A7A) this)->type == TNone_5F3A7A;
}

inline None_5F3A7A None_5F3A7A__as(STACK_FRAME void *this) {
  if (None_5F3A7A__is(CALLER this)) return (None_5F3A7A) this;
  sfAbortImpl(CALLER "Invalid cast to None[RTS.Cli.RunTopOption].");
  abort();
}

void None_5F3A7A_apply(STACK_FRAME None_5F3A7A this);

#ifdef __cplusplus
}
#endif

#endif