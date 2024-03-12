#include <all.h>

// RTS.EventControl.EventControlMockThread_i_Operational_Api

B RTS_EventControl_EventControlMockThread_i_Operational_Api__eq(RTS_EventControl_EventControlMockThread_i_Operational_Api this, RTS_EventControl_EventControlMockThread_i_Operational_Api other) {
  if (art_Art_BridgeId__ne(this->id, other->id)) return F;
  if (art_Art_PortId__ne(this->manualActuatorInput1_Id, other->manualActuatorInput1_Id)) return F;
  if (art_Art_PortId__ne(this->manualActuatorInput2_Id, other->manualActuatorInput2_Id)) return F;
  return T;
}

B RTS_EventControl_EventControlMockThread_i_Operational_Api__equiv(RTS_EventControl_EventControlMockThread_i_Operational_Api this, RTS_EventControl_EventControlMockThread_i_Operational_Api other) {
  if (art_Art_BridgeId__inequiv(this->id, other->id)) return F;
  if (art_Art_PortId__inequiv(this->manualActuatorInput1_Id, other->manualActuatorInput1_Id)) return F;
  if (art_Art_PortId__inequiv(this->manualActuatorInput2_Id, other->manualActuatorInput2_Id)) return F;
  return T;
}

B RTS_EventControl_EventControlMockThread_i_Operational_Api__ne(RTS_EventControl_EventControlMockThread_i_Operational_Api this, RTS_EventControl_EventControlMockThread_i_Operational_Api other);
B RTS_EventControl_EventControlMockThread_i_Operational_Api__inequiv(RTS_EventControl_EventControlMockThread_i_Operational_Api this, RTS_EventControl_EventControlMockThread_i_Operational_Api other);

void RTS_EventControl_EventControlMockThread_i_Operational_Api_string_(STACK_FRAME String result, RTS_EventControl_EventControlMockThread_i_Operational_Api this) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_Api.scala", "RTS.EventControl.EventControlMockThread_i_Operational_Api", "string", 0);
  String_string_(SF result, string("EventControlMockThread_i_Operational_Api("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->manualActuatorInput1_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->manualActuatorInput2_Id);
  String_string_(SF result, string(")"));
}

void RTS_EventControl_EventControlMockThread_i_Operational_Api_cprint(RTS_EventControl_EventControlMockThread_i_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("EventControlMockThread_i_Operational_Api("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->manualActuatorInput1_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->manualActuatorInput2_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_EventControl_EventControlMockThread_i_Operational_Api__is(STACK_FRAME void* this);
RTS_EventControl_EventControlMockThread_i_Operational_Api RTS_EventControl_EventControlMockThread_i_Operational_Api__as(STACK_FRAME void *this);

void RTS_EventControl_EventControlMockThread_i_Operational_Api_apply(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Operational_Api this, art_Art_BridgeId id, art_Art_PortId manualActuatorInput1_Id, art_Art_PortId manualActuatorInput2_Id) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_Api.scala", "RTS.EventControl.EventControlMockThread_i_Operational_Api", "apply", 0);
  this->id = id;
  this->manualActuatorInput1_Id = manualActuatorInput1_Id;
  this->manualActuatorInput2_Id = manualActuatorInput2_Id;
}