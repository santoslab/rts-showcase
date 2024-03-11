#ifndef SIREUM_H_org_sireum_Option_069397
#define SIREUM_H_org_sireum_Option_069397

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[art.scheduling.static.Explorer.ScheduleState]

#define Option_069397__eq(this, other) Type__eq(this, other)
#define Option_069397__ne(this, other) (!Type__eq(this, other))
#define Option_069397__equiv(this, other) Type__equiv(this, other)
#define Option_069397__inequiv(this, other) (!Type__equiv(this, other))
#define Option_069397_cprint(this, isOut) Type_cprint(this, isOut)
B Option_069397__is(STACK_FRAME void *this);
Option_069397 Option_069397__as(STACK_FRAME void *this);
inline void Option_069397_string_(STACK_FRAME String result, Option_069397 this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif