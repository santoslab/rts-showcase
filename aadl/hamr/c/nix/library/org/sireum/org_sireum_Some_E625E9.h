#ifndef SIREUM_H_org_sireum_Some_E625E9
#define SIREUM_H_org_sireum_Some_E625E9

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api]

#define Some_E625E9_value_(this) ((RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &(this)->value)

B Some_E625E9__eq(Some_E625E9 this, Some_E625E9 other);
inline B Some_E625E9__ne(Some_E625E9 this, Some_E625E9 other) {
  return !Some_E625E9__eq(this, other);
};
B Some_E625E9__equiv(Some_E625E9 this, Some_E625E9 other);
inline B Some_E625E9__inequiv(Some_E625E9 this, Some_E625E9 other) {
  return !Some_E625E9__equiv(this, other);
};
void Some_E625E9_string_(STACK_FRAME String result, Some_E625E9 this);
void Some_E625E9_cprint(Some_E625E9 this, B isOut);

inline B Some_E625E9__is(STACK_FRAME void* this) {
  return ((Some_E625E9) this)->type == TSome_E625E9;
}

inline Some_E625E9 Some_E625E9__as(STACK_FRAME void *this) {
  if (Some_E625E9__is(CALLER this)) return (Some_E625E9) this;
  sfAbortImpl(CALLER "Invalid cast to Some[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api].");
  abort();
}

void Some_E625E9_apply(STACK_FRAME Some_E625E9 this, RTS_Actuators_ActuatorsMockThread_i_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif