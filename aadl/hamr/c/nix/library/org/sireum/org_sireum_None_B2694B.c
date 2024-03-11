#include <all.h>

// None[art.Art.PortId]

B None_B2694B__eq(None_B2694B this, None_B2694B other) {
  return T;
}

B None_B2694B__equiv(None_B2694B this, None_B2694B other) {
  return T;
}

B None_B2694B__ne(None_B2694B this, None_B2694B other);
B None_B2694B__inequiv(None_B2694B this, None_B2694B other);

void None_B2694B_string_(STACK_FRAME String result, None_B2694B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_B2694B_cprint(None_B2694B this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_B2694B__is(STACK_FRAME void* this);
None_B2694B None_B2694B__as(STACK_FRAME void *this);

void None_B2694B_apply(STACK_FRAME None_B2694B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_B2694B", "apply", 0);
}