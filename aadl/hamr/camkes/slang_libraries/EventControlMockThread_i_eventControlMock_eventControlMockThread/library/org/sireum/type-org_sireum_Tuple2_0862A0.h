#ifndef SIREUM_TYPE_H_org_sireum_Tuple2_0862A0
#define SIREUM_TYPE_H_org_sireum_Tuple2_0862A0

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// (B, B)

typedef struct Tuple2_0862A0 *Tuple2_0862A0;
struct Tuple2_0862A0 {
  TYPE type;
  B _1;
  B _2;
};

#define DeclNewTuple2_0862A0(x) struct Tuple2_0862A0 x = { .type = TTuple2_0862A0 }
#define Tuple2_0862A0_size(this) Z_C(2)

#ifdef __cplusplus
}
#endif

#endif