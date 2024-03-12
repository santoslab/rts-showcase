#ifndef SIREUM_H_org_sireum_Some_DB59FB
#define SIREUM_H_org_sireum_Some_DB59FB

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[B]

#define Some_DB59FB_value_(this) ((this)->value)

B Some_DB59FB__eq(Some_DB59FB this, Some_DB59FB other);
inline B Some_DB59FB__ne(Some_DB59FB this, Some_DB59FB other) {
  return !Some_DB59FB__eq(this, other);
};
B Some_DB59FB__equiv(Some_DB59FB this, Some_DB59FB other);
inline B Some_DB59FB__inequiv(Some_DB59FB this, Some_DB59FB other) {
  return !Some_DB59FB__equiv(this, other);
};
void Some_DB59FB_string_(STACK_FRAME String result, Some_DB59FB this);
void Some_DB59FB_cprint(Some_DB59FB this, B isOut);

inline B Some_DB59FB__is(STACK_FRAME void* this) {
  return ((Some_DB59FB) this)->type == TSome_DB59FB;
}

inline Some_DB59FB Some_DB59FB__as(STACK_FRAME void *this) {
  if (Some_DB59FB__is(CALLER this)) return (Some_DB59FB) this;
  sfAbortImpl(CALLER "Invalid cast to Some[B].");
  abort();
}

void Some_DB59FB_apply(STACK_FRAME Some_DB59FB this, B value);

#ifdef __cplusplus
}
#endif

#endif