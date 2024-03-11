#ifndef SIREUM_TYPE_H_org_sireum_Some_80A548
#define SIREUM_TYPE_H_org_sireum_Some_80A548

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[(Z, Z)]
#include <type-org_sireum_Tuple2_EC3B57.h>

typedef struct Some_80A548 *Some_80A548;
struct Some_80A548 {
  TYPE type;
  struct Tuple2_EC3B57 value;
};

#define DeclNewSome_80A548(x) struct Some_80A548 x = { .type = TSome_80A548 }

#ifdef __cplusplus
}
#endif

#endif