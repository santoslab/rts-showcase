#ifndef SIREUM_TYPE_H_org_sireum_Option_B47750
#define SIREUM_TYPE_H_org_sireum_Option_B47750

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[(Z, Z)]

#include <type-org_sireum_Some_80A548.h>

typedef union Option_B47750 *Option_B47750;
union Option_B47750 {
  TYPE type;
  struct Some_80A548 Some_80A548;
};

#define DeclNewOption_B47750(x) union Option_B47750 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif