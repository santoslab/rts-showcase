#include <all.h>

// art.scheduling.static.Schedule.DScheduleSpec

B art_scheduling_static_Schedule_DScheduleSpec__eq(art_scheduling_static_Schedule_DScheduleSpec this, art_scheduling_static_Schedule_DScheduleSpec other) {
  if (Z__ne(this->maxDomain, other->maxDomain)) return F;
  if (Z__ne(this->hyperPeriod, other->hyperPeriod)) return F;
  if (art_scheduling_static_Schedule_DSchedule__ne((art_scheduling_static_Schedule_DSchedule) &this->schedule, (art_scheduling_static_Schedule_DSchedule) &other->schedule)) return F;
  return T;
}

B art_scheduling_static_Schedule_DScheduleSpec__equiv(art_scheduling_static_Schedule_DScheduleSpec this, art_scheduling_static_Schedule_DScheduleSpec other) {
  if (Z__inequiv(this->maxDomain, other->maxDomain)) return F;
  if (Z__inequiv(this->hyperPeriod, other->hyperPeriod)) return F;
  if (art_scheduling_static_Schedule_DSchedule__inequiv((art_scheduling_static_Schedule_DSchedule) &this->schedule, (art_scheduling_static_Schedule_DSchedule) &other->schedule)) return F;
  return T;
}

B art_scheduling_static_Schedule_DScheduleSpec__ne(art_scheduling_static_Schedule_DScheduleSpec this, art_scheduling_static_Schedule_DScheduleSpec other);
B art_scheduling_static_Schedule_DScheduleSpec__inequiv(art_scheduling_static_Schedule_DScheduleSpec this, art_scheduling_static_Schedule_DScheduleSpec other);

void art_scheduling_static_Schedule_DScheduleSpec_string_(STACK_FRAME String result, art_scheduling_static_Schedule_DScheduleSpec this) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule.DScheduleSpec", "string", 0);
  String_string_(SF result, string("DScheduleSpec("));
  String sep = string(", ");
  Z_string_(SF result, this->maxDomain);
  String_string_(SF result, sep);
  Z_string_(SF result, this->hyperPeriod);
  String_string_(SF result, sep);
  art_scheduling_static_Schedule_DSchedule_string_(SF result, (art_scheduling_static_Schedule_DSchedule) &this->schedule);
  String_string_(SF result, string(")"));
}

void art_scheduling_static_Schedule_DScheduleSpec_cprint(art_scheduling_static_Schedule_DScheduleSpec this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("DScheduleSpec("), isOut);
  String sep = string(", ");
  Z_cprint(this->maxDomain, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->hyperPeriod, isOut);
  String_cprint(sep, isOut);
  art_scheduling_static_Schedule_DSchedule_cprint((art_scheduling_static_Schedule_DSchedule) &this->schedule, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_Schedule_DScheduleSpec__is(STACK_FRAME void* this);
art_scheduling_static_Schedule_DScheduleSpec art_scheduling_static_Schedule_DScheduleSpec__as(STACK_FRAME void *this);

void art_scheduling_static_Schedule_DScheduleSpec_apply(STACK_FRAME art_scheduling_static_Schedule_DScheduleSpec this, Z maxDomain, Z hyperPeriod, art_scheduling_static_Schedule_DSchedule schedule) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule.DScheduleSpec", "apply", 0);
  this->maxDomain = maxDomain;
  this->hyperPeriod = hyperPeriod;
  Type_assign(&this->schedule, schedule, sizeof(struct art_scheduling_static_Schedule_DSchedule));
}