#ifndef SIREUM_H_org_sireum_Some_C4F557
#define SIREUM_H_org_sireum_Some_C4F557

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[IS[Z, art.Art.BridgeId]]

#define Some_C4F557_value_(this) ((IS_FDDCB6) &(this)->value)

B Some_C4F557__eq(Some_C4F557 this, Some_C4F557 other);
inline B Some_C4F557__ne(Some_C4F557 this, Some_C4F557 other) {
  return !Some_C4F557__eq(this, other);
};
B Some_C4F557__equiv(Some_C4F557 this, Some_C4F557 other);
inline B Some_C4F557__inequiv(Some_C4F557 this, Some_C4F557 other) {
  return !Some_C4F557__equiv(this, other);
};
void Some_C4F557_string_(STACK_FRAME String result, Some_C4F557 this);
void Some_C4F557_cprint(Some_C4F557 this, B isOut);

inline B Some_C4F557__is(STACK_FRAME void* this) {
  return ((Some_C4F557) this)->type == TSome_C4F557;
}

inline Some_C4F557 Some_C4F557__as(STACK_FRAME void *this) {
  if (Some_C4F557__is(CALLER this)) return (Some_C4F557) this;
  sfAbortImpl(CALLER "Invalid cast to Some[IS[Z, art.Art.BridgeId]].");
  abort();
}

void Some_C4F557_apply(STACK_FRAME Some_C4F557 this, IS_FDDCB6 value);

#ifdef __cplusplus
}
#endif

#endif