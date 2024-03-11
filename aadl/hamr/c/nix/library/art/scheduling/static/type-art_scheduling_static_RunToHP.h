#ifndef SIREUM_TYPE_H_art_scheduling_static_RunToHP
#define SIREUM_TYPE_H_art_scheduling_static_RunToHP

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.RunToHP

typedef struct art_scheduling_static_RunToHP *art_scheduling_static_RunToHP;
struct art_scheduling_static_RunToHP {
  TYPE type;
  Z hpNum;
};

#define DeclNewart_scheduling_static_RunToHP(x) struct art_scheduling_static_RunToHP x = { .type = Tart_scheduling_static_RunToHP }

#ifdef __cplusplus
}
#endif

#endif