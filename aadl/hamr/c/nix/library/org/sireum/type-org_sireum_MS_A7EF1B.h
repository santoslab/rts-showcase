#ifndef SIREUM_TYPE_H_org_sireum_MS_A7EF1B
#define SIREUM_TYPE_H_org_sireum_MS_A7EF1B

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MS[art.Art.BridgeId, S64]
#include <type-art_Art_BridgeId.h>
#include <type-org_sireum_S64.h>

#define MaxMS_A7EF1B 15
#define MS_A7EF1BSizeT int8_t

typedef struct MS_A7EF1B *MS_A7EF1B;
struct MS_A7EF1B {
  TYPE type;
  MS_A7EF1BSizeT size;
  S64 value[MaxMS_A7EF1B];
};

#define DeclNewMS_A7EF1B(x) struct MS_A7EF1B x = { .type = TMS_A7EF1B }

#ifdef __cplusplus
}
#endif

#endif