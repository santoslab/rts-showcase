#include <all.h>

B RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_initialized_ = F;

union Option_5CC377 _RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api;
union Option_A836EB _RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api;

void RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_init(STACK_FRAME_ONLY) {
  if (RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_initialized_) return;
  RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_initialized_ = T;
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.scala", "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge", "<init>", 0);
  RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_init_c_initialization_api(SF_LAST);
  RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_init_c_operational_api(SF_LAST);
}

Option_5CC377 RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api(STACK_FRAME_ONLY) {
  RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_init(CALLER_LAST);
  return (Option_5CC377) &_RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api;
}

void RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api_a(STACK_FRAME Option_5CC377 p_c_initialization_api) {
  RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_init(CALLER_LAST);
  Type_assign(&_RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api, p_c_initialization_api, sizeof(union Option_5CC377));
}

Option_A836EB RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api(STACK_FRAME_ONLY) {
  RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_init(CALLER_LAST);
  return (Option_A836EB) &_RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api;
}

void RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api_a(STACK_FRAME Option_A836EB p_c_operational_api) {
  RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_init(CALLER_LAST);
  Type_assign(&_RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api, p_c_operational_api, sizeof(union Option_A836EB));
}

// RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge

B RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge__eq(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge this, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge other) {
  if (art_Art_BridgeId__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_0247A1__ne((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit1_temperatureLogic_channel1, (art_Port_C0524D) &other->unit1_temperatureLogic_channel1)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit1_temperatureLogic_channel2, (art_Port_C0524D) &other->unit1_temperatureLogic_channel2)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit1_temperatureLogic_channel3, (art_Port_C0524D) &other->unit1_temperatureLogic_channel3)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit1_temperatureLogic_channel4, (art_Port_C0524D) &other->unit1_temperatureLogic_channel4)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit1_pressureLogic_channel1, (art_Port_C0524D) &other->unit1_pressureLogic_channel1)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit1_pressureLogic_channel2, (art_Port_C0524D) &other->unit1_pressureLogic_channel2)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit1_pressureLogic_channel3, (art_Port_C0524D) &other->unit1_pressureLogic_channel3)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit1_pressureLogic_channel4, (art_Port_C0524D) &other->unit1_pressureLogic_channel4)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit1_saturationLogic_channel1, (art_Port_C0524D) &other->unit1_saturationLogic_channel1)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit1_saturationLogic_channel2, (art_Port_C0524D) &other->unit1_saturationLogic_channel2)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit1_saturationLogic_channel3, (art_Port_C0524D) &other->unit1_saturationLogic_channel3)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit1_saturationLogic_channel4, (art_Port_C0524D) &other->unit1_saturationLogic_channel4)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit2_temperatureLogic_channel1, (art_Port_C0524D) &other->unit2_temperatureLogic_channel1)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit2_temperatureLogic_channel2, (art_Port_C0524D) &other->unit2_temperatureLogic_channel2)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit2_temperatureLogic_channel3, (art_Port_C0524D) &other->unit2_temperatureLogic_channel3)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit2_temperatureLogic_channel4, (art_Port_C0524D) &other->unit2_temperatureLogic_channel4)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit2_pressureLogic_channel1, (art_Port_C0524D) &other->unit2_pressureLogic_channel1)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit2_pressureLogic_channel2, (art_Port_C0524D) &other->unit2_pressureLogic_channel2)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit2_pressureLogic_channel3, (art_Port_C0524D) &other->unit2_pressureLogic_channel3)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit2_pressureLogic_channel4, (art_Port_C0524D) &other->unit2_pressureLogic_channel4)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit2_saturationLogic_channel1, (art_Port_C0524D) &other->unit2_saturationLogic_channel1)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit2_saturationLogic_channel2, (art_Port_C0524D) &other->unit2_saturationLogic_channel2)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit2_saturationLogic_channel3, (art_Port_C0524D) &other->unit2_saturationLogic_channel3)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->unit2_saturationLogic_channel4, (art_Port_C0524D) &other->unit2_saturationLogic_channel4)) return F;
  return T;
}

B RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge__equiv(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge this, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge other) {
  if (art_Bridge_Ports__inequiv((art_Bridge_Ports) &this->ports, (art_Bridge_Ports) &other->ports)) return F;
  if (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api__inequiv((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &this->initialization_api, (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &other->initialization_api)) return F;
  if (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api__inequiv((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &this->operational_api, (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &other->operational_api)) return F;
  if (art_Bridge_EntryPoints__inequiv((art_Bridge_EntryPoints) &this->entryPoints, (art_Bridge_EntryPoints) &other->entryPoints)) return F;
  if (art_Art_BridgeId__inequiv(this->id, other->id)) return F;
  if (String__inequiv((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__inequiv((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_0247A1__inequiv((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit1_temperatureLogic_channel1, (art_Port_C0524D) &other->unit1_temperatureLogic_channel1)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit1_temperatureLogic_channel2, (art_Port_C0524D) &other->unit1_temperatureLogic_channel2)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit1_temperatureLogic_channel3, (art_Port_C0524D) &other->unit1_temperatureLogic_channel3)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit1_temperatureLogic_channel4, (art_Port_C0524D) &other->unit1_temperatureLogic_channel4)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit1_pressureLogic_channel1, (art_Port_C0524D) &other->unit1_pressureLogic_channel1)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit1_pressureLogic_channel2, (art_Port_C0524D) &other->unit1_pressureLogic_channel2)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit1_pressureLogic_channel3, (art_Port_C0524D) &other->unit1_pressureLogic_channel3)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit1_pressureLogic_channel4, (art_Port_C0524D) &other->unit1_pressureLogic_channel4)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit1_saturationLogic_channel1, (art_Port_C0524D) &other->unit1_saturationLogic_channel1)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit1_saturationLogic_channel2, (art_Port_C0524D) &other->unit1_saturationLogic_channel2)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit1_saturationLogic_channel3, (art_Port_C0524D) &other->unit1_saturationLogic_channel3)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit1_saturationLogic_channel4, (art_Port_C0524D) &other->unit1_saturationLogic_channel4)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit2_temperatureLogic_channel1, (art_Port_C0524D) &other->unit2_temperatureLogic_channel1)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit2_temperatureLogic_channel2, (art_Port_C0524D) &other->unit2_temperatureLogic_channel2)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit2_temperatureLogic_channel3, (art_Port_C0524D) &other->unit2_temperatureLogic_channel3)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit2_temperatureLogic_channel4, (art_Port_C0524D) &other->unit2_temperatureLogic_channel4)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit2_pressureLogic_channel1, (art_Port_C0524D) &other->unit2_pressureLogic_channel1)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit2_pressureLogic_channel2, (art_Port_C0524D) &other->unit2_pressureLogic_channel2)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit2_pressureLogic_channel3, (art_Port_C0524D) &other->unit2_pressureLogic_channel3)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit2_pressureLogic_channel4, (art_Port_C0524D) &other->unit2_pressureLogic_channel4)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit2_saturationLogic_channel1, (art_Port_C0524D) &other->unit2_saturationLogic_channel1)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit2_saturationLogic_channel2, (art_Port_C0524D) &other->unit2_saturationLogic_channel2)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit2_saturationLogic_channel3, (art_Port_C0524D) &other->unit2_saturationLogic_channel3)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->unit2_saturationLogic_channel4, (art_Port_C0524D) &other->unit2_saturationLogic_channel4)) return F;
  return T;
}

B RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge__ne(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge this, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge other);
B RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge__inequiv(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge this, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge other);

void RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_string_(STACK_FRAME String result, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge this) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.scala", "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge", "string", 0);
  String_string_(SF result, string("InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  Option_0247A1_string_(SF result, (Option_0247A1) &this->dispatchTriggers);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit1_temperatureLogic_channel1);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit1_temperatureLogic_channel2);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit1_temperatureLogic_channel3);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit1_temperatureLogic_channel4);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit1_pressureLogic_channel1);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit1_pressureLogic_channel2);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit1_pressureLogic_channel3);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit1_pressureLogic_channel4);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit1_saturationLogic_channel1);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit1_saturationLogic_channel2);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit1_saturationLogic_channel3);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit1_saturationLogic_channel4);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit2_temperatureLogic_channel1);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit2_temperatureLogic_channel2);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit2_temperatureLogic_channel3);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit2_temperatureLogic_channel4);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit2_pressureLogic_channel1);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit2_pressureLogic_channel2);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit2_pressureLogic_channel3);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit2_pressureLogic_channel4);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit2_saturationLogic_channel1);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit2_saturationLogic_channel2);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit2_saturationLogic_channel3);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->unit2_saturationLogic_channel4);
  String_string_(SF result, string(")"));
}

void RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_cprint(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  Option_0247A1_cprint((Option_0247A1) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit1_temperatureLogic_channel1, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit1_temperatureLogic_channel2, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit1_temperatureLogic_channel3, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit1_temperatureLogic_channel4, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit1_pressureLogic_channel1, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit1_pressureLogic_channel2, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit1_pressureLogic_channel3, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit1_pressureLogic_channel4, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit1_saturationLogic_channel1, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit1_saturationLogic_channel2, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit1_saturationLogic_channel3, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit1_saturationLogic_channel4, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit2_temperatureLogic_channel1, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit2_temperatureLogic_channel2, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit2_temperatureLogic_channel3, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit2_temperatureLogic_channel4, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit2_pressureLogic_channel1, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit2_pressureLogic_channel2, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit2_pressureLogic_channel3, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit2_pressureLogic_channel4, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit2_saturationLogic_channel1, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit2_saturationLogic_channel2, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit2_saturationLogic_channel3, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->unit2_saturationLogic_channel4, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge__is(STACK_FRAME void* this);
RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge__as(STACK_FRAME void *this);

void RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_apply(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge this, art_Art_BridgeId id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_0247A1 dispatchTriggers, art_Port_C0524D unit1_temperatureLogic_channel1, art_Port_C0524D unit1_temperatureLogic_channel2, art_Port_C0524D unit1_temperatureLogic_channel3, art_Port_C0524D unit1_temperatureLogic_channel4, art_Port_C0524D unit1_pressureLogic_channel1, art_Port_C0524D unit1_pressureLogic_channel2, art_Port_C0524D unit1_pressureLogic_channel3, art_Port_C0524D unit1_pressureLogic_channel4, art_Port_C0524D unit1_saturationLogic_channel1, art_Port_C0524D unit1_saturationLogic_channel2, art_Port_C0524D unit1_saturationLogic_channel3, art_Port_C0524D unit1_saturationLogic_channel4, art_Port_C0524D unit2_temperatureLogic_channel1, art_Port_C0524D unit2_temperatureLogic_channel2, art_Port_C0524D unit2_temperatureLogic_channel3, art_Port_C0524D unit2_temperatureLogic_channel4, art_Port_C0524D unit2_pressureLogic_channel1, art_Port_C0524D unit2_pressureLogic_channel2, art_Port_C0524D unit2_pressureLogic_channel3, art_Port_C0524D unit2_pressureLogic_channel4, art_Port_C0524D unit2_saturationLogic_channel1, art_Port_C0524D unit2_saturationLogic_channel2, art_Port_C0524D unit2_saturationLogic_channel3, art_Port_C0524D unit2_saturationLogic_channel4) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.scala", "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_0247A1));
  Type_assign(&this->unit1_temperatureLogic_channel1, unit1_temperatureLogic_channel1, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit1_temperatureLogic_channel2, unit1_temperatureLogic_channel2, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit1_temperatureLogic_channel3, unit1_temperatureLogic_channel3, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit1_temperatureLogic_channel4, unit1_temperatureLogic_channel4, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit1_pressureLogic_channel1, unit1_pressureLogic_channel1, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit1_pressureLogic_channel2, unit1_pressureLogic_channel2, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit1_pressureLogic_channel3, unit1_pressureLogic_channel3, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit1_pressureLogic_channel4, unit1_pressureLogic_channel4, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit1_saturationLogic_channel1, unit1_saturationLogic_channel1, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit1_saturationLogic_channel2, unit1_saturationLogic_channel2, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit1_saturationLogic_channel3, unit1_saturationLogic_channel3, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit1_saturationLogic_channel4, unit1_saturationLogic_channel4, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit2_temperatureLogic_channel1, unit2_temperatureLogic_channel1, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit2_temperatureLogic_channel2, unit2_temperatureLogic_channel2, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit2_temperatureLogic_channel3, unit2_temperatureLogic_channel3, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit2_temperatureLogic_channel4, unit2_temperatureLogic_channel4, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit2_pressureLogic_channel1, unit2_pressureLogic_channel1, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit2_pressureLogic_channel2, unit2_pressureLogic_channel2, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit2_pressureLogic_channel3, unit2_pressureLogic_channel3, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit2_pressureLogic_channel4, unit2_pressureLogic_channel4, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit2_saturationLogic_channel1, unit2_saturationLogic_channel1, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit2_saturationLogic_channel2, unit2_saturationLogic_channel2, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit2_saturationLogic_channel3, unit2_saturationLogic_channel3, sizeof(struct art_Port_C0524D));
  Type_assign(&this->unit2_saturationLogic_channel4, unit2_saturationLogic_channel4, sizeof(struct art_Port_C0524D));
  {
    sfUpdateLoc(44);
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 0;
    STATIC_ASSERT(24 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 24;
    IS_820232_up(&t_2, 0, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel1_(this));
    IS_820232_up(&t_2, 1, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel2_(this));
    IS_820232_up(&t_2, 2, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel3_(this));
    IS_820232_up(&t_2, 3, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel4_(this));
    IS_820232_up(&t_2, 4, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel1_(this));
    IS_820232_up(&t_2, 5, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel2_(this));
    IS_820232_up(&t_2, 6, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel3_(this));
    IS_820232_up(&t_2, 7, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel4_(this));
    IS_820232_up(&t_2, 8, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel1_(this));
    IS_820232_up(&t_2, 9, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel2_(this));
    IS_820232_up(&t_2, 10, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel3_(this));
    IS_820232_up(&t_2, 11, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel4_(this));
    IS_820232_up(&t_2, 12, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel1_(this));
    IS_820232_up(&t_2, 13, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel2_(this));
    IS_820232_up(&t_2, 14, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel3_(this));
    IS_820232_up(&t_2, 15, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel4_(this));
    IS_820232_up(&t_2, 16, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel1_(this));
    IS_820232_up(&t_2, 17, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel2_(this));
    IS_820232_up(&t_2, 18, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel3_(this));
    IS_820232_up(&t_2, 19, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel4_(this));
    IS_820232_up(&t_2, 20, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel1_(this));
    IS_820232_up(&t_2, 21, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel2_(this));
    IS_820232_up(&t_2, 22, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel3_(this));
    IS_820232_up(&t_2, 23, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel4_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 0;
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 0;
    DeclNewart_Bridge_Ports(t_0);
    art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4));
    Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  }
  {
    sfUpdateLoc(77);
    {

      sfUpdateLoc(78);
      RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api api;
      DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api(t_5);
      RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_apply(SF &t_5, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_id_(this), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel4_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel4_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel4_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel4_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel4_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel4_(this)));
      api = (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) (&t_5);

      sfUpdateLoc(105);
      {
        DeclNewSome_B05425(t_6);
        Some_B05425_apply(SF &t_6, (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) api);
        RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api_a(SF (Option_5CC377) (&t_6));
      }
      Type_assign(&this->initialization_api, api, sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api));
    }
  }
  {
    sfUpdateLoc(109);
    {

      sfUpdateLoc(110);
      RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api api;
      DeclNewRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api(t_7);
      RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_apply(SF &t_7, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_id_(this), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel4_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel4_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel4_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel4_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel4_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel4_(this)));
      api = (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) (&t_7);

      sfUpdateLoc(137);
      {
        DeclNewSome_51E221(t_8);
        Some_51E221_apply(SF &t_8, (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) api);
        RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api_a(SF (Option_A836EB) (&t_8));
      }
      Type_assign(&this->operational_api, api, sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api));
    }
  }
  {
    sfUpdateLoc(142);
    DeclNewRTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints(t_9);
    RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints_apply(SF &t_9, RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_id_(this), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel4_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel4_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel4_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel4_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel4_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel1_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel2_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel3_(this)), art_Port_C0524D_id_(RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel4_(this)), (Option_0247A1) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_dispatchTriggers_(this), (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_initialization_api_(this), (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_operational_api_(this));
    Type_assign(&this->entryPoints, (&t_9), sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints));
  }
}

void RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_init_c_initialization_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(178);
  DeclNewNone_8D6171(t_0);
  None_8D6171_apply(SF &t_0);
  Type_assign(&_RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_initialization_api, (&t_0), sizeof(struct None_8D6171));
};

void RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_init_c_operational_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(179);
  DeclNewNone_174952(t_1);
  None_174952_apply(SF &t_1);
  Type_assign(&_RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_c_operational_api, (&t_1), sizeof(struct None_174952));
};