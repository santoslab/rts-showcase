#ifndef SIREUM_H_RTS_Cli_RunOption
#define SIREUM_H_RTS_Cli_RunOption

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// RTS.Cli.RunOption

#define RTS_Cli_RunOption_help_(this) ((String) &(this)->help)
#define RTS_Cli_RunOption_args_(this) ((IS_948B60) &(this)->args)
#define RTS_Cli_RunOption_scheduler_(this) ((this)->scheduler)

B RTS_Cli_RunOption__eq(RTS_Cli_RunOption this, RTS_Cli_RunOption other);
inline B RTS_Cli_RunOption__ne(RTS_Cli_RunOption this, RTS_Cli_RunOption other) {
  return !RTS_Cli_RunOption__eq(this, other);
};
B RTS_Cli_RunOption__equiv(RTS_Cli_RunOption this, RTS_Cli_RunOption other);
inline B RTS_Cli_RunOption__inequiv(RTS_Cli_RunOption this, RTS_Cli_RunOption other) {
  return !RTS_Cli_RunOption__equiv(this, other);
};
void RTS_Cli_RunOption_string_(STACK_FRAME String result, RTS_Cli_RunOption this);
void RTS_Cli_RunOption_cprint(RTS_Cli_RunOption this, B isOut);

inline B RTS_Cli_RunOption__is(STACK_FRAME void* this) {
  return ((RTS_Cli_RunOption) this)->type == TRTS_Cli_RunOption;
}

inline RTS_Cli_RunOption RTS_Cli_RunOption__as(STACK_FRAME void *this) {
  if (RTS_Cli_RunOption__is(CALLER this)) return (RTS_Cli_RunOption) this;
  sfAbortImpl(CALLER "Invalid cast to RTS.Cli.RunOption.");
  abort();
}

void RTS_Cli_RunOption_apply(STACK_FRAME RTS_Cli_RunOption this, String help, IS_948B60 args, RTS_Cli_RunChoice_Type scheduler);

#ifdef __cplusplus
}
#endif

#endif