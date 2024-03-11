#ifndef SIREUM_H_org_sireum_Option_B47750
#define SIREUM_H_org_sireum_Option_B47750

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[(Z, Z)]

#define Option_B47750__eq(this, other) Type__eq(this, other)
#define Option_B47750__ne(this, other) (!Type__eq(this, other))
#define Option_B47750__equiv(this, other) Type__equiv(this, other)
#define Option_B47750__inequiv(this, other) (!Type__equiv(this, other))
#define Option_B47750_cprint(this, isOut) Type_cprint(this, isOut)
B Option_B47750__is(STACK_FRAME void *this);
Option_B47750 Option_B47750__as(STACK_FRAME void *this);
inline void Option_B47750_string_(STACK_FRAME String result, Option_B47750 this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif