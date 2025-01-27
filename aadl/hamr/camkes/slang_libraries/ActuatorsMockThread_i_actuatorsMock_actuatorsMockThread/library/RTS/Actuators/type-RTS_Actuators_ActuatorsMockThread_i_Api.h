#ifndef SIREUM_TYPE_H_RTS_Actuators_ActuatorsMockThread_i_Api
#define SIREUM_TYPE_H_RTS_Actuators_ActuatorsMockThread_i_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Actuators.ActuatorsMockThread_i_Api

#include <type-RTS_Actuators_ActuatorsMockThread_i_Initialization_Api.h>
#include <type-RTS_Actuators_ActuatorsMockThread_i_Operational_Api.h>

typedef union RTS_Actuators_ActuatorsMockThread_i_Api *RTS_Actuators_ActuatorsMockThread_i_Api;
union RTS_Actuators_ActuatorsMockThread_i_Api {
  TYPE type;
  struct RTS_Actuators_ActuatorsMockThread_i_Initialization_Api RTS_Actuators_ActuatorsMockThread_i_Initialization_Api;
  struct RTS_Actuators_ActuatorsMockThread_i_Operational_Api RTS_Actuators_ActuatorsMockThread_i_Operational_Api;
};

#define DeclNewRTS_Actuators_ActuatorsMockThread_i_Api(x) union RTS_Actuators_ActuatorsMockThread_i_Api x = { 0 }

#ifdef __cplusplus
}
#endif

#endif