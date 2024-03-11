#ifndef SIREUM_TYPE_H_org_sireum_Option_DB2CFC
#define SIREUM_TYPE_H_org_sireum_Option_DB2CFC

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[RTS.Actuation.Actuator_i_Initialization_Api]

#include <type-org_sireum_None_8BED90.h>
#include <type-org_sireum_Some_E8C0F3.h>

typedef union Option_DB2CFC *Option_DB2CFC;
union Option_DB2CFC {
  TYPE type;
  struct None_8BED90 None_8BED90;
  struct Some_E8C0F3 Some_E8C0F3;
};

#define DeclNewOption_DB2CFC(x) union Option_DB2CFC x = { 0 }

#ifdef __cplusplus
}
#endif

#endif