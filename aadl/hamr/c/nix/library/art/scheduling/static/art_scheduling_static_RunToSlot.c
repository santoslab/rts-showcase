#include <all.h>

// art.scheduling.static.RunToSlot

B art_scheduling_static_RunToSlot__eq(art_scheduling_static_RunToSlot this, art_scheduling_static_RunToSlot other) {
  if (Z__ne(this->slotNum, other->slotNum)) return F;
  return T;
}

B art_scheduling_static_RunToSlot__equiv(art_scheduling_static_RunToSlot this, art_scheduling_static_RunToSlot other) {
  if (Z__inequiv(this->slotNum, other->slotNum)) return F;
  return T;
}

B art_scheduling_static_RunToSlot__ne(art_scheduling_static_RunToSlot this, art_scheduling_static_RunToSlot other);
B art_scheduling_static_RunToSlot__inequiv(art_scheduling_static_RunToSlot this, art_scheduling_static_RunToSlot other);

void art_scheduling_static_RunToSlot_string_(STACK_FRAME String result, art_scheduling_static_RunToSlot this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.RunToSlot", "string", 0);
  String_string_(SF result, string("RunToSlot("));
  Z_string_(SF result, this->slotNum);
  String_string_(SF result, string(")"));
}

void art_scheduling_static_RunToSlot_cprint(art_scheduling_static_RunToSlot this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("RunToSlot("), isOut);
  Z_cprint(this->slotNum, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_RunToSlot__is(STACK_FRAME void* this);
art_scheduling_static_RunToSlot art_scheduling_static_RunToSlot__as(STACK_FRAME void *this);

void art_scheduling_static_RunToSlot_apply(STACK_FRAME art_scheduling_static_RunToSlot this, Z slotNum) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.RunToSlot", "apply", 0);
  this->slotNum = slotNum;
}