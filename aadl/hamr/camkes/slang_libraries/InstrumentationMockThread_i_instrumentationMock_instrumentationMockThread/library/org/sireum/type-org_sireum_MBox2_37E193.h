#ifndef SIREUM_TYPE_H_org_sireum_MBox2_37E193
#define SIREUM_TYPE_H_org_sireum_MBox2_37E193

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MBox2[art.Art.PortId, Option[art.DataContent]]
#include <type-art_Art_PortId.h>
#include <type-org_sireum_Option_8E9F45.h>

typedef struct MBox2_37E193 *MBox2_37E193;
struct MBox2_37E193 {
  TYPE type;
  union Option_8E9F45 value2;
  art_Art_PortId value1;
};

#define DeclNewMBox2_37E193(x) struct MBox2_37E193 x = { .type = TMBox2_37E193 }

#ifdef __cplusplus
}
#endif

#endif