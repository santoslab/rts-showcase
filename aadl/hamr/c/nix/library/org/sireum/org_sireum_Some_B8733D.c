#include <all.h>

// Some[RTS.Cli.RunChoice.Type]

B Some_B8733D__eq(Some_B8733D this, Some_B8733D other) {
  if (RTS_Cli_RunChoice_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_B8733D__equiv(Some_B8733D this, Some_B8733D other) {
  if (RTS_Cli_RunChoice_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_B8733D__ne(Some_B8733D this, Some_B8733D other);
B Some_B8733D__inequiv(Some_B8733D this, Some_B8733D other);

void Some_B8733D_string_(STACK_FRAME String result, Some_B8733D this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  RTS_Cli_RunChoice_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_B8733D_cprint(Some_B8733D this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  RTS_Cli_RunChoice_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_B8733D__is(STACK_FRAME void* this);
Some_B8733D Some_B8733D__as(STACK_FRAME void *this);

void Some_B8733D_apply(STACK_FRAME Some_B8733D this, RTS_Cli_RunChoice_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_B8733D", "apply", 0);
  this->value = value;
}