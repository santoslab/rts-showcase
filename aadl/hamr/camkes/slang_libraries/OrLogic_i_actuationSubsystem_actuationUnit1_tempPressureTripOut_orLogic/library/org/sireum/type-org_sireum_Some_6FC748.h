#ifndef SIREUM_TYPE_H_org_sireum_Some_6FC748
#define SIREUM_TYPE_H_org_sireum_Some_6FC748

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[RTS.Actuation.OrLogic_i_Operational_Api]
#include <type-RTS_Actuation_OrLogic_i_Operational_Api.h>

typedef struct Some_6FC748 *Some_6FC748;
struct Some_6FC748 {
  TYPE type;
  struct RTS_Actuation_OrLogic_i_Operational_Api value;
};

#define DeclNewSome_6FC748(x) struct Some_6FC748 x = { .type = TSome_6FC748 }

#ifdef __cplusplus
}
#endif

#endif