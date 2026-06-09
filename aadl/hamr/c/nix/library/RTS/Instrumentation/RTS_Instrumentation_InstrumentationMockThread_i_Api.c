#include <all.h>

// RTS.Instrumentation.InstrumentationMockThread_i_Api

B RTS_Instrumentation_InstrumentationMockThread_i_Api__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api: return T;
    case TRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api: return T;
    default: return F;
  }
}

RTS_Instrumentation_InstrumentationMockThread_i_Api RTS_Instrumentation_InstrumentationMockThread_i_Api__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api: break;
    case TRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api: break;
    default:
      fprintf(stderr, "Invalid cast from %s to RTS.Instrumentation.InstrumentationMockThread_i_Api.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (RTS_Instrumentation_InstrumentationMockThread_i_Api) this;
}

void RTS_Instrumentation_InstrumentationMockThread_i_Api_string_(STACK_FRAME String result, RTS_Instrumentation_InstrumentationMockThread_i_Api this);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_logInfo_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "logInfo", 0);

  sfUpdateLoc(447);
  {
    art_Art_logInfo(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_logDebug_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "logDebug", 0);

  sfUpdateLoc(451);
  {
    art_Art_logDebug(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_logError_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "logError", 0);

  sfUpdateLoc(455);
  {
    art_Art_logError(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_logInfo_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "logInfo", 0);

  sfUpdateLoc(447);
  {
    art_Art_logInfo(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_logDebug_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "logDebug", 0);

  sfUpdateLoc(451);
  {
    art_Art_logDebug(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_logError_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "logError", 0);

  sfUpdateLoc(455);
  {
    art_Art_logError(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_temperatureLogic_channel1", 0);

  sfUpdateLoc(52);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_temperatureLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_temperatureLogic_channel1", 0);

  sfUpdateLoc(52);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_temperatureLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_temperatureLogic_channel2", 0);

  sfUpdateLoc(69);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_temperatureLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_temperatureLogic_channel2", 0);

  sfUpdateLoc(69);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_temperatureLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_temperatureLogic_channel3", 0);

  sfUpdateLoc(86);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_temperatureLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_temperatureLogic_channel3", 0);

  sfUpdateLoc(86);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_temperatureLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_temperatureLogic_channel4", 0);

  sfUpdateLoc(103);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_temperatureLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_temperatureLogic_channel4", 0);

  sfUpdateLoc(103);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_temperatureLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_pressureLogic_channel1", 0);

  sfUpdateLoc(120);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_pressureLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_pressureLogic_channel1", 0);

  sfUpdateLoc(120);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_pressureLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_pressureLogic_channel2", 0);

  sfUpdateLoc(137);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_pressureLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_pressureLogic_channel2", 0);

  sfUpdateLoc(137);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_pressureLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_pressureLogic_channel3", 0);

  sfUpdateLoc(154);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_pressureLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_pressureLogic_channel3", 0);

  sfUpdateLoc(154);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_pressureLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_pressureLogic_channel4", 0);

  sfUpdateLoc(171);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_pressureLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_pressureLogic_channel4", 0);

  sfUpdateLoc(171);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_pressureLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_saturationLogic_channel1", 0);

  sfUpdateLoc(188);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_saturationLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_saturationLogic_channel1", 0);

  sfUpdateLoc(188);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_saturationLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_saturationLogic_channel2", 0);

  sfUpdateLoc(205);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_saturationLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_saturationLogic_channel2", 0);

  sfUpdateLoc(205);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_saturationLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_saturationLogic_channel3", 0);

  sfUpdateLoc(222);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_saturationLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_saturationLogic_channel3", 0);

  sfUpdateLoc(222);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_saturationLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_saturationLogic_channel4", 0);

  sfUpdateLoc(239);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_saturationLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_saturationLogic_channel4", 0);

  sfUpdateLoc(239);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_saturationLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_temperatureLogic_channel1", 0);

  sfUpdateLoc(256);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_temperatureLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_temperatureLogic_channel1", 0);

  sfUpdateLoc(256);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_temperatureLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_temperatureLogic_channel2", 0);

  sfUpdateLoc(273);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_temperatureLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_temperatureLogic_channel2", 0);

  sfUpdateLoc(273);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_temperatureLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_temperatureLogic_channel3", 0);

  sfUpdateLoc(290);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_temperatureLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_temperatureLogic_channel3", 0);

  sfUpdateLoc(290);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_temperatureLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_temperatureLogic_channel4", 0);

  sfUpdateLoc(307);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_temperatureLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_temperatureLogic_channel4", 0);

  sfUpdateLoc(307);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_temperatureLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_pressureLogic_channel1", 0);

  sfUpdateLoc(324);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_pressureLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_pressureLogic_channel1", 0);

  sfUpdateLoc(324);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_pressureLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_pressureLogic_channel2", 0);

  sfUpdateLoc(341);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_pressureLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_pressureLogic_channel2", 0);

  sfUpdateLoc(341);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_pressureLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_pressureLogic_channel3", 0);

  sfUpdateLoc(358);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_pressureLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_pressureLogic_channel3", 0);

  sfUpdateLoc(358);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_pressureLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_pressureLogic_channel4", 0);

  sfUpdateLoc(375);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_pressureLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_pressureLogic_channel4", 0);

  sfUpdateLoc(375);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_pressureLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_saturationLogic_channel1", 0);

  sfUpdateLoc(392);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_saturationLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_saturationLogic_channel1", 0);

  sfUpdateLoc(392);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_saturationLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_saturationLogic_channel2", 0);

  sfUpdateLoc(409);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_saturationLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_saturationLogic_channel2", 0);

  sfUpdateLoc(409);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_saturationLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_saturationLogic_channel3", 0);

  sfUpdateLoc(426);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_saturationLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_saturationLogic_channel3", 0);

  sfUpdateLoc(426);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_saturationLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_saturationLogic_channel4", 0);

  sfUpdateLoc(443);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_saturationLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_saturationLogic_channel4", 0);

  sfUpdateLoc(443);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_saturationLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}