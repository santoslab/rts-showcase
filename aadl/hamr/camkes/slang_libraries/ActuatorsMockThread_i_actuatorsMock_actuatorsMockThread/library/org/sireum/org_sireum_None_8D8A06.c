#include <all.h>

// None[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api]

B None_8D8A06__eq(None_8D8A06 this, None_8D8A06 other) {
  return T;
}

B None_8D8A06__equiv(None_8D8A06 this, None_8D8A06 other) {
  return T;
}

B None_8D8A06__ne(None_8D8A06 this, None_8D8A06 other);
B None_8D8A06__inequiv(None_8D8A06 this, None_8D8A06 other);

void None_8D8A06_string_(STACK_FRAME String result, None_8D8A06 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_8D8A06_cprint(None_8D8A06 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_8D8A06__is(STACK_FRAME void* this);
None_8D8A06 None_8D8A06__as(STACK_FRAME void *this);

void None_8D8A06_apply(STACK_FRAME None_8D8A06 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_8D8A06", "apply", 0);
}