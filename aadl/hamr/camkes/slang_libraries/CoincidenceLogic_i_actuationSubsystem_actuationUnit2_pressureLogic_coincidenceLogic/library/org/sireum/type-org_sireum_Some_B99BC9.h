#ifndef SIREUM_TYPE_H_org_sireum_Some_B99BC9
#define SIREUM_TYPE_H_org_sireum_Some_B99BC9

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[RTS.Actuation.CoincidenceLogic_i_Operational_Api]
#include <type-RTS_Actuation_CoincidenceLogic_i_Operational_Api.h>

typedef struct Some_B99BC9 *Some_B99BC9;
struct Some_B99BC9 {
  TYPE type;
  struct RTS_Actuation_CoincidenceLogic_i_Operational_Api value;
};

#define DeclNewSome_B99BC9(x) struct Some_B99BC9 x = { .type = TSome_B99BC9 }

#ifdef __cplusplus
}
#endif

#endif