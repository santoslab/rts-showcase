#ifndef SIREUM_TYPE_H_RTS_Base_Types_Unsigned_64_Payload
#define SIREUM_TYPE_H_RTS_Base_Types_Unsigned_64_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Base_Types.Unsigned_64_Payload
#include <type-org_sireum_U64.h>

typedef struct RTS_Base_Types_Unsigned_64_Payload *RTS_Base_Types_Unsigned_64_Payload;
struct RTS_Base_Types_Unsigned_64_Payload {
  TYPE type;
  U64 value;
};

#define DeclNewRTS_Base_Types_Unsigned_64_Payload(x) struct RTS_Base_Types_Unsigned_64_Payload x = { .type = TRTS_Base_Types_Unsigned_64_Payload }

#ifdef __cplusplus
}
#endif

#endif