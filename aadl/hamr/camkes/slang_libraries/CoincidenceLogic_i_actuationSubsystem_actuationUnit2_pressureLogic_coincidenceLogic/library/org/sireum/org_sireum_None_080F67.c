#include <all.h>

// None[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]

B None_080F67__eq(None_080F67 this, None_080F67 other) {
  return T;
}

B None_080F67__equiv(None_080F67 this, None_080F67 other) {
  return T;
}

B None_080F67__ne(None_080F67 this, None_080F67 other);
B None_080F67__inequiv(None_080F67 this, None_080F67 other);

void None_080F67_string_(STACK_FRAME String result, None_080F67 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_080F67_cprint(None_080F67 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_080F67__is(STACK_FRAME void* this);
None_080F67 None_080F67__as(STACK_FRAME void *this);

void None_080F67_apply(STACK_FRAME None_080F67 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_080F67", "apply", 0);
}