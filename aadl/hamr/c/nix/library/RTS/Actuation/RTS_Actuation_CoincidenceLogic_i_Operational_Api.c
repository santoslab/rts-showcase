#include <all.h>

// RTS.Actuation.CoincidenceLogic_i_Operational_Api

B RTS_Actuation_CoincidenceLogic_i_Operational_Api__eq(RTS_Actuation_CoincidenceLogic_i_Operational_Api this, RTS_Actuation_CoincidenceLogic_i_Operational_Api other) {
  if (art_Art_BridgeId__ne(this->id, other->id)) return F;
  if (art_Art_PortId__ne(this->channel1_Id, other->channel1_Id)) return F;
  if (art_Art_PortId__ne(this->channel2_Id, other->channel2_Id)) return F;
  if (art_Art_PortId__ne(this->channel3_Id, other->channel3_Id)) return F;
  if (art_Art_PortId__ne(this->channel4_Id, other->channel4_Id)) return F;
  if (art_Art_PortId__ne(this->actuate_Id, other->actuate_Id)) return F;
  return T;
}

B RTS_Actuation_CoincidenceLogic_i_Operational_Api__equiv(RTS_Actuation_CoincidenceLogic_i_Operational_Api this, RTS_Actuation_CoincidenceLogic_i_Operational_Api other) {
  if (art_Art_BridgeId__inequiv(this->id, other->id)) return F;
  if (art_Art_PortId__inequiv(this->channel1_Id, other->channel1_Id)) return F;
  if (art_Art_PortId__inequiv(this->channel2_Id, other->channel2_Id)) return F;
  if (art_Art_PortId__inequiv(this->channel3_Id, other->channel3_Id)) return F;
  if (art_Art_PortId__inequiv(this->channel4_Id, other->channel4_Id)) return F;
  if (art_Art_PortId__inequiv(this->actuate_Id, other->actuate_Id)) return F;
  return T;
}

B RTS_Actuation_CoincidenceLogic_i_Operational_Api__ne(RTS_Actuation_CoincidenceLogic_i_Operational_Api this, RTS_Actuation_CoincidenceLogic_i_Operational_Api other);
B RTS_Actuation_CoincidenceLogic_i_Operational_Api__inequiv(RTS_Actuation_CoincidenceLogic_i_Operational_Api this, RTS_Actuation_CoincidenceLogic_i_Operational_Api other);

void RTS_Actuation_CoincidenceLogic_i_Operational_Api_string_(STACK_FRAME String result, RTS_Actuation_CoincidenceLogic_i_Operational_Api this) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_Api.scala", "RTS.Actuation.CoincidenceLogic_i_Operational_Api", "string", 0);
  String_string_(SF result, string("CoincidenceLogic_i_Operational_Api("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->channel1_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->channel2_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->channel3_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->channel4_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->actuate_Id);
  String_string_(SF result, string(")"));
}

void RTS_Actuation_CoincidenceLogic_i_Operational_Api_cprint(RTS_Actuation_CoincidenceLogic_i_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("CoincidenceLogic_i_Operational_Api("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->channel1_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->channel2_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->channel3_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->channel4_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->actuate_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Actuation_CoincidenceLogic_i_Operational_Api__is(STACK_FRAME void* this);
RTS_Actuation_CoincidenceLogic_i_Operational_Api RTS_Actuation_CoincidenceLogic_i_Operational_Api__as(STACK_FRAME void *this);

void RTS_Actuation_CoincidenceLogic_i_Operational_Api_apply(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Operational_Api this, art_Art_BridgeId id, art_Art_PortId channel1_Id, art_Art_PortId channel2_Id, art_Art_PortId channel3_Id, art_Art_PortId channel4_Id, art_Art_PortId actuate_Id) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_Api.scala", "RTS.Actuation.CoincidenceLogic_i_Operational_Api", "apply", 0);
  this->id = id;
  this->channel1_Id = channel1_Id;
  this->channel2_Id = channel2_Id;
  this->channel3_Id = channel3_Id;
  this->channel4_Id = channel4_Id;
  this->actuate_Id = actuate_Id;
}

inline B RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel1_extract_75_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_CoincidenceLogic_i_Operational_Api this, B *_v_75_44) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!RTS_Base_Types_Boolean_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_75_44 = RTS_Base_Types_Boolean_Payload_value_(RTS_Base_Types_Boolean_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel1_extract_76_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_CoincidenceLogic_i_Operational_Api this, art_DataContent *_v_76_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_76_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel1_extract_79_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_CoincidenceLogic_i_Operational_Api this) {
  return T;
}

void RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel1_(STACK_FRAME Option_8F4D4C result, RTS_Actuation_CoincidenceLogic_i_Operational_Api this) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_Api.scala", "RTS.Actuation.CoincidenceLogic_i_Operational_Api", "get_channel1", 0);

  sfUpdateLoc(74);
  Option_8F4D4C value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, RTS_Actuation_CoincidenceLogic_i_Operational_Api_channel1_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_74_46 = F;
  if (!match_74_46) {
    B v_75_44;
    match_74_46 = RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel1_extract_75_12_8E9F45(SF t_0, this, &v_75_44);
    if (match_74_46) {
      DeclNewSome_DB59FB(t_2);
      Some_DB59FB_apply(SF &t_2, v_75_44);
      value = (Option_8F4D4C) (&t_2);
    }
  }
  if (!match_74_46) {
    art_DataContent v_76_17;
    match_74_46 = RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel1_extract_76_12_8E9F45(SF t_0, this, &v_76_17);
    if (match_74_46) {

      sfUpdateLoc(77);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port channel1.  Expecting \'Base_Types.Boolean_Payload\' but received "));
        art_DataContent_string_(SF (String) &t_3, v_76_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF RTS_Actuation_CoincidenceLogic_i_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_7E20F8(t_4);
      None_7E20F8_apply(SF &t_4);
      value = (Option_8F4D4C) (&t_4);
    }
  }
  if (!match_74_46) {
    match_74_46 = RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel1_extract_79_12_8E9F45(SF t_0, this);
    if (match_74_46) {
      DeclNewNone_7E20F8(t_5);
      None_7E20F8_apply(SF &t_5);
      value = (Option_8F4D4C) (&t_5);
    }
  }
  sfAssert(match_74_46, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_8F4D4C));
  return;
}

inline B RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel2_extract_94_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_CoincidenceLogic_i_Operational_Api this, B *_v_94_44) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!RTS_Base_Types_Boolean_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_94_44 = RTS_Base_Types_Boolean_Payload_value_(RTS_Base_Types_Boolean_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel2_extract_95_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_CoincidenceLogic_i_Operational_Api this, art_DataContent *_v_95_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_95_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel2_extract_98_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_CoincidenceLogic_i_Operational_Api this) {
  return T;
}

void RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel2_(STACK_FRAME Option_8F4D4C result, RTS_Actuation_CoincidenceLogic_i_Operational_Api this) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_Api.scala", "RTS.Actuation.CoincidenceLogic_i_Operational_Api", "get_channel2", 0);

  sfUpdateLoc(93);
  Option_8F4D4C value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, RTS_Actuation_CoincidenceLogic_i_Operational_Api_channel2_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_93_46 = F;
  if (!match_93_46) {
    B v_94_44;
    match_93_46 = RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel2_extract_94_12_8E9F45(SF t_0, this, &v_94_44);
    if (match_93_46) {
      DeclNewSome_DB59FB(t_2);
      Some_DB59FB_apply(SF &t_2, v_94_44);
      value = (Option_8F4D4C) (&t_2);
    }
  }
  if (!match_93_46) {
    art_DataContent v_95_17;
    match_93_46 = RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel2_extract_95_12_8E9F45(SF t_0, this, &v_95_17);
    if (match_93_46) {

      sfUpdateLoc(96);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port channel2.  Expecting \'Base_Types.Boolean_Payload\' but received "));
        art_DataContent_string_(SF (String) &t_3, v_95_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF RTS_Actuation_CoincidenceLogic_i_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_7E20F8(t_4);
      None_7E20F8_apply(SF &t_4);
      value = (Option_8F4D4C) (&t_4);
    }
  }
  if (!match_93_46) {
    match_93_46 = RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel2_extract_98_12_8E9F45(SF t_0, this);
    if (match_93_46) {
      DeclNewNone_7E20F8(t_5);
      None_7E20F8_apply(SF &t_5);
      value = (Option_8F4D4C) (&t_5);
    }
  }
  sfAssert(match_93_46, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_8F4D4C));
  return;
}

inline B RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel3_extract_113_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_CoincidenceLogic_i_Operational_Api this, B *_v_113_44) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!RTS_Base_Types_Boolean_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_113_44 = RTS_Base_Types_Boolean_Payload_value_(RTS_Base_Types_Boolean_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel3_extract_114_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_CoincidenceLogic_i_Operational_Api this, art_DataContent *_v_114_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_114_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel3_extract_117_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_CoincidenceLogic_i_Operational_Api this) {
  return T;
}

void RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel3_(STACK_FRAME Option_8F4D4C result, RTS_Actuation_CoincidenceLogic_i_Operational_Api this) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_Api.scala", "RTS.Actuation.CoincidenceLogic_i_Operational_Api", "get_channel3", 0);

  sfUpdateLoc(112);
  Option_8F4D4C value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, RTS_Actuation_CoincidenceLogic_i_Operational_Api_channel3_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_112_46 = F;
  if (!match_112_46) {
    B v_113_44;
    match_112_46 = RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel3_extract_113_12_8E9F45(SF t_0, this, &v_113_44);
    if (match_112_46) {
      DeclNewSome_DB59FB(t_2);
      Some_DB59FB_apply(SF &t_2, v_113_44);
      value = (Option_8F4D4C) (&t_2);
    }
  }
  if (!match_112_46) {
    art_DataContent v_114_17;
    match_112_46 = RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel3_extract_114_12_8E9F45(SF t_0, this, &v_114_17);
    if (match_112_46) {

      sfUpdateLoc(115);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port channel3.  Expecting \'Base_Types.Boolean_Payload\' but received "));
        art_DataContent_string_(SF (String) &t_3, v_114_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF RTS_Actuation_CoincidenceLogic_i_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_7E20F8(t_4);
      None_7E20F8_apply(SF &t_4);
      value = (Option_8F4D4C) (&t_4);
    }
  }
  if (!match_112_46) {
    match_112_46 = RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel3_extract_117_12_8E9F45(SF t_0, this);
    if (match_112_46) {
      DeclNewNone_7E20F8(t_5);
      None_7E20F8_apply(SF &t_5);
      value = (Option_8F4D4C) (&t_5);
    }
  }
  sfAssert(match_112_46, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_8F4D4C));
  return;
}

inline B RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel4_extract_132_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_CoincidenceLogic_i_Operational_Api this, B *_v_132_44) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!RTS_Base_Types_Boolean_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_132_44 = RTS_Base_Types_Boolean_Payload_value_(RTS_Base_Types_Boolean_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel4_extract_133_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_CoincidenceLogic_i_Operational_Api this, art_DataContent *_v_133_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_133_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel4_extract_136_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, RTS_Actuation_CoincidenceLogic_i_Operational_Api this) {
  return T;
}

void RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel4_(STACK_FRAME Option_8F4D4C result, RTS_Actuation_CoincidenceLogic_i_Operational_Api this) {
  DeclNewStackFrame(caller, "CoincidenceLogic_i_Api.scala", "RTS.Actuation.CoincidenceLogic_i_Operational_Api", "get_channel4", 0);

  sfUpdateLoc(131);
  Option_8F4D4C value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, RTS_Actuation_CoincidenceLogic_i_Operational_Api_channel4_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_131_46 = F;
  if (!match_131_46) {
    B v_132_44;
    match_131_46 = RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel4_extract_132_12_8E9F45(SF t_0, this, &v_132_44);
    if (match_131_46) {
      DeclNewSome_DB59FB(t_2);
      Some_DB59FB_apply(SF &t_2, v_132_44);
      value = (Option_8F4D4C) (&t_2);
    }
  }
  if (!match_131_46) {
    art_DataContent v_133_17;
    match_131_46 = RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel4_extract_133_12_8E9F45(SF t_0, this, &v_133_17);
    if (match_131_46) {

      sfUpdateLoc(134);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port channel4.  Expecting \'Base_Types.Boolean_Payload\' but received "));
        art_DataContent_string_(SF (String) &t_3, v_133_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF RTS_Actuation_CoincidenceLogic_i_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_7E20F8(t_4);
      None_7E20F8_apply(SF &t_4);
      value = (Option_8F4D4C) (&t_4);
    }
  }
  if (!match_131_46) {
    match_131_46 = RTS_Actuation_CoincidenceLogic_i_Operational_Api_get_channel4_extract_136_12_8E9F45(SF t_0, this);
    if (match_131_46) {
      DeclNewNone_7E20F8(t_5);
      None_7E20F8_apply(SF &t_5);
      value = (Option_8F4D4C) (&t_5);
    }
  }
  sfAssert(match_131_46, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_8F4D4C));
  return;
}