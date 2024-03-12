#ifndef SIREUM_H_org_sireum_Option_4ACA0C
#define SIREUM_H_org_sireum_Option_4ACA0C

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[RTS.Actuation.Actuator_i_Operational_Api]

#define Option_4ACA0C__eq(this, other) Type__eq(this, other)
#define Option_4ACA0C__ne(this, other) (!Type__eq(this, other))
#define Option_4ACA0C__equiv(this, other) Type__equiv(this, other)
#define Option_4ACA0C__inequiv(this, other) (!Type__equiv(this, other))
#define Option_4ACA0C_cprint(this, isOut) Type_cprint(this, isOut)
B Option_4ACA0C__is(STACK_FRAME void *this);
Option_4ACA0C Option_4ACA0C__as(STACK_FRAME void *this);
inline void Option_4ACA0C_string_(STACK_FRAME String result, Option_4ACA0C this) {
  Type_string_(CALLER result, this);
}

void Option_4ACA0C_get_(STACK_FRAME RTS_Actuation_Actuator_i_Operational_Api result, Option_4ACA0C this);

#ifdef __cplusplus
}
#endif

#endif