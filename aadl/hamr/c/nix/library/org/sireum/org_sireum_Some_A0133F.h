#ifndef SIREUM_H_org_sireum_Some_A0133F
#define SIREUM_H_org_sireum_Some_A0133F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[art.Art.PortId]

#define Some_A0133F_value_(this) ((this)->value)

B Some_A0133F__eq(Some_A0133F this, Some_A0133F other);
inline B Some_A0133F__ne(Some_A0133F this, Some_A0133F other) {
  return !Some_A0133F__eq(this, other);
};
B Some_A0133F__equiv(Some_A0133F this, Some_A0133F other);
inline B Some_A0133F__inequiv(Some_A0133F this, Some_A0133F other) {
  return !Some_A0133F__equiv(this, other);
};
void Some_A0133F_string_(STACK_FRAME String result, Some_A0133F this);
void Some_A0133F_cprint(Some_A0133F this, B isOut);

inline B Some_A0133F__is(STACK_FRAME void* this) {
  return ((Some_A0133F) this)->type == TSome_A0133F;
}

inline Some_A0133F Some_A0133F__as(STACK_FRAME void *this) {
  if (Some_A0133F__is(CALLER this)) return (Some_A0133F) this;
  sfAbortImpl(CALLER "Invalid cast to Some[art.Art.PortId].");
  abort();
}

void Some_A0133F_apply(STACK_FRAME Some_A0133F this, art_Art_PortId value);

#ifdef __cplusplus
}
#endif

#endif