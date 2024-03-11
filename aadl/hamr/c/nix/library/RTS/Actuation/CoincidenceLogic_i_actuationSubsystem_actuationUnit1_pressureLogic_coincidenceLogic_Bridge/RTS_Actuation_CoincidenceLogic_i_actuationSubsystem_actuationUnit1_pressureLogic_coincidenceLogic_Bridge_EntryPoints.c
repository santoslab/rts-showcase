#include <all.h>

// RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge.EntryPoints

B RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints__eq(RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints this, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints other) {
  if (art_Art_BridgeId__ne(this->CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_BridgeId, other->CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_BridgeId)) return F;
  if (art_Art_PortId__ne(this->channel1_Id, other->channel1_Id)) return F;
  if (art_Art_PortId__ne(this->channel2_Id, other->channel2_Id)) return F;
  if (art_Art_PortId__ne(this->channel3_Id, other->channel3_Id)) return F;
  if (art_Art_PortId__ne(this->channel4_Id, other->channel4_Id)) return F;
  if (art_Art_PortId__ne(this->actuate_Id, other->actuate_Id)) return F;
  if (Option_0247A1__ne((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (RTS_Actuation_CoincidenceLogic_i_Initialization_Api__ne((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &this->initialization_api, (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &other->initialization_api)) return F;
  if (RTS_Actuation_CoincidenceLogic_i_Operational_Api__ne((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &this->operational_api, (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &other->operational_api)) return F;
  return T;
}

B RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints__equiv(RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints this, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints other) {
  if (IS_D10119__inequiv((IS_D10119) &this->dataInPortIds, (IS_D10119) &other->dataInPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->eventInPortIds, (IS_D10119) &other->eventInPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->dataOutPortIds, (IS_D10119) &other->dataOutPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->eventOutPortIds, (IS_D10119) &other->eventOutPortIds)) return F;
  if (art_Art_BridgeId__inequiv(this->CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_BridgeId, other->CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_BridgeId)) return F;
  if (art_Art_PortId__inequiv(this->channel1_Id, other->channel1_Id)) return F;
  if (art_Art_PortId__inequiv(this->channel2_Id, other->channel2_Id)) return F;
  if (art_Art_PortId__inequiv(this->channel3_Id, other->channel3_Id)) return F;
  if (art_Art_PortId__inequiv(this->channel4_Id, other->channel4_Id)) return F;
  if (art_Art_PortId__inequiv(this->actuate_Id, other->actuate_Id)) return F;
  if (Option_0247A1__inequiv((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (RTS_Actuation_CoincidenceLogic_i_Initialization_Api__inequiv((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &this->initialization_api, (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &other->initialization_api)) return F;
  if (RTS_Actuation_CoincidenceLogic_i_Operational_Api__inequiv((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &this->operational_api, (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &other->operational_api)) return F;
  return T;
}

B RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints__ne(RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints this, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints other);
B RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints__inequiv(RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints this, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints other);

void RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_string_(STACK_FRAME String result, RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge.scala", "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_BridgeId);
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
  String_string_(SF result, sep);
  Option_0247A1_string_(SF result, (Option_0247A1) &this->dispatchTriggers);
  String_string_(SF result, sep);
  RTS_Actuation_CoincidenceLogic_i_Initialization_Api_string_(SF result, (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  RTS_Actuation_CoincidenceLogic_i_Operational_Api_string_(SF result, (RTS_Actuation_CoincidenceLogic_i_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_cprint(RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_BridgeId, isOut);
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
  String_cprint(sep, isOut);
  Option_0247A1_cprint((Option_0247A1) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  RTS_Actuation_CoincidenceLogic_i_Initialization_Api_cprint((RTS_Actuation_CoincidenceLogic_i_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  RTS_Actuation_CoincidenceLogic_i_Operational_Api_cprint((RTS_Actuation_CoincidenceLogic_i_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints__is(STACK_FRAME void* this);
RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints__as(STACK_FRAME void *this);

void RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_apply(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints this, art_Art_BridgeId CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_BridgeId, art_Art_PortId channel1_Id, art_Art_PortId channel2_Id, art_Art_PortId channel3_Id, art_Art_PortId channel4_Id, art_Art_PortId actuate_Id, Option_0247A1 dispatchTriggers, RTS_Actuation_CoincidenceLogic_i_Initialization_Api initialization_api, RTS_Actuation_CoincidenceLogic_i_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge.scala", "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge.EntryPoints", "apply", 0);
  this->CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_BridgeId = CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_BridgeId;
  this->channel1_Id = channel1_Id;
  this->channel2_Id = channel2_Id;
  this->channel3_Id = channel3_Id;
  this->channel4_Id = channel4_Id;
  this->actuate_Id = actuate_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_0247A1));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct RTS_Actuation_CoincidenceLogic_i_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct RTS_Actuation_CoincidenceLogic_i_Operational_Api));
  {
    sfUpdateLoc(96);
    STATIC_ASSERT(4 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_0);
    t_0.size = (int8_t) 4;
    IS_D10119_up(&t_0, 0, (art_Art_PortId) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_channel1_Id_(this));
    IS_D10119_up(&t_0, 1, (art_Art_PortId) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_channel2_Id_(this));
    IS_D10119_up(&t_0, 2, (art_Art_PortId) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_channel3_Id_(this));
    IS_D10119_up(&t_0, 3, (art_Art_PortId) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_channel4_Id_(this));
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(101);
    STATIC_ASSERT(0 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_1);
    t_1.size = (int8_t) 0;
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(103);
    STATIC_ASSERT(1 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_2);
    t_2.size = (int8_t) 1;
    IS_D10119_up(&t_2, 0, (art_Art_PortId) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_actuate_Id_(this));
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(105);
    STATIC_ASSERT(0 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_3);
    t_3.size = (int8_t) 0;
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_D10119));
  }
}

Unit RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_initialise_(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge.scala", "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(109);
  {
    RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_initialise(SF (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(110);
  {
    art_Art_sendOutput(SF (IS_D10119) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_eventOutPortIds_(this), (IS_D10119) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_compute_(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge.scala", "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(114);
  {
    art_Art_receiveInput(SF (IS_D10119) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_eventInPortIds_(this), (IS_D10119) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(117);
  {
    RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_timeTriggered(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_operational_api_(this));
  }

  sfUpdateLoc(119);
  {
    art_Art_sendOutput(SF (IS_D10119) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_eventOutPortIds_(this), (IS_D10119) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_finalise_(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge.scala", "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(124);
  {
    RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_finalise(SF (RTS_Actuation_CoincidenceLogic_i_Operational_Api) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints_operational_api_(this));
  }
}