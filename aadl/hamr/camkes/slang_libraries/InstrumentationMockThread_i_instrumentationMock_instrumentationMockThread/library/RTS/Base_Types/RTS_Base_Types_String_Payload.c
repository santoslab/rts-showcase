#include <all.h>

// RTS.Base_Types.String_Payload

B RTS_Base_Types_String_Payload__eq(RTS_Base_Types_String_Payload this, RTS_Base_Types_String_Payload other) {
  if (String__ne((String) &this->value, (String) &other->value)) return F;
  return T;
}

B RTS_Base_Types_String_Payload__equiv(RTS_Base_Types_String_Payload this, RTS_Base_Types_String_Payload other) {
  if (String__inequiv((String) &this->value, (String) &other->value)) return F;
  return T;
}

B RTS_Base_Types_String_Payload__ne(RTS_Base_Types_String_Payload this, RTS_Base_Types_String_Payload other);
B RTS_Base_Types_String_Payload__inequiv(RTS_Base_Types_String_Payload this, RTS_Base_Types_String_Payload other);

void RTS_Base_Types_String_Payload_string_(STACK_FRAME String result, RTS_Base_Types_String_Payload this) {
  DeclNewStackFrame(caller, "Base_Types.scala", "RTS.Base_Types.String_Payload", "string", 0);
  String_string_(SF result, string("String_Payload("));
  String_string_(SF result, (String) &this->value);
  String_string_(SF result, string(")"));
}

void RTS_Base_Types_String_Payload_cprint(RTS_Base_Types_String_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("String_Payload("), isOut);
  String_cprint((String) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Base_Types_String_Payload__is(STACK_FRAME void* this);
RTS_Base_Types_String_Payload RTS_Base_Types_String_Payload__as(STACK_FRAME void *this);

void RTS_Base_Types_String_Payload_apply(STACK_FRAME RTS_Base_Types_String_Payload this, String value) {
  DeclNewStackFrame(caller, "Base_Types.scala", "RTS.Base_Types.String_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct StaticString));
}