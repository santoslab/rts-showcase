#include <all.h>

// art.scheduling.static.InfoInputs

B art_scheduling_static_InfoInputs__eq(art_scheduling_static_InfoInputs this, art_scheduling_static_InfoInputs other) {
  return T;
}

B art_scheduling_static_InfoInputs__equiv(art_scheduling_static_InfoInputs this, art_scheduling_static_InfoInputs other) {
  return T;
}

B art_scheduling_static_InfoInputs__ne(art_scheduling_static_InfoInputs this, art_scheduling_static_InfoInputs other);
B art_scheduling_static_InfoInputs__inequiv(art_scheduling_static_InfoInputs this, art_scheduling_static_InfoInputs other);

void art_scheduling_static_InfoInputs_string_(STACK_FRAME String result, art_scheduling_static_InfoInputs this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.InfoInputs", "string", 0);
  String_string_(SF result, string("InfoInputs("));
  String_string_(SF result, string(")"));
}

void art_scheduling_static_InfoInputs_cprint(art_scheduling_static_InfoInputs this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("InfoInputs("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_InfoInputs__is(STACK_FRAME void* this);
art_scheduling_static_InfoInputs art_scheduling_static_InfoInputs__as(STACK_FRAME void *this);

void art_scheduling_static_InfoInputs_apply(STACK_FRAME art_scheduling_static_InfoInputs this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.InfoInputs", "apply", 0);
}