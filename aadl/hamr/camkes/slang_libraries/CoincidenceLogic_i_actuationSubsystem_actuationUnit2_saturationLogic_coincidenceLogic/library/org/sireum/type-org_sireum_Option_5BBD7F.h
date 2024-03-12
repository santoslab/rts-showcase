#ifndef SIREUM_TYPE_H_org_sireum_Option_5BBD7F
#define SIREUM_TYPE_H_org_sireum_Option_5BBD7F

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]

#include <type-org_sireum_None_080F67.h>
#include <type-org_sireum_Some_7A7168.h>

typedef union Option_5BBD7F *Option_5BBD7F;
union Option_5BBD7F {
  TYPE type;
  struct None_080F67 None_080F67;
  struct Some_7A7168 Some_7A7168;
};

#define DeclNewOption_5BBD7F(x) union Option_5BBD7F x = { 0 }

#ifdef __cplusplus
}
#endif

#endif