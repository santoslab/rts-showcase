#ifndef SIREUM_TYPE_H_org_sireum_Some_824C23
#define SIREUM_TYPE_H_org_sireum_Some_824C23

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[RTS.Actuation.OrLogic_i_Initialization_Api]
#include <type-RTS_Actuation_OrLogic_i_Initialization_Api.h>

typedef struct Some_824C23 *Some_824C23;
struct Some_824C23 {
  TYPE type;
  struct RTS_Actuation_OrLogic_i_Initialization_Api value;
};

#define DeclNewSome_824C23(x) struct Some_824C23 x = { .type = TSome_824C23 }

#ifdef __cplusplus
}
#endif

#endif