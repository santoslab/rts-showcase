#ifndef SIREUM_TYPE_H_org_sireum_Map_9C6840
#define SIREUM_TYPE_H_org_sireum_Map_9C6840

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Map[Z, art.ArtSlangMessage]
#include <type-org_sireum_IS_4D6DA5.h>

typedef struct Map_9C6840 *Map_9C6840;
struct Map_9C6840 {
  TYPE type;
  struct IS_4D6DA5 entries;
};

#define DeclNewMap_9C6840(x) struct Map_9C6840 x = { .type = TMap_9C6840 }

#ifdef __cplusplus
}
#endif

#endif