#ifndef SIREUM_TYPE_H_org_sireum_Option_1C3ADA
#define SIREUM_TYPE_H_org_sireum_Option_1C3ADA

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[RTS.Actuation.OrLogic_i_Initialization_Api]

#include <type-org_sireum_None_1FE67C.h>
#include <type-org_sireum_Some_824C23.h>

typedef union Option_1C3ADA *Option_1C3ADA;
union Option_1C3ADA {
  TYPE type;
  struct None_1FE67C None_1FE67C;
  struct Some_824C23 Some_824C23;
};

#define DeclNewOption_1C3ADA(x) union Option_1C3ADA x = { 0 }

#ifdef __cplusplus
}
#endif

#endif