#ifndef SIREUM_TYPE_H_org_sireum_MNone_6579ED
#define SIREUM_TYPE_H_org_sireum_MNone_6579ED

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MNone[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)]

typedef struct MNone_6579ED *MNone_6579ED;
struct MNone_6579ED {
  TYPE type;
};

#define DeclNewMNone_6579ED(x) struct MNone_6579ED x = { .type = TMNone_6579ED }

#ifdef __cplusplus
}
#endif

#endif