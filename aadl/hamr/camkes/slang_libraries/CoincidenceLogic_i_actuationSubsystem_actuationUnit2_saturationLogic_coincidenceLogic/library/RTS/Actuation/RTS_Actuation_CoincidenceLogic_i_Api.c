#include <all.h>

Unit RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logInfo_(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_Api.scala", "RTS.Actuation.CoincidenceLogic_i_Api", "logInfo", 0);

  sfUpdateLoc(35);
  {
    art_Art_logInfo(SF RTS_Actuation_CoincidenceLogic_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logDebug_(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_Api.scala", "RTS.Actuation.CoincidenceLogic_i_Api", "logDebug", 0);

  sfUpdateLoc(39);
  {
    art_Art_logDebug(SF RTS_Actuation_CoincidenceLogic_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit RTS_Actuation_CoincidenceLogic_i_Initialization_Api_logError_(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_Api.scala", "RTS.Actuation.CoincidenceLogic_i_Api", "logError", 0);

  sfUpdateLoc(43);
  {
    art_Art_logError(SF RTS_Actuation_CoincidenceLogic_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit RTS_Actuation_CoincidenceLogic_i_Operational_Api_logInfo_(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_Api.scala", "RTS.Actuation.CoincidenceLogic_i_Api", "logInfo", 0);

  sfUpdateLoc(35);
  {
    art_Art_logInfo(SF RTS_Actuation_CoincidenceLogic_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit RTS_Actuation_CoincidenceLogic_i_Operational_Api_logDebug_(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_Api.scala", "RTS.Actuation.CoincidenceLogic_i_Api", "logDebug", 0);

  sfUpdateLoc(39);
  {
    art_Art_logDebug(SF RTS_Actuation_CoincidenceLogic_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit RTS_Actuation_CoincidenceLogic_i_Operational_Api_logError_(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_Api.scala", "RTS.Actuation.CoincidenceLogic_i_Api", "logError", 0);

  sfUpdateLoc(43);
  {
    art_Art_logError(SF RTS_Actuation_CoincidenceLogic_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit RTS_Actuation_CoincidenceLogic_i_Initialization_Api_put_actuate_(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Initialization_Api this, B value) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_Api.scala", "RTS.Actuation.CoincidenceLogic_i_Api", "put_actuate", 0);

  sfUpdateLoc(31);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Actuation_CoincidenceLogic_i_Initialization_Api_actuate_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit RTS_Actuation_CoincidenceLogic_i_Operational_Api_put_actuate_(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Operational_Api this, B value) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_Api.scala", "RTS.Actuation.CoincidenceLogic_i_Api", "put_actuate", 0);

  sfUpdateLoc(31);
  {
    DeclNewRTS_Base_Types_Boolean_Payload(t_0);
    RTS_Base_Types_Boolean_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF RTS_Actuation_CoincidenceLogic_i_Operational_Api_actuate_Id_(this), (art_DataContent) (&t_0));
  }
}