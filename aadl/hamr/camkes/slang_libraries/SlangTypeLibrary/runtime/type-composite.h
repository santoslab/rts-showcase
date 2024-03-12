#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stackframe.h>

typedef enum {
  TIS_948B60 = (int) 0x948B6070, // IS[Z, String]
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
  TString = (int) 0xB6F8E8F6, // String
  Tart_Empty = (int) 0x49C5E24D, // art.Empty
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