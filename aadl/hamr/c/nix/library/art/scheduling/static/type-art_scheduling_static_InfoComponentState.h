#ifndef SIREUM_TYPE_H_art_scheduling_static_InfoComponentState
#define SIREUM_TYPE_H_art_scheduling_static_InfoComponentState

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.InfoComponentState

typedef struct art_scheduling_static_InfoComponentState *art_scheduling_static_InfoComponentState;
struct art_scheduling_static_InfoComponentState {
  TYPE type;
  struct StaticString threadNickName;
};

#define DeclNewart_scheduling_static_InfoComponentState(x) struct art_scheduling_static_InfoComponentState x = { .type = Tart_scheduling_static_InfoComponentState }

#ifdef __cplusplus
}
#endif

#endif