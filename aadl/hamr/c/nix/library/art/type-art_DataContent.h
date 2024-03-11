#ifndef SIREUM_TYPE_H_art_DataContent
#define SIREUM_TYPE_H_art_DataContent

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.DataContent

#include <type-art_Empty.h>
#include <type-RTS_Base_Types_Boolean_Payload.h>
#include <type-RTS_Base_Types_Integer_Payload.h>
#include <type-RTS_Base_Types_Integer_8_Payload.h>
#include <type-RTS_Base_Types_Integer_16_Payload.h>
#include <type-RTS_Base_Types_Integer_32_Payload.h>
#include <type-RTS_Base_Types_Integer_64_Payload.h>
#include <type-RTS_Base_Types_Unsigned_8_Payload.h>
#include <type-RTS_Base_Types_Unsigned_16_Payload.h>
#include <type-RTS_Base_Types_Unsigned_32_Payload.h>
#include <type-RTS_Base_Types_Unsigned_64_Payload.h>
#include <type-RTS_Base_Types_Float_Payload.h>
#include <type-RTS_Base_Types_Float_32_Payload.h>
#include <type-RTS_Base_Types_Float_64_Payload.h>
#include <type-RTS_Base_Types_Character_Payload.h>
#include <type-RTS_Base_Types_String_Payload.h>

typedef union art_DataContent *art_DataContent;
union art_DataContent {
  TYPE type;
  struct art_Empty art_Empty;
  struct RTS_Base_Types_Boolean_Payload RTS_Base_Types_Boolean_Payload;
  struct RTS_Base_Types_Integer_Payload RTS_Base_Types_Integer_Payload;
  struct RTS_Base_Types_Integer_8_Payload RTS_Base_Types_Integer_8_Payload;
  struct RTS_Base_Types_Integer_16_Payload RTS_Base_Types_Integer_16_Payload;
  struct RTS_Base_Types_Integer_32_Payload RTS_Base_Types_Integer_32_Payload;
  struct RTS_Base_Types_Integer_64_Payload RTS_Base_Types_Integer_64_Payload;
  struct RTS_Base_Types_Unsigned_8_Payload RTS_Base_Types_Unsigned_8_Payload;
  struct RTS_Base_Types_Unsigned_16_Payload RTS_Base_Types_Unsigned_16_Payload;
  struct RTS_Base_Types_Unsigned_32_Payload RTS_Base_Types_Unsigned_32_Payload;
  struct RTS_Base_Types_Unsigned_64_Payload RTS_Base_Types_Unsigned_64_Payload;
  struct RTS_Base_Types_Float_Payload RTS_Base_Types_Float_Payload;
  struct RTS_Base_Types_Float_32_Payload RTS_Base_Types_Float_32_Payload;
  struct RTS_Base_Types_Float_64_Payload RTS_Base_Types_Float_64_Payload;
  struct RTS_Base_Types_Character_Payload RTS_Base_Types_Character_Payload;
  struct RTS_Base_Types_String_Payload RTS_Base_Types_String_Payload;
};

#define DeclNewart_DataContent(x) union art_DataContent x = { 0 }

#ifdef __cplusplus
}
#endif

#endif