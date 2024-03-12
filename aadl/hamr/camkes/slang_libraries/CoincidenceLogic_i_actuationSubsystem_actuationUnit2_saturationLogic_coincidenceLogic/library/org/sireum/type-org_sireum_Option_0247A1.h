#ifndef SIREUM_TYPE_H_org_sireum_Option_0247A1
#define SIREUM_TYPE_H_org_sireum_Option_0247A1

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[IS[Z, art.Art.PortId]]

#include <type-org_sireum_None_CFD2B0.h>

typedef union Option_0247A1 *Option_0247A1;
union Option_0247A1 {
  TYPE type;
  struct None_CFD2B0 None_CFD2B0;
};

#define DeclNewOption_0247A1(x) union Option_0247A1 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif