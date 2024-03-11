#ifndef SIREUM_TYPE_H_org_sireum_Some_9D1CD4
#define SIREUM_TYPE_H_org_sireum_Some_9D1CD4

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[art.Art.BridgeId]
#include <type-art_Art_BridgeId.h>

typedef struct Some_9D1CD4 *Some_9D1CD4;
struct Some_9D1CD4 {
  TYPE type;
  art_Art_BridgeId value;
};

#define DeclNewSome_9D1CD4(x) struct Some_9D1CD4 x = { .type = TSome_9D1CD4 }

#ifdef __cplusplus
}
#endif

#endif