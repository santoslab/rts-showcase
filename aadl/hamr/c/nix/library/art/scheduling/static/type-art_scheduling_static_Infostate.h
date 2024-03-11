#ifndef SIREUM_TYPE_H_art_scheduling_static_Infostate
#define SIREUM_TYPE_H_art_scheduling_static_Infostate

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.Infostate

typedef struct art_scheduling_static_Infostate *art_scheduling_static_Infostate;
struct art_scheduling_static_Infostate {
  TYPE type;
};

#define DeclNewart_scheduling_static_Infostate(x) struct art_scheduling_static_Infostate x = { .type = Tart_scheduling_static_Infostate }

#ifdef __cplusplus
}
#endif

#endif