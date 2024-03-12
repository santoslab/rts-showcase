#ifndef SIREUM_TYPE_H_RTS_Base_Types_Boolean_Payload
#define SIREUM_TYPE_H_RTS_Base_Types_Boolean_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Base_Types.Boolean_Payload

typedef struct RTS_Base_Types_Boolean_Payload *RTS_Base_Types_Boolean_Payload;
struct RTS_Base_Types_Boolean_Payload {
  TYPE type;
  B value;
};

#define DeclNewRTS_Base_Types_Boolean_Payload(x) struct RTS_Base_Types_Boolean_Payload x = { .type = TRTS_Base_Types_Boolean_Payload }

#ifdef __cplusplus
}
#endif

#endif