#include <all.h>

Unit RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_initialise(STACK_FRAME RTS_Actuation_OrLogic_i_Initialization_Api api) {
  DeclNewStackFrame(caller, "OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic.scala", "RTS.Actuation.OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic", "initialise", 0);

  sfUpdateLoc(22);
  {
    RTS_Actuation_OrLogic_i_Initialization_Api_put_actuate_(SF api, F);
  }
}

Unit RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_timeTriggered(STACK_FRAME RTS_Actuation_OrLogic_i_Operational_Api api) {
  DeclNewStackFrame(caller, "OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic.scala", "RTS.Actuation.OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic", "timeTriggered", 0);

  sfUpdateLoc(47);
  B channel1;
  {
    DeclNewOption_8F4D4C(t_0);
    RTS_Actuation_OrLogic_i_Operational_Api_get_channel1_(SF (Option_8F4D4C) &t_0, api);
    B t_1 = Option_8F4D4C_get_(SF ((Option_8F4D4C) &t_0));
    channel1 = t_1;
  }

  sfUpdateLoc(48);
  B channel2;
  {
    DeclNewOption_8F4D4C(t_2);
    RTS_Actuation_OrLogic_i_Operational_Api_get_channel2_(SF (Option_8F4D4C) &t_2, api);
    B t_3 = Option_8F4D4C_get_(SF ((Option_8F4D4C) &t_2));
    channel2 = t_3;
  }

  sfUpdateLoc(59);
  B result;
  {
    result = B__or(channel1, channel2);
  }

  sfUpdateLoc(62);
  {
    RTS_Actuation_OrLogic_i_Operational_Api_put_actuate_(SF api, result);
  }
}

Unit RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_finalise(STACK_FRAME RTS_Actuation_OrLogic_i_Operational_Api api) {
  DeclNewStackFrame(caller, "OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic.scala", "RTS.Actuation.OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic", "finalise", 0);
}