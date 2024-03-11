#ifndef SIREUM_TYPE_H_art_scheduling_static_RunToThread
#define SIREUM_TYPE_H_art_scheduling_static_RunToThread

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.RunToThread

typedef struct art_scheduling_static_RunToThread *art_scheduling_static_RunToThread;
struct art_scheduling_static_RunToThread {
  TYPE type;
  struct StaticString ThreadId;
};

#define DeclNewart_scheduling_static_RunToThread(x) struct art_scheduling_static_RunToThread x = { .type = Tart_scheduling_static_RunToThread }

#ifdef __cplusplus
}
#endif

#endif