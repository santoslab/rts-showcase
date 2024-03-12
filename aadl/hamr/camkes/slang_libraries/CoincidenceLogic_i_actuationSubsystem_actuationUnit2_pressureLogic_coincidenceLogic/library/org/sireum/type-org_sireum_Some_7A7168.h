#ifndef SIREUM_TYPE_H_org_sireum_Some_7A7168
#define SIREUM_TYPE_H_org_sireum_Some_7A7168

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]
#include <type-RTS_Actuation_CoincidenceLogic_i_Initialization_Api.h>

typedef struct Some_7A7168 *Some_7A7168;
struct Some_7A7168 {
  TYPE type;
  struct RTS_Actuation_CoincidenceLogic_i_Initialization_Api value;
};

#define DeclNewSome_7A7168(x) struct Some_7A7168 x = { .type = TSome_7A7168 }

#ifdef __cplusplus
}
#endif

#endif