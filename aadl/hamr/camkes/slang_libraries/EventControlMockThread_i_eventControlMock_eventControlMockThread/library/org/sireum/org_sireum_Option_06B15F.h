#ifndef SIREUM_H_org_sireum_Option_06B15F
#define SIREUM_H_org_sireum_Option_06B15F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[RTS.EventControl.EventControlMockThread_i_Initialization_Api]

#define Option_06B15F__eq(this, other) Type__eq(this, other)
#define Option_06B15F__ne(this, other) (!Type__eq(this, other))
#define Option_06B15F__equiv(this, other) Type__equiv(this, other)
#define Option_06B15F__inequiv(this, other) (!Type__equiv(this, other))
#define Option_06B15F_cprint(this, isOut) Type_cprint(this, isOut)
B Option_06B15F__is(STACK_FRAME void *this);
Option_06B15F Option_06B15F__as(STACK_FRAME void *this);
inline void Option_06B15F_string_(STACK_FRAME String result, Option_06B15F this) {
  Type_string_(CALLER result, this);
}

void Option_06B15F_get_(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Initialization_Api result, Option_06B15F this);

#ifdef __cplusplus
}
#endif

#endif