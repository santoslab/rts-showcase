#include <all.h>

// Some[RTS.Actuation.Actuator_i_Initialization_Api]

B Some_E8C0F3__eq(Some_E8C0F3 this, Some_E8C0F3 other) {
  if (RTS_Actuation_Actuator_i_Initialization_Api__ne((RTS_Actuation_Actuator_i_Initialization_Api) &this->value, (RTS_Actuation_Actuator_i_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_E8C0F3__equiv(Some_E8C0F3 this, Some_E8C0F3 other) {
  if (RTS_Actuation_Actuator_i_Initialization_Api__inequiv((RTS_Actuation_Actuator_i_Initialization_Api) &this->value, (RTS_Actuation_Actuator_i_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_E8C0F3__ne(Some_E8C0F3 this, Some_E8C0F3 other);
B Some_E8C0F3__inequiv(Some_E8C0F3 this, Some_E8C0F3 other);

void Some_E8C0F3_string_(STACK_FRAME String result, Some_E8C0F3 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  RTS_Actuation_Actuator_i_Initialization_Api_string_(SF result, (RTS_Actuation_Actuator_i_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_E8C0F3_cprint(Some_E8C0F3 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  RTS_Actuation_Actuator_i_Initialization_Api_cprint((RTS_Actuation_Actuator_i_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_E8C0F3__is(STACK_FRAME void* this);
Some_E8C0F3 Some_E8C0F3__as(STACK_FRAME void *this);

void Some_E8C0F3_apply(STACK_FRAME Some_E8C0F3 this, RTS_Actuation_Actuator_i_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_E8C0F3", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct RTS_Actuation_Actuator_i_Initialization_Api));
}