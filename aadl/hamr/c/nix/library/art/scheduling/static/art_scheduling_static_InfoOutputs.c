#include <all.h>

// art.scheduling.static.InfoOutputs

B art_scheduling_static_InfoOutputs__eq(art_scheduling_static_InfoOutputs this, art_scheduling_static_InfoOutputs other) {
  return T;
}

B art_scheduling_static_InfoOutputs__equiv(art_scheduling_static_InfoOutputs this, art_scheduling_static_InfoOutputs other) {
  return T;
}

B art_scheduling_static_InfoOutputs__ne(art_scheduling_static_InfoOutputs this, art_scheduling_static_InfoOutputs other);
B art_scheduling_static_InfoOutputs__inequiv(art_scheduling_static_InfoOutputs this, art_scheduling_static_InfoOutputs other);

void art_scheduling_static_InfoOutputs_string_(STACK_FRAME String result, art_scheduling_static_InfoOutputs this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.InfoOutputs", "string", 0);
  String_string_(SF result, string("InfoOutputs("));
  String_string_(SF result, string(")"));
}

void art_scheduling_static_InfoOutputs_cprint(art_scheduling_static_InfoOutputs this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("InfoOutputs("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_InfoOutputs__is(STACK_FRAME void* this);
art_scheduling_static_InfoOutputs art_scheduling_static_InfoOutputs__as(STACK_FRAME void *this);

void art_scheduling_static_InfoOutputs_apply(STACK_FRAME art_scheduling_static_InfoOutputs this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.InfoOutputs", "apply", 0);
}