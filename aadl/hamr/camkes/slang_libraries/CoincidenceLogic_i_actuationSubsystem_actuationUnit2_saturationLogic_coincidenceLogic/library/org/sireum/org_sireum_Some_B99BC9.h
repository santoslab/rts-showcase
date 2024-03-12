#ifndef SIREUM_H_org_sireum_Some_B99BC9
#define SIREUM_H_org_sireum_Some_B99BC9

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[RTS.Actuation.CoincidenceLogic_i_Operational_Api]

#define Some_B99BC9_value_(this) ((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &(this)->value)

B Some_B99BC9__eq(Some_B99BC9 this, Some_B99BC9 other);
inline B Some_B99BC9__ne(Some_B99BC9 this, Some_B99BC9 other) {
  return !Some_B99BC9__eq(this, other);
};
B Some_B99BC9__equiv(Some_B99BC9 this, Some_B99BC9 other);
inline B Some_B99BC9__inequiv(Some_B99BC9 this, Some_B99BC9 other) {
  return !Some_B99BC9__equiv(this, other);
};
void Some_B99BC9_string_(STACK_FRAME String result, Some_B99BC9 this);
void Some_B99BC9_cprint(Some_B99BC9 this, B isOut);

inline B Some_B99BC9__is(STACK_FRAME void* this) {
  return ((Some_B99BC9) this)->type == TSome_B99BC9;
}

inline Some_B99BC9 Some_B99BC9__as(STACK_FRAME void *this) {
  if (Some_B99BC9__is(CALLER this)) return (Some_B99BC9) this;
  sfAbortImpl(CALLER "Invalid cast to Some[RTS.Actuation.CoincidenceLogic_i_Operational_Api].");
  abort();
}

void Some_B99BC9_apply(STACK_FRAME Some_B99BC9 this, RTS_Actuation_CoincidenceLogic_i_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif