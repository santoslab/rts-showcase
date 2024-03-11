#ifndef SIREUM_H_org_sireum_Option_0E107D
#define SIREUM_H_org_sireum_Option_0E107D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[art.Art.BridgeId]

#define Option_0E107D__eq(this, other) Type__eq(this, other)
#define Option_0E107D__ne(this, other) (!Type__eq(this, other))
#define Option_0E107D__equiv(this, other) Type__equiv(this, other)
#define Option_0E107D__inequiv(this, other) (!Type__equiv(this, other))
#define Option_0E107D_cprint(this, isOut) Type_cprint(this, isOut)
B Option_0E107D__is(STACK_FRAME void *this);
Option_0E107D Option_0E107D__as(STACK_FRAME void *this);
inline void Option_0E107D_string_(STACK_FRAME String result, Option_0E107D this) {
  Type_string_(CALLER result, this);
}

art_Art_BridgeId Option_0E107D_get_(STACK_FRAME Option_0E107D this);

#ifdef __cplusplus
}
#endif

#endif