#ifndef SIREUM_H_RTS_Cli
#define SIREUM_H_RTS_Cli

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// RTS.Cli

#define RTS_Cli_pathSep_(this) ((this)->pathSep)

B RTS_Cli__eq(RTS_Cli this, RTS_Cli other);
inline B RTS_Cli__ne(RTS_Cli this, RTS_Cli other) {
  return !RTS_Cli__eq(this, other);
};
B RTS_Cli__equiv(RTS_Cli this, RTS_Cli other);
inline B RTS_Cli__inequiv(RTS_Cli this, RTS_Cli other) {
  return !RTS_Cli__equiv(this, other);
};
void RTS_Cli_string_(STACK_FRAME String result, RTS_Cli this);
void RTS_Cli_cprint(RTS_Cli this, B isOut);

inline B RTS_Cli__is(STACK_FRAME void* this) {
  return ((RTS_Cli) this)->type == TRTS_Cli;
}

inline RTS_Cli RTS_Cli__as(STACK_FRAME void *this) {
  if (RTS_Cli__is(CALLER this)) return (RTS_Cli) this;
  sfAbortImpl(CALLER "Invalid cast to RTS.Cli.");
  abort();
}

void RTS_Cli_apply(STACK_FRAME RTS_Cli this, C pathSep);

Unit RTS_Cli_help_(STACK_FRAME RTS_Cli this);

void RTS_Cli_parseRun_(STACK_FRAME Option_BF489E result, RTS_Cli this, IS_948B60 args, Z i);

void RTS_Cli_parseRunChoice_(STACK_FRAME Option_E8BC07 result, RTS_Cli this, IS_948B60 args, Z i);

void RTS_Cli_parseRunChoiceH_(STACK_FRAME Option_E8BC07 result, RTS_Cli this, String arg);

#ifdef __cplusplus
}
#endif

#endif