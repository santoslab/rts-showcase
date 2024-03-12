#include <all.h>

void Some_E8C0F3_get_(STACK_FRAME RTS_Actuation_Actuator_i_Initialization_Api result, Some_E8C0F3 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);

  sfUpdateLoc(230);
  RTS_Actuation_Actuator_i_Initialization_Api _r_;
  _r_ = (RTS_Actuation_Actuator_i_Initialization_Api) Some_E8C0F3_value_(this);
  Type_assign(result, _r_, sizeof(struct RTS_Actuation_Actuator_i_Initialization_Api));
  return;
}

void Some_42319A_get_(STACK_FRAME RTS_Actuation_Actuator_i_Operational_Api result, Some_42319A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);

  sfUpdateLoc(230);
  RTS_Actuation_Actuator_i_Operational_Api _r_;
  _r_ = (RTS_Actuation_Actuator_i_Operational_Api) Some_42319A_value_(this);
  Type_assign(result, _r_, sizeof(struct RTS_Actuation_Actuator_i_Operational_Api));
  return;
}

B Some_DB59FB_get_(STACK_FRAME Some_DB59FB this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);

  sfUpdateLoc(230);
  B _r_;
  {
    _r_ = Some_DB59FB_value_(this);
  }
  return _r_;
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