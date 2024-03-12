#ifndef SIREUM_TYPE_H_org_sireum_Option_A836EB
#define SIREUM_TYPE_H_org_sireum_Option_A836EB

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]

#include <type-org_sireum_None_174952.h>
#include <type-org_sireum_Some_51E221.h>

typedef union Option_A836EB *Option_A836EB;
union Option_A836EB {
  TYPE type;
  struct None_174952 None_174952;
  struct Some_51E221 Some_51E221;
};

#define DeclNewOption_A836EB(x) union Option_A836EB x = { 0 }

#ifdef __cplusplus
}
#endif

#endif