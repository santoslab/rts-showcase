#ifndef SIREUM_H_RTS_Cli_HelpOption
#define SIREUM_H_RTS_Cli_HelpOption

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// RTS.Cli.HelpOption


B RTS_Cli_HelpOption__eq(RTS_Cli_HelpOption this, RTS_Cli_HelpOption other);
inline B RTS_Cli_HelpOption__ne(RTS_Cli_HelpOption this, RTS_Cli_HelpOption other) {
  return !RTS_Cli_HelpOption__eq(this, other);
};
B RTS_Cli_HelpOption__equiv(RTS_Cli_HelpOption this, RTS_Cli_HelpOption other);
inline B RTS_Cli_HelpOption__inequiv(RTS_Cli_HelpOption this, RTS_Cli_HelpOption other) {
  return !RTS_Cli_HelpOption__equiv(this, other);
};
void RTS_Cli_HelpOption_string_(STACK_FRAME String result, RTS_Cli_HelpOption this);
void RTS_Cli_HelpOption_cprint(RTS_Cli_HelpOption this, B isOut);

inline B RTS_Cli_HelpOption__is(STACK_FRAME void* this) {
  return ((RTS_Cli_HelpOption) this)->type == TRTS_Cli_HelpOption;
}

inline RTS_Cli_HelpOption RTS_Cli_HelpOption__as(STACK_FRAME void *this) {
  if (RTS_Cli_HelpOption__is(CALLER this)) return (RTS_Cli_HelpOption) this;
  sfAbortImpl(CALLER "Invalid cast to RTS.Cli.HelpOption.");
  abort();
}

void RTS_Cli_HelpOption_apply(STACK_FRAME RTS_Cli_HelpOption this);

#ifdef __cplusplus
}
#endif

#endif