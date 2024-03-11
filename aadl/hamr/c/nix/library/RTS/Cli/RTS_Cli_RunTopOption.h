#ifndef SIREUM_H_RTS_Cli_RunTopOption
#define SIREUM_H_RTS_Cli_RunTopOption

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// RTS.Cli.RunTopOption

#define RTS_Cli_RunTopOption__eq(this, other) Type__eq(this, other)
#define RTS_Cli_RunTopOption__ne(this, other) (!Type__eq(this, other))
#define RTS_Cli_RunTopOption__equiv(this, other) Type__equiv(this, other)
#define RTS_Cli_RunTopOption__inequiv(this, other) (!Type__equiv(this, other))
#define RTS_Cli_RunTopOption_cprint(this, isOut) Type_cprint(this, isOut)
B RTS_Cli_RunTopOption__is(STACK_FRAME void *this);
RTS_Cli_RunTopOption RTS_Cli_RunTopOption__as(STACK_FRAME void *this);
inline void RTS_Cli_RunTopOption_string_(STACK_FRAME String result, RTS_Cli_RunTopOption this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif