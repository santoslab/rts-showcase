#include <all.h>

// RTS.Actuators.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge.EntryPoints

B RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints__eq(RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints this, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints other) {
  if (art_Art_BridgeId__ne(this->ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_BridgeId, other->ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_BridgeId)) return F;
  if (art_Art_PortId__ne(this->tempPressureActuate_Id, other->tempPressureActuate_Id)) return F;
  if (art_Art_PortId__ne(this->saturationActuate_Id, other->saturationActuate_Id)) return F;
  if (Option_0247A1__ne((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api__ne((RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &this->initialization_api, (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &other->initialization_api)) return F;
  if (RTS_Actuators_ActuatorsMockThread_i_Operational_Api__ne((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &this->operational_api, (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &other->operational_api)) return F;
  return T;
}

B RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints__equiv(RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints this, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints other) {
  if (IS_D10119__inequiv((IS_D10119) &this->dataInPortIds, (IS_D10119) &other->dataInPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->eventInPortIds, (IS_D10119) &other->eventInPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->dataOutPortIds, (IS_D10119) &other->dataOutPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->eventOutPortIds, (IS_D10119) &other->eventOutPortIds)) return F;
  if (art_Art_BridgeId__inequiv(this->ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_BridgeId, other->ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_BridgeId)) return F;
  if (art_Art_PortId__inequiv(this->tempPressureActuate_Id, other->tempPressureActuate_Id)) return F;
  if (art_Art_PortId__inequiv(this->saturationActuate_Id, other->saturationActuate_Id)) return F;
  if (Option_0247A1__inequiv((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api__inequiv((RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &this->initialization_api, (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &other->initialization_api)) return F;
  if (RTS_Actuators_ActuatorsMockThread_i_Operational_Api__inequiv((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &this->operational_api, (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &other->operational_api)) return F;
  return T;
}

B RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints__ne(RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints this, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints other);
B RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints__inequiv(RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints this, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints other);

void RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_string_(STACK_FRAME String result, RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge.scala", "RTS.Actuators.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_BridgeId);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->tempPressureActuate_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->saturationActuate_Id);
  String_string_(SF result, sep);
  Option_0247A1_string_(SF result, (Option_0247A1) &this->dispatchTriggers);
  String_string_(SF result, sep);
  RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_string_(SF result, (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  RTS_Actuators_ActuatorsMockThread_i_Operational_Api_string_(SF result, (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_cprint(RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_BridgeId, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->tempPressureActuate_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->saturationActuate_Id, isOut);
  String_cprint(sep, isOut);
  Option_0247A1_cprint((Option_0247A1) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_cprint((RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  RTS_Actuators_ActuatorsMockThread_i_Operational_Api_cprint((RTS_Actuators_ActuatorsMockThread_i_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints__is(STACK_FRAME void* this);
RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints__as(STACK_FRAME void *this);

void RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_apply(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints this, art_Art_BridgeId ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_BridgeId, art_Art_PortId tempPressureActuate_Id, art_Art_PortId saturationActuate_Id, Option_0247A1 dispatchTriggers, RTS_Actuators_ActuatorsMockThread_i_Initialization_Api initialization_api, RTS_Actuators_ActuatorsMockThread_i_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge.scala", "RTS.Actuators.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge.EntryPoints", "apply", 0);
  this->ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_BridgeId = ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_BridgeId;
  this->tempPressureActuate_Id = tempPressureActuate_Id;
  this->saturationActuate_Id = saturationActuate_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_0247A1));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct RTS_Actuators_ActuatorsMockThread_i_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct RTS_Actuators_ActuatorsMockThread_i_Operational_Api));
  {
    sfUpdateLoc(79);
    STATIC_ASSERT(2 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_0);
    t_0.size = (int8_t) 2;
    IS_D10119_up(&t_0, 0, (art_Art_PortId) RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_tempPressureActuate_Id_(this));
    IS_D10119_up(&t_0, 1, (art_Art_PortId) RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_saturationActuate_Id_(this));
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(82);
    STATIC_ASSERT(0 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_1);
    t_1.size = (int8_t) 0;
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(84);
    STATIC_ASSERT(0 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_2);
    t_2.size = (int8_t) 0;
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(86);
    STATIC_ASSERT(0 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_3);
    t_3.size = (int8_t) 0;
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_D10119));
  }
}

Unit RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_initialise_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge.scala", "RTS.Actuators.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(90);
  {
    RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_initialise(SF (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(91);
  {
    art_Art_sendOutput(SF (IS_D10119) RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_eventOutPortIds_(this), (IS_D10119) RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_compute_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge.scala", "RTS.Actuators.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(95);
  {
    art_Art_receiveInput(SF (IS_D10119) RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_eventInPortIds_(this), (IS_D10119) RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(98);
  {
    RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_timeTriggered(SF (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_operational_api_(this));
  }

  sfUpdateLoc(100);
  {
    art_Art_sendOutput(SF (IS_D10119) RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_eventOutPortIds_(this), (IS_D10119) RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_finalise_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge.scala", "RTS.Actuators.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(105);
  {
    RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_finalise(SF (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints_operational_api_(this));
  }
}