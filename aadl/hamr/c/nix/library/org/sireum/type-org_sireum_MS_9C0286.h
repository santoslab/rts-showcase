#ifndef SIREUM_TYPE_H_org_sireum_MS_9C0286
#define SIREUM_TYPE_H_org_sireum_MS_9C0286

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MS[art.Art.PortId, Option[art.UPort]]
#include <type-art_Art_PortId.h>
#include <type-org_sireum_Option_6239DB.h>

#define MaxMS_9C0286 92
#define MS_9C0286SizeT int8_t

typedef struct MS_9C0286 *MS_9C0286;
struct MS_9C0286 {
  TYPE type;
  MS_9C0286SizeT size;
  union Option_6239DB value[MaxMS_9C0286];
};

#define DeclNewMS_9C0286(x) struct MS_9C0286 x = { .type = TMS_9C0286 }

#ifdef __cplusplus
}
#endif

#endif