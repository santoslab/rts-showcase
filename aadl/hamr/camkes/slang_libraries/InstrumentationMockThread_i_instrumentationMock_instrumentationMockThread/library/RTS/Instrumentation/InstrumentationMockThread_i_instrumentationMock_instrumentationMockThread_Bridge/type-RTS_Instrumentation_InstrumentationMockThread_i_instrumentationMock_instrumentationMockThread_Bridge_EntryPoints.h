#ifndef SIREUM_TYPE_H_RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints
#define SIREUM_TYPE_H_RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.EntryPoints
#include <type-art_Art_BridgeId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-org_sireum_Option_0247A1.h>
#include <type-RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api.h>
#include <type-RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api.h>
#include <type-org_sireum_IS_D10119.h>
#include <type-org_sireum_IS_D10119.h>
#include <type-org_sireum_IS_D10119.h>
#include <type-org_sireum_IS_D10119.h>

typedef struct RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints *RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints;
struct RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints {
  TYPE type;
  union Option_0247A1 dispatchTriggers;
  struct RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api initialization_api;
  struct RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api operational_api;
  struct IS_D10119 dataInPortIds;
  struct IS_D10119 eventInPortIds;
  struct IS_D10119 dataOutPortIds;
  struct IS_D10119 eventOutPortIds;
  art_Art_BridgeId InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_BridgeId;
  art_Art_PortId unit1_temperatureLogic_channel1_Id;
  art_Art_PortId unit1_temperatureLogic_channel2_Id;
  art_Art_PortId unit1_temperatureLogic_channel3_Id;
  art_Art_PortId unit1_temperatureLogic_channel4_Id;
  art_Art_PortId unit1_pressureLogic_channel1_Id;
  art_Art_PortId unit1_pressureLogic_channel2_Id;
  art_Art_PortId unit1_pressureLogic_channel3_Id;
  art_Art_PortId unit1_pressureLogic_channel4_Id;
  art_Art_PortId unit1_saturationLogic_channel1_Id;
  art_Art_PortId unit1_saturationLogic_channel2_Id;
  art_Art_PortId unit1_saturationLogic_channel3_Id;
  art_Art_PortId unit1_saturationLogic_channel4_Id;
  art_Art_PortId unit2_temperatureLogic_channel1_Id;
  art_Art_PortId unit2_temperatureLogic_channel2_Id;
  art_Art_PortId unit2_temperatureLogic_channel3_Id;
  art_Art_PortId unit2_temperatureLogic_channel4_Id;
  art_Art_PortId unit2_pressureLogic_channel1_Id;
  art_Art_PortId unit2_pressureLogic_channel2_Id;
  art_Art_PortId unit2_pressureLogic_channel3_Id;
  art_Art_PortId unit2_pressureLogic_channel4_Id;
  art_Art_PortId unit2_saturationLogic_channel1_Id;
  art_Art_PortId unit2_saturationLogic_channel2_Id;
  art_Art_PortId unit2_saturationLogic_channel3_Id;
  art_Art_PortId unit2_saturationLogic_channel4_Id;
};

#define DeclNewRTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints(x) struct RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints x = { .type = TRTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints }

#ifdef __cplusplus
}
#endif

#endif