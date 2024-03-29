#ifndef SIREUM_H_RTS_Arch
#define SIREUM_H_RTS_Arch

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void RTS_Arch_init(STACK_FRAME_ONLY);

RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(STACK_FRAME_ONLY);
RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge RTS_Arch_RTS_i_Instance_eventControlMock_eventControlMockThread(STACK_FRAME_ONLY);
RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge RTS_Arch_RTS_i_Instance_actuatorsMock_actuatorsMockThread(STACK_FRAME_ONLY);
RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic(STACK_FRAME_ONLY);
RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic(STACK_FRAME_ONLY);
RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic(STACK_FRAME_ONLY);
RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic(STACK_FRAME_ONLY);
RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic(STACK_FRAME_ONLY);
RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic(STACK_FRAME_ONLY);
RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic(STACK_FRAME_ONLY);
RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic(STACK_FRAME_ONLY);
RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic(STACK_FRAME_ONLY);
RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator(STACK_FRAME_ONLY);
RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic(STACK_FRAME_ONLY);
RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator(STACK_FRAME_ONLY);
art_ArchitectureDescription RTS_Arch_ad(STACK_FRAME_ONLY);

void RTS_Arch_init_RTS_i_Instance_instrumentationMock_instrumentationMockThread(STACK_FRAME_ONLY);

void RTS_Arch_init_RTS_i_Instance_eventControlMock_eventControlMockThread(STACK_FRAME_ONLY);

void RTS_Arch_init_RTS_i_Instance_actuatorsMock_actuatorsMockThread(STACK_FRAME_ONLY);

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic(STACK_FRAME_ONLY);

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic(STACK_FRAME_ONLY);

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic(STACK_FRAME_ONLY);

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic(STACK_FRAME_ONLY);

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic(STACK_FRAME_ONLY);

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic(STACK_FRAME_ONLY);

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic(STACK_FRAME_ONLY);

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic(STACK_FRAME_ONLY);

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic(STACK_FRAME_ONLY);

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator(STACK_FRAME_ONLY);

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic(STACK_FRAME_ONLY);

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator(STACK_FRAME_ONLY);

void RTS_Arch_init_ad(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif