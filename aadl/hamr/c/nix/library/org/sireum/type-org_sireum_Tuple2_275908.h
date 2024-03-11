#ifndef SIREUM_TYPE_H_org_sireum_Tuple2_275908
#define SIREUM_TYPE_H_org_sireum_Tuple2_275908

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// (String, Option[art.DataContent])
#include <type-org_sireum_Option_8E9F45.h>

typedef struct Tuple2_275908 *Tuple2_275908;
struct Tuple2_275908 {
  TYPE type;
  union Option_8E9F45 _2;
  struct StaticString _1;
};

#define DeclNewTuple2_275908(x) struct Tuple2_275908 x = { .type = TTuple2_275908 }
#define Tuple2_275908_size(this) Z_C(2)

#ifdef __cplusplus
}
#endif

#endif