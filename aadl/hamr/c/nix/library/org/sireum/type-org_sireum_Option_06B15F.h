#ifndef SIREUM_TYPE_H_org_sireum_Option_06B15F
#define SIREUM_TYPE_H_org_sireum_Option_06B15F

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[RTS.EventControl.EventControlMockThread_i_Initialization_Api]

#include <type-org_sireum_None_2939E3.h>
#include <type-org_sireum_Some_4347C6.h>

typedef union Option_06B15F *Option_06B15F;
union Option_06B15F {
  TYPE type;
  struct None_2939E3 None_2939E3;
  struct Some_4347C6 Some_4347C6;
};

#define DeclNewOption_06B15F(x) union Option_06B15F x = { 0 }

#ifdef __cplusplus
}
#endif

#endif