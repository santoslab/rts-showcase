#ifndef SIREUM_TYPE_H_RTS_Base_Types_Integer_8_Payload
#define SIREUM_TYPE_H_RTS_Base_Types_Integer_8_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Base_Types.Integer_8_Payload
#include <type-org_sireum_S8.h>

typedef struct RTS_Base_Types_Integer_8_Payload *RTS_Base_Types_Integer_8_Payload;
struct RTS_Base_Types_Integer_8_Payload {
  TYPE type;
  S8 value;
};

#define DeclNewRTS_Base_Types_Integer_8_Payload(x) struct RTS_Base_Types_Integer_8_Payload x = { .type = TRTS_Base_Types_Integer_8_Payload }

#ifdef __cplusplus
}
#endif

#endif