#include <all.h>

// RTS.Actuators.ActuatorsMockThread_i_Operational_Api

B RTS_Actuators_ActuatorsMockThread_i_Operational_Api__eq(RTS_Actuators_ActuatorsMockThread_i_Operational_Api this, RTS_Actuators_ActuatorsMockThread_i_Operational_Api other) {
  if (art_Art_BridgeId__ne(this->id, other->id)) return F;
  if (art_Art_PortId__ne(this->tempPressureActuate_Id, other->tempPressureActuate_Id)) return F;
  if (art_Art_PortId__ne(this->saturationActuate_Id, other->saturationActuate_Id)) return F;
  return T;
}

B RTS_Actuators_ActuatorsMockThread_i_Operational_Api__equiv(RTS_Actuators_ActuatorsMockThread_i_Operational_Api this, RTS_Actuators_ActuatorsMockThread_i_Operational_Api other) {
  if (art_Art_BridgeId__inequiv(this->id, other->id)) return F;
  if (art_Art_PortId__inequiv(this->tempPressureActuate_Id, other->tempPressureActuate_Id)) return F;
  if (art_Art_PortId__inequiv(this->saturationActuate_Id, other->saturationActuate_Id)) return F;
  return T;
}

B RTS_Actuators_ActuatorsMockThread_i_Operational_Api__ne(RTS_Actuators_ActuatorsMockThread_i_Operational_Api this, RTS_Actuators_ActuatorsMockThread_i_Operational_Api other);
B RTS_Actuators_ActuatorsMockThread_i_Operational_Api__inequiv(RTS_Actuators_ActuatorsMockThread_i_Operational_Api this, RTS_Actuators_ActuatorsMockThread_i_Operational_Api other);

void RTS_Actuators_ActuatorsMockThread_i_Operational_Api_string_(STACK_FRAME String result, RTS_Actuators_ActuatorsMockThread_i_Operational_Api this) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_Api.scala", "RTS.Actuators.ActuatorsMockThread_i_Operational_Api", "string", 0);
  String_string_(SF result, string("ActuatorsMockThread_i_Operational_Api("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->tempPressureActuate_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->saturationActuate_Id);
  String_string_(SF result, string(")"));
}

void RTS_Actuators_ActuatorsMockThread_i_Operational_Api_cprint(RTS_Actuators_ActuatorsMockThread_i_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("ActuatorsMockThread_i_Operational_Api("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->tempPressureActuate_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->saturationActuate_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Actuators_ActuatorsMockThread_i_Operational_Api__is(STACK_FRAME void* this);
RTS_Actuators_ActuatorsMockThread_i_Operational_Api RTS_Actuators_ActuatorsMockThread_i_Operational_Api__as(STACK_FRAME void *this);

void RTS_Actuators_ActuatorsMockThread_i_Operational_Api_apply(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Operational_Api this, art_Art_BridgeId id, art_Art_PortId tempPressureActuate_Id, art_Art_PortId saturationActuate_Id) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_Api.scala", "RTS.Actuators.ActuatorsMockThread_i_Operational_Api", "apply", 0);
  this->id = id;
  this->tempPressureActuate_Id = tempPressureActuate_Id;
  this->saturationActuate_Id = saturationActuate_Id;
}

inline B RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_tempPressureActuate_extract_48_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuators_ActuatorsMockThread_i_Operational_Api this, B *_v_48_44) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!RTS_Base_Types_Boolean_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_48_44 = RTS_Base_Types_Boolean_Payload_value_(RTS_Base_Types_Boolean_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_tempPressureActuate_extract_49_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuators_ActuatorsMockThread_i_Operational_Api this, art_DataContent *_v_49_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_49_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_tempPressureActuate_extract_52_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuators_ActuatorsMockThread_i_Operational_Api this) {
  return T;
}

void RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_tempPressureActuate_(STACK_FRAME Option_8F4D4C result, RTS_Actuators_ActuatorsMockThread_i_Operational_Api this) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_Api.scala", "RTS.Actuators.ActuatorsMockThread_i_Operational_Api", "get_tempPressureActuate", 0);

  sfUpdateLoc(47);
  Option_8F4D4C value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, RTS_Actuators_ActuatorsMockThread_i_Operational_Api_tempPressureActuate_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_47_46 = F;
  if (!match_47_46) {
    B v_48_44;
    match_47_46 = RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_tempPressureActuate_extract_48_12_8E9F45(SF t_0, this, &v_48_44);
    if (match_47_46) {
      DeclNewSome_DB59FB(t_2);
      Some_DB59FB_apply(SF &t_2, v_48_44);
      value = (Option_8F4D4C) (&t_2);
    }
  }
  if (!match_47_46) {
    art_DataContent v_49_17;
    match_47_46 = RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_tempPressureActuate_extract_49_12_8E9F45(SF t_0, this, &v_49_17);
    if (match_47_46) {

      sfUpdateLoc(50);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port tempPressureActuate.  Expecting 'Base_Types.Boolean_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_49_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF RTS_Actuators_ActuatorsMockThread_i_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_7E20F8(t_4);
      None_7E20F8_apply(SF &t_4);
      value = (Option_8F4D4C) (&t_4);
    }
  }
  if (!match_47_46) {
    match_47_46 = RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_tempPressureActuate_extract_52_12_8E9F45(SF t_0, this);
    if (match_47_46) {
      DeclNewNone_7E20F8(t_5);
      None_7E20F8_apply(SF &t_5);
      value = (Option_8F4D4C) (&t_5);
    }
  }
  sfAssert(match_47_46, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_8F4D4C));
  return;
}

inline B RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_saturationActuate_extract_67_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuators_ActuatorsMockThread_i_Operational_Api this, B *_v_67_44) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!RTS_Base_Types_Boolean_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_67_44 = RTS_Base_Types_Boolean_Payload_value_(RTS_Base_Types_Boolean_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_saturationActuate_extract_68_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuators_ActuatorsMockThread_i_Operational_Api this, art_DataContent *_v_68_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_68_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_saturationActuate_extract_71_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuators_ActuatorsMockThread_i_Operational_Api this) {
  return T;
}

void RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_saturationActuate_(STACK_FRAME Option_8F4D4C result, RTS_Actuators_ActuatorsMockThread_i_Operational_Api this) {
  DeclNewStackFrame(caller, "ActuatorsMockThread_i_Api.scala", "RTS.Actuators.ActuatorsMockThread_i_Operational_Api", "get_saturationActuate", 0);

  sfUpdateLoc(66);
  Option_8F4D4C value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, RTS_Actuators_ActuatorsMockThread_i_Operational_Api_saturationActuate_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_66_46 = F;
  if (!match_66_46) {
    B v_67_44;
    match_66_46 = RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_saturationActuate_extract_67_12_8E9F45(SF t_0, this, &v_67_44);
    if (match_66_46) {
      DeclNewSome_DB59FB(t_2);
      Some_DB59FB_apply(SF &t_2, v_67_44);
      value = (Option_8F4D4C) (&t_2);
    }
  }
  if (!match_66_46) {
    art_DataContent v_68_17;
    match_66_46 = RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_saturationActuate_extract_68_12_8E9F45(SF t_0, this, &v_68_17);
    if (match_66_46) {

      sfUpdateLoc(69);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port saturationActuate.  Expecting 'Base_Types.Boolean_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_68_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF RTS_Actuators_ActuatorsMockThread_i_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_7E20F8(t_4);
      None_7E20F8_apply(SF &t_4);
      value = (Option_8F4D4C) (&t_4);
    }
  }
  if (!match_66_46) {
    match_66_46 = RTS_Actuators_ActuatorsMockThread_i_Operational_Api_get_saturationActuate_extract_71_12_8E9F45(SF t_0, this);
    if (match_66_46) {
      DeclNewNone_7E20F8(t_5);
      None_7E20F8_apply(SF &t_5);
      value = (Option_8F4D4C) (&t_5);
    }
  }
  sfAssert(match_66_46, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_8F4D4C));
  return;
}