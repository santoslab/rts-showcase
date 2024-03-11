#include <all.h>

// art.scheduling.static.Stop

B art_scheduling_static_Stop__eq(art_scheduling_static_Stop this, art_scheduling_static_Stop other) {
  return T;
}

B art_scheduling_static_Stop__equiv(art_scheduling_static_Stop this, art_scheduling_static_Stop other) {
  return T;
}

B art_scheduling_static_Stop__ne(art_scheduling_static_Stop this, art_scheduling_static_Stop other);
B art_scheduling_static_Stop__inequiv(art_scheduling_static_Stop this, art_scheduling_static_Stop other);

void art_scheduling_static_Stop_string_(STACK_FRAME String result, art_scheduling_static_Stop this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.Stop", "string", 0);
  String_string_(SF result, string("Stop("));
  String_string_(SF result, string(")"));
}

void art_scheduling_static_Stop_cprint(art_scheduling_static_Stop this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Stop("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_Stop__is(STACK_FRAME void* this);
art_scheduling_static_Stop art_scheduling_static_Stop__as(STACK_FRAME void *this);

void art_scheduling_static_Stop_apply(STACK_FRAME art_scheduling_static_Stop this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.Stop", "apply", 0);
}