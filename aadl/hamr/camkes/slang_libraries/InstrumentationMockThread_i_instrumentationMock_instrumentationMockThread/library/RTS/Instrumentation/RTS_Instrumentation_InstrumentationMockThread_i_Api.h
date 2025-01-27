#ifndef SIREUM_H_RTS_Instrumentation_InstrumentationMockThread_i_Api
#define SIREUM_H_RTS_Instrumentation_InstrumentationMockThread_i_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// RTS.Instrumentation.InstrumentationMockThread_i_Api

#define RTS_Instrumentation_InstrumentationMockThread_i_Api__eq(this, other) Type__eq(this, other)
#define RTS_Instrumentation_InstrumentationMockThread_i_Api__ne(this, other) (!Type__eq(this, other))
#define RTS_Instrumentation_InstrumentationMockThread_i_Api__equiv(this, other) Type__equiv(this, other)
#define RTS_Instrumentation_InstrumentationMockThread_i_Api__inequiv(this, other) (!Type__equiv(this, other))
#define RTS_Instrumentation_InstrumentationMockThread_i_Api_cprint(this, isOut) Type_cprint(this, isOut)
B RTS_Instrumentation_InstrumentationMockThread_i_Api__is(STACK_FRAME void *this);
RTS_Instrumentation_InstrumentationMockThread_i_Api RTS_Instrumentation_InstrumentationMockThread_i_Api__as(STACK_FRAME void *this);
inline void RTS_Instrumentation_InstrumentationMockThread_i_Api_string_(STACK_FRAME String result, RTS_Instrumentation_InstrumentationMockThread_i_Api this) {
  Type_string_(CALLER result, this);
}

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_logInfo_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, String msg);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_logDebug_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, String msg);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_logError_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, String msg);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_logInfo_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, String msg);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_logDebug_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, String msg);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_logError_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, String msg);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_temperatureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_temperatureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_pressureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_pressureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit1_saturationLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit1_saturationLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_temperatureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_temperatureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_pressureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_pressureLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel1_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel2_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel3_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api_put_unit2_saturationLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api this, B value);

Unit RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api_put_unit2_saturationLogic_channel4_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api this, B value);

#ifdef __cplusplus
}
#endif

#endif