#include <all.h>

// RTS.Actuation.CoincidenceLogic_i_Initialization_Api

B RTS_Actuation_CoincidenceLogic_i_Initialization_Api__eq(RTS_Actuation_CoincidenceLogic_i_Initialization_Api this, RTS_Actuation_CoincidenceLogic_i_Initialization_Api other) {
  if (art_Art_BridgeId__ne(this->id, other->id)) return F;
  if (art_Art_PortId__ne(this->channel1_Id, other->channel1_Id)) return F;
  if (art_Art_PortId__ne(this->channel2_Id, other->channel2_Id)) return F;
  if (art_Art_PortId__ne(this->channel3_Id, other->channel3_Id)) return F;
  if (art_Art_PortId__ne(this->channel4_Id, other->channel4_Id)) return F;
  if (art_Art_PortId__ne(this->actuate_Id, other->actuate_Id)) return F;
  return T;
}

B RTS_Actuation_CoincidenceLogic_i_Initialization_Api__equiv(RTS_Actuation_CoincidenceLogic_i_Initialization_Api this, RTS_Actuation_CoincidenceLogic_i_Initialization_Api other) {
  if (art_Art_BridgeId__inequiv(this->id, other->id)) return F;
  if (art_Art_PortId__inequiv(this->channel1_Id, other->channel1_Id)) return F;
  if (art_Art_PortId__inequiv(this->channel2_Id, other->channel2_Id)) return F;
  if (art_Art_PortId__inequiv(this->channel3_Id, other->channel3_Id)) return F;
  if (art_Art_PortId__inequiv(this->channel4_Id, other->channel4_Id)) return F;
  if (art_Art_PortId__inequiv(this->actuate_Id, other->actuate_Id)) return F;
  return T;
}

B RTS_Actuation_CoincidenceLogic_i_Initialization_Api__ne(RTS_Actuation_CoincidenceLogic_i_Initialization_Api this, RTS_Actuation_CoincidenceLogic_i_Initialization_Api other);
B RTS_Actuation_CoincidenceLogic_i_Initialization_Api__inequiv(RTS_Actuation_CoincidenceLogic_i_Initialization_Api this, RTS_Actuation_CoincidenceLogic_i_Initialization_Api other);

void RTS_Actuation_CoincidenceLogic_i_Initialization_Api_string_(STACK_FRAME String result, RTS_Actuation_CoincidenceLogic_i_Initialization_Api this) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_Api.scala", "RTS.Actuation.CoincidenceLogic_i_Initialization_Api", "string", 0);
  String_string_(SF result, string("CoincidenceLogic_i_Initialization_Api("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->channel1_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->channel2_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->channel3_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->channel4_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->actuate_Id);
  String_string_(SF result, string(")"));
}

void RTS_Actuation_CoincidenceLogic_i_Initialization_Api_cprint(RTS_Actuation_CoincidenceLogic_i_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("CoincidenceLogic_i_Initialization_Api("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->channel1_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->channel2_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->channel3_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->channel4_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->actuate_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Actuation_CoincidenceLogic_i_Initialization_Api__is(STACK_FRAME void* this);
RTS_Actuation_CoincidenceLogic_i_Initialization_Api RTS_Actuation_CoincidenceLogic_i_Initialization_Api__as(STACK_FRAME void *this);

void RTS_Actuation_CoincidenceLogic_i_Initialization_Api_apply(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Initialization_Api this, art_Art_BridgeId id, art_Art_PortId channel1_Id, art_Art_PortId channel2_Id, art_Art_PortId channel3_Id, art_Art_PortId channel4_Id, art_Art_PortId actuate_Id) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_Api.scala", "RTS.Actuation.CoincidenceLogic_i_Initialization_Api", "apply", 0);
  this->id = id;
  this->channel1_Id = channel1_Id;
  this->channel2_Id = channel2_Id;
  this->channel3_Id = channel3_Id;
  this->channel4_Id = channel4_Id;
  this->actuate_Id = actuate_Id;
}