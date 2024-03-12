#ifndef SIREUM_TYPE_H_org_sireum_Option_4ACA0C
#define SIREUM_TYPE_H_org_sireum_Option_4ACA0C

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[RTS.Actuation.Actuator_i_Operational_Api]

#include <type-org_sireum_None_52D9AF.h>
#include <type-org_sireum_Some_42319A.h>

typedef union Option_4ACA0C *Option_4ACA0C;
union Option_4ACA0C {
  TYPE type;
  struct None_52D9AF None_52D9AF;
  struct Some_42319A Some_42319A;
};

#define DeclNewOption_4ACA0C(x) union Option_4ACA0C x = { 0 }

#ifdef __cplusplus
}
#endif

#endif