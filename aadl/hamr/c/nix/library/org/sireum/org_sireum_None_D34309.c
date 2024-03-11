#include <all.h>

// None[art.Art.BridgeId]

B None_D34309__eq(None_D34309 this, None_D34309 other) {
  return T;
}

B None_D34309__equiv(None_D34309 this, None_D34309 other) {
  return T;
}

B None_D34309__ne(None_D34309 this, None_D34309 other);
B None_D34309__inequiv(None_D34309 this, None_D34309 other);

void None_D34309_string_(STACK_FRAME String result, None_D34309 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_D34309_cprint(None_D34309 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_D34309__is(STACK_FRAME void* this);
None_D34309 None_D34309__as(STACK_FRAME void *this);

void None_D34309_apply(STACK_FRAME None_D34309 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_D34309", "apply", 0);
}