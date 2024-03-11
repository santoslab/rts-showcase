#ifndef SIREUM_H_org_sireum_Some_9D1CD4
#define SIREUM_H_org_sireum_Some_9D1CD4

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[art.Art.BridgeId]

#define Some_9D1CD4_value_(this) ((this)->value)

B Some_9D1CD4__eq(Some_9D1CD4 this, Some_9D1CD4 other);
inline B Some_9D1CD4__ne(Some_9D1CD4 this, Some_9D1CD4 other) {
  return !Some_9D1CD4__eq(this, other);
};
B Some_9D1CD4__equiv(Some_9D1CD4 this, Some_9D1CD4 other);
inline B Some_9D1CD4__inequiv(Some_9D1CD4 this, Some_9D1CD4 other) {
  return !Some_9D1CD4__equiv(this, other);
};
void Some_9D1CD4_string_(STACK_FRAME String result, Some_9D1CD4 this);
void Some_9D1CD4_cprint(Some_9D1CD4 this, B isOut);

inline B Some_9D1CD4__is(STACK_FRAME void* this) {
  return ((Some_9D1CD4) this)->type == TSome_9D1CD4;
}

inline Some_9D1CD4 Some_9D1CD4__as(STACK_FRAME void *this) {
  if (Some_9D1CD4__is(CALLER this)) return (Some_9D1CD4) this;
  sfAbortImpl(CALLER "Invalid cast to Some[art.Art.BridgeId].");
  abort();
}

void Some_9D1CD4_apply(STACK_FRAME Some_9D1CD4 this, art_Art_BridgeId value);

#ifdef __cplusplus
}
#endif

#endif