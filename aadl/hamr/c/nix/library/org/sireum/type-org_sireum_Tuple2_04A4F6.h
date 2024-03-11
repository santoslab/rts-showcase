#ifndef SIREUM_TYPE_H_org_sireum_Tuple2_04A4F6
#define SIREUM_TYPE_H_org_sireum_Tuple2_04A4F6

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))
#include <type-org_sireum_Tuple12_3FBE62.h>
#include <type-org_sireum_Tuple12_3FBE62.h>

typedef struct Tuple2_04A4F6 *Tuple2_04A4F6;
struct Tuple2_04A4F6 {
  TYPE type;
  struct Tuple12_3FBE62 _1;
  struct Tuple12_3FBE62 _2;
};

#define DeclNewTuple2_04A4F6(x) struct Tuple2_04A4F6 x = { .type = TTuple2_04A4F6 }
#define Tuple2_04A4F6_size(this) Z_C(2)

#ifdef __cplusplus
}
#endif

#endif