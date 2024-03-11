#include <all.h>

// art.scheduling.static.Infostate

B art_scheduling_static_Infostate__eq(art_scheduling_static_Infostate this, art_scheduling_static_Infostate other) {
  return T;
}

B art_scheduling_static_Infostate__equiv(art_scheduling_static_Infostate this, art_scheduling_static_Infostate other) {
  return T;
}

B art_scheduling_static_Infostate__ne(art_scheduling_static_Infostate this, art_scheduling_static_Infostate other);
B art_scheduling_static_Infostate__inequiv(art_scheduling_static_Infostate this, art_scheduling_static_Infostate other);

void art_scheduling_static_Infostate_string_(STACK_FRAME String result, art_scheduling_static_Infostate this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.Infostate", "string", 0);
  String_string_(SF result, string("Infostate("));
  String_string_(SF result, string(")"));
}

void art_scheduling_static_Infostate_cprint(art_scheduling_static_Infostate this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Infostate("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_Infostate__is(STACK_FRAME void* this);
art_scheduling_static_Infostate art_scheduling_static_Infostate__as(STACK_FRAME void *this);

void art_scheduling_static_Infostate_apply(STACK_FRAME art_scheduling_static_Infostate this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.Infostate", "apply", 0);
}