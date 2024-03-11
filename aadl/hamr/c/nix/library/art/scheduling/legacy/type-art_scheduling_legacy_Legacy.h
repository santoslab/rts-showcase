#ifndef SIREUM_TYPE_H_art_scheduling_legacy_Legacy
#define SIREUM_TYPE_H_art_scheduling_legacy_Legacy

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.legacy.Legacy
#include <type-org_sireum_IS_058E6F.h>

typedef struct art_scheduling_legacy_Legacy *art_scheduling_legacy_Legacy;
struct art_scheduling_legacy_Legacy {
  TYPE type;
  struct IS_058E6F bridges;
};

#define DeclNewart_scheduling_legacy_Legacy(x) struct art_scheduling_legacy_Legacy x = { .type = Tart_scheduling_legacy_Legacy }

#ifdef __cplusplus
}
#endif

#endif