#ifndef SIREUM_TYPE_H_art_scheduling_static_StaticScheduler
#define SIREUM_TYPE_H_art_scheduling_static_StaticScheduler

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.StaticScheduler
#include <type-art_scheduling_static_Schedule_DScheduleSpec.h>
#include <type-org_sireum_IS_058E6F.h>
#include <type-org_sireum_IS_FDDCB6.h>
#include <type-org_sireum_Map_EB5A91.h>
#include <type-art_scheduling_static_CommandProvider.h>

typedef struct art_scheduling_static_StaticScheduler *art_scheduling_static_StaticScheduler;
struct art_scheduling_static_StaticScheduler {
  TYPE type;
  union art_scheduling_static_CommandProvider commandProvider;
  struct art_scheduling_static_Schedule_DScheduleSpec staticSchedule;
  struct Map_EB5A91 threadNickNames;
  struct IS_058E6F bridges;
  struct IS_FDDCB6 domainToBridgeIdMap;
};

#define DeclNewart_scheduling_static_StaticScheduler(x) struct art_scheduling_static_StaticScheduler x = { .type = Tart_scheduling_static_StaticScheduler }

#ifdef __cplusplus
}
#endif

#endif