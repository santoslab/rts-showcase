#ifndef SIREUM_H_org_sireum_Option_1CF021
#define SIREUM_H_org_sireum_Option_1CF021

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[art.Art.PortId]

#define Option_1CF021__eq(this, other) Type__eq(this, other)
#define Option_1CF021__ne(this, other) (!Type__eq(this, other))
#define Option_1CF021__equiv(this, other) Type__equiv(this, other)
#define Option_1CF021__inequiv(this, other) (!Type__equiv(this, other))
#define Option_1CF021_cprint(this, isOut) Type_cprint(this, isOut)
B Option_1CF021__is(STACK_FRAME void *this);
Option_1CF021 Option_1CF021__as(STACK_FRAME void *this);
inline void Option_1CF021_string_(STACK_FRAME String result, Option_1CF021 this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif