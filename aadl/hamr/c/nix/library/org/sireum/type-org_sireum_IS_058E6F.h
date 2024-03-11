#ifndef SIREUM_TYPE_H_org_sireum_IS_058E6F
#define SIREUM_TYPE_H_org_sireum_IS_058E6F

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[art.Art.BridgeId, art.Bridge]
#include <type-art_Art_BridgeId.h>
#include <type-art_Bridge.h>

#define MaxIS_058E6F 15
#define IS_058E6FSizeT int8_t

typedef struct IS_058E6F *IS_058E6F;
struct IS_058E6F {
  TYPE type;
  IS_058E6FSizeT size;
  union art_Bridge value[MaxIS_058E6F];
};

#define DeclNewIS_058E6F(x) struct IS_058E6F x = { .type = TIS_058E6F }

#ifdef __cplusplus
}
#endif

#endif