#ifndef SIREUM_H_org_sireum_None_9803C0
#define SIREUM_H_org_sireum_None_9803C0

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[RTS.Cli.RunChoice.Type]


B None_9803C0__eq(None_9803C0 this, None_9803C0 other);
inline B None_9803C0__ne(None_9803C0 this, None_9803C0 other) {
  return !None_9803C0__eq(this, other);
};
B None_9803C0__equiv(None_9803C0 this, None_9803C0 other);
inline B None_9803C0__inequiv(None_9803C0 this, None_9803C0 other) {
  return !None_9803C0__equiv(this, other);
};
void None_9803C0_string_(STACK_FRAME String result, None_9803C0 this);
void None_9803C0_cprint(None_9803C0 this, B isOut);

inline B None_9803C0__is(STACK_FRAME void* this) {
  return ((None_9803C0) this)->type == TNone_9803C0;
}

inline None_9803C0 None_9803C0__as(STACK_FRAME void *this) {
  if (None_9803C0__is(CALLER this)) return (None_9803C0) this;
  sfAbortImpl(CALLER "Invalid cast to None[RTS.Cli.RunChoice.Type].");
  abort();
}

void None_9803C0_apply(STACK_FRAME None_9803C0 this);

#ifdef __cplusplus
}
#endif

#endif