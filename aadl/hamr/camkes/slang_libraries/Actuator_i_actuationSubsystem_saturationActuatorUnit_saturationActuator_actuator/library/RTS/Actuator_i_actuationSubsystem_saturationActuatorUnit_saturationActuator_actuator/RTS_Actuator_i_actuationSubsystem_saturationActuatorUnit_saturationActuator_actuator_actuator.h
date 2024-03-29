#ifndef SIREUM_H_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator
#define SIREUM_H_RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init(STACK_FRAME_ONLY);

RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_actuatorBridge(STACK_FRAME_ONLY);
art_Bridge_EntryPoints RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_entryPoints(STACK_FRAME_ONLY);
Option_8E9F45 RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_noData(STACK_FRAME_ONLY);
art_Art_PortId RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_input_id(STACK_FRAME_ONLY);
Option_8E9F45 RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_input_port(STACK_FRAME_ONLY);
void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_input_port_a(STACK_FRAME Option_8E9F45 p_input_port);
art_Art_PortId RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_manualActuatorInput_id(STACK_FRAME_ONLY);
Option_8E9F45 RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_manualActuatorInput_port(STACK_FRAME_ONLY);
void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_manualActuatorInput_port_a(STACK_FRAME Option_8E9F45 p_manualActuatorInput_port);
art_Art_PortId RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_id(STACK_FRAME_ONLY);
Option_8E9F45 RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_port(STACK_FRAME_ONLY);
void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_output_port_a(STACK_FRAME Option_8E9F45 p_output_port);

Z RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_main(STACK_FRAME IS_948B60 args);

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_initialiseArchitecture(STACK_FRAME_ONLY);

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_initialiseEntryPoint(STACK_FRAME_ONLY);

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_computeEntryPoint(STACK_FRAME_ONLY);

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_finaliseEntryPoint(STACK_FRAME_ONLY);

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch_printDataContent(STACK_FRAME art_DataContent a);

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_touch(STACK_FRAME_ONLY);

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_logInfo(STACK_FRAME String title, String msg);

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_logDebug(STACK_FRAME String title, String msg);

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_logError(STACK_FRAME String title, String msg);

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_getValue(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId);

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_putValue(STACK_FRAME art_Art_PortId portId, art_DataContent data);

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_sendOutput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds);

Unit RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_receiveInput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds);

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_actuatorBridge(STACK_FRAME_ONLY);

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_entryPoints(STACK_FRAME_ONLY);

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_noData(STACK_FRAME_ONLY);

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_input_id(STACK_FRAME_ONLY);

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_input_port(STACK_FRAME_ONLY);

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_manualActuatorInput_id(STACK_FRAME_ONLY);

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_manualActuatorInput_port(STACK_FRAME_ONLY);

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_output_id(STACK_FRAME_ONLY);

void RTS_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_actuator_init_output_port(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif