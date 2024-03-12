#ifndef SIREUM_H_org_sireum_Option_80DE21
#define SIREUM_H_org_sireum_Option_80DE21

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[RTS.Actuation.CoincidenceLogic_i_Operational_Api]

#define Option_80DE21__eq(this, other) Type__eq(this, other)
#define Option_80DE21__ne(this, other) (!Type__eq(this, other))
#define Option_80DE21__equiv(this, other) Type__equiv(this, other)
#define Option_80DE21__inequiv(this, other) (!Type__equiv(this, other))
#define Option_80DE21_cprint(this, isOut) Type_cprint(this, isOut)
B Option_80DE21__is(STACK_FRAME void *this);
Option_80DE21 Option_80DE21__as(STACK_FRAME void *this);
inline void Option_80DE21_string_(STACK_FRAME String result, Option_80DE21 this) {
  Type_string_(CALLER result, this);
}

void Option_80DE21_get_(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Operational_Api result, Option_80DE21 this);

#ifdef __cplusplus
}
#endif

#endif