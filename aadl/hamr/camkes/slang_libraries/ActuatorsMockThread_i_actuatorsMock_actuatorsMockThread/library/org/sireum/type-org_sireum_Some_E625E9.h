#ifndef SIREUM_TYPE_H_org_sireum_Some_E625E9
#define SIREUM_TYPE_H_org_sireum_Some_E625E9

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api]
#include <type-RTS_Actuators_ActuatorsMockThread_i_Initialization_Api.h>

typedef struct Some_E625E9 *Some_E625E9;
struct Some_E625E9 {
  TYPE type;
  struct RTS_Actuators_ActuatorsMockThread_i_Initialization_Api value;
};

#define DeclNewSome_E625E9(x) struct Some_E625E9 x = { .type = TSome_E625E9 }

#ifdef __cplusplus
}
#endif

#endif