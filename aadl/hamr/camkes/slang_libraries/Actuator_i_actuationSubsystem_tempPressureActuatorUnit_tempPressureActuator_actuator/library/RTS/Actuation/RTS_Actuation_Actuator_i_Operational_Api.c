#include <all.h>

// RTS.Actuation.Actuator_i_Operational_Api

B RTS_Actuation_Actuator_i_Operational_Api__eq(RTS_Actuation_Actuator_i_Operational_Api this, RTS_Actuation_Actuator_i_Operational_Api other) {
  if (art_Art_BridgeId__ne(this->id, other->id)) return F;
  if (art_Art_PortId__ne(this->input_Id, other->input_Id)) return F;
  if (art_Art_PortId__ne(this->manualActuatorInput_Id, other->manualActuatorInput_Id)) return F;
  if (art_Art_PortId__ne(this->output_Id, other->output_Id)) return F;
  return T;
}

B RTS_Actuation_Actuator_i_Operational_Api__equiv(RTS_Actuation_Actuator_i_Operational_Api this, RTS_Actuation_Actuator_i_Operational_Api other) {
  if (art_Art_BridgeId__inequiv(this->id, other->id)) return F;
  if (art_Art_PortId__inequiv(this->input_Id, other->input_Id)) return F;
  if (art_Art_PortId__inequiv(this->manualActuatorInput_Id, other->manualActuatorInput_Id)) return F;
  if (art_Art_PortId__inequiv(this->output_Id, other->output_Id)) return F;
  return T;
}

B RTS_Actuation_Actuator_i_Operational_Api__ne(RTS_Actuation_Actuator_i_Operational_Api this, RTS_Actuation_Actuator_i_Operational_Api other);
B RTS_Actuation_Actuator_i_Operational_Api__inequiv(RTS_Actuation_Actuator_i_Operational_Api this, RTS_Actuation_Actuator_i_Operational_Api other);

