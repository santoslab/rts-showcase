#include <all.h>

// Some[RTS.Actuation.OrLogic_i_Operational_Api]

B Some_6FC748__eq(Some_6FC748 this, Some_6FC748 other) {
  if (RTS_Actuation_OrLogic_i_Operational_Api__ne((RTS_Actuation_OrLogic_i_Operational_Api) &this->value, (RTS_Actuation_OrLogic_i_Operational_Api) &other->value)) return F;
  return T;
}

B Some_6FC748__equiv(Some_6FC748 this, Some_6FC748 other) {
  if (RTS_Actuation_OrLogic_i_Operational_Api__inequiv((RTS_Actuation_OrLogic_i_Operational_Api) &this->value, (RTS_Actuation_OrLogic_i_Operational_Api) &other->value)) return F;
  return T;
}

B Some_6FC748__ne(Some_6FC748 this, Some_6FC748 other);
B Some_6FC748__inequiv(Some_6FC748 this, Some_6FC748 other);

void Some_6FC748_string_(STACK_FRAME String result, Some_6FC748 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  RTS_Actuation_OrLogic_i_Operational_Api_string_(SF result, (RTS_Actuation_OrLogic_i_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_6FC748_cprint(Some_6FC748 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  RTS_Actuation_OrLogic_i_Operational_Api_cprint((RTS_Actuation_OrLogic_i_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_6FC748__is(STACK_FRAME void* this);
Some_6FC748 Some_6FC748__as(STACK_FRAME void *this);

void Some_6FC748_apply(STACK_FRAME Some_6FC748 this, RTS_Actuation_OrLogic_i_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_6FC748", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct RTS_Actuation_OrLogic_i_Operational_Api));
}