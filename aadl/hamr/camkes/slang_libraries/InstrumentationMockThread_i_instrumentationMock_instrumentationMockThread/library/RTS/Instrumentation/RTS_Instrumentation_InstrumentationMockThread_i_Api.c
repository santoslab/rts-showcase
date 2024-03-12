#include <all.h>

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_logInfo_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "logInfo", 0);

  sfUpdateLoc(445);
  {
    art_Art_logInfo(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_logDebug_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "logDebug", 0);

  sfUpdateLoc(449);
  {
    art_Art_logDebug(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_logError_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "logError", 0);

  sfUpdateLoc(453);
  {
    art_Art_logError(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_logInfo_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "logInfo", 0);

  sfUpdateLoc(445);
  {
    art_Art_logInfo(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_logDebug_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "logDebug", 0);

  sfUpdateLoc(449);
  {
    art_Art_logDebug(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_logError_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "logError", 0);

  sfUpdateLoc(453);
  {
    art_Art_logError(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_temperatureLogic_channel1", 0);

  sfUpdateLoc(50);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_temperatureLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_temperatureLogic_channel1", 0);

  sfUpdateLoc(50);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_temperatureLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_temperatureLogic_channel2", 0);

  sfUpdateLoc(67);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_temperatureLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_temperatureLogic_channel2", 0);

  sfUpdateLoc(67);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_temperatureLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_temperatureLogic_channel3", 0);

  sfUpdateLoc(84);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_temperatureLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_temperatureLogic_channel3", 0);

  sfUpdateLoc(84);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_temperatureLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_temperatureLogic_channel4", 0);

  sfUpdateLoc(101);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_temperatureLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_temperatureLogic_channel4", 0);

  sfUpdateLoc(101);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_temperatureLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_pressureLogic_channel1", 0);

  sfUpdateLoc(118);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_pressureLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_pressureLogic_channel1", 0);

  sfUpdateLoc(118);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_pressureLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_pressureLogic_channel2", 0);

  sfUpdateLoc(135);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_pressureLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_pressureLogic_channel2", 0);

  sfUpdateLoc(135);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_pressureLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_pressureLogic_channel3", 0);

  sfUpdateLoc(152);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_pressureLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_pressureLogic_channel3", 0);

  sfUpdateLoc(152);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_pressureLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_pressureLogic_channel4", 0);

  sfUpdateLoc(169);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_pressureLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_pressureLogic_channel4", 0);

  sfUpdateLoc(169);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_pressureLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_saturationLogic_channel1", 0);

  sfUpdateLoc(186);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_saturationLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_saturationLogic_channel1", 0);

  sfUpdateLoc(186);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_saturationLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_saturationLogic_channel2", 0);

  sfUpdateLoc(203);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_saturationLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_saturationLogic_channel2", 0);

  sfUpdateLoc(203);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_saturationLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_saturationLogic_channel3", 0);

  sfUpdateLoc(220);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_saturationLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_saturationLogic_channel3", 0);

  sfUpdateLoc(220);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_saturationLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_saturationLogic_channel4", 0);

  sfUpdateLoc(237);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit1_saturationLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit1_saturationLogic_channel4", 0);

  sfUpdateLoc(237);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit1_saturationLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_temperatureLogic_channel1", 0);

  sfUpdateLoc(254);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_temperatureLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_temperatureLogic_channel1", 0);

  sfUpdateLoc(254);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_temperatureLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_temperatureLogic_channel2", 0);

  sfUpdateLoc(271);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_temperatureLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_temperatureLogic_channel2", 0);

  sfUpdateLoc(271);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_temperatureLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_temperatureLogic_channel3", 0);

  sfUpdateLoc(288);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_temperatureLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_temperatureLogic_channel3", 0);

  sfUpdateLoc(288);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_temperatureLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_temperatureLogic_channel4", 0);

  sfUpdateLoc(305);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_temperatureLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_temperatureLogic_channel4", 0);

  sfUpdateLoc(305);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_temperatureLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_pressureLogic_channel1", 0);

  sfUpdateLoc(322);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_pressureLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_pressureLogic_channel1", 0);

  sfUpdateLoc(322);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_pressureLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_pressureLogic_channel2", 0);

  sfUpdateLoc(339);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_pressureLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_pressureLogic_channel2", 0);

  sfUpdateLoc(339);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_pressureLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_pressureLogic_channel3", 0);

  sfUpdateLoc(356);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_pressureLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_pressureLogic_channel3", 0);

  sfUpdateLoc(356);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_pressureLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_pressureLogic_channel4", 0);

  sfUpdateLoc(373);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_pressureLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_pressureLogic_channel4", 0);

  sfUpdateLoc(373);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_pressureLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_saturationLogic_channel1", 0);

  sfUpdateLoc(390);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_saturationLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_saturationLogic_channel1", 0);

  sfUpdateLoc(390);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_saturationLogic_channel1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_saturationLogic_channel2", 0);

  sfUpdateLoc(407);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_saturationLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_saturationLogic_channel2", 0);

  sfUpdateLoc(407);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_saturationLogic_channel2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_saturationLogic_channel3", 0);

  sfUpdateLoc(424);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_saturationLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_saturationLogic_channel3", 0);

  sfUpdateLoc(424);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_saturationLogic_channel3_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_saturationLogic_channel4", 0);

  sfUpdateLoc(441);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_unit2_saturationLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "InstrumentationMockThread_i_Api.scala", "RTS.Instrumentation.InstrumentationMockThread_i_Api", "put_unit2_saturationLogic_channel4", 0);

  sfUpdateLoc(441);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_unit2_saturationLogic_channel4_Id_(this), (art_DataContent) (&t_0));
  }
}