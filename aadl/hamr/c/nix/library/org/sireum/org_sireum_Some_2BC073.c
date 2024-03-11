#include <all.h>

// Some[RTS.Cli.RunTopOption]

B Some_2BC073__eq(Some_2BC073 this, Some_2BC073 other) {
  if (RTS_Cli_RunTopOption__ne((RTS_Cli_RunTopOption) &this->value, (RTS_Cli_RunTopOption) &other->value)) return F;
  return T;
}

B Some_2BC073__equiv(Some_2BC073 this, Some_2BC073 other) {
  if (RTS_Cli_RunTopOption__inequiv((RTS_Cli_RunTopOption) &this->value, (RTS_Cli_RunTopOption) &other->value)) return F;
  return T;
}

B Some_2BC073__ne(Some_2BC073 this, Some_2BC073 other);
B Some_2BC073__inequiv(Some_2BC073 this, Some_2BC073 other);

void Some_2BC073_string_(STACK_FRAME String result, Some_2BC073 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  RTS_Cli_RunTopOption_string_(SF result, (RTS_Cli_RunTopOption) &this->value);
  String_string_(SF result, string(")"));
}

void Some_2BC073_cprint(Some_2BC073 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  RTS_Cli_RunTopOption_cprint((RTS_Cli_RunTopOption) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_2BC073__is(STACK_FRAME void* this);
Some_2BC073 Some_2BC073__as(STACK_FRAME void *this);

void Some_2BC073_apply(STACK_FRAME Some_2BC073 this, RTS_Cli_RunTopOption value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_2BC073", "apply", 0);
  Type_assign(&this->value, value, sizeof(union RTS_Cli_RunTopOption));
}