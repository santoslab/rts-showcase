#include <all.h>

// None[art.scheduling.static.Explorer.ScheduleState]

B None_336F0A__eq(None_336F0A this, None_336F0A other) {
  return T;
}

B None_336F0A__equiv(None_336F0A this, None_336F0A other) {
  return T;
}

B None_336F0A__ne(None_336F0A this, None_336F0A other);
B None_336F0A__inequiv(None_336F0A this, None_336F0A other);

void None_336F0A_string_(STACK_FRAME String result, None_336F0A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_336F0A_cprint(None_336F0A this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_336F0A__is(STACK_FRAME void* this);
None_336F0A None_336F0A__as(STACK_FRAME void *this);

void None_336F0A_apply(STACK_FRAME None_336F0A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_336F0A", "apply", 0);
}