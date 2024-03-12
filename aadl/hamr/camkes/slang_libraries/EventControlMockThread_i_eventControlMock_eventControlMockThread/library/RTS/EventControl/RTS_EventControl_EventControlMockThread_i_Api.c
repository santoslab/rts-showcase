#include <all.h>

Unit RTS_EventControl_EventControlMockThread_i_Initialization_Api_logInfo_(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_Api.scala", "RTS.EventControl.EventControlMockThread_i_Api", "logInfo", 0);

  sfUpdateLoc(49);
  {
    art_Art_logInfo(SF RTS_EventControl_EventControlMockThread_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit RTS_EventControl_EventControlMockThread_i_Initialization_Api_logDebug_(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_Api.scala", "RTS.EventControl.EventControlMockThread_i_Api", "logDebug", 0);

  sfUpdateLoc(53);
  {
    art_Art_logDebug(SF RTS_EventControl_EventControlMockThread_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit RTS_EventControl_EventControlMockThread_i_Initialization_Api_logError_(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_Api.scala", "RTS.EventControl.EventControlMockThread_i_Api", "logError", 0);

  sfUpdateLoc(57);
  {
    art_Art_logError(SF RTS_EventControl_EventControlMockThread_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit RTS_EventControl_EventControlMockThread_i_Operational_Api_logInfo_(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_Api.scala", "RTS.EventControl.EventControlMockThread_i_Api", "logInfo", 0);

  sfUpdateLoc(49);
  {
    art_Art_logInfo(SF RTS_EventControl_EventControlMockThread_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit RTS_EventControl_EventControlMockThread_i_Operational_Api_logDebug_(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_Api.scala", "RTS.EventControl.EventControlMockThread_i_Api", "logDebug", 0);

  sfUpdateLoc(53);
  {
    art_Art_logDebug(SF RTS_EventControl_EventControlMockThread_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit RTS_EventControl_EventControlMockThread_i_Operational_Api_logError_(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_Api.scala", "RTS.EventControl.EventControlMockThread_i_Api", "logError", 0);

  sfUpdateLoc(57);
  {
    art_Art_logError(SF RTS_EventControl_EventControlMockThread_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit RTS_EventControl_EventControlMockThread_i_Initialization_Api_put_manualActuatorInput1_(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_Api.scala", "RTS.EventControl.EventControlMockThread_i_Api", "put_manualActuatorInput1", 0);

  sfUpdateLoc(28);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_EventControl_EventControlMockThread_i_Initialization_Api_manualActuatorInput1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_EventControl_EventControlMockThread_i_Operational_Api_put_manualActuatorInput1_(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_Api.scala", "RTS.EventControl.EventControlMockThread_i_Api", "put_manualActuatorInput1", 0);

  sfUpdateLoc(28);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_EventControl_EventControlMockThread_i_Operational_Api_manualActuatorInput1_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_EventControl_EventControlMockThread_i_Initialization_Api_put_manualActuatorInput2_(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_Api.scala", "RTS.EventControl.EventControlMockThread_i_Api", "put_manualActuatorInput2", 0);

  sfUpdateLoc(45);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_EventControl_EventControlMockThread_i_Initialization_Api_manualActuatorInput2_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_EventControl_EventControlMockThread_i_Operational_Api_put_manualActuatorInput2_(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_Api.scala", "RTS.EventControl.EventControlMockThread_i_Api", "put_manualActuatorInput2", 0);

  sfUpdateLoc(45);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_EventControl_EventControlMockThread_i_Operational_Api_manualActuatorInput2_Id_(this), (art_DataContent) (&t_0));
  }
}