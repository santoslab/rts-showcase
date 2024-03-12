#include <all.h>

// RTS.Base_Types.Boolean_Payload

B RTS_Base_Types_Boolean_Payload__eq(RTS_Base_Types_Boolean_Payload this, RTS_Base_Types_Boolean_Payload other) {
  if (B__ne(this->value, other->value)) return F;
  return T;
}

B RTS_Base_Types_Boolean_Payload__equiv(RTS_Base_Types_Boolean_Payload this, RTS_Base_Types_Boolean_Payload other) {
  if (B__inequiv(this->value, other->value)) return F;
  return T;
}

B RTS_Base_Types_Boolean_Payload__ne(RTS_Base_Types_Boolean_Payload this, RTS_Base_Types_Boolean_Payload other);
B RTS_Base_Types_Boolean_Payload__inequiv(RTS_Base_Types_Boolean_Payload this, RTS_Base_Types_Boolean_Payload other);

void RTS_Base_Types_Boolean_Payload_string_(STACK_FRAME String result, RTS_Base_Types_Boolean_Payload this) {
  DeclNewStackFrame(caller, "Base_Types.scala", "RTS.Base_Types.Boolean_Payload", "string", 0);
  String_string_(SF result, string("Boolean_Payload("));
  B_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void RTS_Base_Types_Boolean_Payload_cprint(RTS_Base_Types_Boolean_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Boolean_Payload("), isOut);
  B_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Base_Types_Boolean_Payload__is(STACK_FRAME void* this);
RTS_Base_Types_Boolean_Payload RTS_Base_Types_Boolean_Payload__as(STACK_FRAME void *this);

void RTS_Base_Types_Boolean_Payload_apply(STACK_FRAME RTS_Base_Types_Boolean_Payload this, B value) {
  DeclNewStackFrame(caller, "Base_Types.scala", "RTS.Base_Types.Boolean_Payload", "apply", 0);
  this->value = value;
}