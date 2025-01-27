#ifndef SIREUM_H_RTS_Actuators_ActuatorsMockThread_i_Api
#define SIREUM_H_RTS_Actuators_ActuatorsMockThread_i_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// RTS.Actuators.ActuatorsMockThread_i_Api

#define RTS_Actuators_ActuatorsMockThread_i_Api__eq(this, other) Type__eq(this, other)
#define RTS_Actuators_ActuatorsMockThread_i_Api__ne(this, other) (!Type__eq(this, other))
#define RTS_Actuators_ActuatorsMockThread_i_Api__equiv(this, other) Type__equiv(this, other)
#define RTS_Actuators_ActuatorsMockThread_i_Api__inequiv(this, other) (!Type__equiv(this, other))
#define RTS_Actuators_ActuatorsMockThread_i_Api_cprint(this, isOut) Type_cprint(this, isOut)
B RTS_Actuators_ActuatorsMockThread_i_Api__is(STACK_FRAME void *this);
RTS_Actuators_ActuatorsMockThread_i_Api RTS_Actuators_ActuatorsMockThread_i_Api__as(STACK_FRAME void *this);
inline void RTS_Actuators_ActuatorsMockThread_i_Api_string_(STACK_FRAME String result, RTS_Actuators_ActuatorsMockThread_i_Api this) {
  Type_string_(CALLER result, this);
}

Unit RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_logInfo_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Initialization_Api this, String msg);

Unit RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_logDebug_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Initialization_Api this, String msg);

Unit RTS_Actuators_ActuatorsMockThread_i_Initialization_Api_logError_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Initialization_Api this, String msg);

Unit RTS_Actuators_ActuatorsMockThread_i_Operational_Api_logInfo_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Operational_Api this, String msg);

Unit RTS_Actuators_ActuatorsMockThread_i_Operational_Api_logDebug_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Operational_Api this, String msg);

Unit RTS_Actuators_ActuatorsMockThread_i_Operational_Api_logError_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Operational_Api this, String msg);

#ifdef __cplusplus
}
#endif

#endif