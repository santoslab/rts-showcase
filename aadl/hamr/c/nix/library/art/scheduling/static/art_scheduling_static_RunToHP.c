#include <all.h>

// art.scheduling.static.RunToHP

B art_scheduling_static_RunToHP__eq(art_scheduling_static_RunToHP this, art_scheduling_static_RunToHP other) {
  if (Z__ne(this->hpNum, other->hpNum)) return F;
  return T;
}

B art_scheduling_static_RunToHP__equiv(art_scheduling_static_RunToHP this, art_scheduling_static_RunToHP other) {
  if (Z__inequiv(this->hpNum, other->hpNum)) return F;
  return T;
}

B art_scheduling_static_RunToHP__ne(art_scheduling_static_RunToHP this, art_scheduling_static_RunToHP other);
B art_scheduling_static_RunToHP__inequiv(art_scheduling_static_RunToHP this, art_scheduling_static_RunToHP other);

void art_scheduling_static_RunToHP_string_(STACK_FRAME String result, art_scheduling_static_RunToHP this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.RunToHP", "string", 0);
  String_string_(SF result, string("RunToHP("));
  Z_string_(SF result, this->hpNum);
  String_string_(SF result, string(")"));
}

void art_scheduling_static_RunToHP_cprint(art_scheduling_static_RunToHP this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("RunToHP("), isOut);
  Z_cprint(this->hpNum, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_RunToHP__is(STACK_FRAME void* this);
art_scheduling_static_RunToHP art_scheduling_static_RunToHP__as(STACK_FRAME void *this);

void art_scheduling_static_RunToHP_apply(STACK_FRAME art_scheduling_static_RunToHP this, Z hpNum) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.RunToHP", "apply", 0);
  this->hpNum = hpNum;
}