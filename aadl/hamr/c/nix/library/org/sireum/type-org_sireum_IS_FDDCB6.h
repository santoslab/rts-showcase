#ifndef SIREUM_TYPE_H_org_sireum_IS_FDDCB6
#define SIREUM_TYPE_H_org_sireum_IS_FDDCB6

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[Z, art.Art.BridgeId]
#include <type-art_Art_BridgeId.h>

#define MaxIS_FDDCB6 15
#define IS_FDDCB6SizeT int8_t

typedef struct IS_FDDCB6 *IS_FDDCB6;
struct IS_FDDCB6 {
  TYPE type;
  IS_FDDCB6SizeT size;
  art_Art_BridgeId value[MaxIS_FDDCB6];
};

#define DeclNewIS_FDDCB6(x) struct IS_FDDCB6 x = { .type = TIS_FDDCB6 }

#ifdef __cplusplus
}
#endif

#endif