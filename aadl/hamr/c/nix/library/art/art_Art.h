#ifndef SIREUM_H_art_Art
#define SIREUM_H_art_Art

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void art_Art_init(STACK_FRAME_ONLY);

Z art_Art_numComponents(STACK_FRAME_ONLY);
Z art_Art_numPorts(STACK_FRAME_ONLY);
String art_Art_logTitle(STACK_FRAME_ONLY);
MS_83D5EB art_Art_bridges(STACK_FRAME_ONLY);
MS_9C0286 art_Art_ports(STACK_FRAME_ONLY);
MS_CA6EDB art_Art_connections(STACK_FRAME_ONLY);

Unit art_Art_run(STACK_FRAME art_ArchitectureDescription system, art_scheduling_Scheduler scheduler);

Unit art_Art_assemble(STACK_FRAME art_ArchitectureDescription system);

Unit art_Art_setUpArchitecture(STACK_FRAME_ONLY);

Unit art_Art_setUpPlatform(STACK_FRAME_ONLY);

Unit art_Art_setUpSystemState(STACK_FRAME art_scheduling_Scheduler scheduler);

Unit art_Art_initializePhase(STACK_FRAME art_scheduling_Scheduler scheduler);

Unit art_Art_computePhase(STACK_FRAME art_scheduling_Scheduler scheduler);

Unit art_Art_finalizePhase(STACK_FRAME art_scheduling_Scheduler scheduler);

Unit art_Art_tearDownSystemState(STACK_FRAME_ONLY);

Unit art_Art_tearDownPlatform(STACK_FRAME_ONLY);

Unit art_Art_tearDownArchitecture(STACK_FRAME_ONLY);

Unit art_Art_register_r(STACK_FRAME IS_820232 uports);

Unit art_Art_m_register(STACK_FRAME art_Bridge bridge);

Unit art_Art_connect(STACK_FRAME art_UPort from, art_UPort to);

Unit art_Art_logInfo(STACK_FRAME art_Art_BridgeId bridgeId, String msg);

Unit art_Art_logDebug(STACK_FRAME art_Art_BridgeId bridgeId, String msg);

Unit art_Art_logError(STACK_FRAME art_Art_BridgeId bridgeId, String msg);

Unit art_Art_putValue(STACK_FRAME art_Art_PortId portId, art_DataContent data);

void art_Art_getValue(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId);

S64 art_Art_time(STACK_FRAME_ONLY);

Unit art_Art_sendOutput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds);

Unit art_Art_receiveInput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds);

void art_Art_observeInInfrastructurePort(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId);

void art_Art_observeOutPortVariable(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId);

void art_Art_port(STACK_FRAME art_UPort result, art_Art_PortId p);

void art_Art_init_numComponents(STACK_FRAME_ONLY);

void art_Art_init_numPorts(STACK_FRAME_ONLY);

void art_Art_init_logTitle(STACK_FRAME_ONLY);

void art_Art_init_bridges(STACK_FRAME_ONLY);

void art_Art_init_ports(STACK_FRAME_ONLY);

void art_Art_init_connections(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif