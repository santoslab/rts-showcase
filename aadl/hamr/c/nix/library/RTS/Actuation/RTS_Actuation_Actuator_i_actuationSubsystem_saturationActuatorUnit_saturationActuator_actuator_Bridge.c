#include <all.h>

B RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_initialized_ = F;

union Option_DB2CFC _RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_initialization_api;
union Option_4ACA0C _RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api;

void RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_init(STACK_FRAME_ONLY) {
  if (RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_initialized_) return;
  RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_initialized_ = T;
  DeclNewStackFrame(caller, "Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.scala", "RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge", "<init>", 0);
  RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_init_c_initialization_api(SF_LAST);
  RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_init_c_operational_api(SF_LAST);
}

Option_DB2CFC RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_initialization_api(STACK_FRAME_ONLY) {
  RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_init(CALLER_LAST);
  return (Option_DB2CFC) &_RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_initialization_api;
}

void RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_initialization_api_a(STACK_FRAME Option_DB2CFC p_c_initialization_api) {
  RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_init(CALLER_LAST);
  Type_assign(&_RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_initialization_api, p_c_initialization_api, sizeof(union Option_DB2CFC));
}

Option_4ACA0C RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api(STACK_FRAME_ONLY) {
  RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_init(CALLER_LAST);
  return (Option_4ACA0C) &_RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api;
}

void RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api_a(STACK_FRAME Option_4ACA0C p_c_operational_api) {
  RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_init(CALLER_LAST);
  Type_assign(&_RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api, p_c_operational_api, sizeof(union Option_4ACA0C));
}

// RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge

B RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge__eq(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge this, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge other) {
  if (art_Art_BridgeId__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_0247A1__ne((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->input, (art_Port_C0524D) &other->input)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->manualActuatorInput, (art_Port_C0524D) &other->manualActuatorInput)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->output, (art_Port_C0524D) &other->output)) return F;
  return T;
}

B RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge__equiv(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge this, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge other) {
  if (art_Bridge_Ports__inequiv((art_Bridge_Ports) &this->ports, (art_Bridge_Ports) &other->ports)) return F;
  if (RTS_Actuation_Actuator_i_Initialization_Api__inequiv((RTS_Actuation_Actuator_i_Initialization_Api) &this->initialization_api, (RTS_Actuation_Actuator_i_Initialization_Api) &other->initialization_api)) return F;
  if (RTS_Actuation_Actuator_i_Operational_Api__inequiv((RTS_Actuation_Actuator_i_Operational_Api) &this->operational_api, (RTS_Actuation_Actuator_i_Operational_Api) &other->operational_api)) return F;
  if (art_Bridge_EntryPoints__inequiv((art_Bridge_EntryPoints) &this->entryPoints, (art_Bridge_EntryPoints) &other->entryPoints)) return F;
  if (art_Art_BridgeId__inequiv(this->id, other->id)) return F;
  if (String__inequiv((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__inequiv((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_0247A1__inequiv((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->input, (art_Port_C0524D) &other->input)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->manualActuatorInput, (art_Port_C0524D) &other->manualActuatorInput)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->output, (art_Port_C0524D) &other->output)) return F;
  return T;
}

B RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge__ne(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge this, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge other);
B RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge__inequiv(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge this, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge other);

void RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_string_(STACK_FRAME String result, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge this) {
  DeclNewStackFrame(caller, "Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.scala", "RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge", "string", 0);
  String_string_(SF result, string("Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  Option_0247A1_string_(SF result, (Option_0247A1) &this->dispatchTriggers);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->input);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->manualActuatorInput);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->output);
  String_string_(SF result, string(")"));
}

void RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_cprint(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  Option_0247A1_cprint((Option_0247A1) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->input, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->manualActuatorInput, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->output, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge__is(STACK_FRAME void* this);
RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge__as(STACK_FRAME void *this);

void RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_apply(STACK_FRAME RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge this, art_Art_BridgeId id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_0247A1 dispatchTriggers, art_Port_C0524D input, art_Port_C0524D manualActuatorInput, art_Port_C0524D output) {
  DeclNewStackFrame(caller, "Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.scala", "RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_0247A1));
  Type_assign(&this->input, input, sizeof(struct art_Port_C0524D));
  Type_assign(&this->manualActuatorInput, manualActuatorInput, sizeof(struct art_Port_C0524D));
  Type_assign(&this->output, output, sizeof(struct art_Port_C0524D));
  {
    sfUpdateLoc(23);
    STATIC_ASSERT(2 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 2;
    IS_820232_up(&t_1, 0, (art_UPort) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_input_(this));
    IS_820232_up(&t_1, 1, (art_UPort) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_manualActuatorInput_(this));
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 1;
    IS_820232_up(&t_2, 0, (art_UPort) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_output_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 0;
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 0;
    DeclNewart_Bridge_Ports(t_0);
    art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4));
    Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  }
  {
    sfUpdateLoc(34);
    {

      sfUpdateLoc(35);
      RTS_Actuation_Actuator_i_Initialization_Api api;
      DeclNewRTS_Actuation_Actuator_i_Initialization_Api(t_5);
      RTS_Actuation_Actuator_i_Initialization_Api_apply(SF &t_5, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_id_(this), art_Port_C0524D_id_(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_input_(this)), art_Port_C0524D_id_(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_manualActuatorInput_(this)), art_Port_C0524D_id_(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_output_(this)));
      api = (RTS_Actuation_Actuator_i_Initialization_Api) (&t_5);

      sfUpdateLoc(41);
      {
        DeclNewSome_E8C0F3(t_6);
        Some_E8C0F3_apply(SF &t_6, (RTS_Actuation_Actuator_i_Initialization_Api) api);
        RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_initialization_api_a(SF (Option_DB2CFC) (&t_6));
      }
      Type_assign(&this->initialization_api, api, sizeof(struct RTS_Actuation_Actuator_i_Initialization_Api));
    }
  }
  {
    sfUpdateLoc(45);
    {

      sfUpdateLoc(46);
      RTS_Actuation_Actuator_i_Operational_Api api;
      DeclNewRTS_Actuation_Actuator_i_Operational_Api(t_7);
      RTS_Actuation_Actuator_i_Operational_Api_apply(SF &t_7, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_id_(this), art_Port_C0524D_id_(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_input_(this)), art_Port_C0524D_id_(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_manualActuatorInput_(this)), art_Port_C0524D_id_(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_output_(this)));
      api = (RTS_Actuation_Actuator_i_Operational_Api) (&t_7);

      sfUpdateLoc(52);
      {
        DeclNewSome_42319A(t_8);
        Some_42319A_apply(SF &t_8, (RTS_Actuation_Actuator_i_Operational_Api) api);
        RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api_a(SF (Option_4ACA0C) (&t_8));
      }
      Type_assign(&this->operational_api, api, sizeof(struct RTS_Actuation_Actuator_i_Operational_Api));
    }
  }
  {
    sfUpdateLoc(57);
    DeclNewRTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints(t_9);
    RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints_apply(SF &t_9, RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_id_(this), art_Port_C0524D_id_(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_input_(this)), art_Port_C0524D_id_(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_manualActuatorInput_(this)), art_Port_C0524D_id_(RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_output_(this)), (Option_0247A1) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_dispatchTriggers_(this), (RTS_Actuation_Actuator_i_Initialization_Api) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_initialization_api_(this), (RTS_Actuation_Actuator_i_Operational_Api) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_operational_api_(this));
    Type_assign(&this->entryPoints, (&t_9), sizeof(struct RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints));
  }
}

void RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_init_c_initialization_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(72);
  DeclNewNone_8BED90(t_0);
  None_8BED90_apply(SF &t_0);
  Type_assign(&_RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_initialization_api, (&t_0), sizeof(struct None_8BED90));
};

void RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_init_c_operational_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(73);
  DeclNewNone_52D9AF(t_1);
  None_52D9AF_apply(SF &t_1);
  Type_assign(&_RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_c_operational_api, (&t_1), sizeof(struct None_52D9AF));
};