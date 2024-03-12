#ifndef SIREUM_H_org_sireum_Some_B8A5BD
#define SIREUM_H_org_sireum_Some_B8A5BD

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[RTS.Actuators.ActuatorsMockThread_i_Operational_Api]

#define Some_B8A5BD_value_(this) ((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &(this)->value)

B Some_B8A5BD__eq(Some_B8A5BD this, Some_B8A5BD other);
inline B Some_B8A5BD__ne(Some_B8A5BD this, Some_B8A5BD other) {
  return !Some_B8A5BD__eq(this, other);
};
B Some_B8A5BD__equiv(Some_B8A5BD this, Some_B8A5BD other);
inline B Some_B8A5BD__inequiv(Some_B8A5BD this, Some_B8A5BD other) {
  return !Some_B8A5BD__equiv(this, other);
};
void Some_B8A5BD_string_(STACK_FRAME String result, Some_B8A5BD this);
void Some_B8A5BD_cprint(Some_B8A5BD this, B isOut);

inline B Some_B8A5BD__is(STACK_FRAME void* this) {
  return ((Some_B8A5BD) this)->type == TSome_B8A5BD;
}

inline Some_B8A5BD Some_B8A5BD__as(STACK_FRAME void *this) {
  if (Some_B8A5BD__is(CALLER this)) return (Some_B8A5BD) this;
  sfAbortImpl(CALLER "Invalid cast to Some[RTS.Actuators.ActuatorsMockThread_i_Operational_Api].");
  abort();
}

void Some_B8A5BD_apply(STACK_FRAME Some_B8A5BD this, RTS_Actuators_ActuatorsMockThread_i_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif