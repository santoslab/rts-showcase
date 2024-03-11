#ifndef SIREUM_TYPE_H_art_scheduling_static_Hstep
#define SIREUM_TYPE_H_art_scheduling_static_Hstep

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.Hstep

typedef struct art_scheduling_static_Hstep *art_scheduling_static_Hstep;
struct art_scheduling_static_Hstep {
  TYPE type;
  Z numSteps;
};

#define DeclNewart_scheduling_static_Hstep(x) struct art_scheduling_static_Hstep x = { .type = Tart_scheduling_static_Hstep }

#ifdef __cplusplus
}
#endif

#endif