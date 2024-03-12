#ifndef SIREUM_H_org_sireum_Some_824C23
#define SIREUM_H_org_sireum_Some_824C23

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[RTS.Actuation.OrLogic_i_Initialization_Api]

#define Some_824C23_value_(this) ((RTS_Actuation_OrLogic_i_Initialization_Api) &(this)->value)

B Some_824C23__eq(Some_824C23 this, Some_824C23 other);
inline B Some_824C23__ne(Some_824C23 this, Some_824C23 other) {
  return !Some_824C23__eq(this, other);
};
B Some_824C23__equiv(Some_824C23 this, Some_824C23 other);
inline B Some_824C23__inequiv(Some_824C23 this, Some_824C23 other) {
  return !Some_824C23__equiv(this, other);
};
void Some_824C23_string_(STACK_FRAME String result, Some_824C23 this);
void Some_824C23_cprint(Some_824C23 this, B isOut);

inline B Some_824C23__is(STACK_FRAME void* this) {
  return ((Some_824C23) this)->type == TSome_824C23;
}

inline Some_824C23 Some_824C23__as(STACK_FRAME void *this) {
  if (Some_824C23__is(CALLER this)) return (Some_824C23) this;
  sfAbortImpl(CALLER "Invalid cast to Some[RTS.Actuation.OrLogic_i_Initialization_Api].");
  abort();
}

void Some_824C23_apply(STACK_FRAME Some_824C23 this, RTS_Actuation_OrLogic_i_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif