#ifndef SIREUM_TYPE_H_org_sireum_Some_7FC307
#define SIREUM_TYPE_H_org_sireum_Some_7FC307

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[RTS.EventControl.EventControlMockThread_i_Operational_Api]
#include <type-RTS_EventControl_EventControlMockThread_i_Operational_Api.h>

typedef struct Some_7FC307 *Some_7FC307;
struct Some_7FC307 {
  TYPE type;
  struct RTS_EventControl_EventControlMockThread_i_Operational_Api value;
};

#define DeclNewSome_7FC307(x) struct Some_7FC307 x = { .type = TSome_7FC307 }

#ifdef __cplusplus
}
#endif

#endif