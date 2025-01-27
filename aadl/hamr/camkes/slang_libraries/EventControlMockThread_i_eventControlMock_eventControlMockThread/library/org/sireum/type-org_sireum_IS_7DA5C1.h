#ifndef SIREUM_TYPE_H_org_sireum_IS_7DA5C1
#define SIREUM_TYPE_H_org_sireum_IS_7DA5C1

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[Z, (B, B)]
#include <type-org_sireum_Tuple2_0862A0.h>

#define MaxIS_7DA5C1 1
#define IS_7DA5C1SizeT int8_t

typedef struct IS_7DA5C1 *IS_7DA5C1;
struct IS_7DA5C1 {
  TYPE type;
  IS_7DA5C1SizeT size;
  struct Tuple2_0862A0 value[MaxIS_7DA5C1];
};

#define DeclNewIS_7DA5C1(x) struct IS_7DA5C1 x = { .type = TIS_7DA5C1 }

#ifdef __cplusplus
}
#endif

#endif