#ifndef SIREUM_TYPE_H_art_scheduling_static_Explorer_ScheduleState
#define SIREUM_TYPE_H_art_scheduling_static_Explorer_ScheduleState

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.Explorer.ScheduleState

typedef struct art_scheduling_static_Explorer_ScheduleState *art_scheduling_static_Explorer_ScheduleState;
struct art_scheduling_static_Explorer_ScheduleState {
  TYPE type;
  Z slotNum;
  Z hyperperiodNum;
};

#define DeclNewart_scheduling_static_Explorer_ScheduleState(x) struct art_scheduling_static_Explorer_ScheduleState x = { .type = Tart_scheduling_static_Explorer_ScheduleState }

#ifdef __cplusplus
}
#endif

#endif