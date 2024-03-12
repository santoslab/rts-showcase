#ifndef SIREUM_H_org_sireum_Option_8F4D4C
#define SIREUM_H_org_sireum_Option_8F4D4C

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[B]

#define Option_8F4D4C__eq(this, other) Type__eq(this, other)
#define Option_8F4D4C__ne(this, other) (!Type__eq(this, other))
#define Option_8F4D4C__equiv(this, other) Type__equiv(this, other)
#define Option_8F4D4C__inequiv(this, other) (!Type__equiv(this, other))
#define Option_8F4D4C_cprint(this, isOut) Type_cprint(this, isOut)
B Option_8F4D4C__is(STACK_FRAME void *this);
Option_8F4D4C Option_8F4D4C__as(STACK_FRAME void *this);
inline void Option_8F4D4C_string_(STACK_FRAME String result, Option_8F4D4C this) {
  Type_string_(CALLER result, this);
}

B Option_8F4D4C_get_(STACK_FRAME Option_8F4D4C this);

#ifdef __cplusplus
}
#endif

#endif