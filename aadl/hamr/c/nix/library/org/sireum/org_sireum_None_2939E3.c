#include <all.h>

// None[RTS.EventControl.EventControlMockThread_i_Initialization_Api]

B None_2939E3__eq(None_2939E3 this, None_2939E3 other) {
  return T;
}

B None_2939E3__equiv(None_2939E3 this, None_2939E3 other) {
  return T;
}

B None_2939E3__ne(None_2939E3 this, None_2939E3 other);
B None_2939E3__inequiv(None_2939E3 this, None_2939E3 other);

void None_2939E3_string_(STACK_FRAME String result, None_2939E3 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_2939E3_cprint(None_2939E3 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_2939E3__is(STACK_FRAME void* this);
None_2939E3 None_2939E3__as(STACK_FRAME void *this);

void None_2939E3_apply(STACK_FRAME None_2939E3 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_2939E3", "apply", 0);
}