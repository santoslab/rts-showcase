#ifndef SIREUM_H_RTS_Actuation_Actuator_i_Api
#define SIREUM_H_RTS_Actuation_Actuator_i_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// RTS.Actuation.Actuator_i_Api

#define RTS_Actuation_Actuator_i_Api__eq(this, other) Type__eq(this, other)
#define RTS_Actuation_Actuator_i_Api__ne(this, other) (!Type__eq(this, other))
#define RTS_Actuation_Actuator_i_Api__equiv(this, other) Type__equiv(this, other)
#define RTS_Actuation_Actuator_i_Api__inequiv(this, other) (!Type__equiv(this, other))
#define RTS_Actuation_Actuator_i_Api_cprint(this, isOut) Type_cprint(this, isOut)
B RTS_Actuation_Actuator_i_Api__is(STACK_FRAME void *this);
RTS_Actuation_Actuator_i_Api RTS_Actuation_Actuator_i_Api__as(STACK_FRAME void *this);
inline void RTS_Actuation_Actuator_i_Api_string_(STACK_FRAME String result, RTS_Actuation_Actuator_i_Api this) {
  Type_string_(CALLER result, this);
}

Unit RTS_Actuation_Actuator_i_Initialization_Api_logInfo_(STACK_FRAME RTS_Actuation_Actuator_i_Initialization_Api this, String msg);

Unit RTS_Actuation_Actuator_i_Initialization_Api_logDebug_(STACK_FRAME RTS_Actuation_Actuator_i_Initialization_Api this, String msg);

Unit RTS_Actuation_Actuator_i_Initialization_Api_logError_(STACK_FRAME RTS_Actuation_Actuator_i_Initialization_Api this, String msg);

Unit RTS_Actuation_Actuator_i_Operational_Api_logInfo_(STACK_FRAME RTS_Actuation_Actuator_i_Operational_Api this, String msg);

Unit RTS_Actuation_Actuator_i_Operational_Api_logDebug_(STACK_FRAME RTS_Actuation_Actuator_i_Operational_Api this, String msg);

Unit RTS_Actuation_Actuator_i_Operational_Api_logError_(STACK_FRAME RTS_Actuation_Actuator_i_Operational_Api this, String msg);

Unit RTS_Actuation_Actuator_i_Initialization_Api_put_output_(STACK_FRAME RTS_Actuation_Actuator_i_Initialization_Api this, B value);

Unit RTS_Actuation_Actuator_i_Operational_Api_put_output_(STACK_FRAME RTS_Actuation_Actuator_i_Operational_Api this, B value);

#ifdef __cplusplus
}
#endif

#endif