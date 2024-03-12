#ifndef SIREUM_TYPE_H_RTS_Base_Types_Integer_16_Payload
#define SIREUM_TYPE_H_RTS_Base_Types_Integer_16_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Base_Types.Integer_16_Payload
#include <type-org_sireum_S16.h>

typedef struct RTS_Base_Types_Integer_16_Payload *RTS_Base_Types_Integer_16_Payload;
struct RTS_Base_Types_Integer_16_Payload {
  TYPE type;
  S16 value;
};

#define DeclNewRTS_Base_Types_Integer_16_Payload(x) struct RTS_Base_Types_Integer_16_Payload x = { .type = TRTS_Base_Types_Integer_16_Payload }

#ifdef __cplusplus
}
#endif

#endif