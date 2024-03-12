#ifndef SIREUM_TYPE_H_org_sireum_Some_4347C6
#define SIREUM_TYPE_H_org_sireum_Some_4347C6

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[RTS.EventControl.EventControlMockThread_i_Initialization_Api]
#include <type-RTS_EventControl_EventControlMockThread_i_Initialization_Api.h>

typedef struct Some_4347C6 *Some_4347C6;
struct Some_4347C6 {
  TYPE type;
  struct RTS_EventControl_EventControlMockThread_i_Initialization_Api value;
};

#define DeclNewSome_4347C6(x) struct Some_4347C6 x = { .type = TSome_4347C6 }

#ifdef __cplusplus
}
#endif

#endif