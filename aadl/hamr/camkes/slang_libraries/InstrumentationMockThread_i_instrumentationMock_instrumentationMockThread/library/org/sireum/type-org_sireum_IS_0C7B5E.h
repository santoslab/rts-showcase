#ifndef SIREUM_TYPE_H_org_sireum_IS_0C7B5E
#define SIREUM_TYPE_H_org_sireum_IS_0C7B5E

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[Z, ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))]
#include <type-org_sireum_Tuple2_04A4F6.h>

#define MaxIS_0C7B5E 1
#define IS_0C7B5ESizeT int8_t

typedef struct IS_0C7B5E *IS_0C7B5E;
struct IS_0C7B5E {
  TYPE type;
  IS_0C7B5ESizeT size;
  struct Tuple2_04A4F6 value[MaxIS_0C7B5E];
};

#define DeclNewIS_0C7B5E(x) struct IS_0C7B5E x = { .type = TIS_0C7B5E }

#ifdef __cplusplus
}
#endif

#endif