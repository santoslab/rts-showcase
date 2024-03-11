#ifndef SIREUM_TYPE_H_org_sireum_Some_51E221
#define SIREUM_TYPE_H_org_sireum_Some_51E221

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]
#include <type-RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api.h>

typedef struct Some_51E221 *Some_51E221;
struct Some_51E221 {
  TYPE type;
  struct RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api value;
};

#define DeclNewSome_51E221(x) struct Some_51E221 x = { .type = TSome_51E221 }

#ifdef __cplusplus
}
#endif

#endif