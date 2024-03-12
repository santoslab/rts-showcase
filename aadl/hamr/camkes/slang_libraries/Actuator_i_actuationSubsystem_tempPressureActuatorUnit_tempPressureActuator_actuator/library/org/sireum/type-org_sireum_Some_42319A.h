#ifndef SIREUM_TYPE_H_org_sireum_Some_42319A
#define SIREUM_TYPE_H_org_sireum_Some_42319A

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[RTS.Actuation.Actuator_i_Operational_Api]
#include <type-RTS_Actuation_Actuator_i_Operational_Api.h>

typedef struct Some_42319A *Some_42319A;
struct Some_42319A {
  TYPE type;
  struct RTS_Actuation_Actuator_i_Operational_Api value;
};

#define DeclNewSome_42319A(x) struct Some_42319A x = { .type = TSome_42319A }

#ifdef __cplusplus
}
#endif

#endif