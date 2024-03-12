#ifndef SIREUM_H_org_sireum_Option_638957
#define SIREUM_H_org_sireum_Option_638957

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api]

#define Option_638957__eq(this, other) Type__eq(this, other)
#define Option_638957__ne(this, other) (!Type__eq(this, other))
#define Option_638957__equiv(this, other) Type__equiv(this, other)
#define Option_638957__inequiv(this, other) (!Type__equiv(this, other))
#define Option_638957_cprint(this, isOut) Type_cprint(this, isOut)
B Option_638957__is(STACK_FRAME void *this);
Option_638957 Option_638957__as(STACK_FRAME void *this);
inline void Option_638957_string_(STACK_FRAME String result, Option_638957 this) {
  Type_string_(CALLER result, this);
}

void Option_638957_get_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Initialization_Api result, Option_638957 this);

#ifdef __cplusplus
}
#endif

#endif