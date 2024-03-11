#ifndef SIREUM_TYPE_H_org_sireum_Option_0E107D
#define SIREUM_TYPE_H_org_sireum_Option_0E107D

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[art.Art.BridgeId]

#include <type-org_sireum_None_D34309.h>
#include <type-org_sireum_Some_9D1CD4.h>

typedef union Option_0E107D *Option_0E107D;
union Option_0E107D {
  TYPE type;
  struct None_D34309 None_D34309;
  struct Some_9D1CD4 Some_9D1CD4;
};

#define DeclNewOption_0E107D(x) union Option_0E107D x = { 0 }

#ifdef __cplusplus
}
#endif

#endif