#include <all.h>

// RTS.Cli.HelpOption

B RTS_Cli_HelpOption__eq(RTS_Cli_HelpOption this, RTS_Cli_HelpOption other) {
  return T;
}

B RTS_Cli_HelpOption__equiv(RTS_Cli_HelpOption this, RTS_Cli_HelpOption other) {
  return T;
}

B RTS_Cli_HelpOption__ne(RTS_Cli_HelpOption this, RTS_Cli_HelpOption other);
B RTS_Cli_HelpOption__inequiv(RTS_Cli_HelpOption this, RTS_Cli_HelpOption other);

void RTS_Cli_HelpOption_string_(STACK_FRAME String result, RTS_Cli_HelpOption this) {
  DeclNewStackFrame(caller, "Demo.scala", "RTS.Cli.HelpOption", "string", 0);
  String_string_(SF result, string("HelpOption("));
  String_string_(SF result, string(")"));
}

void RTS_Cli_HelpOption_cprint(RTS_Cli_HelpOption this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("HelpOption("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Cli_HelpOption__is(STACK_FRAME void* this);
RTS_Cli_HelpOption RTS_Cli_HelpOption__as(STACK_FRAME void *this);

void RTS_Cli_HelpOption_apply(STACK_FRAME RTS_Cli_HelpOption this) {
  DeclNewStackFrame(caller, "Demo.scala", "RTS.Cli.HelpOption", "apply", 0);
}