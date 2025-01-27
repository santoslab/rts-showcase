#include <all.h>

B art_Art_initialized_ = F;

Z _art_Art_numComponents;
struct MS_83D5EB _art_Art_bridges;

void art_Art_init(STACK_FRAME_ONLY) {
  if (art_Art_initialized_) return;
  art_Art_initialized_ = T;
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "<init>", 0);
  art_Art_init_numComponents(SF_LAST);
  art_Art_init_bridges(SF_LAST);
}

Z art_Art_numComponents(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return _art_Art_numComponents;
}

MS_83D5EB art_Art_bridges(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (MS_83D5EB) &_art_Art_bridges;
}

Unit art_Art_logInfo(STACK_FRAME art_Art_BridgeId bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logInfo", 0);

  sfUpdateLoc(100);
  B t_0;
  {
    Z t_1 = art_Art_BridgeId_toZ_(SF bridgeId);
    B t_2 = Option_7BBFBE_nonEmpty_(SF MS_83D5EB_at(art_Art_bridges(SF_LAST), t_1));
    t_0 = t_2;
  }
  if (t_0) {

    sfUpdateLoc(101);
    {
      Z t_3 = art_Art_BridgeId_toZ_(SF bridgeId);
      DeclNewart_Bridge(t_4);
      Option_7BBFBE_get_(SF (art_Bridge) &t_4, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_3));
      DeclNewString(t_5);
      art_Bridge_name_(SF (String) &t_5, ((art_Bridge) &t_4));
      RTS_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_coincidenceLogic_seL4App_logInfo(SF (String) ((String) &t_5), (String) msg);
    }
  } else {

    sfUpdateLoc(103);
    {
      RTS_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_coincidenceLogic_seL4App_logInfo(SF (String) string(""), (String) msg);
    }
  }
}

Unit art_Art_logDebug(STACK_FRAME art_Art_BridgeId bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logDebug", 0);

  sfUpdateLoc(116);
  B t_0;
  {
    Z t_1 = art_Art_BridgeId_toZ_(SF bridgeId);
    B t_2 = Option_7BBFBE_nonEmpty_(SF MS_83D5EB_at(art_Art_bridges(SF_LAST), t_1));
    t_0 = t_2;
  }
  if (t_0) {

    sfUpdateLoc(117);
    {
      Z t_3 = art_Art_BridgeId_toZ_(SF bridgeId);
      DeclNewart_Bridge(t_4);
      Option_7BBFBE_get_(SF (art_Bridge) &t_4, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_3));
      DeclNewString(t_5);
      art_Bridge_name_(SF (String) &t_5, ((art_Bridge) &t_4));
      RTS_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_coincidenceLogic_seL4App_logDebug(SF (String) ((String) &t_5), (String) msg);
    }
  } else {

    sfUpdateLoc(119);
    {
      RTS_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_coincidenceLogic_seL4App_logDebug(SF (String) string(""), (String) msg);
    }
  }
}

Unit art_Art_logError(STACK_FRAME art_Art_BridgeId bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logError", 0);

  sfUpdateLoc(108);
  B t_0;
  {
    Z t_1 = art_Art_BridgeId_toZ_(SF bridgeId);
    B t_2 = Option_7BBFBE_nonEmpty_(SF MS_83D5EB_at(art_Art_bridges(SF_LAST), t_1));
    t_0 = t_2;
  }
  if (t_0) {

    sfUpdateLoc(109);
    {
      Z t_3 = art_Art_BridgeId_toZ_(SF bridgeId);
      DeclNewart_Bridge(t_4);
      Option_7BBFBE_get_(SF (art_Bridge) &t_4, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_3));
      DeclNewString(t_5);
      art_Bridge_name_(SF (String) &t_5, ((art_Bridge) &t_4));
      RTS_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_coincidenceLogic_seL4App_logError(SF (String) ((String) &t_5), (String) msg);
    }
  } else {

    sfUpdateLoc(111);
    {
      RTS_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_coincidenceLogic_seL4App_logError(SF (String) string(""), (String) msg);
    }
  }
}

void art_Art_getValue(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "getValue", 0);
  DeclNewOption_8E9F45(t_0);
  RTS_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_coincidenceLogic_seL4App_getValue(SF (Option_8E9F45) &t_0, portId);
  Type_assign(result, ((Option_8E9F45) &t_0), sizeof(union Option_8E9F45));
  return;
}

Unit art_Art_putValue(STACK_FRAME art_Art_PortId portId, art_DataContent data) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "putValue", 0);

  sfUpdateLoc(84);
  {
    RTS_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_coincidenceLogic_seL4App_putValue(SF portId, (art_DataContent) data);
  }
}

Unit art_Art_sendOutput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "sendOutput", 0);

  sfUpdateLoc(92);
  {
    RTS_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_coincidenceLogic_seL4App_sendOutput(SF (IS_D10119) eventPortIds, (IS_D10119) dataPortIds);
  }
}

Unit art_Art_receiveInput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "receiveInput", 0);

  sfUpdateLoc(80);
  {
    RTS_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_coincidenceLogic_seL4App_receiveInput(SF (IS_D10119) eventPortIds, (IS_D10119) dataPortIds);
  }
}

void art_Art_init_numComponents(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  _art_Art_numComponents = Z_C(1);
};

void art_Art_init_bridges(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(24);
  DeclNewNone_734370(t_0);
  None_734370_apply(SF &t_0);
  DeclNewMS_83D5EB(t_1);
  MS_83D5EB_create(SF (MS_83D5EB) &t_1, art_Art_numComponents(SF_LAST), (Option_7BBFBE) (&t_0));
  Type_assign(&_art_Art_bridges, ((MS_83D5EB) &t_1), sizeof(struct MS_83D5EB));
};