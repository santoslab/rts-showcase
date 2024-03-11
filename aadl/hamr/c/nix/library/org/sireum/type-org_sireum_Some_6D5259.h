#ifndef SIREUM_TYPE_H_org_sireum_Some_6D5259
#define SIREUM_TYPE_H_org_sireum_Some_6D5259

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[art.scheduling.static.Explorer.ScheduleState]
#include <type-art_scheduling_static_Explorer_ScheduleState.h>

typedef struct Some_6D5259 *Some_6D5259;
struct Some_6D5259 {
  TYPE type;
  struct art_scheduling_static_Explorer_ScheduleState value;
};

#define DeclNewSome_6D5259(x) struct Some_6D5259 x = { .type = TSome_6D5259 }

#ifdef __cplusplus
}
#endif

#endif