#ifndef SIREUM_TYPE_H_art_scheduling_static_Sstep
#define SIREUM_TYPE_H_art_scheduling_static_Sstep

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.Sstep

typedef struct art_scheduling_static_Sstep *art_scheduling_static_Sstep;
struct art_scheduling_static_Sstep {
  TYPE type;
  Z numSteps;
};

#define DeclNewart_scheduling_static_Sstep(x) struct art_scheduling_static_Sstep x = { .type = Tart_scheduling_static_Sstep }

#ifdef __cplusplus
}
#endif

#endif