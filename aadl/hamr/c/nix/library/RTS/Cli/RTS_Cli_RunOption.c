#include <all.h>

// RTS.Cli.RunOption

B RTS_Cli_RunOption__eq(RTS_Cli_RunOption this, RTS_Cli_RunOption other) {
  if (String__ne((String) &this->help, (String) &other->help)) return F;
  if (IS_948B60__ne((IS_948B60) &this->args, (IS_948B60) &other->args)) return F;
  if (RTS_Cli_RunChoice_Type__ne(this->scheduler, other->scheduler)) return F;
  return T;
}

B RTS_Cli_RunOption__equiv(RTS_Cli_RunOption this, RTS_Cli_RunOption other) {
  if (String__inequiv((String) &this->help, (String) &other->help)) return F;
  if (IS_948B60__inequiv((IS_948B60) &this->args, (IS_948B60) &other->args)) return F;
  if (RTS_Cli_RunChoice_Type__inequiv(this->scheduler, other->scheduler)) return F;
  return T;
}

B RTS_Cli_RunOption__ne(RTS_Cli_RunOption this, RTS_Cli_RunOption other);
B RTS_Cli_RunOption__inequiv(RTS_Cli_RunOption this, RTS_Cli_RunOption other);

void RTS_Cli_RunOption_string_(STACK_FRAME String result, RTS_Cli_RunOption this) {
  DeclNewStackFrame(caller, "Demo.scala", "RTS.Cli.RunOption", "string", 0);
  String_string_(SF result, string("RunOption("));
  String sep = string(", ");
  String_string_(SF result, (String) &this->help);
  String_string_(SF result, sep);
  IS_948B60_string_(SF result, (IS_948B60) &this->args);
  String_string_(SF result, sep);
  RTS_Cli_RunChoice_Type_string_(SF result, this->scheduler);
  String_string_(SF result, string(")"));
}

void RTS_Cli_RunOption_cprint(RTS_Cli_RunOption this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("RunOption("), isOut);
  String sep = string(", ");
  String_cprint((String) &this->help, isOut);
  String_cprint(sep, isOut);
  IS_948B60_cprint((IS_948B60) &this->args, isOut);
  String_cprint(sep, isOut);
  RTS_Cli_RunChoice_Type_cprint(this->scheduler, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Cli_RunOption__is(STACK_FRAME void* this);
RTS_Cli_RunOption RTS_Cli_RunOption__as(STACK_FRAME void *this);

void RTS_Cli_RunOption_apply(STACK_FRAME RTS_Cli_RunOption this, String help, IS_948B60 args, RTS_Cli_RunChoice_Type scheduler) {
  DeclNewStackFrame(caller, "Demo.scala", "RTS.Cli.RunOption", "apply", 0);
  Type_assign(&this->help, help, sizeof(struct StaticString));
  Type_assign(&this->args, args, sizeof(struct IS_948B60));
  this->scheduler = scheduler;
}