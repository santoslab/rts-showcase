#include <all.h>

// Some[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]

B Some_7A7168__eq(Some_7A7168 this, Some_7A7168 other) {
  if (RTS_Actuation_CoincidenceLogic_i_Initialization_Api__ne((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &this->value, (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_7A7168__equiv(Some_7A7168 this, Some_7A7168 other) {
  if (RTS_Actuation_CoincidenceLogic_i_Initialization_Api__inequiv((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &this->value, (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_7A7168__ne(Some_7A7168 this, Some_7A7168 other);
B Some_7A7168__inequiv(Some_7A7168 this, Some_7A7168 other);

void Some_7A7168_string_(STACK_FRAME String result, Some_7A7168 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  RTS_Actuation_CoincidenceLogic_i_Initialization_Api_string_(SF result, (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_7A7168_cprint(Some_7A7168 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  RTS_Actuation_CoincidenceLogic_i_Initialization_Api_cprint((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_7A7168__is(STACK_FRAME void* this);
Some_7A7168 Some_7A7168__as(STACK_FRAME void *this);

void Some_7A7168_apply(STACK_FRAME Some_7A7168 this, RTS_Actuation_CoincidenceLogic_i_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_7A7168", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct RTS_Actuation_CoincidenceLogic_i_Initialization_Api));
}