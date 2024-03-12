#include <all.h>

// None[RTS.Actuation.Actuator_i_Initialization_Api]

B None_8BED90__eq(None_8BED90 this, None_8BED90 other) {
  return T;
}

B None_8BED90__equiv(None_8BED90 this, None_8BED90 other) {
  return T;
}

B None_8BED90__ne(None_8BED90 this, None_8BED90 other);
B None_8BED90__inequiv(None_8BED90 this, None_8BED90 other);

void None_8BED90_string_(STACK_FRAME String result, None_8BED90 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_8BED90_cprint(None_8BED90 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_8BED90__is(STACK_FRAME void* this);
None_8BED90 None_8BED90__as(STACK_FRAME void *this);

void None_8BED90_apply(STACK_FRAME None_8BED90 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_8BED90", "apply", 0);
}