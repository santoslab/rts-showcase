#include <all.h>

// art.scheduling.static.Help

B art_scheduling_static_Help__eq(art_scheduling_static_Help this, art_scheduling_static_Help other) {
  return T;
}

B art_scheduling_static_Help__equiv(art_scheduling_static_Help this, art_scheduling_static_Help other) {
  return T;
}

B art_scheduling_static_Help__ne(art_scheduling_static_Help this, art_scheduling_static_Help other);
B art_scheduling_static_Help__inequiv(art_scheduling_static_Help this, art_scheduling_static_Help other);

void art_scheduling_static_Help_string_(STACK_FRAME String result, art_scheduling_static_Help this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.Help", "string", 0);
  String_string_(SF result, string("Help("));
  String_string_(SF result, string(")"));
}

void art_scheduling_static_Help_cprint(art_scheduling_static_Help this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Help("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_Help__is(STACK_FRAME void* this);
art_scheduling_static_Help art_scheduling_static_Help__as(STACK_FRAME void *this);

void art_scheduling_static_Help_apply(STACK_FRAME art_scheduling_static_Help this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.Help", "apply", 0);
}