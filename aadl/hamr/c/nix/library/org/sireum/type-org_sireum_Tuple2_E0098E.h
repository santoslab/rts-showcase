#ifndef SIREUM_TYPE_H_org_sireum_Tuple2_E0098E
#define SIREUM_TYPE_H_org_sireum_Tuple2_E0098E

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// (String, art.Art.BridgeId)
#include <type-art_Art_BridgeId.h>

typedef struct Tuple2_E0098E *Tuple2_E0098E;
struct Tuple2_E0098E {
  TYPE type;
  struct StaticString _1;
  art_Art_BridgeId _2;
};

#define DeclNewTuple2_E0098E(x) struct Tuple2_E0098E x = { .type = TTuple2_E0098E }
#define Tuple2_E0098E_size(this) Z_C(2)

#ifdef __cplusplus
}
#endif

#endif