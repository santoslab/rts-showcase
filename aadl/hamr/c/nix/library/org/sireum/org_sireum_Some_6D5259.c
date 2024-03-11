#include <all.h>

// Some[art.scheduling.static.Explorer.ScheduleState]

B Some_6D5259__eq(Some_6D5259 this, Some_6D5259 other) {
  if (art_scheduling_static_Explorer_ScheduleState__ne((art_scheduling_static_Explorer_ScheduleState) &this->value, (art_scheduling_static_Explorer_ScheduleState) &other->value)) return F;
  return T;
}

B Some_6D5259__equiv(Some_6D5259 this, Some_6D5259 other) {
  if (art_scheduling_static_Explorer_ScheduleState__inequiv((art_scheduling_static_Explorer_ScheduleState) &this->value, (art_scheduling_static_Explorer_ScheduleState) &other->value)) return F;
  return T;
}

B Some_6D5259__ne(Some_6D5259 this, Some_6D5259 other);
B Some_6D5259__inequiv(Some_6D5259 this, Some_6D5259 other);

void Some_6D5259_string_(STACK_FRAME String result, Some_6D5259 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  art_scheduling_static_Explorer_ScheduleState_string_(SF result, (art_scheduling_static_Explorer_ScheduleState) &this->value);
  String_string_(SF result, string(")"));
}

void Some_6D5259_cprint(Some_6D5259 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  art_scheduling_static_Explorer_ScheduleState_cprint((art_scheduling_static_Explorer_ScheduleState) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_6D5259__is(STACK_FRAME void* this);
Some_6D5259 Some_6D5259__as(STACK_FRAME void *this);

void Some_6D5259_apply(STACK_FRAME Some_6D5259 this, art_scheduling_static_Explorer_ScheduleState value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_6D5259", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct art_scheduling_static_Explorer_ScheduleState));
}