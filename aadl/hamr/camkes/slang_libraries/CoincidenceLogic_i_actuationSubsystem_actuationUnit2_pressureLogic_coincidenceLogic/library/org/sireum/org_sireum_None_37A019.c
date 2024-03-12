#include <all.h>

// None[RTS.Actuation.CoincidenceLogic_i_Operational_Api]

B None_37A019__eq(None_37A019 this, None_37A019 other) {
  return T;
}

B None_37A019__equiv(None_37A019 this, None_37A019 other) {
  return T;
}

B None_37A019__ne(None_37A019 this, None_37A019 other);
B None_37A019__inequiv(None_37A019 this, None_37A019 other);

void None_37A019_string_(STACK_FRAME String result, None_37A019 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_37A019_cprint(None_37A019 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_37A019__is(STACK_FRAME void* this);
None_37A019 None_37A019__as(STACK_FRAME void *this);

void None_37A019_apply(STACK_FRAME None_37A019 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_37A019", "apply", 0);
}