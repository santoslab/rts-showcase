#include <all.h>

// Some[RTS.Actuation.Actuator_i_Operational_Api]

B Some_42319A__eq(Some_42319A this, Some_42319A other) {
  if (RTS_Actuation_Actuator_i_Operational_Api__ne((RTS_Actuation_Actuator_i_Operational_Api) &this->value, (RTS_Actuation_Actuator_i_Operational_Api) &other->value)) return F;
  return T;
}

B Some_42319A__equiv(Some_42319A this, Some_42319A other) {
  if (RTS_Actuation_Actuator_i_Operational_Api__inequiv((RTS_Actuation_Actuator_i_Operational_Api) &this->value, (RTS_Actuation_Actuator_i_Operational_Api) &other->value)) return F;
  return T;
}

B Some_42319A__ne(Some_42319A this, Some_42319A other);
B Some_42319A__inequiv(Some_42319A this, Some_42319A other);

void Some_42319A_string_(STACK_FRAME String result, Some_42319A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  RTS_Actuation_Actuator_i_Operational_Api_string_(SF result, (RTS_Actuation_Actuator_i_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_42319A_cprint(Some_42319A this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  RTS_Actuation_Actuator_i_Operational_Api_cprint((RTS_Actuation_Actuator_i_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_42319A__is(STACK_FRAME void* this);
Some_42319A Some_42319A__as(STACK_FRAME void *this);

void Some_42319A_apply(STACK_FRAME Some_42319A this, RTS_Actuation_Actuator_i_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_42319A", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct RTS_Actuation_Actuator_i_Operational_Api));
}