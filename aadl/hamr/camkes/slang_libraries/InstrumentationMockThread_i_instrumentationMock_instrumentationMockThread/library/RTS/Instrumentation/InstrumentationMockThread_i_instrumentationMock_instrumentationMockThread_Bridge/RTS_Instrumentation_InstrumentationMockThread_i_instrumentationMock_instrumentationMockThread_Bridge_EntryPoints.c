#include <all.h>

// RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.EntryPoints

B RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints__eq(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints this, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints other) {
  if (art_Art_BridgeId__ne(this->InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_BridgeId, other->InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_BridgeId)) return F;
  if (art_Art_PortId__ne(this->unit1_temperatureLogic_channel1_Id, other->unit1_temperatureLogic_channel1_Id)) return F;
  if (art_Art_PortId__ne(this->unit1_temperatureLogic_channel2_Id, other->unit1_temperatureLogic_channel2_Id)) return F;
  if (art_Art_PortId__ne(this->unit1_temperatureLogic_channel3_Id, other->unit1_temperatureLogic_channel3_Id)) return F;
  if (art_Art_PortId__ne(this->unit1_temperatureLogic_channel4_Id, other->unit1_temperatureLogic_channel4_Id)) return F;
  if (art_Art_PortId__ne(this->unit1_pressureLogic_channel1_Id, other->unit1_pressureLogic_channel1_Id)) return F;
  if (art_Art_PortId__ne(this->unit1_pressureLogic_channel2_Id, other->unit1_pressureLogic_channel2_Id)) return F;
  if (art_Art_PortId__ne(this->unit1_pressureLogic_channel3_Id, other->unit1_pressureLogic_channel3_Id)) return F;
  if (art_Art_PortId__ne(this->unit1_pressureLogic_channel4_Id, other->unit1_pressureLogic_channel4_Id)) return F;
  if (art_Art_PortId__ne(this->unit1_saturationLogic_channel1_Id, other->unit1_saturationLogic_channel1_Id)) return F;
  if (art_Art_PortId__ne(this->unit1_saturationLogic_channel2_Id, other->unit1_saturationLogic_channel2_Id)) return F;
  if (art_Art_PortId__ne(this->unit1_saturationLogic_channel3_Id, other->unit1_saturationLogic_channel3_Id)) return F;
  if (art_Art_PortId__ne(this->unit1_saturationLogic_channel4_Id, other->unit1_saturationLogic_channel4_Id)) return F;
  if (art_Art_PortId__ne(this->unit2_temperatureLogic_channel1_Id, other->unit2_temperatureLogic_channel1_Id)) return F;
  if (art_Art_PortId__ne(this->unit2_temperatureLogic_channel2_Id, other->unit2_temperatureLogic_channel2_Id)) return F;
  if (art_Art_PortId__ne(this->unit2_temperatureLogic_channel3_Id, other->unit2_temperatureLogic_channel3_Id)) return F;
  if (art_Art_PortId__ne(this->unit2_temperatureLogic_channel4_Id, other->unit2_temperatureLogic_channel4_Id)) return F;
  if (art_Art_PortId__ne(this->unit2_pressureLogic_channel1_Id, other->unit2_pressureLogic_channel1_Id)) return F;
  if (art_Art_PortId__ne(this->unit2_pressureLogic_channel2_Id, other->unit2_pressureLogic_channel2_Id)) return F;
  if (art_Art_PortId__ne(this->unit2_pressureLogic_channel3_Id, other->unit2_pressureLogic_channel3_Id)) return F;
  if (art_Art_PortId__ne(this->unit2_pressureLogic_channel4_Id, other->unit2_pressureLogic_channel4_Id)) return F;
  if (art_Art_PortId__ne(this->unit2_saturationLogic_channel1_Id, other->unit2_saturationLogic_channel1_Id)) return F;
  if (art_Art_PortId__ne(this->unit2_saturationLogic_channel2_Id, other->unit2_saturationLogic_channel2_Id)) return F;
  if (art_Art_PortId__ne(this->unit2_saturationLogic_channel3_Id, other->unit2_saturationLogic_channel3_Id)) return F;
  if (art_Art_PortId__ne(this->unit2_saturationLogic_channel4_Id, other->unit2_saturationLogic_channel4_Id)) return F;
  if (Option_0247A1__ne((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api__ne((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &this->initialization_api, (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &other->initialization_api)) return F;
  if (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api__ne((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &this->operational_api, (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &other->operational_api)) return F;
  return T;
}

B RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints__equiv(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints this, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints other) {
  if (IS_D10119__inequiv((IS_D10119) &this->dataInPortIds, (IS_D10119) &other->dataInPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->eventInPortIds, (IS_D10119) &other->eventInPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->dataOutPortIds, (IS_D10119) &other->dataOutPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->eventOutPortIds, (IS_D10119) &other->eventOutPortIds)) return F;
  if (art_Art_BridgeId__inequiv(this->InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_BridgeId, other->InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_BridgeId)) return F;
  if (art_Art_PortId__inequiv(this->unit1_temperatureLogic_channel1_Id, other->unit1_temperatureLogic_channel1_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit1_temperatureLogic_channel2_Id, other->unit1_temperatureLogic_channel2_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit1_temperatureLogic_channel3_Id, other->unit1_temperatureLogic_channel3_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit1_temperatureLogic_channel4_Id, other->unit1_temperatureLogic_channel4_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit1_pressureLogic_channel1_Id, other->unit1_pressureLogic_channel1_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit1_pressureLogic_channel2_Id, other->unit1_pressureLogic_channel2_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit1_pressureLogic_channel3_Id, other->unit1_pressureLogic_channel3_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit1_pressureLogic_channel4_Id, other->unit1_pressureLogic_channel4_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit1_saturationLogic_channel1_Id, other->unit1_saturationLogic_channel1_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit1_saturationLogic_channel2_Id, other->unit1_saturationLogic_channel2_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit1_saturationLogic_channel3_Id, other->unit1_saturationLogic_channel3_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit1_saturationLogic_channel4_Id, other->unit1_saturationLogic_channel4_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit2_temperatureLogic_channel1_Id, other->unit2_temperatureLogic_channel1_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit2_temperatureLogic_channel2_Id, other->unit2_temperatureLogic_channel2_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit2_temperatureLogic_channel3_Id, other->unit2_temperatureLogic_channel3_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit2_temperatureLogic_channel4_Id, other->unit2_temperatureLogic_channel4_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit2_pressureLogic_channel1_Id, other->unit2_pressureLogic_channel1_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit2_pressureLogic_channel2_Id, other->unit2_pressureLogic_channel2_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit2_pressureLogic_channel3_Id, other->unit2_pressureLogic_channel3_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit2_pressureLogic_channel4_Id, other->unit2_pressureLogic_channel4_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit2_saturationLogic_channel1_Id, other->unit2_saturationLogic_channel1_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit2_saturationLogic_channel2_Id, other->unit2_saturationLogic_channel2_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit2_saturationLogic_channel3_Id, other->unit2_saturationLogic_channel3_Id)) return F;
  if (art_Art_PortId__inequiv(this->unit2_saturationLogic_channel4_Id, other->unit2_saturationLogic_channel4_Id)) return F;
  if (Option_0247A1__inequiv((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api__inequiv((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &this->initialization_api, (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &other->initialization_api)) return F;
  if (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api__inequiv((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &this->operational_api, (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &other->operational_api)) return F;
  return T;
}

B RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints__ne(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints this, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints other);
B RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints__inequiv(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints this, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints other);

void RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_string_(STACK_FRAME String result, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.scala", "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_BridgeId);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit1_temperatureLogic_channel1_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit1_temperatureLogic_channel2_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit1_temperatureLogic_channel3_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit1_temperatureLogic_channel4_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit1_pressureLogic_channel1_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit1_pressureLogic_channel2_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit1_pressureLogic_channel3_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit1_pressureLogic_channel4_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit1_saturationLogic_channel1_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit1_saturationLogic_channel2_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit1_saturationLogic_channel3_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit1_saturationLogic_channel4_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit2_temperatureLogic_channel1_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit2_temperatureLogic_channel2_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit2_temperatureLogic_channel3_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit2_temperatureLogic_channel4_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit2_pressureLogic_channel1_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit2_pressureLogic_channel2_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit2_pressureLogic_channel3_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit2_pressureLogic_channel4_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit2_saturationLogic_channel1_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit2_saturationLogic_channel2_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit2_saturationLogic_channel3_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->unit2_saturationLogic_channel4_Id);
  String_string_(SF result, sep);
  Option_0247A1_string_(SF result, (Option_0247A1) &this->dispatchTriggers);
  String_string_(SF result, sep);
  RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_string_(SF result, (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_string_(SF result, (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_cprint(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_BridgeId, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit1_temperatureLogic_channel1_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit1_temperatureLogic_channel2_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit1_temperatureLogic_channel3_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit1_temperatureLogic_channel4_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit1_pressureLogic_channel1_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit1_pressureLogic_channel2_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit1_pressureLogic_channel3_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit1_pressureLogic_channel4_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit1_saturationLogic_channel1_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit1_saturationLogic_channel2_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit1_saturationLogic_channel3_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit1_saturationLogic_channel4_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit2_temperatureLogic_channel1_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit2_temperatureLogic_channel2_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit2_temperatureLogic_channel3_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit2_temperatureLogic_channel4_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit2_pressureLogic_channel1_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit2_pressureLogic_channel2_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit2_pressureLogic_channel3_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit2_pressureLogic_channel4_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit2_saturationLogic_channel1_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit2_saturationLogic_channel2_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit2_saturationLogic_channel3_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->unit2_saturationLogic_channel4_Id, isOut);
  String_cprint(sep, isOut);
  Option_0247A1_cprint((Option_0247A1) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_cprint((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_cprint((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints__is(STACK_FRAME void* this);
RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints__as(STACK_FRAME void *this);

void RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_apply(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints this, art_Art_BridgeId InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_BridgeId, art_Art_PortId unit1_temperatureLogic_channel1_Id, art_Art_PortId unit1_temperatureLogic_channel2_Id, art_Art_PortId unit1_temperatureLogic_channel3_Id, art_Art_PortId unit1_temperatureLogic_channel4_Id, art_Art_PortId unit1_pressureLogic_channel1_Id, art_Art_PortId unit1_pressureLogic_channel2_Id, art_Art_PortId unit1_pressureLogic_channel3_Id, art_Art_PortId unit1_pressureLogic_channel4_Id, art_Art_PortId unit1_saturationLogic_channel1_Id, art_Art_PortId unit1_saturationLogic_channel2_Id, art_Art_PortId unit1_saturationLogic_channel3_Id, art_Art_PortId unit1_saturationLogic_channel4_Id, art_Art_PortId unit2_temperatureLogic_channel1_Id, art_Art_PortId unit2_temperatureLogic_channel2_Id, art_Art_PortId unit2_temperatureLogic_channel3_Id, art_Art_PortId unit2_temperatureLogic_channel4_Id, art_Art_PortId unit2_pressureLogic_channel1_Id, art_Art_PortId unit2_pressureLogic_channel2_Id, art_Art_PortId unit2_pressureLogic_channel3_Id, art_Art_PortId unit2_pressureLogic_channel4_Id, art_Art_PortId unit2_saturationLogic_channel1_Id, art_Art_PortId unit2_saturationLogic_channel2_Id, art_Art_PortId unit2_saturationLogic_channel3_Id, art_Art_PortId unit2_saturationLogic_channel4_Id, Option_0247A1 dispatchTriggers, RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api initialization_api, RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.scala", "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.EntryPoints", "apply", 0);
  this->InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_BridgeId = InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_BridgeId;
  this->unit1_temperatureLogic_channel1_Id = unit1_temperatureLogic_channel1_Id;
  this->unit1_temperatureLogic_channel2_Id = unit1_temperatureLogic_channel2_Id;
  this->unit1_temperatureLogic_channel3_Id = unit1_temperatureLogic_channel3_Id;
  this->unit1_temperatureLogic_channel4_Id = unit1_temperatureLogic_channel4_Id;
  this->unit1_pressureLogic_channel1_Id = unit1_pressureLogic_channel1_Id;
  this->unit1_pressureLogic_channel2_Id = unit1_pressureLogic_channel2_Id;
  this->unit1_pressureLogic_channel3_Id = unit1_pressureLogic_channel3_Id;
  this->unit1_pressureLogic_channel4_Id = unit1_pressureLogic_channel4_Id;
  this->unit1_saturationLogic_channel1_Id = unit1_saturationLogic_channel1_Id;
  this->unit1_saturationLogic_channel2_Id = unit1_saturationLogic_channel2_Id;
  this->unit1_saturationLogic_channel3_Id = unit1_saturationLogic_channel3_Id;
  this->unit1_saturationLogic_channel4_Id = unit1_saturationLogic_channel4_Id;
  this->unit2_temperatureLogic_channel1_Id = unit2_temperatureLogic_channel1_Id;
  this->unit2_temperatureLogic_channel2_Id = unit2_temperatureLogic_channel2_Id;
  this->unit2_temperatureLogic_channel3_Id = unit2_temperatureLogic_channel3_Id;
  this->unit2_temperatureLogic_channel4_Id = unit2_temperatureLogic_channel4_Id;
  this->unit2_pressureLogic_channel1_Id = unit2_pressureLogic_channel1_Id;
  this->unit2_pressureLogic_channel2_Id = unit2_pressureLogic_channel2_Id;
  this->unit2_pressureLogic_channel3_Id = unit2_pressureLogic_channel3_Id;
  this->unit2_pressureLogic_channel4_Id = unit2_pressureLogic_channel4_Id;
  this->unit2_saturationLogic_channel1_Id = unit2_saturationLogic_channel1_Id;
  this->unit2_saturationLogic_channel2_Id = unit2_saturationLogic_channel2_Id;
  this->unit2_saturationLogic_channel3_Id = unit2_saturationLogic_channel3_Id;
  this->unit2_saturationLogic_channel4_Id = unit2_saturationLogic_channel4_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_0247A1));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api));
  {
    sfUpdateLoc(211);
    STATIC_ASSERT(0 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(213);
    STATIC_ASSERT(0 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_1);
    t_1.size = (int8_t) 0;
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(215);
    STATIC_ASSERT(24 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_2);
    t_2.size = (int8_t) 24;
    IS_D10119_up(&t_2, 0, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit1_temperatureLogic_channel1_Id_(this));
    IS_D10119_up(&t_2, 1, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit1_temperatureLogic_channel2_Id_(this));
    IS_D10119_up(&t_2, 2, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit1_temperatureLogic_channel3_Id_(this));
    IS_D10119_up(&t_2, 3, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit1_temperatureLogic_channel4_Id_(this));
    IS_D10119_up(&t_2, 4, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit1_pressureLogic_channel1_Id_(this));
    IS_D10119_up(&t_2, 5, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit1_pressureLogic_channel2_Id_(this));
    IS_D10119_up(&t_2, 6, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit1_pressureLogic_channel3_Id_(this));
    IS_D10119_up(&t_2, 7, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit1_pressureLogic_channel4_Id_(this));
    IS_D10119_up(&t_2, 8, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit1_saturationLogic_channel1_Id_(this));
    IS_D10119_up(&t_2, 9, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit1_saturationLogic_channel2_Id_(this));
    IS_D10119_up(&t_2, 10, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit1_saturationLogic_channel3_Id_(this));
    IS_D10119_up(&t_2, 11, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit1_saturationLogic_channel4_Id_(this));
    IS_D10119_up(&t_2, 12, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit2_temperatureLogic_channel1_Id_(this));
    IS_D10119_up(&t_2, 13, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit2_temperatureLogic_channel2_Id_(this));
    IS_D10119_up(&t_2, 14, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit2_temperatureLogic_channel3_Id_(this));
    IS_D10119_up(&t_2, 15, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit2_temperatureLogic_channel4_Id_(this));
    IS_D10119_up(&t_2, 16, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit2_pressureLogic_channel1_Id_(this));
    IS_D10119_up(&t_2, 17, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit2_pressureLogic_channel2_Id_(this));
    IS_D10119_up(&t_2, 18, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit2_pressureLogic_channel3_Id_(this));
    IS_D10119_up(&t_2, 19, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit2_pressureLogic_channel4_Id_(this));
    IS_D10119_up(&t_2, 20, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit2_saturationLogic_channel1_Id_(this));
    IS_D10119_up(&t_2, 21, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit2_saturationLogic_channel2_Id_(this));
    IS_D10119_up(&t_2, 22, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit2_saturationLogic_channel3_Id_(this));
    IS_D10119_up(&t_2, 23, (art_Art_PortId) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_unit2_saturationLogic_channel4_Id_(this));
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(240);
    STATIC_ASSERT(0 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_3);
    t_3.size = (int8_t) 0;
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_D10119));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_initialise_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.scala", "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(244);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_initialise(SF (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(245);
  {
    art_Art_sendOutput(SF (IS_D10119) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_eventOutPortIds_(this), (IS_D10119) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_compute_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.scala", "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(249);
  {
    art_Art_receiveInput(SF (IS_D10119) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_eventInPortIds_(this), (IS_D10119) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(252);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_timeTriggered(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_operational_api_(this));
  }

  sfUpdateLoc(254);
  {
    art_Art_sendOutput(SF (IS_D10119) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_eventOutPortIds_(this), (IS_D10119) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_finalise_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.scala", "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(259);
  {
    RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_finalise(SF (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_operational_api_(this));
  }
}