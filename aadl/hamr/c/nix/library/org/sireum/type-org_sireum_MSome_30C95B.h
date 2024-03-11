#ifndef SIREUM_TYPE_H_org_sireum_MSome_30C95B
#define SIREUM_TYPE_H_org_sireum_MSome_30C95B

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MSome[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)]
#include <type-org_sireum_Tuple4_FA9F23.h>

typedef struct MSome_30C95B *MSome_30C95B;
struct MSome_30C95B {
  TYPE type;
  struct Tuple4_FA9F23 value;
};

#define DeclNewMSome_30C95B(x) struct MSome_30C95B x = { .type = TMSome_30C95B }

#ifdef __cplusplus
}
#endif

#endif