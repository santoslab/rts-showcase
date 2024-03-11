#ifndef SIREUM_H_org_sireum_Option_DB2CFC
#define SIREUM_H_org_sireum_Option_DB2CFC

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[RTS.Actuation.Actuator_i_Initialization_Api]

#define Option_DB2CFC__eq(this, other) Type__eq(this, other)
#define Option_DB2CFC__ne(this, other) (!Type__eq(this, other))
#define Option_DB2CFC__equiv(this, other) Type__equiv(this, other)
#define Option_DB2CFC__inequiv(this, other) (!Type__equiv(this, other))
#define Option_DB2CFC_cprint(this, isOut) Type_cprint(this, isOut)
B Option_DB2CFC__is(STACK_FRAME void *this);
Option_DB2CFC Option_DB2CFC__as(STACK_FRAME void *this);
inline void Option_DB2CFC_string_(STACK_FRAME String result, Option_DB2CFC this) {
  Type_string_(CALLER result, this);
}

void Option_DB2CFC_get_(STACK_FRAME RTS_Actuation_Actuator_i_Initialization_Api result, Option_DB2CFC this);

#ifdef __cplusplus
}
#endif

#endif