#ifndef SIREUM_TYPE_H_org_sireum_Option_1CF021
#define SIREUM_TYPE_H_org_sireum_Option_1CF021

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[art.Art.PortId]

#include <type-org_sireum_None_B2694B.h>
#include <type-org_sireum_Some_A0133F.h>

typedef union Option_1CF021 *Option_1CF021;
union Option_1CF021 {
  TYPE type;
  struct None_B2694B None_B2694B;
  struct Some_A0133F Some_A0133F;
};

#define DeclNewOption_1CF021(x) union Option_1CF021 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif