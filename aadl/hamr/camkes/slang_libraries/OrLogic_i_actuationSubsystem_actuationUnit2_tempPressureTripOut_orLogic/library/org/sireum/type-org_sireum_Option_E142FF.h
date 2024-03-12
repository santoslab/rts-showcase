#ifndef SIREUM_TYPE_H_org_sireum_Option_E142FF
#define SIREUM_TYPE_H_org_sireum_Option_E142FF

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[RTS.Actuation.OrLogic_i_Operational_Api]

#include <type-org_sireum_None_1AA45D.h>
#include <type-org_sireum_Some_6FC748.h>

typedef union Option_E142FF *Option_E142FF;
union Option_E142FF {
  TYPE type;
  struct None_1AA45D None_1AA45D;
  struct Some_6FC748 Some_6FC748;
};

#define DeclNewOption_E142FF(x) union Option_E142FF x = { 0 }

#ifdef __cplusplus
}
#endif

#endif