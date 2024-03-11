#ifndef SIREUM_H_org_sireum_Option_BF489E
#define SIREUM_H_org_sireum_Option_BF489E

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[RTS.Cli.RunTopOption]

#define Option_BF489E__eq(this, other) Type__eq(this, other)
#define Option_BF489E__ne(this, other) (!Type__eq(this, other))
#define Option_BF489E__equiv(this, other) Type__equiv(this, other)
#define Option_BF489E__inequiv(this, other) (!Type__equiv(this, other))
#define Option_BF489E_cprint(this, isOut) Type_cprint(this, isOut)
B Option_BF489E__is(STACK_FRAME void *this);
Option_BF489E Option_BF489E__as(STACK_FRAME void *this);
inline void Option_BF489E_string_(STACK_FRAME String result, Option_BF489E this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif