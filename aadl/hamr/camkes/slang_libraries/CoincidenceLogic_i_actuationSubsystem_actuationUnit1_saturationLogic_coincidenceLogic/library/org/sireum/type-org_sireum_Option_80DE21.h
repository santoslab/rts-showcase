#ifndef SIREUM_TYPE_H_org_sireum_Option_80DE21
#define SIREUM_TYPE_H_org_sireum_Option_80DE21

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[RTS.Actuation.CoincidenceLogic_i_Operational_Api]

#include <type-org_sireum_None_37A019.h>
#include <type-org_sireum_Some_B99BC9.h>

typedef union Option_80DE21 *Option_80DE21;
union Option_80DE21 {
  TYPE type;
  struct None_37A019 None_37A019;
  struct Some_B99BC9 Some_B99BC9;
};

#define DeclNewOption_80DE21(x) union Option_80DE21 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif