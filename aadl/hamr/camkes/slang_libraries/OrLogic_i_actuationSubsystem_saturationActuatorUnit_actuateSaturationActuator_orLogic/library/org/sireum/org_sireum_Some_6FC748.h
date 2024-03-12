#ifndef SIREUM_H_org_sireum_Some_6FC748
#define SIREUM_H_org_sireum_Some_6FC748

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[RTS.Actuation.OrLogic_i_Operational_Api]

#define Some_6FC748_value_(this) ((RTS_Actuation_OrLogic_i_Operational_Api) &(this)->value)

B Some_6FC748__eq(Some_6FC748 this, Some_6FC748 other);
inline B Some_6FC748__ne(Some_6FC748 this, Some_6FC748 other) {
  return !Some_6FC748__eq(this, other);
};
B Some_6FC748__equiv(Some_6FC748 this, Some_6FC748 other);
inline B Some_6FC748__inequiv(Some_6FC748 this, Some_6FC748 other) {
  return !Some_6FC748__equiv(this, other);
};
void Some_6FC748_string_(STACK_FRAME String result, Some_6FC748 this);
void Some_6FC748_cprint(Some_6FC748 this, B isOut);

inline B Some_6FC748__is(STACK_FRAME void* this) {
  return ((Some_6FC748) this)->type == TSome_6FC748;
}

inline Some_6FC748 Some_6FC748__as(STACK_FRAME void *this) {
  if (Some_6FC748__is(CALLER this)) return (Some_6FC748) this;
  sfAbortImpl(CALLER "Invalid cast to Some[RTS.Actuation.OrLogic_i_Operational_Api].");
  abort();
}

void Some_6FC748_apply(STACK_FRAME Some_6FC748 this, RTS_Actuation_OrLogic_i_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif