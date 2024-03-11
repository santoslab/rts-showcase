#include <all.h>

// Some[RTS.EventControl.EventControlMockThread_i_Initialization_Api]

B Some_4347C6__eq(Some_4347C6 this, Some_4347C6 other) {
  if (RTS_EventControl_EventControlMockThread_i_Initialization_Api__ne((RTS_EventControl_EventControlMockThread_i_Initialization_Api) &this->value, (RTS_EventControl_EventControlMockThread_i_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_4347C6__equiv(Some_4347C6 this, Some_4347C6 other) {
  if (RTS_EventControl_EventControlMockThread_i_Initialization_Api__inequiv((RTS_EventControl_EventControlMockThread_i_Initialization_Api) &this->value, (RTS_EventControl_EventControlMockThread_i_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_4347C6__ne(Some_4347C6 this, Some_4347C6 other);
B Some_4347C6__inequiv(Some_4347C6 this, Some_4347C6 other);

void Some_4347C6_string_(STACK_FRAME String result, Some_4347C6 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  RTS_EventControl_EventControlMockThread_i_Initialization_Api_string_(SF result, (RTS_EventControl_EventControlMockThread_i_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_4347C6_cprint(Some_4347C6 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  RTS_EventControl_EventControlMockThread_i_Initialization_Api_cprint((RTS_EventControl_EventControlMockThread_i_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_4347C6__is(STACK_FRAME void* this);
Some_4347C6 Some_4347C6__as(STACK_FRAME void *this);

void Some_4347C6_apply(STACK_FRAME Some_4347C6 this, RTS_EventControl_EventControlMockThread_i_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_4347C6", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct RTS_EventControl_EventControlMockThread_i_Initialization_Api));
}