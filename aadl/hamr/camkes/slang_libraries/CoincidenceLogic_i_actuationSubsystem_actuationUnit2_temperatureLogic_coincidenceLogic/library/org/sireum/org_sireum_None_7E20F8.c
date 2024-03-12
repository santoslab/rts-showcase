#include <all.h>

// None[B]

B None_7E20F8__eq(None_7E20F8 this, None_7E20F8 other) {
  return T;
}

B None_7E20F8__equiv(None_7E20F8 this, None_7E20F8 other) {
  return T;
}

B None_7E20F8__ne(None_7E20F8 this, None_7E20F8 other);
B None_7E20F8__inequiv(None_7E20F8 this, None_7E20F8 other);

void None_7E20F8_string_(STACK_FRAME String result, None_7E20F8 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_7E20F8_cprint(None_7E20F8 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_7E20F8__is(STACK_FRAME void* this);
None_7E20F8 None_7E20F8__as(STACK_FRAME void *this);

void None_7E20F8_apply(STACK_FRAME None_7E20F8 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_7E20F8", "apply", 0);
}