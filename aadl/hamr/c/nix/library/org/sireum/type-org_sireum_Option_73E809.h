#ifndef SIREUM_TYPE_H_org_sireum_Option_73E809
#define SIREUM_TYPE_H_org_sireum_Option_73E809

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[RTS.EventControl.EventControlMockThread_i_Operational_Api]

#include <type-org_sireum_None_1A60DD.h>
#include <type-org_sireum_Some_7FC307.h>

typedef union Option_73E809 *Option_73E809;
union Option_73E809 {
  TYPE type;
  struct None_1A60DD None_1A60DD;
  struct Some_7FC307 Some_7FC307;
};

#define DeclNewOption_73E809(x) union Option_73E809 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif