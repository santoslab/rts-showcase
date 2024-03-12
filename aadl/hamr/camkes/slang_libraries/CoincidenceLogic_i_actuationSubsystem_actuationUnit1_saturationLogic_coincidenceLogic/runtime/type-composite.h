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
  TNone_080F67 = (int) 0x080F6772, // None[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]
  TNone_37A019 = (int) 0x37A019F6, // None[RTS.Actuation.CoincidenceLogic_i_Operational_Api]
  TNone_734370 = (int) 0x73437068, // None[art.Bridge]
  TNone_964667 = (int) 0x9646678F, // None[art.DataContent]
  TRTS_Actuation_CoincidenceLogic_i_Initialization_Api = (int) 0x35761A35, // RTS.Actuation.CoincidenceLogic_i_Initialization_Api
  TRTS_Actuation_CoincidenceLogic_i_Operational_Api = (int) 0xFFD88A2E, // RTS.Actuation.CoincidenceLogic_i_Operational_Api
  TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge = (int) 0x33AA2A3B, // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge
  TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_EntryPoints = (int) 0xBC0A4833, // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge.EntryPoints
  TRTS_Base_Types_Boolean_Payload = (int) 0xC071EADA, // RTS.Base_Types.Boolean_Payload
  TRTS_Base_Types_Character_Payload = (int) 0xE88549A8, // RTS.Base_Types.Character_Payload
  TRTS_Base_Types_Float_32_Payload = (int) 0x40C2F7F9, // RTS.Base_Types.Float_32_Payload
  TRTS_Base_Types_Float_64_Payload = (int) 0x23E223F7, // RTS.Base_Types.Float_64_Payload
  TRTS_Base_Types_Float_Payload = (int) 0x7759FD45, // RTS.Base_Types.Float_Payload
  TRTS_Base_Types_Integer_16_Payload = (int) 0x9DA3615B, // RTS.Base_Types.Integer_16_Payload
  TRTS_Base_Types_Integer_32_Payload = (int) 0xA2FEDD02, // RTS.Base_Types.Integer_32_Payload
  TRTS_Base_Types_Integer_64_Payload = (int) 0x8B734781, // RTS.Base_Types.Integer_64_Payload
  TRTS_Base_Types_Integer_8_Payload = (int) 0xE88DCC9B, // RTS.Base_Types.Integer_8_Payload
  TRTS_Base_Types_Integer_Payload = (int) 0x88624D89, // RTS.Base_Types.Integer_Payload
  TRTS_Base_Types_String_Payload = (int) 0xD5577A13, // RTS.Base_Types.String_Payload
  TRTS_Base_Types_Unsigned_16_Payload = (int) 0x44643DD5, // RTS.Base_Types.Unsigned_16_Payload
  TRTS_Base_Types_Unsigned_32_Payload = (int) 0xC43ACA50, // RTS.Base_Types.Unsigned_32_Payload
  TRTS_Base_Types_Unsigned_64_Payload = (int) 0x2A6C7548, // RTS.Base_Types.Unsigned_64_Payload
  TRTS_Base_Types_Unsigned_8_Payload = (int) 0x19D685DC, // RTS.Base_Types.Unsigned_8_Payload
  TSome_DB59FB = (int) 0xDB59FB5F, // Some[B]
  TSome_7A7168 = (int) 0x7A7168D3, // Some[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]
  TSome_B99BC9 = (int) 0xB99BC98D, // Some[RTS.Actuation.CoincidenceLogic_i_Operational_Api]
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