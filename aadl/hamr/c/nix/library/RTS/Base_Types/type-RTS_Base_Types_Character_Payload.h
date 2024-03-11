#ifndef SIREUM_TYPE_H_RTS_Base_Types_Character_Payload
#define SIREUM_TYPE_H_RTS_Base_Types_Character_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Base_Types.Character_Payload

typedef struct RTS_Base_Types_Character_Payload *RTS_Base_Types_Character_Payload;
struct RTS_Base_Types_Character_Payload {
  TYPE type;
  C value;
};

#define DeclNewRTS_Base_Types_Character_Payload(x) struct RTS_Base_Types_Character_Payload x = { .type = TRTS_Base_Types_Character_Payload }

#ifdef __cplusplus
}
#endif

#endif