#ifndef SIREUM_TYPE_H_org_sireum_Option_5CC377
#define SIREUM_TYPE_H_org_sireum_Option_5CC377

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]

#include <type-org_sireum_None_8D6171.h>
#include <type-org_sireum_Some_B05425.h>

typedef union Option_5CC377 *Option_5CC377;
union Option_5CC377 {
  TYPE type;
  struct None_8D6171 None_8D6171;
  struct Some_B05425 Some_B05425;
};

#define DeclNewOption_5CC377(x) union Option_5CC377 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif