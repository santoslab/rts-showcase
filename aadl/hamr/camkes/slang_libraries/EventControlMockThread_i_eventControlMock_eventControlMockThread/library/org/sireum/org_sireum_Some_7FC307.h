#ifndef SIREUM_H_org_sireum_Some_7FC307
#define SIREUM_H_org_sireum_Some_7FC307

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[RTS.EventControl.EventControlMockThread_i_Operational_Api]

#define Some_7FC307_value_(this) ((RTS_EventControl_EventControlMockThread_i_Operational_Api) &(this)->value)

B Some_7FC307__eq(Some_7FC307 this, Some_7FC307 other);
inline B Some_7FC307__ne(Some_7FC307 this, Some_7FC307 other) {
  return !Some_7FC307__eq(this, other);
};
B Some_7FC307__equiv(Some_7FC307 this, Some_7FC307 other);
inline B Some_7FC307__inequiv(Some_7FC307 this, Some_7FC307 other) {
  return !Some_7FC307__equiv(this, other);
};
void Some_7FC307_string_(STACK_FRAME String result, Some_7FC307 this);
void Some_7FC307_cprint(Some_7FC307 this, B isOut);

inline B Some_7FC307__is(STACK_FRAME void* this) {
  return ((Some_7FC307) this)->type == TSome_7FC307;
}

inline Some_7FC307 Some_7FC307__as(STACK_FRAME void *this) {
  if (Some_7FC307__is(CALLER this)) return (Some_7FC307) this;
  sfAbortImpl(CALLER "Invalid cast to Some[RTS.EventControl.EventControlMockThread_i_Operational_Api].");
  abort();
}

void Some_7FC307_apply(STACK_FRAME Some_7FC307 this, RTS_EventControl_EventControlMockThread_i_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif