#include <all.h>

void Some_B05425_get_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api result, Some_B05425 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);

  sfUpdateLoc(230);
  RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api _r_;
  _r_ = (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) Some_B05425_value_(this);
  Type_assign(result, _r_, sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api));
  return;
}

void Some_51E221_get_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api result, Some_51E221 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);

  sfUpdateLoc(230);
  RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api _r_;
  _r_ = (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) Some_51E221_value_(this);
  Type_assign(result, _r_, sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api));
  return;
}

B Some_D29615_nonEmpty_(STACK_FRAME Some_D29615 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "nonEmpty", 0);

  sfUpdateLoc(198);
  B _r_;
  {
    _r_ = T;
  }
  return _r_;
}

void Some_D29615_get_(STACK_FRAME art_DataContent result, Some_D29615 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);

  sfUpdateLoc(230);
  art_DataContent _r_;
  _r_ = (art_DataContent) Some_D29615_value_(this);
  Type_assign(result, _r_, sizeof(union art_DataContent));
  return;
}