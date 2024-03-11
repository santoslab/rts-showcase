#ifndef SIREUM_TYPE_H_org_sireum_Option_638957
#define SIREUM_TYPE_H_org_sireum_Option_638957

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api]

#include <type-org_sireum_None_8D8A06.h>
#include <type-org_sireum_Some_E625E9.h>

typedef union Option_638957 *Option_638957;
union Option_638957 {
  TYPE type;
  struct None_8D8A06 None_8D8A06;
  struct Some_E625E9 Some_E625E9;
};

#define DeclNewOption_638957(x) union Option_638957 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif