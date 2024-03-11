#ifndef SIREUM_TYPE_H_RTS_Base_Types_Float_64_Payload
#define SIREUM_TYPE_H_RTS_Base_Types_Float_64_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Base_Types.Float_64_Payload

typedef struct RTS_Base_Types_Float_64_Payload *RTS_Base_Types_Float_64_Payload;
struct RTS_Base_Types_Float_64_Payload {
  TYPE type;
  F64 value;
};

#define DeclNewRTS_Base_Types_Float_64_Payload(x) struct RTS_Base_Types_Float_64_Payload x = { .type = TRTS_Base_Types_Float_64_Payload }

#ifdef __cplusplus
}
#endif

#endif