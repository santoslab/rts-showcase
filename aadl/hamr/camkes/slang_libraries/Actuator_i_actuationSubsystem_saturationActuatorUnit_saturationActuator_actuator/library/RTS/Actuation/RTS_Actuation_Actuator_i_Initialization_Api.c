#include <all.h>

// RTS.Actuation.Actuator_i_Initialization_Api

B RTS_Actuation_Actuator_i_Initialization_Api__eq(RTS_Actuation_Actuator_i_Initialization_Api this, RTS_Actuation_Actuator_i_Initialization_Api other) {
  if (art_Art_BridgeId__ne(this->id, other->id)) return F;
  if (art_Art_PortId__ne(this->input_Id, other->input_Id)) return F;
  if (art_Art_PortId__ne(this->manualActuatorInput_Id, other->manualActuatorInput_Id)) return F;
  if (art_Art_PortId__ne(this->output_Id, other->output_Id)) return F;
  return T;
}

B RTS_Actuation_Actuator_i_Initialization_Api__equiv(RTS_Actuation_Actuator_i_Initialization_Api this, RTS_Actuation_Actuator_i_Initialization_Api other) {
  if (art_Art_BridgeId__inequiv(this->id, other->id)) return F;
  if (art_Art_PortId__inequiv(this->input_Id, other->input_Id)) return F;
  if (art_Art_PortId__inequiv(this->manualActuatorInput_Id, other->manualActuatorInput_Id)) return F;
  if (art_Art_PortId__inequiv(this->output_Id, other->output_Id)) return F;
  return T;
}

B RTS_Actuation_Actuator_i_Initialization_Api__ne(RTS_Actuation_Actuator_i_Initialization_Api this, RTS_Actuation_Actuator_i_Initialization_Api other);
B RTS_Actuation_Actuator_i_Initialization_Api__inequiv(RTS_Actuation_Actuator_i_Initialization_Api this, RTS_Actuation_Actuator_i_Initialization_Api other);

void RTS_Actuation_Actuator_i_Initialization_Api_string_(STACK_FRAME String result, RTS_Actuation_Actuator_i_Initialization_Api this) {
  DeclNewStackFrame(caller, "Actuator_i_Api.scala", "RTS.Actuation.Actuator_i_Initialization_Api", "string", 0);
  String_string_(SF result, string("Actuator_i_Initialization_Api("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->input_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->manualActuatorInput_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->output_Id);
  String_string_(SF result, string(")"));
}

void RTS_Actuation_Actuator_i_Initialization_Api_cprint(RTS_Actuation_Actuator_i_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Actuator_i_Initialization_Api("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->input_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->manualActuatorInput_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->output_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Actuation_Actuator_i_Initialization_Api__is(STACK_FRAME void* this);
RTS_Actuation_Actuator_i_Initialization_Api RTS_Actuation_Actuator_i_Initialization_Api__as(STACK_FRAME void *this);

void RTS_Actuation_Actuator_i_Initialization_Api_apply(STACK_FRAME RTS_Actuation_Actuator_i_Initialization_Api this, art_Art_BridgeId id, art_Art_PortId input_Id, art_Art_PortId manualActuatorInput_Id, art_Art_PortId output_Id) {
  DeclNewStackFrame(caller, "Actuator_i_Api.scala", "RTS.Actuation.Actuator_i_Initialization_Api", "apply", 0);
  this->id = id;
  this->input_Id = input_Id;
  this->manualActuatorInput_Id = manualActuatorInput_Id;
  this->output_Id = output_Id;
}