#ifndef SIREUM_TYPE_H_org_sireum_Some_B8A5BD
#define SIREUM_TYPE_H_org_sireum_Some_B8A5BD

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[RTS.Actuators.ActuatorsMockThread_i_Operational_Api]
#include <type-RTS_Actuators_ActuatorsMockThread_i_Operational_Api.h>

typedef struct Some_B8A5BD *Some_B8A5BD;
struct Some_B8A5BD {
  TYPE type;
  struct RTS_Actuators_ActuatorsMockThread_i_Operational_Api value;
};

#define DeclNewSome_B8A5BD(x) struct Some_B8A5BD x = { .type = TSome_B8A5BD }

#ifdef __cplusplus
}
#endif

#endif