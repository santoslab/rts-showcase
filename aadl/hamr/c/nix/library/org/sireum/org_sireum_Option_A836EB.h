#ifndef SIREUM_H_org_sireum_Option_A836EB
#define SIREUM_H_org_sireum_Option_A836EB

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]

#define Option_A836EB__eq(this, other) Type__eq(this, other)
#define Option_A836EB__ne(this, other) (!Type__eq(this, other))
#define Option_A836EB__equiv(this, other) Type__equiv(this, other)
#define Option_A836EB__inequiv(this, other) (!Type__equiv(this, other))
#define Option_A836EB_cprint(this, isOut) Type_cprint(this, isOut)
B Option_A836EB__is(STACK_FRAME void *this);
Option_A836EB Option_A836EB__as(STACK_FRAME void *this);
inline void Option_A836EB_string_(STACK_FRAME String result, Option_A836EB this) {
  Type_string_(CALLER result, this);
}

void Option_A836EB_get_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api result, Option_A836EB this);

#ifdef __cplusplus
}
#endif

#endif