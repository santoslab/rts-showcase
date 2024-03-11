#ifndef SIREUM_TYPE_H_org_sireum_Some_A0133F
#define SIREUM_TYPE_H_org_sireum_Some_A0133F

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[art.Art.PortId]
#include <type-art_Art_PortId.h>

typedef struct Some_A0133F *Some_A0133F;
struct Some_A0133F {
  TYPE type;
  art_Art_PortId value;
};

#define DeclNewSome_A0133F(x) struct Some_A0133F x = { .type = TSome_A0133F }

#ifdef __cplusplus
}
#endif

#endif