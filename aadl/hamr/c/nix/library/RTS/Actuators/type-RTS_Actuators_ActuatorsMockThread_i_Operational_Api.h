#ifndef SIREUM_TYPE_H_RTS_Actuators_ActuatorsMockThread_i_Operational_Api
#define SIREUM_TYPE_H_RTS_Actuators_ActuatorsMockThread_i_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Actuators.ActuatorsMockThread_i_Operational_Api
#include <type-art_Art_BridgeId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>

typedef struct RTS_Actuators_ActuatorsMockThread_i_Operational_Api *RTS_Actuators_ActuatorsMockThread_i_Operational_Api;
struct RTS_Actuators_ActuatorsMockThread_i_Operational_Api {
  TYPE type;
  art_Art_BridgeId id;
  art_Art_PortId tempPressureActuate_Id;
  art_Art_PortId saturationActuate_Id;
};

#define DeclNewRTS_Actuators_ActuatorsMockThread_i_Operational_Api(x) struct RTS_Actuators_ActuatorsMockThread_i_Operational_Api x = { .type = TRTS_Actuators_ActuatorsMockThread_i_Operational_Api }

#ifdef __cplusplus
}
#endif

#endif