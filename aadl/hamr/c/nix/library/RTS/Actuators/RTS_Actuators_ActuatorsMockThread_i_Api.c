#include <all.h>

// RTS.Actuators.ActuatorsMockThread_i_Api

B RTS_Actuators_ActuatorsMockThread_i_Api__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TRTS_Actuators_ActuatorsMockThread_i_Initialization_Api: return T;
    case TRTS_Actuators_ActuatorsMockThread_i_Operational_Api: return T;
    default: return F;
  }
}

RTS_Actuators_ActuatorsMockThread_i_Api RTS_Actuators_ActuatorsMockThread_i_Api__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TRTS_Actuators_ActuatorsMockThread_i_Initialization_Api: break;
    case TRTS_Actuators_ActuatorsMockThread_i_Operational_Api: break;
    default:
      fprintf(stderr, "Invalid cast from %s to RTS.Actuators.ActuatorsMockThread_i_Api.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (RTS_Actuators_ActuatorsMockThread_i_Api) this;
}

void RTS_Actuators_ActuatorsMockThread_i_Api_string_(STACK_FRAME String result, RTS_Actuators_ActuatorsMockThread_i_Api this);

Unit RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_logInfo_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_Api.scala", "RTS.Actuators.ActuatorsMockThread_i_Api", "logInfo", 0);

  sfUpdateLoc(16);
  {
    art_Art_logInfo(SF RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_logDebug_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_Api.scala", "RTS.Actuators.ActuatorsMockThread_i_Api", "logDebug", 0);

  sfUpdateLoc(20);
  {
    art_Art_logDebug(SF RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_logError_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_Api.scala", "RTS.Actuators.ActuatorsMockThread_i_Api", "logError", 0);

  sfUpdateLoc(24);
  {
    art_Art_logError(SF RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit RTS_Actuators_ActuatorsMockThread_i_Operational_Api_logInfo_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_Api.scala", "RTS.Actuators.ActuatorsMockThread_i_Api", "logInfo", 0);

  sfUpdateLoc(16);
  {
    art_Art_logInfo(SF RTS_Actuators_ActuatorsMockThread_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit RTS_Actuators_ActuatorsMockThread_i_Operational_Api_logDebug_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_Api.scala", "RTS.Actuators.ActuatorsMockThread_i_Api", "logDebug", 0);

  sfUpdateLoc(20);
  {
    art_Art_logDebug(SF RTS_Actuators_ActuatorsMockThread_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit RTS_Actuators_ActuatorsMockThread_i_Operational_Api_logError_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_Api.scala", "RTS.Actuators.ActuatorsMockThread_i_Api", "logError", 0);

  sfUpdateLoc(24);
  {
    art_Art_logError(SF RTS_Actuators_ActuatorsMockThread_i_Operational_Api_id_(this), (String) msg);
  }
}