#include <all.h>

// Some[RTS.Actuation.CoincidenceLogic_i_Operational_Api]

B Some_B99BC9__eq(Some_B99BC9 this, Some_B99BC9 other) {
  if (RTS_Actuation_CoincidenceLogic_i_Operational_Api__ne((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &this->value, (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &other->value)) return F;
  return T;
}

B Some_B99BC9__equiv(Some_B99BC9 this, Some_B99BC9 other) {
  if (RTS_Actuation_CoincidenceLogic_i_Operational_Api__inequiv((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &this->value, (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &other->value)) return F;
  return T;
}

B Some_B99BC9__ne(Some_B99BC9 this, Some_B99BC9 other);
B Some_B99BC9__inequiv(Some_B99BC9 this, Some_B99BC9 other);

void Some_B99BC9_string_(STACK_FRAME String result, Some_B99BC9 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  RTS_Actuation_CoincidenceLogic_i_Operational_Api_string_(SF result, (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_B99BC9_cprint(Some_B99BC9 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  RTS_Actuation_CoincidenceLogic_i_Operational_Api_cprint((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_B99BC9__is(STACK_FRAME void* this);
Some_B99BC9 Some_B99BC9__as(STACK_FRAME void *this);

void Some_B99BC9_apply(STACK_FRAME Some_B99BC9 this, RTS_Actuation_CoincidenceLogic_i_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_B99BC9", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct RTS_Actuation_CoincidenceLogic_i_Operational_Api));
}