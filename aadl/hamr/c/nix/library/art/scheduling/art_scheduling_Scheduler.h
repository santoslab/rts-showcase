#ifndef SIREUM_H_art_scheduling_Scheduler
#define SIREUM_H_art_scheduling_Scheduler

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.Scheduler

#define art_scheduling_Scheduler__eq(this, other) Type__eq(this, other)
#define art_scheduling_Scheduler__ne(this, other) (!Type__eq(this, other))
#define art_scheduling_Scheduler__equiv(this, other) Type__equiv(this, other)
#define art_scheduling_Scheduler__inequiv(this, other) (!Type__equiv(this, other))
#define art_scheduling_Scheduler_cprint(this, isOut) Type_cprint(this, isOut)
B art_scheduling_Scheduler__is(STACK_FRAME void *this);
art_scheduling_Scheduler art_scheduling_Scheduler__as(STACK_FRAME void *this);
inline void art_scheduling_Scheduler_string_(STACK_FRAME String result, art_scheduling_Scheduler this) {
  Type_string_(CALLER result, this);
}

Unit art_scheduling_Scheduler_initialize_(STACK_FRAME art_scheduling_Scheduler this);

Unit art_scheduling_Scheduler_initializationPhase_(STACK_FRAME art_scheduling_Scheduler this);

Unit art_scheduling_Scheduler_computePhase_(STACK_FRAME art_scheduling_Scheduler this);

Unit art_scheduling_Scheduler_finalizePhase_(STACK_FRAME art_scheduling_Scheduler this);

#ifdef __cplusplus
}
#endif

#endif