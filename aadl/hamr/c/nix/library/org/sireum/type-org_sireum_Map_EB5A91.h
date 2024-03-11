#ifndef SIREUM_TYPE_H_org_sireum_Map_EB5A91
#define SIREUM_TYPE_H_org_sireum_Map_EB5A91

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Map[String, art.Art.BridgeId]
#include <type-org_sireum_IS_588B23.h>

typedef struct Map_EB5A91 *Map_EB5A91;
struct Map_EB5A91 {
  TYPE type;
  struct IS_588B23 entries;
};

#define DeclNewMap_EB5A91(x) struct Map_EB5A91 x = { .type = TMap_EB5A91 }

#ifdef __cplusplus
}
#endif

#endif