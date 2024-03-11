#include <all.h>

// RTS.Cli.RunTopOption

B RTS_Cli_RunTopOption__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TRTS_Cli_HelpOption: return T;
    case TRTS_Cli_RunOption: return T;
    default: return F;
  }
}

RTS_Cli_RunTopOption RTS_Cli_RunTopOption__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TRTS_Cli_HelpOption: break;
    case TRTS_Cli_RunOption: break;
    default:
      fprintf(stderr, "Invalid cast from %s to RTS.Cli.RunTopOption.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (RTS_Cli_RunTopOption) this;
}

void RTS_Cli_RunTopOption_string_(STACK_FRAME String result, RTS_Cli_RunTopOption this);