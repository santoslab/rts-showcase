#ifndef SIREUM_H_art_scheduling_static_StateObserver
#define SIREUM_H_art_scheduling_static_StateObserver

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit art_scheduling_static_StateObserver_printPortContentsInputsCurrent(STACK_FRAME_ONLY);

Unit art_scheduling_static_StateObserver_printPortContentsOutputsCurrent(STACK_FRAME_ONLY);

Unit art_scheduling_static_StateObserver_printPortContents(STACK_FRAME art_Art_BridgeId bridgeId);

Unit art_scheduling_static_StateObserver_printPortContentsByNickName(STACK_FRAME String threadNickName);

void art_scheduling_static_StateObserver_observeInPortValues(STACK_FRAME IS_39643F result, art_Art_BridgeId bridgeId);

Unit art_scheduling_static_StateObserver_printPortInfo(STACK_FRAME IS_39643F portVals);

void art_scheduling_static_StateObserver_observeOutPortValues(STACK_FRAME IS_39643F result, art_Art_BridgeId bridgeId);

#ifdef __cplusplus
}
#endif

#endif