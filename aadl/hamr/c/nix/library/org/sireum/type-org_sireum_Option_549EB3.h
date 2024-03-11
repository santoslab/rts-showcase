#ifndef SIREUM_TYPE_H_org_sireum_Option_549EB3
#define SIREUM_TYPE_H_org_sireum_Option_549EB3

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[RTS.Actuators.ActuatorsMockThread_i_Operational_Api]

#include <type-org_sireum_None_C050C2.h>
#include <type-org_sireum_Some_B8A5BD.h>

typedef union Option_549EB3 *Option_549EB3;
union Option_549EB3 {
  TYPE type;
  struct None_C050C2 None_C050C2;
  struct Some_B8A5BD Some_B8A5BD;
};

#define DeclNewOption_549EB3(x) union Option_549EB3 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif