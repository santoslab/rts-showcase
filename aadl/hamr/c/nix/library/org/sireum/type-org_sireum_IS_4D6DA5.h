#ifndef SIREUM_TYPE_H_org_sireum_IS_4D6DA5
#define SIREUM_TYPE_H_org_sireum_IS_4D6DA5

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[Z, (Z, art.ArtSlangMessage)]
#include <type-org_sireum_Tuple2_4DFC06.h>

#define MaxIS_4D6DA5 92
#define IS_4D6DA5SizeT int8_t

typedef struct IS_4D6DA5 *IS_4D6DA5;
struct IS_4D6DA5 {
  TYPE type;
  IS_4D6DA5SizeT size;
  struct Tuple2_4DFC06 value[MaxIS_4D6DA5];
};

#define DeclNewIS_4D6DA5(x) struct IS_4D6DA5 x = { .type = TIS_4D6DA5 }

#ifdef __cplusplus
}
#endif

#endif