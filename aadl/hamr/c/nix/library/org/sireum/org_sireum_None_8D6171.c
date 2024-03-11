#include <all.h>

// None[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]

B None_8D6171__eq(None_8D6171 this, None_8D6171 other) {
  return T;
}

B None_8D6171__equiv(None_8D6171 this, None_8D6171 other) {
  return T;
}

B None_8D6171__ne(None_8D6171 this, None_8D6171 other);
B None_8D6171__inequiv(None_8D6171 this, None_8D6171 other);

void None_8D6171_string_(STACK_FRAME String result, None_8D6171 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_8D6171_cprint(None_8D6171 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_8D6171__is(STACK_FRAME void* this);
None_8D6171 None_8D6171__as(STACK_FRAME void *this);

void None_8D6171_apply(STACK_FRAME None_8D6171 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_8D6171", "apply", 0);
}