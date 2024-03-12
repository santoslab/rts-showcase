#include <all.h>

// RTS.Base_Types.Unsigned_8_Payload

B RTS_Base_Types_Unsigned_8_Payload__eq(RTS_Base_Types_Unsigned_8_Payload this, RTS_Base_Types_Unsigned_8_Payload other) {
  if (U8__ne(this->value, other->value)) return F;
  return T;
}

B RTS_Base_Types_Unsigned_8_Payload__equiv(RTS_Base_Types_Unsigned_8_Payload this, RTS_Base_Types_Unsigned_8_Payload other) {
  if (U8__inequiv(this->value, other->value)) return F;
  return T;
}

B RTS_Base_Types_Unsigned_8_Payload__ne(RTS_Base_Types_Unsigned_8_Payload this, RTS_Base_Types_Unsigned_8_Payload other);
B RTS_Base_Types_Unsigned_8_Payload__inequiv(RTS_Base_Types_Unsigned_8_Payload this, RTS_Base_Types_Unsigned_8_Payload other);

void RTS_Base_Types_Unsigned_8_Payload_string_(STACK_FRAME String result, RTS_Base_Types_Unsigned_8_Payload this) {
  DeclNewStackFrame(caller, "Base_Types.scala", "RTS.Base_Types.Unsigned_8_Payload", "string", 0);
  String_string_(SF result, string("Unsigned_8_Payload("));
  U8_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void RTS_Base_Types_Unsigned_8_Payload_cprint(RTS_Base_Types_Unsigned_8_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Unsigned_8_Payload("), isOut);
  U8_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Base_Types_Unsigned_8_Payload__is(STACK_FRAME void* this);
RTS_Base_Types_Unsigned_8_Payload RTS_Base_Types_Unsigned_8_Payload__as(STACK_FRAME void *this);

void RTS_Base_Types_Unsigned_8_Payload_apply(STACK_FRAME RTS_Base_Types_Unsigned_8_Payload this, U8 value) {
  DeclNewStackFrame(caller, "Base_Types.scala", "RTS.Base_Types.Unsigned_8_Payload", "apply", 0);
  this->value = value;
}