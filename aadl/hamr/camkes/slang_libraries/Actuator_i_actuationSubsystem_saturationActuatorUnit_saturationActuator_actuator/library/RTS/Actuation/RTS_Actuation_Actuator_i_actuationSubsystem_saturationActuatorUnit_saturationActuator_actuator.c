#include <all.h>

Unit RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_initialise(STACK_FRAME RTS_Actuation_Actuator_i_Initialization_Api api) {
  DeclNewStackFrame(caller, "Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.scala", "RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator", "initialise", 0);

  sfUpdateLoc(30);
  {
    RTS_Actuation_Actuator_i_Initialization_Api_put_output_(SF api, F);
  }
}

Unit RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_timeTriggered(STACK_FRAME RTS_Actuation_Actuator_i_Operational_Api api) {
  DeclNewStackFrame(caller, "Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.scala", "RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator", "timeTriggered", 0);

  sfUpdateLoc(54);
  B input;
  {
    DeclNewOption_8F4D4C(t_0);
    RTS_Actuation_Actuator_i_Operational_Api_get_input_(SF (Option_8F4D4C) &t_0, api);
    B t_1 = Option_8F4D4C_get_(SF ((Option_8F4D4C) &t_0));
    input = t_1;
  }

  sfUpdateLoc(55);
  B manualInput;
  {
    DeclNewOption_8F4D4C(t_2);
    RTS_Actuation_Actuator_i_Operational_Api_get_manualActuatorInput_(SF (Option_8F4D4C) &t_2, api);
    B t_3 = Option_8F4D4C_get_(SF ((Option_8F4D4C) &t_2));
    manualInput = t_3;
  }

  sfUpdateLoc(58);
  B output;
  {
    output = B__or(input, manualInput);
  }

  sfUpdateLoc(61);
  {
    RTS_Actuation_Actuator_i_Operational_Api_put_output_(SF api, output);
  }
}

Unit RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_finalise(STACK_FRAME RTS_Actuation_Actuator_i_Operational_Api api) {
  DeclNewStackFrame(caller, "Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator.scala", "RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator", "finalise", 0);
}