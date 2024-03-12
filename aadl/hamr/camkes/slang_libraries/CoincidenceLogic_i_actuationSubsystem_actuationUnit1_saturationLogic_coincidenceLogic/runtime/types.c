#include <types.h>

size_t sizeOf(Type t) {
  TYPE type = t->type;
  switch (type) {
    case TIS_948B60: return sizeof(struct IS_948B60); // IS[Z, String]
    case TIS_D10119: return sizeof(struct IS_D10119); // IS[Z, art.Art.PortId]
    case TIS_820232: return sizeof(struct IS_820232); // IS[Z, art.UPort]
    case TMBox2_37E193: return sizeof(struct MBox2_37E193); // MBox2[art.Art.PortId, Option[art.DataContent]]
    case TMBox2_43CC67: return sizeof(struct MBox2_43CC67); // MBox2[art.Art.PortId, art.DataContent]
    case TMS_83D5EB: return sizeof(struct MS_83D5EB); // MS[Z, Option[art.Bridge]]
    case TNone_7E20F8: return sizeof(struct None_7E20F8); // None[B]
    case TNone_CFD2B0: return sizeof(struct None_CFD2B0); // None[IS[Z, art.Art.PortId]]
    case TNone_080F67: return sizeof(struct None_080F67); // None[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]
    case TNone_37A019: return sizeof(struct None_37A019); // None[RTS.Actuation.CoincidenceLogic_i_Operational_Api]
    case TNone_734370: return sizeof(struct None_734370); // None[art.Bridge]
    case TNone_964667: return sizeof(struct None_964667); // None[art.DataContent]
    case TRTS_Actuation_CoincidenceLogic_i_Initialization_Api: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_Initialization_Api); // RTS.Actuation.CoincidenceLogic_i_Initialization_Api
    case TRTS_Actuation_CoincidenceLogic_i_Operational_Api: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_Operational_Api); // RTS.Actuation.CoincidenceLogic_i_Operational_Api
    case TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge); // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge
    case TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_EntryPoints: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_EntryPoints); // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge.EntryPoints
    case TRTS_Base_Types_Boolean_Payload: return sizeof(struct RTS_Base_Types_Boolean_Payload); // RTS.Base_Types.Boolean_Payload
    case TRTS_Base_Types_Character_Payload: return sizeof(struct RTS_Base_Types_Character_Payload); // RTS.Base_Types.Character_Payload
    case TRTS_Base_Types_Float_32_Payload: return sizeof(struct RTS_Base_Types_Float_32_Payload); // RTS.Base_Types.Float_32_Payload
    case TRTS_Base_Types_Float_64_Payload: return sizeof(struct RTS_Base_Types_Float_64_Payload); // RTS.Base_Types.Float_64_Payload
    case TRTS_Base_Types_Float_Payload: return sizeof(struct RTS_Base_Types_Float_Payload); // RTS.Base_Types.Float_Payload
    case TRTS_Base_Types_Integer_16_Payload: return sizeof(struct RTS_Base_Types_Integer_16_Payload); // RTS.Base_Types.Integer_16_Payload
    case TRTS_Base_Types_Integer_32_Payload: return sizeof(struct RTS_Base_Types_Integer_32_Payload); // RTS.Base_Types.Integer_32_Payload
    case TRTS_Base_Types_Integer_64_Payload: return sizeof(struct RTS_Base_Types_Integer_64_Payload); // RTS.Base_Types.Integer_64_Payload
    case TRTS_Base_Types_Integer_8_Payload: return sizeof(struct RTS_Base_Types_Integer_8_Payload); // RTS.Base_Types.Integer_8_Payload
    case TRTS_Base_Types_Integer_Payload: return sizeof(struct RTS_Base_Types_Integer_Payload); // RTS.Base_Types.Integer_Payload
    case TRTS_Base_Types_String_Payload: return sizeof(struct RTS_Base_Types_String_Payload); // RTS.Base_Types.String_Payload
    case TRTS_Base_Types_Unsigned_16_Payload: return sizeof(struct RTS_Base_Types_Unsigned_16_Payload); // RTS.Base_Types.Unsigned_16_Payload
    case TRTS_Base_Types_Unsigned_32_Payload: return sizeof(struct RTS_Base_Types_Unsigned_32_Payload); // RTS.Base_Types.Unsigned_32_Payload
    case TRTS_Base_Types_Unsigned_64_Payload: return sizeof(struct RTS_Base_Types_Unsigned_64_Payload); // RTS.Base_Types.Unsigned_64_Payload
    case TRTS_Base_Types_Unsigned_8_Payload: return sizeof(struct RTS_Base_Types_Unsigned_8_Payload); // RTS.Base_Types.Unsigned_8_Payload
    case TSome_DB59FB: return sizeof(struct Some_DB59FB); // Some[B]
    case TSome_7A7168: return sizeof(struct Some_7A7168); // Some[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]
    case TSome_B99BC9: return sizeof(struct Some_B99BC9); // Some[RTS.Actuation.CoincidenceLogic_i_Operational_Api]
    case TSome_D29615: return sizeof(struct Some_D29615); // Some[art.DataContent]
    case TString: return sizeof(struct String); // String
    case Tart_Bridge_Ports: return sizeof(struct art_Bridge_Ports); // art.Bridge.Ports
    case Tart_DispatchPropertyProtocol_Periodic: return sizeof(struct art_DispatchPropertyProtocol_Periodic); // art.DispatchPropertyProtocol.Periodic
    case Tart_Empty: return sizeof(struct art_Empty); // art.Empty
    case Tart_Port_C0524D: return sizeof(struct art_Port_C0524D); // art.Port[B]
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_assign(void *dest, void *src, size_t destSize) {
  Type srcType = (Type) src;
  if (srcType->type == TString) {
    String_assign((String) dest, (String) src);
    return;
  }
  size_t srcSize = sizeOf(srcType);
  memcpy(dest, src, srcSize);
  memset(((char *) dest) + srcSize, 0, destSize - srcSize);
}

char *TYPE_string_(void *type) {
  static char *strings[] = {
    "IS[Z, String]",
    "IS[Z, art.Art.PortId]",
    "IS[Z, art.UPort]",
    "MBox2[art.Art.PortId, Option[art.DataContent]]",
    "MBox2[art.Art.PortId, art.DataContent]",
    "MS[Z, Option[art.Bridge]]",
    "None[B]",
    "None[IS[Z, art.Art.PortId]]",
    "None[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]",
    "None[RTS.Actuation.CoincidenceLogic_i_Operational_Api]",
    "None[art.Bridge]",
    "None[art.DataContent]",
    "RTS.Actuation.CoincidenceLogic_i_Initialization_Api",
    "RTS.Actuation.CoincidenceLogic_i_Operational_Api",
    "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge",
    "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge.EntryPoints",
    "RTS.Base_Types.Boolean_Payload",
    "RTS.Base_Types.Character_Payload",
    "RTS.Base_Types.Float_32_Payload",
    "RTS.Base_Types.Float_64_Payload",
    "RTS.Base_Types.Float_Payload",
    "RTS.Base_Types.Integer_16_Payload",
    "RTS.Base_Types.Integer_32_Payload",
    "RTS.Base_Types.Integer_64_Payload",
    "RTS.Base_Types.Integer_8_Payload",
    "RTS.Base_Types.Integer_Payload",
    "RTS.Base_Types.String_Payload",
    "RTS.Base_Types.Unsigned_16_Payload",
    "RTS.Base_Types.Unsigned_32_Payload",
    "RTS.Base_Types.Unsigned_64_Payload",
    "RTS.Base_Types.Unsigned_8_Payload",
    "Some[B]",
    "Some[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]",
    "Some[RTS.Actuation.CoincidenceLogic_i_Operational_Api]",
    "Some[art.DataContent]",
    "String",
    "art.Bridge.Ports",
    "art.DispatchPropertyProtocol.Periodic",
    "art.Empty",
    "art.Port[B]"
  };
  return strings[((Type) type)->type];
}