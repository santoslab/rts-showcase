#include <all.h>

B RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_initialized_ = F;

union Option_06B15F _RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api;
union Option_73E809 _RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api;

void RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_init(STACK_FRAME_ONLY) {
  if (RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_initialized_) return;
  RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_initialized_ = T;
  DeclNewStackFrame(caller, "EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge.scala", "RTS.EventControl.EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge", "<init>", 0);
  RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_init_c_initialization_api(SF_LAST);
  RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_init_c_operational_api(SF_LAST);
}

Option_06B15F RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api(STACK_FRAME_ONLY) {
  RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_init(CALLER_LAST);
  return (Option_06B15F) &_RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api;
}

void RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api_a(STACK_FRAME Option_06B15F p_c_initialization_api) {
  RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_init(CALLER_LAST);
  Type_assign(&_RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api, p_c_initialization_api, sizeof(union Option_06B15F));
}

Option_73E809 RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api(STACK_FRAME_ONLY) {
  RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_init(CALLER_LAST);
  return (Option_73E809) &_RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api;
}

void RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api_a(STACK_FRAME Option_73E809 p_c_operational_api) {
  RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_init(CALLER_LAST);
  Type_assign(&_RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api, p_c_operational_api, sizeof(union Option_73E809));
}

// RTS.EventControl.EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge

B RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge__eq(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge this, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge other) {
  if (art_Art_BridgeId__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_0247A1__ne((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->manualActuatorInput1, (art_Port_C0524D) &other->manualActuatorInput1)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->manualActuatorInput2, (art_Port_C0524D) &other->manualActuatorInput2)) return F;
  return T;
}

B RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge__equiv(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge this, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge other) {
  if (art_Bridge_Ports__inequiv((art_Bridge_Ports) &this->ports, (art_Bridge_Ports) &other->ports)) return F;
  if (RTS_EventControl_EventControlMockThread_i_Initialization_Api__inequiv((RTS_EventControl_EventControlMockThread_i_Initialization_Api) &this->initialization_api, (RTS_EventControl_EventControlMockThread_i_Initialization_Api) &other->initialization_api)) return F;
  if (RTS_EventControl_EventControlMockThread_i_Operational_Api__inequiv((RTS_EventControl_EventControlMockThread_i_Operational_Api) &this->operational_api, (RTS_EventControl_EventControlMockThread_i_Operational_Api) &other->operational_api)) return F;
  if (art_Bridge_EntryPoints__inequiv((art_Bridge_EntryPoints) &this->entryPoints, (art_Bridge_EntryPoints) &other->entryPoints)) return F;
  if (art_Art_BridgeId__inequiv(this->id, other->id)) return F;
  if (String__inequiv((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__inequiv((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_0247A1__inequiv((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->manualActuatorInput1, (art_Port_C0524D) &other->manualActuatorInput1)) return F;
  if (art_Port_C0524D__inequiv((art_Port_C0524D) &this->manualActuatorInput2, (art_Port_C0524D) &other->manualActuatorInput2)) return F;
  return T;
}

B RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge__ne(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge this, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge other);
B RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge__inequiv(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge this, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge other);

void RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_string_(STACK_FRAME String result, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge this) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge.scala", "RTS.EventControl.EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge", "string", 0);
  String_string_(SF result, string("EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  Option_0247A1_string_(SF result, (Option_0247A1) &this->dispatchTriggers);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->manualActuatorInput1);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->manualActuatorInput2);
  String_string_(SF result, string(")"));
}

void RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_cprint(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  Option_0247A1_cprint((Option_0247A1) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->manualActuatorInput1, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->manualActuatorInput2, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge__is(STACK_FRAME void* this);
RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge__as(STACK_FRAME void *this);

void RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_apply(STACK_FRAME RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge this, art_Art_BridgeId id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_0247A1 dispatchTriggers, art_Port_C0524D manualActuatorInput1, art_Port_C0524D manualActuatorInput2) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge.scala", "RTS.EventControl.EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_0247A1));
  Type_assign(&this->manualActuatorInput1, manualActuatorInput1, sizeof(struct art_Port_C0524D));
  Type_assign(&this->manualActuatorInput2, manualActuatorInput2, sizeof(struct art_Port_C0524D));
  {
    sfUpdateLoc(22);
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 0;
    STATIC_ASSERT(2 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 2;
    IS_820232_up(&t_2, 0, (art_UPort) RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_manualActuatorInput1_(this));
    IS_820232_up(&t_2, 1, (art_UPort) RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_manualActuatorInput2_(this));
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
    sfUpdateLoc(33);
    {

      sfUpdateLoc(34);
      RTS_EventControl_EventControlMockThread_i_Initialization_Api api;
      DeclNewRTS_EventControl_EventControlMockThread_i_Initialization_Api(t_5);
      RTS_EventControl_EventControlMockThread_i_Initialization_Api_apply(SF &t_5, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_id_(this), art_Port_C0524D_id_(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_manualActuatorInput1_(this)), art_Port_C0524D_id_(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_manualActuatorInput2_(this)));
      api = (RTS_EventControl_EventControlMockThread_i_Initialization_Api) (&t_5);

      sfUpdateLoc(39);
      {
        DeclNewSome_4347C6(t_6);
        Some_4347C6_apply(SF &t_6, (RTS_EventControl_EventControlMockThread_i_Initialization_Api) api);
        RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api_a(SF (Option_06B15F) (&t_6));
      }
      Type_assign(&this->initialization_api, api, sizeof(struct RTS_EventControl_EventControlMockThread_i_Initialization_Api));
    }
  }
  {
    sfUpdateLoc(43);
    {

      sfUpdateLoc(44);
      RTS_EventControl_EventControlMockThread_i_Operational_Api api;
      DeclNewRTS_EventControl_EventControlMockThread_i_Operational_Api(t_7);
      RTS_EventControl_EventControlMockThread_i_Operational_Api_apply(SF &t_7, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_id_(this), art_Port_C0524D_id_(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_manualActuatorInput1_(this)), art_Port_C0524D_id_(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_manualActuatorInput2_(this)));
      api = (RTS_EventControl_EventControlMockThread_i_Operational_Api) (&t_7);

      sfUpdateLoc(49);
      {
        DeclNewSome_7FC307(t_8);
        Some_7FC307_apply(SF &t_8, (RTS_EventControl_EventControlMockThread_i_Operational_Api) api);
        RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api_a(SF (Option_73E809) (&t_8));
      }
      Type_assign(&this->operational_api, api, sizeof(struct RTS_EventControl_EventControlMockThread_i_Operational_Api));
    }
  }
  {
    sfUpdateLoc(54);
    DeclNewRTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_EntryPoints(t_9);
    RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_EntryPoints_apply(SF &t_9, RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_id_(this), art_Port_C0524D_id_(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_manualActuatorInput1_(this)), art_Port_C0524D_id_(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_manualActuatorInput2_(this)), (Option_0247A1) RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_dispatchTriggers_(this), (RTS_EventControl_EventControlMockThread_i_Initialization_Api) RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_initialization_api_(this), (RTS_EventControl_EventControlMockThread_i_Operational_Api) RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_operational_api_(this));
    Type_assign(&this->entryPoints, (&t_9), sizeof(struct RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_EntryPoints));
  }
}

void RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_init_c_initialization_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(68);
  DeclNewNone_2939E3(t_0);
  None_2939E3_apply(SF &t_0);
  Type_assign(&_RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_initialization_api, (&t_0), sizeof(struct None_2939E3));
};

void RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_init_c_operational_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(69);
  DeclNewNone_1A60DD(t_1);
  None_1A60DD_apply(SF &t_1);
  Type_assign(&_RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_c_operational_api, (&t_1), sizeof(struct None_1A60DD));
};