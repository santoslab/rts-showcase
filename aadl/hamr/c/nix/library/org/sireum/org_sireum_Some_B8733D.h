#ifndef SIREUM_H_org_sireum_Some_B8733D
#define SIREUM_H_org_sireum_Some_B8733D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[RTS.Cli.RunChoice.Type]

#define Some_B8733D_value_(this) ((this)->value)

B Some_B8733D__eq(Some_B8733D this, Some_B8733D other);
inline B Some_B8733D__ne(Some_B8733D this, Some_B8733D other) {
  return !Some_B8733D__eq(this, other);
};
B Some_B8733D__equiv(Some_B8733D this, Some_B8733D other);
inline B Some_B8733D__inequiv(Some_B8733D this, Some_B8733D other) {
  return !Some_B8733D__equiv(this, other);
};
void Some_B8733D_string_(STACK_FRAME String result, Some_B8733D this);
void Some_B8733D_cprint(Some_B8733D this, B isOut);

inline B Some_B8733D__is(STACK_FRAME void* this) {
  return ((Some_B8733D) this)->type == TSome_B8733D;
}

inline Some_B8733D Some_B8733D__as(STACK_FRAME void *this) {
  if (Some_B8733D__is(CALLER this)) return (Some_B8733D) this;
  sfAbortImpl(CALLER "Invalid cast to Some[RTS.Cli.RunChoice.Type].");
  abort();
}

void Some_B8733D_apply(STACK_FRAME Some_B8733D this, RTS_Cli_RunChoice_Type value);

#ifdef __cplusplus
}
#endif

#endif