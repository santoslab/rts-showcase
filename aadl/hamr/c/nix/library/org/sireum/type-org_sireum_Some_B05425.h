#ifndef SIREUM_TYPE_H_org_sireum_Some_B05425
#define SIREUM_TYPE_H_org_sireum_Some_B05425

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]
#include <type-RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api.h>

typedef struct Some_B05425 *Some_B05425;
struct Some_B05425 {
  TYPE type;
  struct RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api value;
};

#define DeclNewSome_B05425(x) struct Some_B05425 x = { .type = TSome_B05425 }

#ifdef __cplusplus
}
#endif

#endif