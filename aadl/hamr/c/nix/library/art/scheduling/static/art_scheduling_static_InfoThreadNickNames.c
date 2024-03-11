#include <all.h>

// art.scheduling.static.InfoThreadNickNames

B art_scheduling_static_InfoThreadNickNames__eq(art_scheduling_static_InfoThreadNickNames this, art_scheduling_static_InfoThreadNickNames other) {
  return T;
}

B art_scheduling_static_InfoThreadNickNames__equiv(art_scheduling_static_InfoThreadNickNames this, art_scheduling_static_InfoThreadNickNames other) {
  return T;
}

B art_scheduling_static_InfoThreadNickNames__ne(art_scheduling_static_InfoThreadNickNames this, art_scheduling_static_InfoThreadNickNames other);
B art_scheduling_static_InfoThreadNickNames__inequiv(art_scheduling_static_InfoThreadNickNames this, art_scheduling_static_InfoThreadNickNames other);

void art_scheduling_static_InfoThreadNickNames_string_(STACK_FRAME String result, art_scheduling_static_InfoThreadNickNames this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.InfoThreadNickNames", "string", 0);
  String_string_(SF result, string("InfoThreadNickNames("));
  String_string_(SF result, string(")"));
}

void art_scheduling_static_InfoThreadNickNames_cprint(art_scheduling_static_InfoThreadNickNames this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("InfoThreadNickNames("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_InfoThreadNickNames__is(STACK_FRAME void* this);
art_scheduling_static_InfoThreadNickNames art_scheduling_static_InfoThreadNickNames__as(STACK_FRAME void *this);

void art_scheduling_static_InfoThreadNickNames_apply(STACK_FRAME art_scheduling_static_InfoThreadNickNames this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.InfoThreadNickNames", "apply", 0);
}