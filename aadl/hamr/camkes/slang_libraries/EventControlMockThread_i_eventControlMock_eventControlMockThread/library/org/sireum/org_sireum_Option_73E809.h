#ifndef SIREUM_H_org_sireum_Option_73E809
#define SIREUM_H_org_sireum_Option_73E809

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[RTS.EventControl.EventControlMockThread_i_Operational_Api]

#define Option_73E809__eq(this, other) Type__eq(this, other)
#define Option_73E809__ne(this, other) (!Type__eq(this, other))
#define Option_73E809__equiv(this, other) Type__equiv(this, other)
#define Option_73E809__inequiv(this, other) (!Type__equiv(this, other))
#define Option_73E809_cprint(this, isOut) Type_cprint(this, isOut)
B Option_73E809__is(STACK_FRAME void *this);
Option_73E809 Option_73E809__as(STACK_FRAME void *this);
inline void Option_73E809_string_(STACK_FRAME String result, Option_73E809 this) {
  Type_string_(CALLER result, this);
}

void Option_73E809_get_(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Operational_Api result, Option_73E809 this);

#ifdef __cplusplus
}
#endif

#endif