#include <all.h>

// RTS.Base_Types.Integer_Payload

B RTS_Base_Types_Integer_Payload__eq(RTS_Base_Types_Integer_Payload this, RTS_Base_Types_Integer_Payload other) {
  if (Z__ne(this->value, other->value)) return F;
  return T;
}

B RTS_Base_Types_Integer_Payload__equiv(RTS_Base_Types_Integer_Payload this, RTS_Base_Types_Integer_Payload other) {
  if (Z__inequiv(this->value, other->value)) return F;
  return T;
}

B RTS_Base_Types_Integer_Payload__ne(RTS_Base_Types_Integer_Payload this, RTS_Base_Types_Integer_Payload other);
B RTS_Base_Types_Integer_Payload__inequiv(RTS_Base_Types_Integer_Payload this, RTS_Base_Types_Integer_Payload other);

void RTS_Base_Types_Integer_Payload_string_(STACK_FRAME String result, RTS_Base_Types_Integer_Payload this) {
  DeclNewStackFrame(caller, "Base_Types.scala", "RTS.Base_Types.Integer_Payload", "string", 0);
  String_string_(SF result, string("Integer_Payload("));
  Z_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void RTS_Base_Types_Integer_Payload_cprint(RTS_Base_Types_Integer_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Integer_Payload("), isOut);
  Z_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Base_Types_Integer_Payload__is(STACK_FRAME void* this);
RTS_Base_Types_Integer_Payload RTS_Base_Types_Integer_Payload__as(STACK_FRAME void *this);

void RTS_Base_Types_Integer_Payload_apply(STACK_FRAME RTS_Base_Types_Integer_Payload this, Z value) {
  DeclNewStackFrame(caller, "Base_Types.scala", "RTS.Base_Types.Integer_Payload", "apply", 0);
  this->value = value;
}