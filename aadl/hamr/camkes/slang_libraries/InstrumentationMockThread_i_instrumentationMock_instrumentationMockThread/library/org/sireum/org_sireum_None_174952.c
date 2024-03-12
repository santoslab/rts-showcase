#include <all.h>

// None[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]

B None_174952__eq(None_174952 this, None_174952 other) {
  return T;
}

B None_174952__equiv(None_174952 this, None_174952 other) {
  return T;
}

B None_174952__ne(None_174952 this, None_174952 other);
B None_174952__inequiv(None_174952 this, None_174952 other);

void None_174952_string_(STACK_FRAME String result, None_174952 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_174952_cprint(None_174952 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_174952__is(STACK_FRAME void* this);
None_174952 None_174952__as(STACK_FRAME void *this);

void None_174952_apply(STACK_FRAME None_174952 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_174952", "apply", 0);
}