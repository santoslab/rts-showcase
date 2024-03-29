#ifndef SIREUM_H_RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic
#define SIREUM_H_RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_initialise(STACK_FRAME RTS_Actuation_OrLogic_i_Initialization_Api api);

Unit RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_timeTriggered(STACK_FRAME RTS_Actuation_OrLogic_i_Operational_Api api);

Unit RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_finalise(STACK_FRAME RTS_Actuation_OrLogic_i_Operational_Api api);

#ifdef __cplusplus
}
#endif

#endif