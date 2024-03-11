#ifndef SIREUM_H_org_sireum_Option_FEE1DB
#define SIREUM_H_org_sireum_Option_FEE1DB

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[IS[Z, art.Art.BridgeId]]

#define Option_FEE1DB__eq(this, other) Type__eq(this, other)
#define Option_FEE1DB__ne(this, other) (!Type__eq(this, other))
#define Option_FEE1DB__equiv(this, other) Type__equiv(this, other)
#define Option_FEE1DB__inequiv(this, other) (!Type__equiv(this, other))
#define Option_FEE1DB_cprint(this, isOut) Type_cprint(this, isOut)
B Option_FEE1DB__is(STACK_FRAME void *this);
Option_FEE1DB Option_FEE1DB__as(STACK_FRAME void *this);
inline void Option_FEE1DB_string_(STACK_FRAME String result, Option_FEE1DB this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif