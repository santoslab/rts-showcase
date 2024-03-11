#include <all.h>

// None[RTS.Cli.RunTopOption]

B None_5F3A7A__eq(None_5F3A7A this, None_5F3A7A other) {
  return T;
}

B None_5F3A7A__equiv(None_5F3A7A this, None_5F3A7A other) {
  return T;
}

B None_5F3A7A__ne(None_5F3A7A this, None_5F3A7A other);
B None_5F3A7A__inequiv(None_5F3A7A this, None_5F3A7A other);

void None_5F3A7A_string_(STACK_FRAME String result, None_5F3A7A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_5F3A7A_cprint(None_5F3A7A this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_5F3A7A__is(STACK_FRAME void* this);
None_5F3A7A None_5F3A7A__as(STACK_FRAME void *this);

void None_5F3A7A_apply(STACK_FRAME None_5F3A7A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_5F3A7A", "apply", 0);
}