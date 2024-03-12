#ifndef SIREUM_TYPE_H_RTS_Base_Types_String_Payload
#define SIREUM_TYPE_H_RTS_Base_Types_String_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Base_Types.String_Payload

typedef struct RTS_Base_Types_String_Payload *RTS_Base_Types_String_Payload;
struct RTS_Base_Types_String_Payload {
  TYPE type;
  struct StaticString value;
};

#define DeclNewRTS_Base_Types_String_Payload(x) struct RTS_Base_Types_String_Payload x = { .type = TRTS_Base_Types_String_Payload }

#ifdef __cplusplus
}
#endif

#endif