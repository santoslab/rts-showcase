#include <all.h>

// art.scheduling.static.Explorer.ScheduleState

B art_scheduling_static_Explorer_ScheduleState__eq(art_scheduling_static_Explorer_ScheduleState this, art_scheduling_static_Explorer_ScheduleState other) {
  if (Z__ne(this->slotNum, other->slotNum)) return F;
  if (Z__ne(this->hyperperiodNum, other->hyperperiodNum)) return F;
  return T;
}

B art_scheduling_static_Explorer_ScheduleState__equiv(art_scheduling_static_Explorer_ScheduleState this, art_scheduling_static_Explorer_ScheduleState other) {
  if (Z__inequiv(this->slotNum, other->slotNum)) return F;
  if (Z__inequiv(this->hyperperiodNum, other->hyperperiodNum)) return F;
  return T;
}

B art_scheduling_static_Explorer_ScheduleState__ne(art_scheduling_static_Explorer_ScheduleState this, art_scheduling_static_Explorer_ScheduleState other);
B art_scheduling_static_Explorer_ScheduleState__inequiv(art_scheduling_static_Explorer_ScheduleState this, art_scheduling_static_Explorer_ScheduleState other);

void art_scheduling_static_Explorer_ScheduleState_string_(STACK_FRAME String result, art_scheduling_static_Explorer_ScheduleState this) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer.ScheduleState", "string", 0);
  String_string_(SF result, string("ScheduleState("));
  String sep = string(", ");
  Z_string_(SF result, this->slotNum);
  String_string_(SF result, sep);
  Z_string_(SF result, this->hyperperiodNum);
  String_string_(SF result, string(")"));
}

void art_scheduling_static_Explorer_ScheduleState_cprint(art_scheduling_static_Explorer_ScheduleState this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("ScheduleState("), isOut);
  String sep = string(", ");
  Z_cprint(this->slotNum, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->hyperperiodNum, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_Explorer_ScheduleState__is(STACK_FRAME void* this);
art_scheduling_static_Explorer_ScheduleState art_scheduling_static_Explorer_ScheduleState__as(STACK_FRAME void *this);

void art_scheduling_static_Explorer_ScheduleState_apply(STACK_FRAME art_scheduling_static_Explorer_ScheduleState this, Z slotNum, Z hyperperiodNum) {
  DeclNewStackFrame(caller, "Explorer.scala", "art.scheduling.static.Explorer.ScheduleState", "apply", 0);
  this->slotNum = slotNum;
  this->hyperperiodNum = hyperperiodNum;
}