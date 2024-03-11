#include <all.h>

// None[RTS.Actuators.ActuatorsMockThread_i_Operational_Api]

B None_C050C2__eq(None_C050C2 this, None_C050C2 other) {
  return T;
}

B None_C050C2__equiv(None_C050C2 this, None_C050C2 other) {
  return T;
}

B None_C050C2__ne(None_C050C2 this, None_C050C2 other);
B None_C050C2__inequiv(None_C050C2 this, None_C050C2 other);

void None_C050C2_string_(STACK_FRAME String result, None_C050C2 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_C050C2_cprint(None_C050C2 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_C050C2__is(STACK_FRAME void* this);
None_C050C2 None_C050C2__as(STACK_FRAME void *this);

void None_C050C2_apply(STACK_FRAME None_C050C2 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_C050C2", "apply", 0);
}