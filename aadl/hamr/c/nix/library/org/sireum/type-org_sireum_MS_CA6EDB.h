#ifndef SIREUM_TYPE_H_org_sireum_MS_CA6EDB
#define SIREUM_TYPE_H_org_sireum_MS_CA6EDB

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MS[art.Art.PortId, IS[art.Art.ConnectionId, art.Art.PortId]]
#include <type-art_Art_PortId.h>
#include <type-org_sireum_IS_7267A0.h>

#define MaxMS_CA6EDB 92
#define MS_CA6EDBSizeT int8_t

typedef struct MS_CA6EDB *MS_CA6EDB;
struct MS_CA6EDB {
  TYPE type;
  MS_CA6EDBSizeT size;
  struct IS_7267A0 value[MaxMS_CA6EDB];
};

#define DeclNewMS_CA6EDB(x) struct MS_CA6EDB x = { .type = TMS_CA6EDB }

#ifdef __cplusplus
}
#endif

#endif