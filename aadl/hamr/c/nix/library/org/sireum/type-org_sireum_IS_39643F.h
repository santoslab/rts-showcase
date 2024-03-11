#ifndef SIREUM_TYPE_H_org_sireum_IS_39643F
#define SIREUM_TYPE_H_org_sireum_IS_39643F

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[Z, (String, Option[art.DataContent])]
#include <type-org_sireum_Tuple2_275908.h>

#define MaxIS_39643F 1
#define IS_39643FSizeT int8_t

typedef struct IS_39643F *IS_39643F;
struct IS_39643F {
  TYPE type;
  IS_39643FSizeT size;
  struct Tuple2_275908 value[MaxIS_39643F];
};

#define DeclNewIS_39643F(x) struct IS_39643F x = { .type = TIS_39643F }

#ifdef __cplusplus
}
#endif

#endif