void RTS_Actuation_Actuator_i_Operational_Api_string_(STACK_FRAME String result, RTS_Actuation_Actuator_i_Operational_Api this) {
  DeclNewStackFrame(caller, "Actuator_i_Api.scala", "RTS.Actuation.Actuator_i_Operational_Api", "string", 0);
  String_string_(SF result, string("Actuator_i_Operational_Api("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->input_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->manualActuatorInput_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->output_Id);
  String_string_(SF result, string(")"));
}

void RTS_Actuation_Actuator_i_Operational_Api_cprint(RTS_Actuation_Actuator_i_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Actuator_i_Operational_Api("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->input_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->manualActuatorInput_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->output_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Actuation_Actuator_i_Operational_Api__is(STACK_FRAME void* this);
RTS_Actuation_Actuator_i_Operational_Api RTS_Actuation_Actuator_i_Operational_Api__as(STACK_FRAME void *this);

void RTS_Actuation_Actuator_i_Operational_Api_apply(STACK_FRAME RTS_Actuation_Actuator_i_Operational_Api this, art_Art_BridgeId id, art_Art_PortId input_Id, art_Art_PortId manualActuatorInput_Id, art_Art_PortId output_Id) {
  DeclNewStackFrame(caller, "Actuator_i_Api.scala", "RTS.Actuation.Actuator_i_Operational_Api", "apply", 0);
  this->id = id;
  this->input_Id = input_Id;
  this->manualActuatorInput_Id = manualActuatorInput_Id;
  this->output_Id = output_Id;
}

inline B RTS_Actuation_Actuator_i_Operational_Api_get_input_extract_67_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_Actuator_i_Operational_Api this, B *_v_67_44) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!RTS_Base_Types_Boolean_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_67_44 = RTS_Base_Types_Boolean_Payload_value_(RTS_Base_Types_Boolean_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B RTS_Actuation_Actuator_i_Operational_Api_get_input_extract_68_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_Actuator_i_Operational_Api this, art_DataContent *_v_68_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_68_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B RTS_Actuation_Actuator_i_Operational_Api_get_input_extract_71_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_Actuator_i_Operational_Api this) {
  return T;
}

void RTS_Actuation_Actuator_i_Operational_Api_get_input_(STACK_FRAME Option_8F4D4C result, RTS_Actuation_Actuator_i_Operational_Api this) {
  DeclNewStackFrame(caller, "Actuator_i_Api.scala", "RTS.Actuation.Actuator_i_Operational_Api", "get_input", 0);

  sfUpdateLoc(66);
  Option_8F4D4C value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, RTS_Actuation_Actuator_i_Operational_Api_input_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_66_46 = F;
  if (!match_66_46) {
    B v_67_44;
    match_66_46 = RTS_Actuation_Actuator_i_Operational_Api_get_input_extract_67_12_8E9F45(SF t_0, this, &v_67_44);
    if (match_66_46) {
      DeclNewSome_DB59FB(t_2);
      Some_DB59FB_apply(SF &t_2, v_67_44);
      value = (Option_8F4D4C) (&t_2);
    }
  }
  if (!match_66_46) {
    art_DataContent v_68_17;
    match_66_46 = RTS_Actuation_Actuator_i_Operational_Api_get_input_extract_68_12_8E9F45(SF t_0, this, &v_68_17);
    if (match_66_46) {

      sfUpdateLoc(69);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port input.  Expecting \'Base_Types.Boolean_Payload\' but received "));
        art_DataContent_string_(SF (String) &t_3, v_68_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF RTS_Actuation_Actuator_i_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_7E20F8(t_4);
      None_7E20F8_apply(SF &t_4);
      value = (Option_8F4D4C) (&t_4);
    }
  }
  if (!match_66_46) {
    match_66_46 = RTS_Actuation_Actuator_i_Operational_Api_get_input_extract_71_12_8E9F45(SF t_0, this);
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

inline B RTS_Actuation_Actuator_i_Operational_Api_get_manualActuatorInput_extract_86_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_Actuator_i_Operational_Api this, B *_v_86_44) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!RTS_Base_Types_Boolean_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_86_44 = RTS_Base_Types_Boolean_Payload_value_(RTS_Base_Types_Boolean_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B RTS_Actuation_Actuator_i_Operational_Api_get_manualActuatorInput_extract_87_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_Actuator_i_Operational_Api this, art_DataContent *_v_87_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_87_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B RTS_Actuation_Actuator_i_Operational_Api_get_manualActuatorInput_extract_90_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_Actuator_i_Operational_Api this) {
  return T;
}

void RTS_Actuation_Actuator_i_Operational_Api_get_manualActuatorInput_(STACK_FRAME Option_8F4D4C result, RTS_Actuation_Actuator_i_Operational_Api this) {
  DeclNewStackFrame(caller, "Actuator_i_Api.scala", "RTS.Actuation.Actuator_i_Operational_Api", "get_manualActuatorInput", 0);

  sfUpdateLoc(85);
  Option_8F4D4C value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, RTS_Actuation_Actuator_i_Operational_Api_manualActuatorInput_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_85_46 = F;
  if (!match_85_46) {
    B v_86_44;
    match_85_46 = RTS_Actuation_Actuator_i_Operational_Api_get_manualActuatorInput_extract_86_12_8E9F45(SF t_0, this, &v_86_44);
    if (match_85_46) {
      DeclNewSome_DB59FB(t_2);
      Some_DB59FB_apply(SF &t_2, v_86_44);
      value = (Option_8F4D4C) (&t_2);
    }
  }
  if (!match_85_46) {
    art_DataContent v_87_17;
    match_85_46 = RTS_Actuation_Actuator_i_Operational_Api_get_manualActuatorInput_extract_87_12_8E9F45(SF t_0, this, &v_87_17);
    if (match_85_46) {

      sfUpdateLoc(88);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port manualActuatorInput.  Expecting \'Base_Types.Boolean_Payload\' but received "));
        art_DataContent_string_(SF (String) &t_3, v_87_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF RTS_Actuation_Actuator_i_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_7E20F8(t_4);
      None_7E20F8_apply(SF &t_4);
      value = (Option_8F4D4C) (&t_4);
    }
  }
  if (!match_85_46) {
    match_85_46 = RTS_Actuation_Actuator_i_Operational_Api_get_manualActuatorInput_extract_90_12_8E9F45(SF t_0, this);
    if (match_85_46) {
      DeclNewNone_7E20F8(t_5);
      None_7E20F8_apply(SF &t_5);
      value = (Option_8F4D4C) (&t_5);
    }
  }
  sfAssert(match_85_46, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_8F4D4C));
  return;
}