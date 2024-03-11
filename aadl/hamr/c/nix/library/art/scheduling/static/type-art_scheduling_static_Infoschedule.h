#ifndef SIREUM_TYPE_H_art_scheduling_static_Infoschedule
#define SIREUM_TYPE_H_art_scheduling_static_Infoschedule

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.Infoschedule

typedef struct art_scheduling_static_Infoschedule *art_scheduling_static_Infoschedule;
struct art_scheduling_static_Infoschedule {
  TYPE type;
};

#define DeclNewart_scheduling_static_Infoschedule(x) struct art_scheduling_static_Infoschedule x = { .type = Tart_scheduling_static_Infoschedule }

#ifdef __cplusplus
}
#endif

#endif