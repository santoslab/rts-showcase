#include <all.h>

// Some[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api]

B Some_E625E9__eq(Some_E625E9 this, Some_E625E9 other) {
  if (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api__ne((RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &this->value, (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_E625E9__equiv(Some_E625E9 this, Some_E625E9 other) {
  if (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api__inequiv((RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &this->value, (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_E625E9__ne(Some_E625E9 this, Some_E625E9 other);
B Some_E625E9__inequiv(Some_E625E9 this, Some_E625E9 other);

void Some_E625E9_string_(STACK_FRAME String result, Some_E625E9 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_string_(SF result, (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_E625E9_cprint(Some_E625E9 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_cprint((RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_E625E9__is(STACK_FRAME void* this);
Some_E625E9 Some_E625E9__as(STACK_FRAME void *this);

void Some_E625E9_apply(STACK_FRAME Some_E625E9 this, RTS_Actuators_ActuatorsMockThread_i_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_E625E9", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct RTS_Actuators_ActuatorsMockThread_i_Initialization_Api));
}