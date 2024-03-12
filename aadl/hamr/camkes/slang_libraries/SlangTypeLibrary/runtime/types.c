#include <types.h>

size_t sizeOf(Type t) {
  TYPE type = t->type;
  switch (type) {
    case TIS_948B60: return sizeof(struct IS_948B60); // IS[Z, String]
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
    case TString: return sizeof(struct String); // String
    case Tart_Empty: return sizeof(struct art_Empty); // art.Empty
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
    "String",
    "art.Empty"
  };
  return strings[((Type) type)->type];
}