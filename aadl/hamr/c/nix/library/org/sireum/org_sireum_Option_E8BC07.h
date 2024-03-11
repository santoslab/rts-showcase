#ifndef SIREUM_H_org_sireum_Option_E8BC07
#define SIREUM_H_org_sireum_Option_E8BC07

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[RTS.Cli.RunChoice.Type]

#define Option_E8BC07__eq(this, other) Type__eq(this, other)
#define Option_E8BC07__ne(this, other) (!Type__eq(this, other))
#define Option_E8BC07__equiv(this, other) Type__equiv(this, other)
#define Option_E8BC07__inequiv(this, other) (!Type__equiv(this, other))
#define Option_E8BC07_cprint(this, isOut) Type_cprint(this, isOut)
B Option_E8BC07__is(STACK_FRAME void *this);
Option_E8BC07 Option_E8BC07__as(STACK_FRAME void *this);
inline void Option_E8BC07_string_(STACK_FRAME String result, Option_E8BC07 this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif