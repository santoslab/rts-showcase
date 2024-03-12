#ifndef SIREUM_GEN_H
#define SIREUM_GEN_H

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>
#include <type-RTS_Base_Types.h>
#include <type-RTS_Base_Types_Boolean_Payload.h>
#include <type-RTS_Base_Types_Character_Payload.h>
#include <type-RTS_Base_Types_Float_32_Payload.h>
#include <type-RTS_Base_Types_Float_64_Payload.h>
#include <type-RTS_Base_Types_Float_Payload.h>
#include <type-RTS_Base_Types_Integer_16_Payload.h>
#include <type-RTS_Base_Types_Integer_32_Payload.h>
#include <type-RTS_Base_Types_Integer_64_Payload.h>
#include <type-RTS_Base_Types_Integer_8_Payload.h>
#include <type-RTS_Base_Types_Integer_Payload.h>
#include <type-RTS_Base_Types_String_Payload.h>
#include <type-RTS_Base_Types_Unsigned_16_Payload.h>
#include <type-RTS_Base_Types_Unsigned_32_Payload.h>
#include <type-RTS_Base_Types_Unsigned_64_Payload.h>
#include <type-RTS_Base_Types_Unsigned_8_Payload.h>
#include <type-RTS_EventControl_EventControlMockThread_i_Api.h>
#include <type-RTS_EventControl_EventControlMockThread_i_Initialization_Api.h>
#include <type-RTS_EventControl_EventControlMockThread_i_Operational_Api.h>
#include <type-RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread.h>
#include <type-RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge.h>
#include <type-RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_EntryPoints.h>
#include <type-RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_seL4Nix.h>
#include <type-RTS_EventControlMockThread_i_eventControlMock_eventControlMockThread_eventControlMockThread.h>
#include <type-RTS_TranspilerToucher.h>
#include <type-art_Art.h>
#include <type-art_Art_BridgeId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Bridge.h>
#include <type-art_Bridge_EntryPoints.h>
#include <type-art_Bridge_Ports.h>
#include <type-art_DataContent.h>
#include <type-art_DispatchPropertyProtocol.h>
#include <type-art_DispatchPropertyProtocol_Periodic.h>
#include <type-art_Empty.h>
#include <type-art_PortMode_Type.h>
#include <type-art_UPort.h>
#include <type-art_art_Port_C0524D.h>
#include <type-org_sireum_IS_7DA5C1.h>
#include <type-org_sireum_IS_820232.h>
#include <type-org_sireum_IS_948B60.h>
#include <type-org_sireum_IS_D10119.h>
#include <type-org_sireum_MBox2_37E193.h>
#include <type-org_sireum_MBox2_43CC67.h>
#include <type-org_sireum_MS_83D5EB.h>
#include <type-org_sireum_None.h>
#include <type-org_sireum_None_1A60DD.h>
#include <type-org_sireum_None_2939E3.h>
#include <type-org_sireum_None_734370.h>
#include <type-org_sireum_None_964667.h>
#include <type-org_sireum_None_CFD2B0.h>
#include <type-org_sireum_Nothing.h>
#include <type-org_sireum_Option_0247A1.h>
#include <type-org_sireum_Option_06B15F.h>
#include <type-org_sireum_Option_73E809.h>
#include <type-org_sireum_Option_7BBFBE.h>
#include <type-org_sireum_Option_8E9F45.h>
#include <type-org_sireum_S16.h>
#include <type-org_sireum_S32.h>
#include <type-org_sireum_S64.h>
#include <type-org_sireum_S8.h>
#include <type-org_sireum_Some.h>
#include <type-org_sireum_Some_4347C6.h>
#include <type-org_sireum_Some_7FC307.h>
#include <type-org_sireum_Some_D29615.h>
#include <type-org_sireum_Tuple2_0862A0.h>
#include <type-org_sireum_U16.h>
#include <type-org_sireum_U32.h>
#include <type-org_sireum_U64.h>
#include <type-org_sireum_U8.h>

#if defined(static_assert)
#define STATIC_ASSERT static_assert
#define GLOBAL_STATIC_ASSERT(a, b, c) static_assert(b, c)
#else
#define STATIC_ASSERT(pred, explanation); {char assert=1/(pred);(void)assert;}
#define GLOBAL_STATIC_ASSERT(unique, pred, explanation); namespace ASSERTION {char unique=1/(pred);}
#endif

size_t sizeOf(Type t);
void Type_assign(void *dest, void *src, size_t destSize);

#ifdef __cplusplus
}
#endif

#endif