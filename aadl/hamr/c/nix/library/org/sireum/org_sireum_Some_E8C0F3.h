#ifndef SIREUM_H_org_sireum_Some_E8C0F3
#define SIREUM_H_org_sireum_Some_E8C0F3

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[RTS.Actuation.Actuator_i_Initialization_Api]

#define Some_E8C0F3_value_(this) ((RTS_Actuation_Actuator_i_Initialization_Api) &(this)->value)

B Some_E8C0F3__eq(Some_E8C0F3 this, Some_E8C0F3 other);
inline B Some_E8C0F3__ne(Some_E8C0F3 this, Some_E8C0F3 other) {
  return !Some_E8C0F3__eq(this, other);
};
B Some_E8C0F3__equiv(Some_E8C0F3 this, Some_E8C0F3 other);
inline B Some_E8C0F3__inequiv(Some_E8C0F3 this, Some_E8C0F3 other) {
  return !Some_E8C0F3__equiv(this, other);
};
void Some_E8C0F3_string_(STACK_FRAME String result, Some_E8C0F3 this);
void Some_E8C0F3_cprint(Some_E8C0F3 this, B isOut);

inline B Some_E8C0F3__is(STACK_FRAME void* this) {
  return ((Some_E8C0F3) this)->type == TSome_E8C0F3;
}

inline Some_E8C0F3 Some_E8C0F3__as(STACK_FRAME void *this) {
  if (Some_E8C0F3__is(CALLER this)) return (Some_E8C0F3) this;
  sfAbortImpl(CALLER "Invalid cast to Some[RTS.Actuation.Actuator_i_Initialization_Api].");
  abort();
}

void Some_E8C0F3_apply(STACK_FRAME Some_E8C0F3 this, RTS_Actuation_Actuator_i_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif