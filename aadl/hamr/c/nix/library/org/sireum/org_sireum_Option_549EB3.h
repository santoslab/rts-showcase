#ifndef SIREUM_H_org_sireum_Option_549EB3
#define SIREUM_H_org_sireum_Option_549EB3

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[RTS.Actuators.ActuatorsMockThread_i_Operational_Api]

#define Option_549EB3__eq(this, other) Type__eq(this, other)
#define Option_549EB3__ne(this, other) (!Type__eq(this, other))
#define Option_549EB3__equiv(this, other) Type__equiv(this, other)
#define Option_549EB3__inequiv(this, other) (!Type__equiv(this, other))
#define Option_549EB3_cprint(this, isOut) Type_cprint(this, isOut)
B Option_549EB3__is(STACK_FRAME void *this);
Option_549EB3 Option_549EB3__as(STACK_FRAME void *this);
inline void Option_549EB3_string_(STACK_FRAME String result, Option_549EB3 this) {
  Type_string_(CALLER result, this);
}

void Option_549EB3_get_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Operational_Api result, Option_549EB3 this);

#ifdef __cplusplus
}
#endif

#endif