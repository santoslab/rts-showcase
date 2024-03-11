#ifndef SIREUM_H_org_sireum_Option_E142FF
#define SIREUM_H_org_sireum_Option_E142FF

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[RTS.Actuation.OrLogic_i_Operational_Api]

#define Option_E142FF__eq(this, other) Type__eq(this, other)
#define Option_E142FF__ne(this, other) (!Type__eq(this, other))
#define Option_E142FF__equiv(this, other) Type__equiv(this, other)
#define Option_E142FF__inequiv(this, other) (!Type__equiv(this, other))
#define Option_E142FF_cprint(this, isOut) Type_cprint(this, isOut)
B Option_E142FF__is(STACK_FRAME void *this);
Option_E142FF Option_E142FF__as(STACK_FRAME void *this);
inline void Option_E142FF_string_(STACK_FRAME String result, Option_E142FF this) {
  Type_string_(CALLER result, this);
}

void Option_E142FF_get_(STACK_FRAME RTS_Actuation_OrLogic_i_Operational_Api result, Option_E142FF this);

#ifdef __cplusplus
}
#endif

#endif