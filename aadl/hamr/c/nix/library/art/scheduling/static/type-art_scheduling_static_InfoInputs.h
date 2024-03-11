#ifndef SIREUM_TYPE_H_art_scheduling_static_InfoInputs
#define SIREUM_TYPE_H_art_scheduling_static_InfoInputs

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.InfoInputs

typedef struct art_scheduling_static_InfoInputs *art_scheduling_static_InfoInputs;
struct art_scheduling_static_InfoInputs {
  TYPE type;
};

#define DeclNewart_scheduling_static_InfoInputs(x) struct art_scheduling_static_InfoInputs x = { .type = Tart_scheduling_static_InfoInputs }

#ifdef __cplusplus
}
#endif

#endif