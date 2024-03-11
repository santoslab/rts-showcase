#ifndef SIREUM_TYPE_H_art_scheduling_static_InfoThreadNickNames
#define SIREUM_TYPE_H_art_scheduling_static_InfoThreadNickNames

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.InfoThreadNickNames

typedef struct art_scheduling_static_InfoThreadNickNames *art_scheduling_static_InfoThreadNickNames;
struct art_scheduling_static_InfoThreadNickNames {
  TYPE type;
};

#define DeclNewart_scheduling_static_InfoThreadNickNames(x) struct art_scheduling_static_InfoThreadNickNames x = { .type = Tart_scheduling_static_InfoThreadNickNames }

#ifdef __cplusplus
}
#endif

#endif