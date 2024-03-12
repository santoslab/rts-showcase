#ifndef SIREUM_H_org_sireum_Option_0247A1
#define SIREUM_H_org_sireum_Option_0247A1

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[IS[Z, art.Art.PortId]]

#define Option_0247A1__eq(this, other) Type__eq(this, other)
#define Option_0247A1__ne(this, other) (!Type__eq(this, other))
#define Option_0247A1__equiv(this, other) Type__equiv(this, other)
#define Option_0247A1__inequiv(this, other) (!Type__equiv(this, other))
#define Option_0247A1_cprint(this, isOut) Type_cprint(this, isOut)
B Option_0247A1__is(STACK_FRAME void *this);
Option_0247A1 Option_0247A1__as(STACK_FRAME void *this);
inline void Option_0247A1_string_(STACK_FRAME String result, Option_0247A1 this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif