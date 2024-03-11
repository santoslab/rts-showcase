#ifndef SIREUM_TYPE_H_org_sireum_Tuple4_FA9F23
#define SIREUM_TYPE_H_org_sireum_Tuple4_FA9F23

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// (art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)
#include <type-art_scheduling_static_Schedule_DScheduleSpec.h>
#include <type-org_sireum_IS_FDDCB6.h>
#include <type-org_sireum_Map_EB5A91.h>
#include <type-art_scheduling_static_CommandProvider.h>

typedef struct Tuple4_FA9F23 *Tuple4_FA9F23;
struct Tuple4_FA9F23 {
  TYPE type;
  union art_scheduling_static_CommandProvider _4;
  struct art_scheduling_static_Schedule_DScheduleSpec _1;
  struct Map_EB5A91 _3;
  struct IS_FDDCB6 _2;
};

#define DeclNewTuple4_FA9F23(x) struct Tuple4_FA9F23 x = { .type = TTuple4_FA9F23 }
#define Tuple4_FA9F23_size(this) Z_C(4)

#ifdef __cplusplus
}
#endif

#endif