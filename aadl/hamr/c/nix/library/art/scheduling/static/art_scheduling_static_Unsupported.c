#include <all.h>

// art.scheduling.static.Unsupported

B art_scheduling_static_Unsupported__eq(art_scheduling_static_Unsupported this, art_scheduling_static_Unsupported other) {
  return T;
}

B art_scheduling_static_Unsupported__equiv(art_scheduling_static_Unsupported this, art_scheduling_static_Unsupported other) {
  return T;
}

B art_scheduling_static_Unsupported__ne(art_scheduling_static_Unsupported this, art_scheduling_static_Unsupported other);
B art_scheduling_static_Unsupported__inequiv(art_scheduling_static_Unsupported this, art_scheduling_static_Unsupported other);

void art_scheduling_static_Unsupported_string_(STACK_FRAME String result, art_scheduling_static_Unsupported this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.Unsupported", "string", 0);
  String_string_(SF result, string("Unsupported("));
  String_string_(SF result, string(")"));
}

void art_scheduling_static_Unsupported_cprint(art_scheduling_static_Unsupported this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Unsupported("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_Unsupported__is(STACK_FRAME void* this);
art_scheduling_static_Unsupported art_scheduling_static_Unsupported__as(STACK_FRAME void *this);

void art_scheduling_static_Unsupported_apply(STACK_FRAME art_scheduling_static_Unsupported this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.Unsupported", "apply", 0);
}