#ifndef SIREUM_TYPE_H_art_scheduling_static_DefaultCommandProvider
#define SIREUM_TYPE_H_art_scheduling_static_DefaultCommandProvider

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.DefaultCommandProvider

typedef struct art_scheduling_static_DefaultCommandProvider *art_scheduling_static_DefaultCommandProvider;
struct art_scheduling_static_DefaultCommandProvider {
  TYPE type;
};

#define DeclNewart_scheduling_static_DefaultCommandProvider(x) struct art_scheduling_static_DefaultCommandProvider x = { .type = Tart_scheduling_static_DefaultCommandProvider }

#ifdef __cplusplus
}
#endif

#endif