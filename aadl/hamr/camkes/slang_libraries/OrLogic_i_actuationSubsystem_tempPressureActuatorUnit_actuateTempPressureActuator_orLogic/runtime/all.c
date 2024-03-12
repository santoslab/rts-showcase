#include <all.h>

B Type__eq(void *t1, void *t2) {
  TYPE type = ((Type) t1)->type;
  if (type != ((Type) t2)->type) return F;
  switch (type) {
    case TIS_948B60: return IS_948B60__eq((IS_948B60) t1, (IS_948B60) t2);
    case TIS_D10119: return IS_D10119__eq((IS_D10119) t1, (IS_D10119) t2);
    case TIS_820232: return IS_820232__eq((IS_820232) t1, (IS_820232) t2);
    case TMBox2_37E193: return MBox2_37E193__eq((MBox2_37E193) t1, (MBox2_37E193) t2);
    case TMBox2_43CC67: return MBox2_43CC67__eq((MBox2_43CC67) t1, (MBox2_43CC67) t2);
    case TMS_83D5EB: return MS_83D5EB__eq((MS_83D5EB) t1, (MS_83D5EB) t2);
    case TNone_7E20F8: return None_7E20F8__eq((None_7E20F8) t1, (None_7E20F8) t2);
    case TNone_CFD2B0: return None_CFD2B0__eq((None_CFD2B0) t1, (None_CFD2B0) t2);
    case TNone_1FE67C: return None_1FE67C__eq((None_1FE67C) t1, (None_1FE67C) t2);
    case TNone_1AA45D: return None_1AA45D__eq((None_1AA45D) t1, (None_1AA45D) t2);
    case TNone_734370: return None_734370__eq((None_734370) t1, (None_734370) t2);
    case TNone_964667: return None_964667__eq((None_964667) t1, (None_964667) t2);
    case TRTS_Actuation_OrLogic_i_Initialization_Api: return RTS_Actuation_OrLogic_i_Initialization_Api__eq((RTS_Actuation_OrLogic_i_Initialization_Api) t1, (RTS_Actuation_OrLogic_i_Initialization_Api) t2);
    case TRTS_Actuation_OrLogic_i_Operational_Api: return RTS_Actuation_OrLogic_i_Operational_Api__eq((RTS_Actuation_OrLogic_i_Operational_Api) t1, (RTS_Actuation_OrLogic_i_Operational_Api) t2);
    case TRTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge: return RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge__eq((RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge) t1, (RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge) t2);
    case TRTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints: return RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints__eq((RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints) t1, (RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints) t2);
    case TRTS_Base_Types_Boolean_Payload: return RTS_Base_Types_Boolean_Payload__eq((RTS_Base_Types_Boolean_Payload) t1, (RTS_Base_Types_Boolean_Payload) t2);
    case TRTS_Base_Types_Character_Payload: return RTS_Base_Types_Character_Payload__eq((RTS_Base_Types_Character_Payload) t1, (RTS_Base_Types_Character_Payload) t2);
    case TRTS_Base_Types_Float_32_Payload: return RTS_Base_Types_Float_32_Payload__eq((RTS_Base_Types_Float_32_Payload) t1, (RTS_Base_Types_Float_32_Payload) t2);
    case TRTS_Base_Types_Float_64_Payload: return RTS_Base_Types_Float_64_Payload__eq((RTS_Base_Types_Float_64_Payload) t1, (RTS_Base_Types_Float_64_Payload) t2);
    case TRTS_Base_Types_Float_Payload: return RTS_Base_Types_Float_Payload__eq((RTS_Base_Types_Float_Payload) t1, (RTS_Base_Types_Float_Payload) t2);
    case TRTS_Base_Types_Integer_16_Payload: return RTS_Base_Types_Integer_16_Payload__eq((RTS_Base_Types_Integer_16_Payload) t1, (RTS_Base_Types_Integer_16_Payload) t2);
    case TRTS_Base_Types_Integer_32_Payload: return RTS_Base_Types_Integer_32_Payload__eq((RTS_Base_Types_Integer_32_Payload) t1, (RTS_Base_Types_Integer_32_Payload) t2);
    case TRTS_Base_Types_Integer_64_Payload: return RTS_Base_Types_Integer_64_Payload__eq((RTS_Base_Types_Integer_64_Payload) t1, (RTS_Base_Types_Integer_64_Payload) t2);
    case TRTS_Base_Types_Integer_8_Payload: return RTS_Base_Types_Integer_8_Payload__eq((RTS_Base_Types_Integer_8_Payload) t1, (RTS_Base_Types_Integer_8_Payload) t2);
    case TRTS_Base_Types_Integer_Payload: return RTS_Base_Types_Integer_Payload__eq((RTS_Base_Types_Integer_Payload) t1, (RTS_Base_Types_Integer_Payload) t2);
    case TRTS_Base_Types_String_Payload: return RTS_Base_Types_String_Payload__eq((RTS_Base_Types_String_Payload) t1, (RTS_Base_Types_String_Payload) t2);
    case TRTS_Base_Types_Unsigned_16_Payload: return RTS_Base_Types_Unsigned_16_Payload__eq((RTS_Base_Types_Unsigned_16_Payload) t1, (RTS_Base_Types_Unsigned_16_Payload) t2);
    case TRTS_Base_Types_Unsigned_32_Payload: return RTS_Base_Types_Unsigned_32_Payload__eq((RTS_Base_Types_Unsigned_32_Payload) t1, (RTS_Base_Types_Unsigned_32_Payload) t2);
    case TRTS_Base_Types_Unsigned_64_Payload: return RTS_Base_Types_Unsigned_64_Payload__eq((RTS_Base_Types_Unsigned_64_Payload) t1, (RTS_Base_Types_Unsigned_64_Payload) t2);
    case TRTS_Base_Types_Unsigned_8_Payload: return RTS_Base_Types_Unsigned_8_Payload__eq((RTS_Base_Types_Unsigned_8_Payload) t1, (RTS_Base_Types_Unsigned_8_Payload) t2);
    case TSome_DB59FB: return Some_DB59FB__eq((Some_DB59FB) t1, (Some_DB59FB) t2);
    case TSome_824C23: return Some_824C23__eq((Some_824C23) t1, (Some_824C23) t2);
    case TSome_6FC748: return Some_6FC748__eq((Some_6FC748) t1, (Some_6FC748) t2);
    case TSome_D29615: return Some_D29615__eq((Some_D29615) t1, (Some_D29615) t2);
    case TString: return String__eq((String) t1, (String) t2);
    case Tart_Bridge_Ports: return art_Bridge_Ports__eq((art_Bridge_Ports) t1, (art_Bridge_Ports) t2);
    case Tart_DispatchPropertyProtocol_Periodic: return art_DispatchPropertyProtocol_Periodic__eq((art_DispatchPropertyProtocol_Periodic) t1, (art_DispatchPropertyProtocol_Periodic) t2);
    case Tart_Empty: return art_Empty__eq((art_Empty) t1, (art_Empty) t2);
    case Tart_Port_C0524D: return art_Port_C0524D__eq((art_Port_C0524D) t1, (art_Port_C0524D) t2);
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

B Type__equiv(void *t1, void *t2) {
  TYPE type = ((Type) t1)->type;
  if (type != ((Type) t2)->type) return F;
  switch (type) {
    case TIS_948B60: return IS_948B60__equiv((IS_948B60) t1, (IS_948B60) t2);
    case TIS_D10119: return IS_D10119__equiv((IS_D10119) t1, (IS_D10119) t2);
    case TIS_820232: return IS_820232__equiv((IS_820232) t1, (IS_820232) t2);
    case TMBox2_37E193: return MBox2_37E193__equiv((MBox2_37E193) t1, (MBox2_37E193) t2);
    case TMBox2_43CC67: return MBox2_43CC67__equiv((MBox2_43CC67) t1, (MBox2_43CC67) t2);
    case TMS_83D5EB: return MS_83D5EB__equiv((MS_83D5EB) t1, (MS_83D5EB) t2);
    case TNone_7E20F8: return None_7E20F8__equiv((None_7E20F8) t1, (None_7E20F8) t2);
    case TNone_CFD2B0: return None_CFD2B0__equiv((None_CFD2B0) t1, (None_CFD2B0) t2);
    case TNone_1FE67C: return None_1FE67C__equiv((None_1FE67C) t1, (None_1FE67C) t2);
    case TNone_1AA45D: return None_1AA45D__equiv((None_1AA45D) t1, (None_1AA45D) t2);
    case TNone_734370: return None_734370__equiv((None_734370) t1, (None_734370) t2);
    case TNone_964667: return None_964667__equiv((None_964667) t1, (None_964667) t2);
    case TRTS_Actuation_OrLogic_i_Initialization_Api: return RTS_Actuation_OrLogic_i_Initialization_Api__equiv((RTS_Actuation_OrLogic_i_Initialization_Api) t1, (RTS_Actuation_OrLogic_i_Initialization_Api) t2);
    case TRTS_Actuation_OrLogic_i_Operational_Api: return RTS_Actuation_OrLogic_i_Operational_Api__equiv((RTS_Actuation_OrLogic_i_Operational_Api) t1, (RTS_Actuation_OrLogic_i_Operational_Api) t2);
    case TRTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge: return RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge__equiv((RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge) t1, (RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge) t2);
    case TRTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints: return RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints__equiv((RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints) t1, (RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints) t2);
    case TRTS_Base_Types_Boolean_Payload: return RTS_Base_Types_Boolean_Payload__equiv((RTS_Base_Types_Boolean_Payload) t1, (RTS_Base_Types_Boolean_Payload) t2);
    case TRTS_Base_Types_Character_Payload: return RTS_Base_Types_Character_Payload__equiv((RTS_Base_Types_Character_Payload) t1, (RTS_Base_Types_Character_Payload) t2);
    case TRTS_Base_Types_Float_32_Payload: return RTS_Base_Types_Float_32_Payload__equiv((RTS_Base_Types_Float_32_Payload) t1, (RTS_Base_Types_Float_32_Payload) t2);
    case TRTS_Base_Types_Float_64_Payload: return RTS_Base_Types_Float_64_Payload__equiv((RTS_Base_Types_Float_64_Payload) t1, (RTS_Base_Types_Float_64_Payload) t2);
    case TRTS_Base_Types_Float_Payload: return RTS_Base_Types_Float_Payload__equiv((RTS_Base_Types_Float_Payload) t1, (RTS_Base_Types_Float_Payload) t2);
    case TRTS_Base_Types_Integer_16_Payload: return RTS_Base_Types_Integer_16_Payload__equiv((RTS_Base_Types_Integer_16_Payload) t1, (RTS_Base_Types_Integer_16_Payload) t2);
    case TRTS_Base_Types_Integer_32_Payload: return RTS_Base_Types_Integer_32_Payload__equiv((RTS_Base_Types_Integer_32_Payload) t1, (RTS_Base_Types_Integer_32_Payload) t2);
    case TRTS_Base_Types_Integer_64_Payload: return RTS_Base_Types_Integer_64_Payload__equiv((RTS_Base_Types_Integer_64_Payload) t1, (RTS_Base_Types_Integer_64_Payload) t2);
    case TRTS_Base_Types_Integer_8_Payload: return RTS_Base_Types_Integer_8_Payload__equiv((RTS_Base_Types_Integer_8_Payload) t1, (RTS_Base_Types_Integer_8_Payload) t2);
    case TRTS_Base_Types_Integer_Payload: return RTS_Base_Types_Integer_Payload__equiv((RTS_Base_Types_Integer_Payload) t1, (RTS_Base_Types_Integer_Payload) t2);
    case TRTS_Base_Types_String_Payload: return RTS_Base_Types_String_Payload__equiv((RTS_Base_Types_String_Payload) t1, (RTS_Base_Types_String_Payload) t2);
    case TRTS_Base_Types_Unsigned_16_Payload: return RTS_Base_Types_Unsigned_16_Payload__equiv((RTS_Base_Types_Unsigned_16_Payload) t1, (RTS_Base_Types_Unsigned_16_Payload) t2);
    case TRTS_Base_Types_Unsigned_32_Payload: return RTS_Base_Types_Unsigned_32_Payload__equiv((RTS_Base_Types_Unsigned_32_Payload) t1, (RTS_Base_Types_Unsigned_32_Payload) t2);
    case TRTS_Base_Types_Unsigned_64_Payload: return RTS_Base_Types_Unsigned_64_Payload__equiv((RTS_Base_Types_Unsigned_64_Payload) t1, (RTS_Base_Types_Unsigned_64_Payload) t2);
    case TRTS_Base_Types_Unsigned_8_Payload: return RTS_Base_Types_Unsigned_8_Payload__equiv((RTS_Base_Types_Unsigned_8_Payload) t1, (RTS_Base_Types_Unsigned_8_Payload) t2);
    case TSome_DB59FB: return Some_DB59FB__equiv((Some_DB59FB) t1, (Some_DB59FB) t2);
    case TSome_824C23: return Some_824C23__equiv((Some_824C23) t1, (Some_824C23) t2);
    case TSome_6FC748: return Some_6FC748__equiv((Some_6FC748) t1, (Some_6FC748) t2);
    case TSome_D29615: return Some_D29615__equiv((Some_D29615) t1, (Some_D29615) t2);
    case TString: return String__equiv((String) t1, (String) t2);
    case Tart_Bridge_Ports: return art_Bridge_Ports__equiv((art_Bridge_Ports) t1, (art_Bridge_Ports) t2);
    case Tart_DispatchPropertyProtocol_Periodic: return art_DispatchPropertyProtocol_Periodic__equiv((art_DispatchPropertyProtocol_Periodic) t1, (art_DispatchPropertyProtocol_Periodic) t2);
    case Tart_Empty: return art_Empty__equiv((art_Empty) t1, (art_Empty) t2);
    case Tart_Port_C0524D: return art_Port_C0524D__equiv((art_Port_C0524D) t1, (art_Port_C0524D) t2);
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_cprint(void *this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  TYPE type = ((Type) this)->type;
  switch (type) {
    case TIS_948B60: IS_948B60_cprint((IS_948B60) this, isOut); return;
    case TIS_D10119: IS_D10119_cprint((IS_D10119) this, isOut); return;
    case TIS_820232: IS_820232_cprint((IS_820232) this, isOut); return;
    case TMBox2_37E193: MBox2_37E193_cprint((MBox2_37E193) this, isOut); return;
    case TMBox2_43CC67: MBox2_43CC67_cprint((MBox2_43CC67) this, isOut); return;
    case TMS_83D5EB: MS_83D5EB_cprint((MS_83D5EB) this, isOut); return;
    case TNone_7E20F8: None_7E20F8_cprint((None_7E20F8) this, isOut); return;
    case TNone_CFD2B0: None_CFD2B0_cprint((None_CFD2B0) this, isOut); return;
    case TNone_1FE67C: None_1FE67C_cprint((None_1FE67C) this, isOut); return;
    case TNone_1AA45D: None_1AA45D_cprint((None_1AA45D) this, isOut); return;
    case TNone_734370: None_734370_cprint((None_734370) this, isOut); return;
    case TNone_964667: None_964667_cprint((None_964667) this, isOut); return;
    case TRTS_Actuation_OrLogic_i_Initialization_Api: RTS_Actuation_OrLogic_i_Initialization_Api_cprint((RTS_Actuation_OrLogic_i_Initialization_Api) this, isOut); return;
    case TRTS_Actuation_OrLogic_i_Operational_Api: RTS_Actuation_OrLogic_i_Operational_Api_cprint((RTS_Actuation_OrLogic_i_Operational_Api) this, isOut); return;
    case TRTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge: RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_cprint((RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge) this, isOut); return;
    case TRTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints: RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints_cprint((RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints) this, isOut); return;
    case TRTS_Base_Types_Boolean_Payload: RTS_Base_Types_Boolean_Payload_cprint((RTS_Base_Types_Boolean_Payload) this, isOut); return;
    case TRTS_Base_Types_Character_Payload: RTS_Base_Types_Character_Payload_cprint((RTS_Base_Types_Character_Payload) this, isOut); return;
    case TRTS_Base_Types_Float_32_Payload: RTS_Base_Types_Float_32_Payload_cprint((RTS_Base_Types_Float_32_Payload) this, isOut); return;
    case TRTS_Base_Types_Float_64_Payload: RTS_Base_Types_Float_64_Payload_cprint((RTS_Base_Types_Float_64_Payload) this, isOut); return;
    case TRTS_Base_Types_Float_Payload: RTS_Base_Types_Float_Payload_cprint((RTS_Base_Types_Float_Payload) this, isOut); return;
    case TRTS_Base_Types_Integer_16_Payload: RTS_Base_Types_Integer_16_Payload_cprint((RTS_Base_Types_Integer_16_Payload) this, isOut); return;
    case TRTS_Base_Types_Integer_32_Payload: RTS_Base_Types_Integer_32_Payload_cprint((RTS_Base_Types_Integer_32_Payload) this, isOut); return;
    case TRTS_Base_Types_Integer_64_Payload: RTS_Base_Types_Integer_64_Payload_cprint((RTS_Base_Types_Integer_64_Payload) this, isOut); return;
    case TRTS_Base_Types_Integer_8_Payload: RTS_Base_Types_Integer_8_Payload_cprint((RTS_Base_Types_Integer_8_Payload) this, isOut); return;
    case TRTS_Base_Types_Integer_Payload: RTS_Base_Types_Integer_Payload_cprint((RTS_Base_Types_Integer_Payload) this, isOut); return;
    case TRTS_Base_Types_String_Payload: RTS_Base_Types_String_Payload_cprint((RTS_Base_Types_String_Payload) this, isOut); return;
    case TRTS_Base_Types_Unsigned_16_Payload: RTS_Base_Types_Unsigned_16_Payload_cprint((RTS_Base_Types_Unsigned_16_Payload) this, isOut); return;
    case TRTS_Base_Types_Unsigned_32_Payload: RTS_Base_Types_Unsigned_32_Payload_cprint((RTS_Base_Types_Unsigned_32_Payload) this, isOut); return;
    case TRTS_Base_Types_Unsigned_64_Payload: RTS_Base_Types_Unsigned_64_Payload_cprint((RTS_Base_Types_Unsigned_64_Payload) this, isOut); return;
    case TRTS_Base_Types_Unsigned_8_Payload: RTS_Base_Types_Unsigned_8_Payload_cprint((RTS_Base_Types_Unsigned_8_Payload) this, isOut); return;
    case TSome_DB59FB: Some_DB59FB_cprint((Some_DB59FB) this, isOut); return;
    case TSome_824C23: Some_824C23_cprint((Some_824C23) this, isOut); return;
    case TSome_6FC748: Some_6FC748_cprint((Some_6FC748) this, isOut); return;
    case TSome_D29615: Some_D29615_cprint((Some_D29615) this, isOut); return;
    case TString: String_cprint((String) this, isOut); return;
    case Tart_Bridge_Ports: art_Bridge_Ports_cprint((art_Bridge_Ports) this, isOut); return;
    case Tart_DispatchPropertyProtocol_Periodic: art_DispatchPropertyProtocol_Periodic_cprint((art_DispatchPropertyProtocol_Periodic) this, isOut); return;
    case Tart_Empty: art_Empty_cprint((art_Empty) this, isOut); return;
    case Tart_Port_C0524D: art_Port_C0524D_cprint((art_Port_C0524D) this, isOut); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
  #endif
}

void Type_string_(STACK_FRAME String result, void *this) {
  TYPE type = ((Type) this)->type;
  switch (type) {
    case TIS_948B60: IS_948B60_string_(CALLER result, (IS_948B60) this); return;
    case TIS_D10119: IS_D10119_string_(CALLER result, (IS_D10119) this); return;
    case TIS_820232: IS_820232_string_(CALLER result, (IS_820232) this); return;
    case TMBox2_37E193: MBox2_37E193_string_(CALLER result, (MBox2_37E193) this); return;
    case TMBox2_43CC67: MBox2_43CC67_string_(CALLER result, (MBox2_43CC67) this); return;
    case TMS_83D5EB: MS_83D5EB_string_(CALLER result, (MS_83D5EB) this); return;
    case TNone_7E20F8: None_7E20F8_string_(CALLER result, (None_7E20F8) this); return;
    case TNone_CFD2B0: None_CFD2B0_string_(CALLER result, (None_CFD2B0) this); return;
    case TNone_1FE67C: None_1FE67C_string_(CALLER result, (None_1FE67C) this); return;
    case TNone_1AA45D: None_1AA45D_string_(CALLER result, (None_1AA45D) this); return;
    case TNone_734370: None_734370_string_(CALLER result, (None_734370) this); return;
    case TNone_964667: None_964667_string_(CALLER result, (None_964667) this); return;
    case TRTS_Actuation_OrLogic_i_Initialization_Api: RTS_Actuation_OrLogic_i_Initialization_Api_string_(CALLER result, (RTS_Actuation_OrLogic_i_Initialization_Api) this); return;
    case TRTS_Actuation_OrLogic_i_Operational_Api: RTS_Actuation_OrLogic_i_Operational_Api_string_(CALLER result, (RTS_Actuation_OrLogic_i_Operational_Api) this); return;
    case TRTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge: RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_string_(CALLER result, (RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge) this); return;
    case TRTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints: RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints_string_(CALLER result, (RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints) this); return;
    case TRTS_Base_Types_Boolean_Payload: RTS_Base_Types_Boolean_Payload_string_(CALLER result, (RTS_Base_Types_Boolean_Payload) this); return;
    case TRTS_Base_Types_Character_Payload: RTS_Base_Types_Character_Payload_string_(CALLER result, (RTS_Base_Types_Character_Payload) this); return;
    case TRTS_Base_Types_Float_32_Payload: RTS_Base_Types_Float_32_Payload_string_(CALLER result, (RTS_Base_Types_Float_32_Payload) this); return;
    case TRTS_Base_Types_Float_64_Payload: RTS_Base_Types_Float_64_Payload_string_(CALLER result, (RTS_Base_Types_Float_64_Payload) this); return;
    case TRTS_Base_Types_Float_Payload: RTS_Base_Types_Float_Payload_string_(CALLER result, (RTS_Base_Types_Float_Payload) this); return;
    case TRTS_Base_Types_Integer_16_Payload: RTS_Base_Types_Integer_16_Payload_string_(CALLER result, (RTS_Base_Types_Integer_16_Payload) this); return;
    case TRTS_Base_Types_Integer_32_Payload: RTS_Base_Types_Integer_32_Payload_string_(CALLER result, (RTS_Base_Types_Integer_32_Payload) this); return;
    case TRTS_Base_Types_Integer_64_Payload: RTS_Base_Types_Integer_64_Payload_string_(CALLER result, (RTS_Base_Types_Integer_64_Payload) this); return;
    case TRTS_Base_Types_Integer_8_Payload: RTS_Base_Types_Integer_8_Payload_string_(CALLER result, (RTS_Base_Types_Integer_8_Payload) this); return;
    case TRTS_Base_Types_Integer_Payload: RTS_Base_Types_Integer_Payload_string_(CALLER result, (RTS_Base_Types_Integer_Payload) this); return;
    case TRTS_Base_Types_String_Payload: RTS_Base_Types_String_Payload_string_(CALLER result, (RTS_Base_Types_String_Payload) this); return;
    case TRTS_Base_Types_Unsigned_16_Payload: RTS_Base_Types_Unsigned_16_Payload_string_(CALLER result, (RTS_Base_Types_Unsigned_16_Payload) this); return;
    case TRTS_Base_Types_Unsigned_32_Payload: RTS_Base_Types_Unsigned_32_Payload_string_(CALLER result, (RTS_Base_Types_Unsigned_32_Payload) this); return;
    case TRTS_Base_Types_Unsigned_64_Payload: RTS_Base_Types_Unsigned_64_Payload_string_(CALLER result, (RTS_Base_Types_Unsigned_64_Payload) this); return;
    case TRTS_Base_Types_Unsigned_8_Payload: RTS_Base_Types_Unsigned_8_Payload_string_(CALLER result, (RTS_Base_Types_Unsigned_8_Payload) this); return;
    case TSome_DB59FB: Some_DB59FB_string_(CALLER result, (Some_DB59FB) this); return;
    case TSome_824C23: Some_824C23_string_(CALLER result, (Some_824C23) this); return;
    case TSome_6FC748: Some_6FC748_string_(CALLER result, (Some_6FC748) this); return;
    case TSome_D29615: Some_D29615_string_(CALLER result, (Some_D29615) this); return;
    case TString: String_string_(CALLER result, (String) this); return;
    case Tart_Bridge_Ports: art_Bridge_Ports_string_(CALLER result, (art_Bridge_Ports) this); return;
    case Tart_DispatchPropertyProtocol_Periodic: art_DispatchPropertyProtocol_Periodic_string_(CALLER result, (art_DispatchPropertyProtocol_Periodic) this); return;
    case Tart_Empty: art_Empty_string_(CALLER result, (art_Empty) this); return;
    case Tart_Port_C0524D: art_Port_C0524D_string_(CALLER result, (art_Port_C0524D) this); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

