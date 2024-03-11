#ifndef SIREUM_H_org_sireum_Some_2BC073
#define SIREUM_H_org_sireum_Some_2BC073

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[RTS.Cli.RunTopOption]

#define Some_2BC073_value_(this) ((RTS_Cli_RunTopOption) &(this)->value)

B Some_2BC073__eq(Some_2BC073 this, Some_2BC073 other);
inline B Some_2BC073__ne(Some_2BC073 this, Some_2BC073 other) {
  return !Some_2BC073__eq(this, other);
};
B Some_2BC073__equiv(Some_2BC073 this, Some_2BC073 other);
inline B Some_2BC073__inequiv(Some_2BC073 this, Some_2BC073 other) {
  return !Some_2BC073__equiv(this, other);
};
void Some_2BC073_string_(STACK_FRAME String result, Some_2BC073 this);
void Some_2BC073_cprint(Some_2BC073 this, B isOut);

inline B Some_2BC073__is(STACK_FRAME void* this) {
  return ((Some_2BC073) this)->type == TSome_2BC073;
}

inline Some_2BC073 Some_2BC073__as(STACK_FRAME void *this) {
  if (Some_2BC073__is(CALLER this)) return (Some_2BC073) this;
  sfAbortImpl(CALLER "Invalid cast to Some[RTS.Cli.RunTopOption].");
  abort();
}

void Some_2BC073_apply(STACK_FRAME Some_2BC073 this, RTS_Cli_RunTopOption value);

#ifdef __cplusplus
}
#endif

#endif