#ifndef SIREUM_H_art_Art
#define SIREUM_H_art_Art

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void art_Art_init(STACK_FRAME_ONLY);

Z art_Art_numComponents(STACK_FRAME_ONLY);
MS_83D5EB art_Art_bridges(STACK_FRAME_ONLY);

Unit art_Art_logInfo(STACK_FRAME art_Art_BridgeId bridgeId, String msg);

Unit art_Art_logDebug(STACK_FRAME art_Art_BridgeId bridgeId, String msg);

Unit art_Art_logError(STACK_FRAME art_Art_BridgeId bridgeId, String msg);

Unit art_Art_putValue(STACK_FRAME art_Art_PortId portId, art_DataContent data);

Unit art_Art_sendOutput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds);

Unit art_Art_receiveInput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds);

void art_Art_init_numComponents(STACK_FRAME_ONLY);

void art_Art_init_bridges(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif