#include <all.h>

// Some[RTS.Actuators.ActuatorsMockThread_i_Operational_Api]

B Some_B8A5BD__eq(Some_B8A5BD this, Some_B8A5BD other) {
  if (RTS_Actuators_ActuatorsMockThread_i_Operational_Api__ne((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &this->value, (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &other->value)) return F;
  return T;
}

B Some_B8A5BD__equiv(Some_B8A5BD this, Some_B8A5BD other) {
  if (RTS_Actuators_ActuatorsMockThread_i_Operational_Api__inequiv((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &this->value, (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &other->value)) return F;
  return T;
}

B Some_B8A5BD__ne(Some_B8A5BD this, Some_B8A5BD other);
B Some_B8A5BD__inequiv(Some_B8A5BD this, Some_B8A5BD other);

void Some_B8A5BD_string_(STACK_FRAME String result, Some_B8A5BD this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  RTS_Actuators_ActuatorsMockThread_i_Operational_Api_string_(SF result, (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_B8A5BD_cprint(Some_B8A5BD this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  RTS_Actuators_ActuatorsMockThread_i_Operational_Api_cprint((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_B8A5BD__is(STACK_FRAME void* this);
Some_B8A5BD Some_B8A5BD__as(STACK_FRAME void *this);

void Some_B8A5BD_apply(STACK_FRAME Some_B8A5BD this, RTS_Actuators_ActuatorsMockThread_i_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_B8A5BD", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct RTS_Actuators_ActuatorsMockThread_i_Operational_Api));
}