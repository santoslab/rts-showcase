#ifndef SIREUM_TYPE_H_art_scheduling_static_InfoComponentStateId
#define SIREUM_TYPE_H_art_scheduling_static_InfoComponentStateId

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.InfoComponentStateId

typedef struct art_scheduling_static_InfoComponentStateId *art_scheduling_static_InfoComponentStateId;
struct art_scheduling_static_InfoComponentStateId {
  TYPE type;
  Z bridgeId;
};

#define DeclNewart_scheduling_static_InfoComponentStateId(x) struct art_scheduling_static_InfoComponentStateId x = { .type = Tart_scheduling_static_InfoComponentStateId }

#ifdef __cplusplus
}
#endif

#endif