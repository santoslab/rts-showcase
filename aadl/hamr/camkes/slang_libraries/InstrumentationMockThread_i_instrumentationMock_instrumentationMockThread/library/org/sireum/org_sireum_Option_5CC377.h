#ifndef SIREUM_H_org_sireum_Option_5CC377
#define SIREUM_H_org_sireum_Option_5CC377

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]

#define Option_5CC377__eq(this, other) Type__eq(this, other)
#define Option_5CC377__ne(this, other) (!Type__eq(this, other))
#define Option_5CC377__equiv(this, other) Type__equiv(this, other)
#define Option_5CC377__inequiv(this, other) (!Type__equiv(this, other))
#define Option_5CC377_cprint(this, isOut) Type_cprint(this, isOut)
B Option_5CC377__is(STACK_FRAME void *this);
Option_5CC377 Option_5CC377__as(STACK_FRAME void *this);
inline void Option_5CC377_string_(STACK_FRAME String result, Option_5CC377 this) {
  Type_string_(CALLER result, this);
}

void Option_5CC377_get_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api result, Option_5CC377 this);

#ifdef __cplusplus
}
#endif

#endif