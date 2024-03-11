#ifndef SIREUM_TYPE_H_org_sireum_Tuple2_A29DBA
#define SIREUM_TYPE_H_org_sireum_Tuple2_A29DBA

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// (Z, (Z, art.ArtSlangMessage))
#include <type-org_sireum_Tuple2_4DFC06.h>

typedef struct Tuple2_A29DBA *Tuple2_A29DBA;
struct Tuple2_A29DBA {
  TYPE type;
  struct Tuple2_4DFC06 _2;
  Z _1;
};

#define DeclNewTuple2_A29DBA(x) struct Tuple2_A29DBA x = { .type = TTuple2_A29DBA }
#define Tuple2_A29DBA_size(this) Z_C(2)

#ifdef __cplusplus
}
#endif

#endif