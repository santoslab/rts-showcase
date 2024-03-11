#include <all.h>

// RTS.Actuators.ActuatorsMockThread_i_Initialization_Api

B RTS_Actuators_ActuatorsMockThread_i_Initialization_Api__eq(RTS_Actuators_ActuatorsMockThread_i_Initialization_Api this, RTS_Actuators_ActuatorsMockThread_i_Initialization_Api other) {
  if (art_Art_BridgeId__ne(this->id, other->id)) return F;
  if (art_Art_PortId__ne(this->tempPressureActuate_Id, other->tempPressureActuate_Id)) return F;
  if (art_Art_PortId__ne(this->saturationActuate_Id, other->saturationActuate_Id)) return F;
  return T;
}

B RTS_Actuators_ActuatorsMockThread_i_Initialization_Api__equiv(RTS_Actuators_ActuatorsMockThread_i_Initialization_Api this, RTS_Actuators_ActuatorsMockThread_i_Initialization_Api other) {
  if (art_Art_BridgeId__inequiv(this->id, other->id)) return F;
  if (art_Art_PortId__inequiv(this->tempPressureActuate_Id, other->tempPressureActuate_Id)) return F;
  if (art_Art_PortId__inequiv(this->saturationActuate_Id, other->saturationActuate_Id)) return F;
  return T;
}

B RTS_Actuators_ActuatorsMockThread_i_Initialization_Api__ne(RTS_Actuators_ActuatorsMockThread_i_Initialization_Api this, RTS_Actuators_ActuatorsMockThread_i_Initialization_Api other);
B RTS_Actuators_ActuatorsMockThread_i_Initialization_Api__inequiv(RTS_Actuators_ActuatorsMockThread_i_Initialization_Api this, RTS_Actuators_ActuatorsMockThread_i_Initialization_Api other);

void RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_string_(STACK_FRAME String result, RTS_Actuators_ActuatorsMockThread_i_Initialization_Api this) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_Api.scala", "RTS.Actuators.ActuatorsMockThread_i_Initialization_Api", "string", 0);
  String_string_(SF result, string("ActuatorsMockThread_i_Initialization_Api("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->tempPressureActuate_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->saturationActuate_Id);
  String_string_(SF result, string(")"));
}

void RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_cprint(RTS_Actuators_ActuatorsMockThread_i_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("ActuatorsMockThread_i_Initialization_Api("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->tempPressureActuate_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->saturationActuate_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Actuators_ActuatorsMockThread_i_Initialization_Api__is(STACK_FRAME void* this);
RTS_Actuators_ActuatorsMockThread_i_Initialization_Api RTS_Actuators_ActuatorsMockThread_i_Initialization_Api__as(STACK_FRAME void *this);

void RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_apply(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Initialization_Api this, art_Art_BridgeId id, art_Art_PortId tempPressureActuate_Id, art_Art_PortId saturationActuate_Id) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_Api.scala", "RTS.Actuators.ActuatorsMockThread_i_Initialization_Api", "apply", 0);
  this->id = id;
  this->tempPressureActuate_Id = tempPressureActuate_Id;
  this->saturationActuate_Id = saturationActuate_Id;
}