#include <all.h>

// None[RTS.Actuation.Actuator_i_Operational_Api]

B None_52D9AF__eq(None_52D9AF this, None_52D9AF other) {
  return T;
}

B None_52D9AF__equiv(None_52D9AF this, None_52D9AF other) {
  return T;
}

B None_52D9AF__ne(None_52D9AF this, None_52D9AF other);
B None_52D9AF__inequiv(None_52D9AF this, None_52D9AF other);

void None_52D9AF_string_(STACK_FRAME String result, None_52D9AF this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_52D9AF_cprint(None_52D9AF this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_52D9AF__is(STACK_FRAME void* this);
None_52D9AF None_52D9AF__as(STACK_FRAME void *this);

void None_52D9AF_apply(STACK_FRAME None_52D9AF this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_52D9AF", "apply", 0);
}