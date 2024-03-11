#ifndef SIREUM_TYPE_H_art_scheduling_Scheduler
#define SIREUM_TYPE_H_art_scheduling_Scheduler

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.Scheduler

#include <type-art_scheduling_legacy_Legacy.h>
#include <type-art_scheduling_static_StaticScheduler.h>
#include <type-art_scheduling_roundrobin_RoundRobin.h>

typedef union art_scheduling_Scheduler *art_scheduling_Scheduler;
union art_scheduling_Scheduler {
  TYPE type;
  struct art_scheduling_legacy_Legacy art_scheduling_legacy_Legacy;
  struct art_scheduling_static_StaticScheduler art_scheduling_static_StaticScheduler;
  struct art_scheduling_roundrobin_RoundRobin art_scheduling_roundrobin_RoundRobin;
};

#define DeclNewart_scheduling_Scheduler(x) union art_scheduling_Scheduler x = { 0 }

#ifdef __cplusplus
}
#endif

#endif