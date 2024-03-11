#ifndef SIREUM_TYPE_H_art_scheduling_static_Schedule_DSchedule
#define SIREUM_TYPE_H_art_scheduling_static_Schedule_DSchedule

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.Schedule.DSchedule
#include <type-org_sireum_IS_5AA467.h>

typedef struct art_scheduling_static_Schedule_DSchedule *art_scheduling_static_Schedule_DSchedule;
struct art_scheduling_static_Schedule_DSchedule {
  TYPE type;
  struct IS_5AA467 slots;
};

#define DeclNewart_scheduling_static_Schedule_DSchedule(x) struct art_scheduling_static_Schedule_DSchedule x = { .type = Tart_scheduling_static_Schedule_DSchedule }

#ifdef __cplusplus
}
#endif

#endif