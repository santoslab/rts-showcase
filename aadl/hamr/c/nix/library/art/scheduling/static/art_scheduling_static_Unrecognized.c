#include <all.h>

// art.scheduling.static.Unrecognized

B art_scheduling_static_Unrecognized__eq(art_scheduling_static_Unrecognized this, art_scheduling_static_Unrecognized other) {
  return T;
}

B art_scheduling_static_Unrecognized__equiv(art_scheduling_static_Unrecognized this, art_scheduling_static_Unrecognized other) {
  return T;
}

B art_scheduling_static_Unrecognized__ne(art_scheduling_static_Unrecognized this, art_scheduling_static_Unrecognized other);
B art_scheduling_static_Unrecognized__inequiv(art_scheduling_static_Unrecognized this, art_scheduling_static_Unrecognized other);

void art_scheduling_static_Unrecognized_string_(STACK_FRAME String result, art_scheduling_static_Unrecognized this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.Unrecognized", "string", 0);
  String_string_(SF result, string("Unrecognized("));
  String_string_(SF result, string(")"));
}

void art_scheduling_static_Unrecognized_cprint(art_scheduling_static_Unrecognized this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Unrecognized("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_Unrecognized__is(STACK_FRAME void* this);
art_scheduling_static_Unrecognized art_scheduling_static_Unrecognized__as(STACK_FRAME void *this);

void art_scheduling_static_Unrecognized_apply(STACK_FRAME art_scheduling_static_Unrecognized this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.Unrecognized", "apply", 0);
}