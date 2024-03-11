#ifndef SIREUM_H_org_sireum_Some_7A7168
#define SIREUM_H_org_sireum_Some_7A7168

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]

#define Some_7A7168_value_(this) ((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &(this)->value)

B Some_7A7168__eq(Some_7A7168 this, Some_7A7168 other);
inline B Some_7A7168__ne(Some_7A7168 this, Some_7A7168 other) {
  return !Some_7A7168__eq(this, other);
};
B Some_7A7168__equiv(Some_7A7168 this, Some_7A7168 other);
inline B Some_7A7168__inequiv(Some_7A7168 this, Some_7A7168 other) {
  return !Some_7A7168__equiv(this, other);
};
void Some_7A7168_string_(STACK_FRAME String result, Some_7A7168 this);
void Some_7A7168_cprint(Some_7A7168 this, B isOut);

inline B Some_7A7168__is(STACK_FRAME void* this) {
  return ((Some_7A7168) this)->type == TSome_7A7168;
}

inline Some_7A7168 Some_7A7168__as(STACK_FRAME void *this) {
  if (Some_7A7168__is(CALLER this)) return (Some_7A7168) this;
  sfAbortImpl(CALLER "Invalid cast to Some[RTS.Actuation.CoincidenceLogic_i_Initialization_Api].");
  abort();
}

void Some_7A7168_apply(STACK_FRAME Some_7A7168 this, RTS_Actuation_CoincidenceLogic_i_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif