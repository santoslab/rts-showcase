#ifndef SIREUM_TYPE_H_art_scheduling_static_CommandProvider
#define SIREUM_TYPE_H_art_scheduling_static_CommandProvider

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.CommandProvider

#include <type-art_scheduling_static_DefaultCommandProvider.h>

typedef union art_scheduling_static_CommandProvider *art_scheduling_static_CommandProvider;
union art_scheduling_static_CommandProvider {
  TYPE type;
  struct art_scheduling_static_DefaultCommandProvider art_scheduling_static_DefaultCommandProvider;
};

#define DeclNewart_scheduling_static_CommandProvider(x) union art_scheduling_static_CommandProvider x = { 0 }

#ifdef __cplusplus
}
#endif

#endif