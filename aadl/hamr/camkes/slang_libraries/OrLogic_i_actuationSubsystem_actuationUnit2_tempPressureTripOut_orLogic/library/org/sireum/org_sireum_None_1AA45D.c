#include <all.h>

// None[RTS.Actuation.OrLogic_i_Operational_Api]

B None_1AA45D__eq(None_1AA45D this, None_1AA45D other) {
  return T;
}

B None_1AA45D__equiv(None_1AA45D this, None_1AA45D other) {
  return T;
}

B None_1AA45D__ne(None_1AA45D this, None_1AA45D other);
B None_1AA45D__inequiv(None_1AA45D this, None_1AA45D other);

void None_1AA45D_string_(STACK_FRAME String result, None_1AA45D this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_1AA45D_cprint(None_1AA45D this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_1AA45D__is(STACK_FRAME void* this);
None_1AA45D None_1AA45D__as(STACK_FRAME void *this);

void None_1AA45D_apply(STACK_FRAME None_1AA45D this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_1AA45D", "apply", 0);
}