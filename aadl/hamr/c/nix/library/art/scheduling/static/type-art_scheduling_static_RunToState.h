#ifndef SIREUM_TYPE_H_art_scheduling_static_RunToState
#define SIREUM_TYPE_H_art_scheduling_static_RunToState

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.RunToState

typedef struct art_scheduling_static_RunToState *art_scheduling_static_RunToState;
struct art_scheduling_static_RunToState {
  TYPE type;
  Z hpNum;
  Z slotNum;
};

#define DeclNewart_scheduling_static_RunToState(x) struct art_scheduling_static_RunToState x = { .type = Tart_scheduling_static_RunToState }

#ifdef __cplusplus
}
#endif

#endif