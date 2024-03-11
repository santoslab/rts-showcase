#ifndef SIREUM_TYPE_H_art_scheduling_static_Schedule_Slot
#define SIREUM_TYPE_H_art_scheduling_static_Schedule_Slot

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.Schedule.Slot

typedef struct art_scheduling_static_Schedule_Slot *art_scheduling_static_Schedule_Slot;
struct art_scheduling_static_Schedule_Slot {
  TYPE type;
  Z domain;
  Z length;
};

#define DeclNewart_scheduling_static_Schedule_Slot(x) struct art_scheduling_static_Schedule_Slot x = { .type = Tart_scheduling_static_Schedule_Slot }

#ifdef __cplusplus
}
#endif

#endif