#include <all.h>

// None[RTS.EventControl.EventControlMockThread_i_Operational_Api]

B None_1A60DD__eq(None_1A60DD this, None_1A60DD other) {
  return T;
}

B None_1A60DD__equiv(None_1A60DD this, None_1A60DD other) {
  return T;
}

B None_1A60DD__ne(None_1A60DD this, None_1A60DD other);
B None_1A60DD__inequiv(None_1A60DD this, None_1A60DD other);

void None_1A60DD_string_(STACK_FRAME String result, None_1A60DD this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_1A60DD_cprint(None_1A60DD this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_1A60DD__is(STACK_FRAME void* this);
None_1A60DD None_1A60DD__as(STACK_FRAME void *this);

void None_1A60DD_apply(STACK_FRAME None_1A60DD this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_1A60DD", "apply", 0);
}