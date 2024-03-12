#ifndef SIREUM_H_org_sireum_Some_4347C6
#define SIREUM_H_org_sireum_Some_4347C6

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[RTS.EventControl.EventControlMockThread_i_Initialization_Api]

#define Some_4347C6_value_(this) ((RTS_EventControl_EventControlMockThread_i_Initialization_Api) &(this)->value)

B Some_4347C6__eq(Some_4347C6 this, Some_4347C6 other);
inline B Some_4347C6__ne(Some_4347C6 this, Some_4347C6 other) {
  return !Some_4347C6__eq(this, other);
};
B Some_4347C6__equiv(Some_4347C6 this, Some_4347C6 other);
inline B Some_4347C6__inequiv(Some_4347C6 this, Some_4347C6 other) {
  return !Some_4347C6__equiv(this, other);
};
void Some_4347C6_string_(STACK_FRAME String result, Some_4347C6 this);
void Some_4347C6_cprint(Some_4347C6 this, B isOut);

inline B Some_4347C6__is(STACK_FRAME void* this) {
  return ((Some_4347C6) this)->type == TSome_4347C6;
}

inline Some_4347C6 Some_4347C6__as(STACK_FRAME void *this) {
  if (Some_4347C6__is(CALLER this)) return (Some_4347C6) this;
  sfAbortImpl(CALLER "Invalid cast to Some[RTS.EventControl.EventControlMockThread_i_Initialization_Api].");
  abort();
}

void Some_4347C6_apply(STACK_FRAME Some_4347C6 this, RTS_EventControl_EventControlMockThread_i_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif