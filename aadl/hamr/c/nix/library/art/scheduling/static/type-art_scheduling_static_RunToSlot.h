#ifndef SIREUM_TYPE_H_art_scheduling_static_RunToSlot
#define SIREUM_TYPE_H_art_scheduling_static_RunToSlot

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.RunToSlot

typedef struct art_scheduling_static_RunToSlot *art_scheduling_static_RunToSlot;
struct art_scheduling_static_RunToSlot {
  TYPE type;
  Z slotNum;
};

#define DeclNewart_scheduling_static_RunToSlot(x) struct art_scheduling_static_RunToSlot x = { .type = Tart_scheduling_static_RunToSlot }

#ifdef __cplusplus
}
#endif

#endif