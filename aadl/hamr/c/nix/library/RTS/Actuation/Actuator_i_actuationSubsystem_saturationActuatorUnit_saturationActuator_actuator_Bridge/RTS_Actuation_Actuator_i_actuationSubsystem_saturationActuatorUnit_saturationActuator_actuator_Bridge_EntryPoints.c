#include <all.h>

// RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.EntryPoints

B RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints__eq(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints this, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints other) {
  if (art_Art_BridgeId__ne(this->Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_BridgeId, other->Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_BridgeId)) return F;
  if (art_Art_PortId__ne(this->input_Id, other->input_Id)) return F;
  if (art_Art_PortId__ne(this->manualActuatorInput_Id, other->manualActuatorInput_Id)) return F;
  if (art_Art_PortId__ne(this->output_Id, other->output_Id)) return F;
  if (Option_0247A1__ne((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (RTS_Actuation_Actuator_i_Initialization_Api__ne((RTS_Actuation_Actuator_i_Initialization_Api) &this->initialization_api, (RTS_Actuation_Actuator_i_Initialization_Api) &other->initialization_api)) return F;
  if (RTS_Actuation_Actuator_i_Operational_Api__ne((RTS_Actuation_Actuator_i_Operational_Api) &this->operational_api, (RTS_Actuation_Actuator_i_Operational_Api) &other->operational_api)) return F;
  return T;
}

B RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints__equiv(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints this, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints other) {
  if (IS_D10119__inequiv((IS_D10119) &this->dataInPortIds, (IS_D10119) &other->dataInPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->eventInPortIds, (IS_D10119) &other->eventInPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->dataOutPortIds, (IS_D10119) &other->dataOutPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->eventOutPortIds, (IS_D10119) &other->eventOutPortIds)) return F;
  if (art_Art_BridgeId__inequiv(this->Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_BridgeId, other->Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_BridgeId)) return F;
  if (art_Art_PortId__inequiv(this->input_Id, other->input_Id)) return F;
  if (art_Art_PortId__inequiv(this->manualActuatorInput_Id, other->manualActuatorInput_Id)) return F;
  if (art_Art_PortId__inequiv(this->output_Id, other->output_Id)) return F;
  if (Option_0247A1__inequiv((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (RTS_Actuation_Actuator_i_Initialization_Api__inequiv((RTS_Actuation_Actuator_i_Initialization_Api) &this->initialization_api, (RTS_Actuation_Actuator_i_Initialization_Api) &other->initialization_api)) return F;
  if (RTS_Actuation_Actuator_i_Operational_Api__inequiv((RTS_Actuation_Actuator_i_Operational_Api) &this->operational_api, (RTS_Actuation_Actuator_i_Operational_Api) &other->operational_api)) return F;
  return T;
}

B RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints__ne(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints this, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints other);
B RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints__inequiv(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints this, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints other);

void RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_string_(STACK_FRAME String result, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.scala", "RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_BridgeId);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->input_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->manualActuatorInput_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->output_Id);
  String_string_(SF result, sep);
  Option_0247A1_string_(SF result, (Option_0247A1) &this->dispatchTriggers);
  String_string_(SF result, sep);
  RTS_Actuation_Actuator_i_Initialization_Api_string_(SF result, (RTS_Actuation_Actuator_i_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  RTS_Actuation_Actuator_i_Operational_Api_string_(SF result, (RTS_Actuation_Actuator_i_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_cprint(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_BridgeId, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->input_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->manualActuatorInput_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->output_Id, isOut);
  String_cprint(sep, isOut);
  Option_0247A1_cprint((Option_0247A1) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  RTS_Actuation_Actuator_i_Initialization_Api_cprint((RTS_Actuation_Actuator_i_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  RTS_Actuation_Actuator_i_Operational_Api_cprint((RTS_Actuation_Actuator_i_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints__is(STACK_FRAME void* this);
RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints__as(STACK_FRAME void *this);

void RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_apply(STACK_FRAME RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints this, art_Art_BridgeId Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_BridgeId, art_Art_PortId input_Id, art_Art_PortId manualActuatorInput_Id, art_Art_PortId output_Id, Option_0247A1 dispatchTriggers, RTS_Actuation_Actuator_i_Initialization_Api initialization_api, RTS_Actuation_Actuator_i_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.scala", "RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.EntryPoints", "apply", 0);
  this->Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_BridgeId = Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_BridgeId;
  this->input_Id = input_Id;
  this->manualActuatorInput_Id = manualActuatorInput_Id;
  this->output_Id = output_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_0247A1));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct RTS_Actuation_Actuator_i_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct RTS_Actuation_Actuator_i_Operational_Api));
  {
    sfUpdateLoc(84);
    STATIC_ASSERT(2 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_0);
    t_0.size = (int8_t) 2;
    IS_D10119_up(&t_0, 0, (art_Art_PortId) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_input_Id_(this));
    IS_D10119_up(&t_0, 1, (art_Art_PortId) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_manualActuatorInput_Id_(this));
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(87);
    STATIC_ASSERT(0 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_1);
    t_1.size = (int8_t) 0;
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(89);
    STATIC_ASSERT(1 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_2);
    t_2.size = (int8_t) 1;
    IS_D10119_up(&t_2, 0, (art_Art_PortId) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_output_Id_(this));
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(91);
    STATIC_ASSERT(0 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_3);
    t_3.size = (int8_t) 0;
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_D10119));
  }
}

Unit RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_initialise_(STACK_FRAME RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.scala", "RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(95);
  {
    RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_initialise(SF (RTS_Actuation_Actuator_i_Initialization_Api) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(96);
  {
    art_Art_sendOutput(SF (IS_D10119) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_eventOutPortIds_(this), (IS_D10119) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_compute_(STACK_FRAME RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.scala", "RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(100);
  {
    art_Art_receiveInput(SF (IS_D10119) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_eventInPortIds_(this), (IS_D10119) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(103);
  {
    RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_timeTriggered(SF (RTS_Actuation_Actuator_i_Operational_Api) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_operational_api_(this));
  }

  sfUpdateLoc(105);
  {
    art_Art_sendOutput(SF (IS_D10119) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_eventOutPortIds_(this), (IS_D10119) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_finalise_(STACK_FRAME RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.scala", "RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(110);
  {
    RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_finalise(SF (RTS_Actuation_Actuator_i_Operational_Api) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_operational_api_(this));
  }
}