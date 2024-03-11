#include <all.h>

// None[RTS.Actuation.OrLogic_i_Initialization_Api]

B None_1FE67C__eq(None_1FE67C this, None_1FE67C other) {
  return T;
}

B None_1FE67C__equiv(None_1FE67C this, None_1FE67C other) {
  return T;
}

B None_1FE67C__ne(None_1FE67C this, None_1FE67C other);
B None_1FE67C__inequiv(None_1FE67C this, None_1FE67C other);

void None_1FE67C_string_(STACK_FRAME String result, None_1FE67C this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_1FE67C_cprint(None_1FE67C this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_1FE67C__is(STACK_FRAME void* this);
None_1FE67C None_1FE67C__as(STACK_FRAME void *this);

void None_1FE67C_apply(STACK_FRAME None_1FE67C this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_1FE67C", "apply", 0);
}