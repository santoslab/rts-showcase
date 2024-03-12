#include <types.h>

size_t sizeOf(Type t) {
  TYPE type = t->type;
  switch (type) {
    case TTuple2_04A4F6: return sizeof(struct Tuple2_04A4F6); // ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))
    case TTuple12_3FBE62: return sizeof(struct Tuple12_3FBE62); // (B, B, B, B, B, B, B, B, B, B, B, B)
    case TIS_0C7B5E: return sizeof(struct IS_0C7B5E); // IS[Z, ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))]
    case TIS_948B60: return sizeof(struct IS_948B60); // IS[Z, String]
    case TIS_D10119: return sizeof(struct IS_D10119); // IS[Z, art.Art.PortId]
    case TIS_820232: return sizeof(struct IS_820232); // IS[Z, art.UPort]
    case TMBox2_37E193: return sizeof(struct MBox2_37E193); // MBox2[art.Art.PortId, Option[art.DataContent]]
    case TMBox2_43CC67: return sizeof(struct MBox2_43CC67); // MBox2[art.Art.PortId, art.DataContent]
    case TMS_83D5EB: return sizeof(struct MS_83D5EB); // MS[Z, Option[art.Bridge]]
    case TNone_CFD2B0: return sizeof(struct None_CFD2B0); // None[IS[Z, art.Art.PortId]]
    case TNone_8D6171: return sizeof(struct None_8D6171); // None[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]
    case TNone_174952: return sizeof(struct None_174952); // None[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]
    case TNone_734370: return sizeof(struct None_734370); // None[art.Bridge]
    case TNone_964667: return sizeof(struct None_964667); // None[art.DataContent]
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
    case TRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api: return sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api); // RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api
    case TRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api: return sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api); // RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api
    case TRTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge: return sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge); // RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge
    case TRTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints: return sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints); // RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.EntryPoints
    case TSome_B05425: return sizeof(struct Some_B05425); // Some[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]
    case TSome_51E221: return sizeof(struct Some_51E221); // Some[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]
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
    "((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))",
    "(B, B, B, B, B, B, B, B, B, B, B, B)",
    "IS[Z, ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))]",
    "IS[Z, String]",
    "IS[Z, art.Art.PortId]",
    "IS[Z, art.UPort]",
    "MBox2[art.Art.PortId, Option[art.DataContent]]",
    "MBox2[art.Art.PortId, art.DataContent]",
    "MS[Z, Option[art.Bridge]]",
    "None[IS[Z, art.Art.PortId]]",
    "None[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]",
    "None[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]",
    "None[art.Bridge]",
    "None[art.DataContent]",
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
    "RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api",
    "RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api",
    "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge",
    "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.EntryPoints",
    "Some[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]",
    "Some[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]",
    "Some[art.DataContent]",
    "String",
    "art.Bridge.Ports",
    "art.DispatchPropertyProtocol.Periodic",
    "art.Empty",
    "art.Port[B]"
  };
  return strings[((Type) type)->type];
}