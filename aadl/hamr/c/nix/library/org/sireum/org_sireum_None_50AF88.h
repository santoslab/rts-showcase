#ifndef SIREUM_H_org_sireum_None_50AF88
#define SIREUM_H_org_sireum_None_50AF88

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[art.ArtSlangMessage]


B None_50AF88__eq(None_50AF88 this, None_50AF88 other);
inline B None_50AF88__ne(None_50AF88 this, None_50AF88 other) {
  return !None_50AF88__eq(this, other);
};
B None_50AF88__equiv(None_50AF88 this, None_50AF88 other);
inline B None_50AF88__inequiv(None_50AF88 this, None_50AF88 other) {
  return !None_50AF88__equiv(this, other);
};
void None_50AF88_string_(STACK_FRAME String result, None_50AF88 this);
void None_50AF88_cprint(None_50AF88 this, B isOut);

inline B None_50AF88__is(STACK_FRAME void* this) {
  return ((None_50AF88) this)->type == TNone_50AF88;
}

inline None_50AF88 None_50AF88__as(STACK_FRAME void *this) {
  if (None_50AF88__is(CALLER this)) return (None_50AF88) this;
  sfAbortImpl(CALLER "Invalid cast to None[art.ArtSlangMessage].");
  abort();
}

void None_50AF88_apply(STACK_FRAME None_50AF88 this);

#ifdef __cplusplus
}
#endif

#endif