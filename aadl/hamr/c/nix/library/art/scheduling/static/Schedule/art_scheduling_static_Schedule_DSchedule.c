#include <all.h>

// art.scheduling.static.Schedule.DSchedule

B art_scheduling_static_Schedule_DSchedule__eq(art_scheduling_static_Schedule_DSchedule this, art_scheduling_static_Schedule_DSchedule other) {
  if (IS_5AA467__ne((IS_5AA467) &this->slots, (IS_5AA467) &other->slots)) return F;
  return T;
}

B art_scheduling_static_Schedule_DSchedule__equiv(art_scheduling_static_Schedule_DSchedule this, art_scheduling_static_Schedule_DSchedule other) {
  if (IS_5AA467__inequiv((IS_5AA467) &this->slots, (IS_5AA467) &other->slots)) return F;
  return T;
}

B art_scheduling_static_Schedule_DSchedule__ne(art_scheduling_static_Schedule_DSchedule this, art_scheduling_static_Schedule_DSchedule other);
B art_scheduling_static_Schedule_DSchedule__inequiv(art_scheduling_static_Schedule_DSchedule this, art_scheduling_static_Schedule_DSchedule other);

void art_scheduling_static_Schedule_DSchedule_string_(STACK_FRAME String result, art_scheduling_static_Schedule_DSchedule this) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule.DSchedule", "string", 0);
  String_string_(SF result, string("DSchedule("));
  IS_5AA467_string_(SF result, (IS_5AA467) &this->slots);
  String_string_(SF result, string(")"));
}

void art_scheduling_static_Schedule_DSchedule_cprint(art_scheduling_static_Schedule_DSchedule this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("DSchedule("), isOut);
  IS_5AA467_cprint((IS_5AA467) &this->slots, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_Schedule_DSchedule__is(STACK_FRAME void* this);
art_scheduling_static_Schedule_DSchedule art_scheduling_static_Schedule_DSchedule__as(STACK_FRAME void *this);

void art_scheduling_static_Schedule_DSchedule_apply(STACK_FRAME art_scheduling_static_Schedule_DSchedule this, IS_5AA467 slots) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule.DSchedule", "apply", 0);
  Type_assign(&this->slots, slots, sizeof(struct IS_5AA467));
}