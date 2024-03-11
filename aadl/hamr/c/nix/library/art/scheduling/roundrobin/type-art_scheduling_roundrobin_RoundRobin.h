#ifndef SIREUM_TYPE_H_art_scheduling_roundrobin_RoundRobin
#define SIREUM_TYPE_H_art_scheduling_roundrobin_RoundRobin

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.roundrobin.RoundRobin
#include <type-org_sireum_IS_FDDCB6.h>
#include <type-org_sireum_MS_A7EF1B.h>
#include <type-org_sireum_MS_A7EF1B.h>

typedef struct art_scheduling_roundrobin_RoundRobin *art_scheduling_roundrobin_RoundRobin;
struct art_scheduling_roundrobin_RoundRobin {
  TYPE type;
  struct IS_FDDCB6 schedule;
  struct MS_A7EF1B lastDispatch;
  struct MS_A7EF1B lastSporadic;
};

#define DeclNewart_scheduling_roundrobin_RoundRobin(x) struct art_scheduling_roundrobin_RoundRobin x = { .type = Tart_scheduling_roundrobin_RoundRobin }

#ifdef __cplusplus
}
#endif

#endif