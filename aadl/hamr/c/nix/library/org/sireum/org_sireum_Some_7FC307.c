#include <all.h>

// Some[RTS.EventControl.EventControlMockThread_i_Operational_Api]

B Some_7FC307__eq(Some_7FC307 this, Some_7FC307 other) {
  if (RTS_EventControl_EventControlMockThread_i_Operational_Api__ne((RTS_EventControl_EventControlMockThread_i_Operational_Api) &this->value, (RTS_EventControl_EventControlMockThread_i_Operational_Api) &other->value)) return F;
  return T;
}

B Some_7FC307__equiv(Some_7FC307 this, Some_7FC307 other) {
  if (RTS_EventControl_EventControlMockThread_i_Operational_Api__inequiv((RTS_EventControl_EventControlMockThread_i_Operational_Api) &this->value, (RTS_EventControl_EventControlMockThread_i_Operational_Api) &other->value)) return F;
  return T;
}

B Some_7FC307__ne(Some_7FC307 this, Some_7FC307 other);
B Some_7FC307__inequiv(Some_7FC307 this, Some_7FC307 other);

void Some_7FC307_string_(STACK_FRAME String result, Some_7FC307 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  RTS_EventControl_EventControlMockThread_i_Operational_Api_string_(SF result, (RTS_EventControl_EventControlMockThread_i_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_7FC307_cprint(Some_7FC307 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  RTS_EventControl_EventControlMockThread_i_Operational_Api_cprint((RTS_EventControl_EventControlMockThread_i_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_7FC307__is(STACK_FRAME void* this);
Some_7FC307 Some_7FC307__as(STACK_FRAME void *this);

void Some_7FC307_apply(STACK_FRAME Some_7FC307 this, RTS_EventControl_EventControlMockThread_i_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_7FC307", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct RTS_EventControl_EventControlMockThread_i_Operational_Api));
}