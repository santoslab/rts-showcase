#ifndef SIREUM_H_org_sireum_Option_376396
#define SIREUM_H_org_sireum_Option_376396

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[art.ArtSlangMessage]

#define Option_376396__eq(this, other) Type__eq(this, other)
#define Option_376396__ne(this, other) (!Type__eq(this, other))
#define Option_376396__equiv(this, other) Type__equiv(this, other)
#define Option_376396__inequiv(this, other) (!Type__equiv(this, other))
#define Option_376396_cprint(this, isOut) Type_cprint(this, isOut)
B Option_376396__is(STACK_FRAME void *this);
Option_376396 Option_376396__as(STACK_FRAME void *this);
inline void Option_376396_string_(STACK_FRAME String result, Option_376396 this) {
  Type_string_(CALLER result, this);
}

void Option_376396_get_(STACK_FRAME art_ArtSlangMessage result, Option_376396 this);

#ifdef __cplusplus
}
#endif

#endif