#include <all.h>

// art.scheduling.static.Infoschedule

B art_scheduling_static_Infoschedule__eq(art_scheduling_static_Infoschedule this, art_scheduling_static_Infoschedule other) {
  return T;
}

B art_scheduling_static_Infoschedule__equiv(art_scheduling_static_Infoschedule this, art_scheduling_static_Infoschedule other) {
  return T;
}

B art_scheduling_static_Infoschedule__ne(art_scheduling_static_Infoschedule this, art_scheduling_static_Infoschedule other);
B art_scheduling_static_Infoschedule__inequiv(art_scheduling_static_Infoschedule this, art_scheduling_static_Infoschedule other);

void art_scheduling_static_Infoschedule_string_(STACK_FRAME String result, art_scheduling_static_Infoschedule this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.Infoschedule", "string", 0);
  String_string_(SF result, string("Infoschedule("));
  String_string_(SF result, string(")"));
}

void art_scheduling_static_Infoschedule_cprint(art_scheduling_static_Infoschedule this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Infoschedule("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_Infoschedule__is(STACK_FRAME void* this);
art_scheduling_static_Infoschedule art_scheduling_static_Infoschedule__as(STACK_FRAME void *this);

void art_scheduling_static_Infoschedule_apply(STACK_FRAME art_scheduling_static_Infoschedule this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.Infoschedule", "apply", 0);
}