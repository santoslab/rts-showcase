#ifndef SIREUM_H_org_sireum_None_336F0A
#define SIREUM_H_org_sireum_None_336F0A

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[art.scheduling.static.Explorer.ScheduleState]


B None_336F0A__eq(None_336F0A this, None_336F0A other);
inline B None_336F0A__ne(None_336F0A this, None_336F0A other) {
  return !None_336F0A__eq(this, other);
};
B None_336F0A__equiv(None_336F0A this, None_336F0A other);
inline B None_336F0A__inequiv(None_336F0A this, None_336F0A other) {
  return !None_336F0A__equiv(this, other);
};
void None_336F0A_string_(STACK_FRAME String result, None_336F0A this);
void None_336F0A_cprint(None_336F0A this, B isOut);

inline B None_336F0A__is(STACK_FRAME void* this) {
  return ((None_336F0A) this)->type == TNone_336F0A;
}

inline None_336F0A None_336F0A__as(STACK_FRAME void *this) {
  if (None_336F0A__is(CALLER this)) return (None_336F0A) this;
  sfAbortImpl(CALLER "Invalid cast to None[art.scheduling.static.Explorer.ScheduleState].");
  abort();
}

void None_336F0A_apply(STACK_FRAME None_336F0A this);

#ifdef __cplusplus
}
#endif

#endif