#include <all.h>

// None[IS[Z, art.Art.PortId]]

B None_CFD2B0__eq(None_CFD2B0 this, None_CFD2B0 other) {
  return T;
}

B None_CFD2B0__equiv(None_CFD2B0 this, None_CFD2B0 other) {
  return T;
}

B None_CFD2B0__ne(None_CFD2B0 this, None_CFD2B0 other);
B None_CFD2B0__inequiv(None_CFD2B0 this, None_CFD2B0 other);

void None_CFD2B0_string_(STACK_FRAME String result, None_CFD2B0 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_CFD2B0_cprint(None_CFD2B0 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_CFD2B0__is(STACK_FRAME void* this);
None_CFD2B0 None_CFD2B0__as(STACK_FRAME void *this);

void None_CFD2B0_apply(STACK_FRAME None_CFD2B0 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_CFD2B0", "apply", 0);
}