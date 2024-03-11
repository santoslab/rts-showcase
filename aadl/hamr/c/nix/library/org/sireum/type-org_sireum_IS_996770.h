#ifndef SIREUM_TYPE_H_org_sireum_IS_996770
#define SIREUM_TYPE_H_org_sireum_IS_996770

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[art.Art.ConnectionId, art.UConnection]
#include <type-art_Art_ConnectionId.h>
#include <type-art_UConnection.h>

#define MaxIS_996770 38
#define IS_996770SizeT int8_t

typedef struct IS_996770 *IS_996770;
struct IS_996770 {
  TYPE type;
  IS_996770SizeT size;
  union art_UConnection value[MaxIS_996770];
};

#define DeclNewIS_996770(x) struct IS_996770 x = { .type = TIS_996770 }

#ifdef __cplusplus
}
#endif

#endif