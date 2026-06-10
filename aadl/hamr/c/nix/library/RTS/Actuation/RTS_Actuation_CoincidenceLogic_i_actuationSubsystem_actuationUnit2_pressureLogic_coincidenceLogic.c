#include <all.h>

Unit RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_initialise(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Initialization_Api api) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic.scala", "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic", "initialise", 0);

  sfUpdateLoc(22);
  {
    RTS_Actuation_CoincidenceLogic_i_Initialization_Api_put_actuate_(SF api, F);
  }
}

Unit RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_timeTriggered(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Operational_Api api) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic.scala", "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic", "timeTriggered", 0);

  sfUpdateLoc(58);
  B a;
  {
    DeclNewOption_8F4D4C(t_0);
    RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel1_(SF (Option_8F4D4C) &t_0, api);
    B t_1 = Option_8F4D4C_get_(SF ((Option_8F4D4C) &t_0));
    a = t_1;
  }

  sfUpdateLoc(59);
  B b;
  {
    DeclNewOption_8F4D4C(t_2);
    RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel2_(SF (Option_8F4D4C) &t_2, api);
    B t_3 = Option_8F4D4C_get_(SF ((Option_8F4D4C) &t_2));
    b = t_3;
  }

  sfUpdateLoc(60);
  B c;
  {
    DeclNewOption_8F4D4C(t_4);
    RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel3_(SF (Option_8F4D4C) &t_4, api);
    B t_5 = Option_8F4D4C_get_(SF ((Option_8F4D4C) &t_4));
    c = t_5;
  }

  sfUpdateLoc(61);
  B d;
  {
    DeclNewOption_8F4D4C(t_6);
    RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel4_(SF (Option_8F4D4C) &t_6, api);
    B t_7 = Option_8F4D4C_get_(SF ((Option_8F4D4C) &t_6));
    d = t_7;
  }

  sfUpdateLoc(83);
  B result;
  {
    result = B__or(B__or(B__and(a, b), B__and(B__or(a, b), B__or(c, d))), B__and(c, d));
  }

  sfUpdateLoc(86);
  {
    RTS_Actuation_CoincidenceLogic_i_Operational_Api_put_actuate_(SF api, result);
  }
}

Unit RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_finalise(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Operational_Api api) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic.scala", "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic", "finalise", 0);
}