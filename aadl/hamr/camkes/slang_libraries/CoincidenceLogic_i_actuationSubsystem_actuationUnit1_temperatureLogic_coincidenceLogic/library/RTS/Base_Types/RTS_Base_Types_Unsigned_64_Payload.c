#include <all.h>

// RTS.Base_Types.Unsigned_64_Payload

B RTS_Base_Types_Unsigned_64_Payload__eq(RTS_Base_Types_Unsigned_64_Payload this, RTS_Base_Types_Unsigned_64_Payload other) {
  if (U64__ne(this->value, other->value)) return F;
  return T;
}

B RTS_Base_Types_Unsigned_64_Payload__equiv(RTS_Base_Types_Unsigned_64_Payload this, RTS_Base_Types_Unsigned_64_Payload other) {
  if (U64__inequiv(this->value, other->value)) return F;
  return T;
}

B RTS_Base_Types_Unsigned_64_Payload__ne(RTS_Base_Types_Unsigned_64_Payload this, RTS_Base_Types_Unsigned_64_Payload other);
B RTS_Base_Types_Unsigned_64_Payload__inequiv(RTS_Base_Types_Unsigned_64_Payload this, RTS_Base_Types_Unsigned_64_Payload other);

void RTS_Base_Types_Unsigned_64_Payload_string_(STACK_FRAME String result, RTS_Base_Types_Unsigned_64_Payload this) {
  DeclNewStackFrame(caller, "Base_Types.scala", "RTS.Base_Types.Unsigned_64_Payload", "string", 0);
  String_string_(SF result, string("Unsigned_64_Payload("));
  U64_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void RTS_Base_Types_Unsigned_64_Payload_cprint(RTS_Base_Types_Unsigned_64_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Unsigned_64_Payload("), isOut);
  U64_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Base_Types_Unsigned_64_Payload__is(STACK_FRAME void* this);
RTS_Base_Types_Unsigned_64_Payload RTS_Base_Types_Unsigned_64_Payload__as(STACK_FRAME void *this);

void RTS_Base_Types_Unsigned_64_Payload_apply(STACK_FRAME RTS_Base_Types_Unsigned_64_Payload this, U64 value) {
  DeclNewStackFrame(caller, "Base_Types.scala", "RTS.Base_Types.Unsigned_64_Payload", "apply", 0);
  this->value = value;
}