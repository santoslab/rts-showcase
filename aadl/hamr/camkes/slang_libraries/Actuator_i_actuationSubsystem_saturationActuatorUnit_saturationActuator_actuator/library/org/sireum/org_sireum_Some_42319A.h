#ifndef SIREUM_H_org_sireum_Some_42319A
#define SIREUM_H_org_sireum_Some_42319A

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[RTS.Actuation.Actuator_i_Operational_Api]

#define Some_42319A_value_(this) ((RTS_Actuation_Actuator_i_Operational_Api) &(this)->value)

B Some_42319A__eq(Some_42319A this, Some_42319A other);
inline B Some_42319A__ne(Some_42319A this, Some_42319A other) {
  return !Some_42319A__eq(this, other);
};
B Some_42319A__equiv(Some_42319A this, Some_42319A other);
inline B Some_42319A__inequiv(Some_42319A this, Some_42319A other) {
  return !Some_42319A__equiv(this, other);
};
void Some_42319A_string_(STACK_FRAME String result, Some_42319A this);
void Some_42319A_cprint(Some_42319A this, B isOut);

inline B Some_42319A__is(STACK_FRAME void* this) {
  return ((Some_42319A) this)->type == TSome_42319A;
}

inline Some_42319A Some_42319A__as(STACK_FRAME void *this) {
  if (Some_42319A__is(CALLER this)) return (Some_42319A) this;
  sfAbortImpl(CALLER "Invalid cast to Some[RTS.Actuation.Actuator_i_Operational_Api].");
  abort();
}

void Some_42319A_apply(STACK_FRAME Some_42319A this, RTS_Actuation_Actuator_i_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif