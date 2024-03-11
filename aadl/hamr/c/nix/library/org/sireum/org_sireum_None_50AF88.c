#include <all.h>

// None[art.ArtSlangMessage]

B None_50AF88__eq(None_50AF88 this, None_50AF88 other) {
  return T;
}

B None_50AF88__equiv(None_50AF88 this, None_50AF88 other) {
  return T;
}

B None_50AF88__ne(None_50AF88 this, None_50AF88 other);
B None_50AF88__inequiv(None_50AF88 this, None_50AF88 other);

void None_50AF88_string_(STACK_FRAME String result, None_50AF88 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_50AF88_cprint(None_50AF88 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_50AF88__is(STACK_FRAME void* this);
None_50AF88 None_50AF88__as(STACK_FRAME void *this);

void None_50AF88_apply(STACK_FRAME None_50AF88 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_50AF88", "apply", 0);
}