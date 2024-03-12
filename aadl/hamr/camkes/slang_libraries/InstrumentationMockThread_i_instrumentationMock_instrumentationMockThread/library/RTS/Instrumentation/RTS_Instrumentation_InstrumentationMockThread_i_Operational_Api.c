#include <all.h>

// RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api

B RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api__eq(RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api other) {
  if (art_Art_BridgeId__ne(this->id, other->id)) return F;
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
  return T;
}

B RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api__equiv(RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api other) {
  if (art_Art_BridgeId__inequiv(this->id, other->id)) return F;
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
  return T;
}

B RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api__ne(RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api other);
B RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api__inequiv(RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api other);

void RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_string_(STACK_FRAME String result, RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api", "string", 0);
  String_string_(SF result, string("InstrumentationMockThread_i_Operational_Api("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->id);
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
  String_string_(SF result, string(")"));
}

void RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_cprint(RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("InstrumentationMockThread_i_Operational_Api("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->id, isOut);
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
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api__is(STACK_FRAME void* this);
RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api__as(STACK_FRAME void *this);

void RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_apply(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, art_Art_BridgeId id, art_Art_PortId unit1_temperatureLogic_channel1_Id, art_Art_PortId unit1_temperatureLogic_channel2_Id, art_Art_PortId unit1_temperatureLogic_channel3_Id, art_Art_PortId unit1_temperatureLogic_channel4_Id, art_Art_PortId unit1_pressureLogic_channel1_Id, art_Art_PortId unit1_pressureLogic_channel2_Id, art_Art_PortId unit1_pressureLogic_channel3_Id, art_Art_PortId unit1_pressureLogic_channel4_Id, art_Art_PortId unit1_saturationLogic_channel1_Id, art_Art_PortId unit1_saturationLogic_channel2_Id, art_Art_PortId unit1_saturationLogic_channel3_Id, art_Art_PortId unit1_saturationLogic_channel4_Id, art_Art_PortId unit2_temperatureLogic_channel1_Id, art_Art_PortId unit2_temperatureLogic_channel2_Id, art_Art_PortId unit2_temperatureLogic_channel3_Id, art_Art_PortId unit2_temperatureLogic_channel4_Id, art_Art_PortId unit2_pressureLogic_channel1_Id, art_Art_PortId unit2_pressureLogic_channel2_Id, art_Art_PortId unit2_pressureLogic_channel3_Id, art_Art_PortId unit2_pressureLogic_channel4_Id, art_Art_PortId unit2_saturationLogic_channel1_Id, art_Art_PortId unit2_saturationLogic_channel2_Id, art_Art_PortId unit2_saturationLogic_channel3_Id, art_Art_PortId unit2_saturationLogic_channel4_Id) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api", "apply", 0);
  this->id = id;
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
}