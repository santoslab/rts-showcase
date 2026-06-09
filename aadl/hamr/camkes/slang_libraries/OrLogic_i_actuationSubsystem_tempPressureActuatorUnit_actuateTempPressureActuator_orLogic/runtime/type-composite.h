#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stackframe.h>

typedef enum {
  TIS_948B60 = (int) 0x948B6070, // IS[Z, String]
  TIS_D10119 = (int) 0xD101198A, // IS[Z, art.Art.PortId]
  TIS_820232 = (int) 0x82023297, // IS[Z, art.UPort]
  TMBox2_37E193 = (int) 0x37E19307, // MBox2[art.Art.PortId, Option[art.DataContent]]
  TMBox2_43CC67 = (int) 0x43CC672A, // MBox2[art.Art.PortId, art.DataContent]
  TMS_83D5EB = (int) 0x83D5EBFF, // MS[Z, Option[art.Bridge]]
  TNone_7E20F8 = (int) 0x7E20F899, // None[B]
  TNone_CFD2B0 = (int) 0xCFD2B0C7, // None[IS[Z, art.Art.PortId]]
  TNone_1FE67C = (int) 0x1FE67CD0, // None[RTS.Actuation.OrLogic_i_Initialization_Api]
  TNone_1AA45D = (int) 0x1AA45D34, // None[RTS.Actuation.OrLogic_i_Operational_Api]
  TNone_734370 = (int) 0x73437068, // None[art.Bridge]
  TNone_964667 = (int) 0x9646678F, // None[art.DataContent]
  TRTS_Actuation_OrLogic_i_Initialization_Api = (int) 0xF4FFC19B, // RTS.Actuation.OrLogic_i_Initialization_Api
  TRTS_Actuation_OrLogic_i_Operational_Api = (int) 0x3583C719, // RTS.Actuation.OrLogic_i_Operational_Api
  TRTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge = (int) 0xD872ACB6, // RTS.Actuation.OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge
  TRTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints = (int) 0x30B970E5, // RTS.Actuation.OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge.EntryPoints
  TRTS_Base_Types_Boolean_Payload = (int) 0xC071EADA, // RTS.Base_Types.Boolean_Payload
  TSome_DB59FB = (int) 0xDB59FB5F, // Some[B]
  TSome_824C23 = (int) 0x824C2366, // Some[RTS.Actuation.OrLogic_i_Initialization_Api]
  TSome_6FC748 = (int) 0x6FC74821, // Some[RTS.Actuation.OrLogic_i_Operational_Api]
  TSome_D29615 = (int) 0xD29615C0, // Some[art.DataContent]
  TString = (int) 0xB6F8E8F6, // String
  Tart_Bridge_Ports = (int) 0x14139493, // art.Bridge.Ports
  Tart_DispatchPropertyProtocol_Periodic = (int) 0x4C652984, // art.DispatchPropertyProtocol.Periodic
  Tart_Empty = (int) 0x49C5E24D, // art.Empty
  Tart_Port_C0524D = (int) 0xC0524D76, // art.Port[B]
} TYPE;

char *TYPE_string_(void *type);

typedef struct Type *Type;
struct Type {
  TYPE type;
};

#define MaxString 256

typedef struct String *String;
struct String {
  TYPE type;
  Z size;
  C value[];
};

struct StaticString {
  TYPE type;
  Z size;
  C value[MaxString + 1];
};

#define string(v) ((String) &((struct { TYPE type; Z size; C value[sizeof(v)]; }) { TString, Z_C(sizeof (v) - 1), v }))
#define DeclNewString(x) struct StaticString x = { .type = TString }

#ifdef __cplusplus
}
#endif

#endif