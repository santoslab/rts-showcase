#ifndef SIREUM_TYPE_H_org_sireum_IS_5AA467
#define SIREUM_TYPE_H_org_sireum_IS_5AA467

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[Z, art.scheduling.static.Schedule.Slot]
#include <type-art_scheduling_static_Schedule_Slot.h>

#define MaxIS_5AA467 15
#define IS_5AA467SizeT int8_t

typedef struct IS_5AA467 *IS_5AA467;
struct IS_5AA467 {
  TYPE type;
  IS_5AA467SizeT size;
  struct art_scheduling_static_Schedule_Slot value[MaxIS_5AA467];
};

#define DeclNewIS_5AA467(x) struct IS_5AA467 x = { .type = TIS_5AA467 }

#ifdef __cplusplus
}
#endif

#endif