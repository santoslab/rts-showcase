#include <all.h>

// Some[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]

B Some_51E221__eq(Some_51E221 this, Some_51E221 other) {
  if (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api__ne((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &this->value, (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &other->value)) return F;
  return T;
}

B Some_51E221__equiv(Some_51E221 this, Some_51E221 other) {
  if (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api__inequiv((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &this->value, (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &other->value)) return F;
  return T;
}

B Some_51E221__ne(Some_51E221 this, Some_51E221 other);
B Some_51E221__inequiv(Some_51E221 this, Some_51E221 other);

void Some_51E221_string_(STACK_FRAME String result, Some_51E221 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_string_(SF result, (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_51E221_cprint(Some_51E221 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_cprint((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_51E221__is(STACK_FRAME void* this);
Some_51E221 Some_51E221__as(STACK_FRAME void *this);

void Some_51E221_apply(STACK_FRAME Some_51E221 this, RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_51E221", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api));
}