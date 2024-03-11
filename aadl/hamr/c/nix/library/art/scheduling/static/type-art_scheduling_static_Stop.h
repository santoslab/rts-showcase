#ifndef SIREUM_TYPE_H_art_scheduling_static_Stop
#define SIREUM_TYPE_H_art_scheduling_static_Stop

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.Stop

typedef struct art_scheduling_static_Stop *art_scheduling_static_Stop;
struct art_scheduling_static_Stop {
  TYPE type;
};

#define DeclNewart_scheduling_static_Stop(x) struct art_scheduling_static_Stop x = { .type = Tart_scheduling_static_Stop }

#ifdef __cplusplus
}
#endif

#endif