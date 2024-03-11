#ifndef SIREUM_TYPE_H_RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge
#define SIREUM_TYPE_H_RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge
#include <type-art_Art_BridgeId.h>
#include <type-art_DispatchPropertyProtocol.h>
#include <type-org_sireum_Option_0247A1.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_Bridge_Ports.h>
#include <type-RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api.h>
#include <type-RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge *RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge;
struct RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union Option_0247A1 dispatchTriggers;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Port_C0524D unit1_temperatureLogic_channel1;
  struct art_Port_C0524D unit1_temperatureLogic_channel2;
  struct art_Port_C0524D unit1_temperatureLogic_channel3;
  struct art_Port_C0524D unit1_temperatureLogic_channel4;
  struct art_Port_C0524D unit1_pressureLogic_channel1;
  struct art_Port_C0524D unit1_pressureLogic_channel2;
  struct art_Port_C0524D unit1_pressureLogic_channel3;
  struct art_Port_C0524D unit1_pressureLogic_channel4;
  struct art_Port_C0524D unit1_saturationLogic_channel1;
  struct art_Port_C0524D unit1_saturationLogic_channel2;
  struct art_Port_C0524D unit1_saturationLogic_channel3;
  struct art_Port_C0524D unit1_saturationLogic_channel4;
  struct art_Port_C0524D unit2_temperatureLogic_channel1;
  struct art_Port_C0524D unit2_temperatureLogic_channel2;
  struct art_Port_C0524D unit2_temperatureLogic_channel3;
  struct art_Port_C0524D unit2_temperatureLogic_channel4;
  struct art_Port_C0524D unit2_pressureLogic_channel1;
  struct art_Port_C0524D unit2_pressureLogic_channel2;
  struct art_Port_C0524D unit2_pressureLogic_channel3;
  struct art_Port_C0524D unit2_pressureLogic_channel4;
  struct art_Port_C0524D unit2_saturationLogic_channel1;
  struct art_Port_C0524D unit2_saturationLogic_channel2;
  struct art_Port_C0524D unit2_saturationLogic_channel3;
  struct art_Port_C0524D unit2_saturationLogic_channel4;
  struct art_Bridge_Ports ports;
  struct RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api initialization_api;
  struct RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api operational_api;
  art_Art_BridgeId id;
};

#define DeclNewRTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge(x) struct RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge x = { .type = TRTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge }

#ifdef __cplusplus
}
#endif

#endif