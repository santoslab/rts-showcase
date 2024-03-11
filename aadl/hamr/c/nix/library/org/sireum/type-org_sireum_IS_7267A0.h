#ifndef SIREUM_TYPE_H_org_sireum_IS_7267A0
#define SIREUM_TYPE_H_org_sireum_IS_7267A0

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[art.Art.ConnectionId, art.Art.PortId]
#include <type-art_Art_ConnectionId.h>
#include <type-art_Art_PortId.h>

#define MaxIS_7267A0 38
#define IS_7267A0SizeT int8_t

typedef struct IS_7267A0 *IS_7267A0;
struct IS_7267A0 {
  TYPE type;
  IS_7267A0SizeT size;
  art_Art_PortId value[MaxIS_7267A0];
};

#define DeclNewIS_7267A0(x) struct IS_7267A0 x = { .type = TIS_7267A0 }

#ifdef __cplusplus
}
#endif

#endif