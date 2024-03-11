#include <all.h>

// None[RTS.Cli.RunChoice.Type]

B None_9803C0__eq(None_9803C0 this, None_9803C0 other) {
  return T;
}

B None_9803C0__equiv(None_9803C0 this, None_9803C0 other) {
  return T;
}

B None_9803C0__ne(None_9803C0 this, None_9803C0 other);
B None_9803C0__inequiv(None_9803C0 this, None_9803C0 other);

void None_9803C0_string_(STACK_FRAME String result, None_9803C0 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_9803C0_cprint(None_9803C0 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_9803C0__is(STACK_FRAME void* this);
None_9803C0 None_9803C0__as(STACK_FRAME void *this);

void None_9803C0_apply(STACK_FRAME None_9803C0 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_9803C0", "apply", 0);
}