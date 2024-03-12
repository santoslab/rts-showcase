#ifndef SIREUM_H_org_sireum_Option_5BBD7F
#define SIREUM_H_org_sireum_Option_5BBD7F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]

#define Option_5BBD7F__eq(this, other) Type__eq(this, other)
#define Option_5BBD7F__ne(this, other) (!Type__eq(this, other))
#define Option_5BBD7F__equiv(this, other) Type__equiv(this, other)
#define Option_5BBD7F__inequiv(this, other) (!Type__equiv(this, other))
#define Option_5BBD7F_cprint(this, isOut) Type_cprint(this, isOut)
B Option_5BBD7F__is(STACK_FRAME void *this);
Option_5BBD7F Option_5BBD7F__as(STACK_FRAME void *this);
inline void Option_5BBD7F_string_(STACK_FRAME String result, Option_5BBD7F this) {
  Type_string_(CALLER result, this);
}

void Option_5BBD7F_get_(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Initialization_Api result, Option_5BBD7F this);

#ifdef __cplusplus
}
#endif

#endif