#ifndef SIREUM_TYPE_H_org_sireum_MOption_AEC260
#define SIREUM_TYPE_H_org_sireum_MOption_AEC260

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MOption[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)]

#include <type-org_sireum_MNone_6579ED.h>
#include <type-org_sireum_MSome_30C95B.h>

typedef union MOption_AEC260 *MOption_AEC260;
union MOption_AEC260 {
  TYPE type;
  struct MNone_6579ED MNone_6579ED;
  struct MSome_30C95B MSome_30C95B;
};

#define DeclNewMOption_AEC260(x) union MOption_AEC260 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif