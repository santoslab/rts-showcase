#ifndef SIREUM_TYPE_H_org_sireum_IS_588B23
#define SIREUM_TYPE_H_org_sireum_IS_588B23

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[Z, (String, art.Art.BridgeId)]
#include <type-org_sireum_Tuple2_E0098E.h>

#define MaxIS_588B23 15
#define IS_588B23SizeT int8_t

typedef struct IS_588B23 *IS_588B23;
struct IS_588B23 {
  TYPE type;
  IS_588B23SizeT size;
  struct Tuple2_E0098E value[MaxIS_588B23];
};

#define DeclNewIS_588B23(x) struct IS_588B23 x = { .type = TIS_588B23 }

#ifdef __cplusplus
}
#endif

#endif