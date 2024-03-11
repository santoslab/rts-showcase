#include <all.h>

// Some[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]

B Some_B05425__eq(Some_B05425 this, Some_B05425 other) {
  if (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api__ne((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &this->value, (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_B05425__equiv(Some_B05425 this, Some_B05425 other) {
  if (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api__inequiv((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &this->value, (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_B05425__ne(Some_B05425 this, Some_B05425 other);
B Some_B05425__inequiv(Some_B05425 this, Some_B05425 other);

void Some_B05425_string_(STACK_FRAME String result, Some_B05425 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_string_(SF result, (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_B05425_cprint(Some_B05425 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_cprint((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_B05425__is(STACK_FRAME void* this);
Some_B05425 Some_B05425__as(STACK_FRAME void *this);

void Some_B05425_apply(STACK_FRAME Some_B05425 this, RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_B05425", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api));
}