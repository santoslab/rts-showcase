#ifndef SIREUM_TYPE_H_org_sireum_Some_E8C0F3
#define SIREUM_TYPE_H_org_sireum_Some_E8C0F3

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[RTS.Actuation.Actuator_i_Initialization_Api]
#include <type-RTS_Actuation_Actuator_i_Initialization_Api.h>

typedef struct Some_E8C0F3 *Some_E8C0F3;
struct Some_E8C0F3 {
  TYPE type;
  struct RTS_Actuation_Actuator_i_Initialization_Api value;
};

#define DeclNewSome_E8C0F3(x) struct Some_E8C0F3 x = { .type = TSome_E8C0F3 }

#ifdef __cplusplus
}
#endif

#endif