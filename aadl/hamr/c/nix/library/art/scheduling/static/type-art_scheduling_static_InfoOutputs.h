#ifndef SIREUM_TYPE_H_art_scheduling_static_InfoOutputs
#define SIREUM_TYPE_H_art_scheduling_static_InfoOutputs

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.InfoOutputs

typedef struct art_scheduling_static_InfoOutputs *art_scheduling_static_InfoOutputs;
struct art_scheduling_static_InfoOutputs {
  TYPE type;
};

#define DeclNewart_scheduling_static_InfoOutputs(x) struct art_scheduling_static_InfoOutputs x = { .type = Tart_scheduling_static_InfoOutputs }

#ifdef __cplusplus
}
#endif

#endif