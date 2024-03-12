#include <all.h>

// Some[RTS.Actuation.OrLogic_i_Initialization_Api]

B Some_824C23__eq(Some_824C23 this, Some_824C23 other) {
  if (RTS_Actuation_OrLogic_i_Initialization_Api__ne((RTS_Actuation_OrLogic_i_Initialization_Api) &this->value, (RTS_Actuation_OrLogic_i_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_824C23__equiv(Some_824C23 this, Some_824C23 other) {
  if (RTS_Actuation_OrLogic_i_Initialization_Api__inequiv((RTS_Actuation_OrLogic_i_Initialization_Api) &this->value, (RTS_Actuation_OrLogic_i_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_824C23__ne(Some_824C23 this, Some_824C23 other);
B Some_824C23__inequiv(Some_824C23 this, Some_824C23 other);

void Some_824C23_string_(STACK_FRAME String result, Some_824C23 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  RTS_Actuation_OrLogic_i_Initialization_Api_string_(SF result, (RTS_Actuation_OrLogic_i_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_824C23_cprint(Some_824C23 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  RTS_Actuation_OrLogic_i_Initialization_Api_cprint((RTS_Actuation_OrLogic_i_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_824C23__is(STACK_FRAME void* this);
Some_824C23 Some_824C23__as(STACK_FRAME void *this);

void Some_824C23_apply(STACK_FRAME Some_824C23 this, RTS_Actuation_OrLogic_i_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_824C23", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct RTS_Actuation_OrLogic_i_Initialization_Api));
}