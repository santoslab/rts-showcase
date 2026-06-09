#include <types.h>

size_t sizeOf(Type t) {
  TYPE type = t->type;
  switch (type) {
    case TIS_948B60: return sizeof(struct IS_948B60); // IS[Z, String]
    case TRTS_Base_Types_Boolean_Payload: return sizeof(struct RTS_Base_Types_Boolean_Payload); // RTS.Base_Types.Boolean_Payload
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
    "String",
    "art.Empty"
  };
  return strings[((Type) type)->type];
}