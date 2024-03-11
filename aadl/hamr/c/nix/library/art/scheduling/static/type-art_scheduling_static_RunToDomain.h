#ifndef SIREUM_TYPE_H_art_scheduling_static_RunToDomain
#define SIREUM_TYPE_H_art_scheduling_static_RunToDomain

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.RunToDomain

typedef struct art_scheduling_static_RunToDomain *art_scheduling_static_RunToDomain;
struct art_scheduling_static_RunToDomain {
  TYPE type;
  Z domainId;
};

#define DeclNewart_scheduling_static_RunToDomain(x) struct art_scheduling_static_RunToDomain x = { .type = Tart_scheduling_static_RunToDomain }

#ifdef __cplusplus
}
#endif

#endif