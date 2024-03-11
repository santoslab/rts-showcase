#include <all.h>

// art.scheduling.static.RunToState

B art_scheduling_static_RunToState__eq(art_scheduling_static_RunToState this, art_scheduling_static_RunToState other) {
  if (Z__ne(this->hpNum, other->hpNum)) return F;
  if (Z__ne(this->slotNum, other->slotNum)) return F;
  return T;
}

B art_scheduling_static_RunToState__equiv(art_scheduling_static_RunToState this, art_scheduling_static_RunToState other) {
  if (Z__inequiv(this->hpNum, other->hpNum)) return F;
  if (Z__inequiv(this->slotNum, other->slotNum)) return F;
  return T;
}

B art_scheduling_static_RunToState__ne(art_scheduling_static_RunToState this, art_scheduling_static_RunToState other);
B art_scheduling_static_RunToState__inequiv(art_scheduling_static_RunToState this, art_scheduling_static_RunToState other);

void art_scheduling_static_RunToState_string_(STACK_FRAME String result, art_scheduling_static_RunToState this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.RunToState", "string", 0);
  String_string_(SF result, string("RunToState("));
  String sep = string(", ");
  Z_string_(SF result, this->hpNum);
  String_string_(SF result, sep);
  Z_string_(SF result, this->slotNum);
  String_string_(SF result, string(")"));
}

void art_scheduling_static_RunToState_cprint(art_scheduling_static_RunToState this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("RunToState("), isOut);
  String sep = string(", ");
  Z_cprint(this->hpNum, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->slotNum, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_RunToState__is(STACK_FRAME void* this);
art_scheduling_static_RunToState art_scheduling_static_RunToState__as(STACK_FRAME void *this);

void art_scheduling_static_RunToState_apply(STACK_FRAME art_scheduling_static_RunToState this, Z hpNum, Z slotNum) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.RunToState", "apply", 0);
  this->hpNum = hpNum;
  this->slotNum = slotNum;
}