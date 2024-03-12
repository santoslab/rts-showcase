#ifndef SIREUM_H_RTS_Base_Types_Integer_16_Payload
#define SIREUM_H_RTS_Base_Types_Integer_16_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// RTS.Base_Types.Integer_16_Payload

#define RTS_Base_Types_Integer_16_Payload_value_(this) ((this)->value)

B RTS_Base_Types_Integer_16_Payload__eq(RTS_Base_Types_Integer_16_Payload this, RTS_Base_Types_Integer_16_Payload other);
inline B RTS_Base_Types_Integer_16_Payload__ne(RTS_Base_Types_Integer_16_Payload this, RTS_Base_Types_Integer_16_Payload other) {
  return !RTS_Base_Types_Integer_16_Payload__eq(this, other);
};
B RTS_Base_Types_Integer_16_Payload__equiv(RTS_Base_Types_Integer_16_Payload this, RTS_Base_Types_Integer_16_Payload other);
inline B RTS_Base_Types_Integer_16_Payload__inequiv(RTS_Base_Types_Integer_16_Payload this, RTS_Base_Types_Integer_16_Payload other) {
  return !RTS_Base_Types_Integer_16_Payload__equiv(this, other);
};
void RTS_Base_Types_Integer_16_Payload_string_(STACK_FRAME String result, RTS_Base_Types_Integer_16_Payload this);
void RTS_Base_Types_Integer_16_Payload_cprint(RTS_Base_Types_Integer_16_Payload this, B isOut);

inline B RTS_Base_Types_Integer_16_Payload__is(STACK_FRAME void* this) {
  return ((RTS_Base_Types_Integer_16_Payload) this)->type == TRTS_Base_Types_Integer_16_Payload;
}

inline RTS_Base_Types_Integer_16_Payload RTS_Base_Types_Integer_16_Payload__as(STACK_FRAME void *this) {
  if (RTS_Base_Types_Integer_16_Payload__is(CALLER this)) return (RTS_Base_Types_Integer_16_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to RTS.Base_Types.Integer_16_Payload.");
  abort();
}

void RTS_Base_Types_Integer_16_Payload_apply(STACK_FRAME RTS_Base_Types_Integer_16_Payload this, S16 value);

#ifdef __cplusplus
}
#endif

#endif