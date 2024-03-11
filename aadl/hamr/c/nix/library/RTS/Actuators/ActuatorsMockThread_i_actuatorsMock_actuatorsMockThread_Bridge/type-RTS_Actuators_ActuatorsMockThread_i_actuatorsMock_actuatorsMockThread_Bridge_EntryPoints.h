#ifndef SIREUM_TYPE_H_RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints
#define SIREUM_TYPE_H_RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Actuators.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge.EntryPoints
#include <type-art_Art_BridgeId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-org_sireum_Option_0247A1.h>
#include <type-RTS_Actuators_ActuatorsMockThread_i_Initialization_Api.h>
#include <type-RTS_Actuators_ActuatorsMockThread_i_Operational_Api.h>
#include <type-org_sireum_IS_D10119.h>
#include <type-org_sireum_IS_D10119.h>
#include <type-org_sireum_IS_D10119.h>
#include <type-org_sireum_IS_D10119.h>

typedef struct RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints *RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints;
struct RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints {
  TYPE type;
  union Option_0247A1 dispatchTriggers;
  struct RTS_Actuators_ActuatorsMockThread_i_Initialization_Api initialization_api;
  struct RTS_Actuators_ActuatorsMockThread_i_Operational_Api operational_api;
  struct IS_D10119 dataInPortIds;
  struct IS_D10119 eventInPortIds;
  struct IS_D10119 dataOutPortIds;
  struct IS_D10119 eventOutPortIds;
  art_Art_BridgeId ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_BridgeId;
  art_Art_PortId tempPressureActuate_Id;
  art_Art_PortId saturationActuate_Id;
};

#define DeclNewRTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints(x) struct RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints x = { .type = TRTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints }

#ifdef __cplusplus
}
#endif

#endif