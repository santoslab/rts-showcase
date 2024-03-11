#ifndef SIREUM_H_art_scheduling_static_StaticScheduler
#define SIREUM_H_art_scheduling_static_StaticScheduler

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void art_scheduling_static_StaticScheduler_init(STACK_FRAME_ONLY);

Map_EB5A91 art_scheduling_static_StaticScheduler_threadNickNames(STACK_FRAME_ONLY);
void art_scheduling_static_StaticScheduler_threadNickNames_a(STACK_FRAME Map_EB5A91 p_threadNickNames);
IS_FDDCB6 art_scheduling_static_StaticScheduler_domainToBridgeIdMap(STACK_FRAME_ONLY);
void art_scheduling_static_StaticScheduler_domainToBridgeIdMap_a(STACK_FRAME IS_FDDCB6 p_domainToBridgeIdMap);

// art.scheduling.static.StaticScheduler

#define art_scheduling_static_StaticScheduler_staticSchedule_(this) ((art_scheduling_static_Schedule_DScheduleSpec) &(this)->staticSchedule)
#define art_scheduling_static_StaticScheduler_bridges_(this) ((IS_058E6F) &(this)->bridges)
#define art_scheduling_static_StaticScheduler_domainToBridgeIdMap_(this) ((IS_FDDCB6) &(this)->domainToBridgeIdMap)
#define art_scheduling_static_StaticScheduler_threadNickNames_(this) ((Map_EB5A91) &(this)->threadNickNames)
#define art_scheduling_static_StaticScheduler_commandProvider_(this) ((art_scheduling_static_CommandProvider) &(this)->commandProvider)

B art_scheduling_static_StaticScheduler__eq(art_scheduling_static_StaticScheduler this, art_scheduling_static_StaticScheduler other);
inline B art_scheduling_static_StaticScheduler__ne(art_scheduling_static_StaticScheduler this, art_scheduling_static_StaticScheduler other) {
  return !art_scheduling_static_StaticScheduler__eq(this, other);
};
B art_scheduling_static_StaticScheduler__equiv(art_scheduling_static_StaticScheduler this, art_scheduling_static_StaticScheduler other);
inline B art_scheduling_static_StaticScheduler__inequiv(art_scheduling_static_StaticScheduler this, art_scheduling_static_StaticScheduler other) {
  return !art_scheduling_static_StaticScheduler__equiv(this, other);
};
void art_scheduling_static_StaticScheduler_string_(STACK_FRAME String result, art_scheduling_static_StaticScheduler this);
void art_scheduling_static_StaticScheduler_cprint(art_scheduling_static_StaticScheduler this, B isOut);

inline B art_scheduling_static_StaticScheduler__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_StaticScheduler) this)->type == Tart_scheduling_static_StaticScheduler;
}

inline art_scheduling_static_StaticScheduler art_scheduling_static_StaticScheduler__as(STACK_FRAME void *this) {
  if (art_scheduling_static_StaticScheduler__is(CALLER this)) return (art_scheduling_static_StaticScheduler) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.StaticScheduler.");
  abort();
}

void art_scheduling_static_StaticScheduler_apply(STACK_FRAME art_scheduling_static_StaticScheduler this, art_scheduling_static_Schedule_DScheduleSpec staticSchedule, IS_058E6F bridges, IS_FDDCB6 domainToBridgeIdMap, Map_EB5A91 threadNickNames, art_scheduling_static_CommandProvider commandProvider);

Unit art_scheduling_static_StaticScheduler_initialize_(STACK_FRAME art_scheduling_static_StaticScheduler this);

Unit art_scheduling_static_StaticScheduler_initializationPhase_(STACK_FRAME art_scheduling_static_StaticScheduler this);

Unit art_scheduling_static_StaticScheduler_computePhase_(STACK_FRAME art_scheduling_static_StaticScheduler this);

Unit art_scheduling_static_StaticScheduler_finalizePhase_(STACK_FRAME art_scheduling_static_StaticScheduler this);

Z art_scheduling_static_StaticScheduler_bridgeIdToDomainMap(STACK_FRAME art_Art_BridgeId bridgeId);

void art_scheduling_static_StaticScheduler_init_threadNickNames(STACK_FRAME_ONLY);

void art_scheduling_static_StaticScheduler_init_domainToBridgeIdMap(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif