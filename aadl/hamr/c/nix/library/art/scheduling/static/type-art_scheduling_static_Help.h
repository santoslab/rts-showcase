#ifndef SIREUM_TYPE_H_art_scheduling_static_Help
#define SIREUM_TYPE_H_art_scheduling_static_Help

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.Help

typedef struct art_scheduling_static_Help *art_scheduling_static_Help;
struct art_scheduling_static_Help {
  TYPE type;
};

#define DeclNewart_scheduling_static_Help(x) struct art_scheduling_static_Help x = { .type = Tart_scheduling_static_Help }

#ifdef __cplusplus
}
#endif

#endif