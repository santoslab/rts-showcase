#include <all.h>

// None[IS[Z, art.Art.BridgeId]]

B None_00347F__eq(None_00347F this, None_00347F other) {
  return T;
}

B None_00347F__equiv(None_00347F this, None_00347F other) {
  return T;
}

B None_00347F__ne(None_00347F this, None_00347F other);
B None_00347F__inequiv(None_00347F this, None_00347F other);

void None_00347F_string_(STACK_FRAME String result, None_00347F this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_00347F_cprint(None_00347F this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_00347F__is(STACK_FRAME void* this);
None_00347F None_00347F__as(STACK_FRAME void *this);

void None_00347F_apply(STACK_FRAME None_00347F this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_00347F", "apply", 0);
}