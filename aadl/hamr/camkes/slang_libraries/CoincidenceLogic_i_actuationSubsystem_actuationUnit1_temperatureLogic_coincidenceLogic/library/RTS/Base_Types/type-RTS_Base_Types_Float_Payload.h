#ifndef SIREUM_TYPE_H_RTS_Base_Types_Float_Payload
#define SIREUM_TYPE_H_RTS_Base_Types_Float_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Base_Types.Float_Payload

typedef struct RTS_Base_Types_Float_Payload *RTS_Base_Types_Float_Payload;
struct RTS_Base_Types_Float_Payload {
  TYPE type;
  R value;
};

#define DeclNewRTS_Base_Types_Float_Payload(x) struct RTS_Base_Types_Float_Payload x = { .type = TRTS_Base_Types_Float_Payload }

#ifdef __cplusplus
}
#endif

#endif