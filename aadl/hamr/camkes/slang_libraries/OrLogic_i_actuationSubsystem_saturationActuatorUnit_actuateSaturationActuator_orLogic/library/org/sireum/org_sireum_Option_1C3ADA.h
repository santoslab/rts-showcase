#ifndef SIREUM_H_org_sireum_Option_1C3ADA
#define SIREUM_H_org_sireum_Option_1C3ADA

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[RTS.Actuation.OrLogic_i_Initialization_Api]

#define Option_1C3ADA__eq(this, other) Type__eq(this, other)
#define Option_1C3ADA__ne(this, other) (!Type__eq(this, other))
#define Option_1C3ADA__equiv(this, other) Type__equiv(this, other)
#define Option_1C3ADA__inequiv(this, other) (!Type__equiv(this, other))
#define Option_1C3ADA_cprint(this, isOut) Type_cprint(this, isOut)
B Option_1C3ADA__is(STACK_FRAME void *this);
Option_1C3ADA Option_1C3ADA__as(STACK_FRAME void *this);
inline void Option_1C3ADA_string_(STACK_FRAME String result, Option_1C3ADA this) {
  Type_string_(CALLER result, this);
}

void Option_1C3ADA_get_(STACK_FRAME RTS_Actuation_OrLogic_i_Initialization_Api result, Option_1C3ADA this);

#ifdef __cplusplus
}
#endif

#endif