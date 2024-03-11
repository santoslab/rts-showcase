#ifndef SIREUM_TYPE_H_org_sireum_Tuple2_4DFC06
#define SIREUM_TYPE_H_org_sireum_Tuple2_4DFC06

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// (Z, art.ArtSlangMessage)
#include <type-art_ArtSlangMessage.h>

typedef struct Tuple2_4DFC06 *Tuple2_4DFC06;
struct Tuple2_4DFC06 {
  TYPE type;
  struct art_ArtSlangMessage _2;
  Z _1;
};

#define DeclNewTuple2_4DFC06(x) struct Tuple2_4DFC06 x = { .type = TTuple2_4DFC06 }
#define Tuple2_4DFC06_size(this) Z_C(2)

#ifdef __cplusplus
}
#endif

#endif