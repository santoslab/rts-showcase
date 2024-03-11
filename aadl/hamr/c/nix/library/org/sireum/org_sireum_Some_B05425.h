#ifndef SIREUM_H_org_sireum_Some_B05425
#define SIREUM_H_org_sireum_Some_B05425

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]

#define Some_B05425_value_(this) ((RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) &(this)->value)

B Some_B05425__eq(Some_B05425 this, Some_B05425 other);
inline B Some_B05425__ne(Some_B05425 this, Some_B05425 other) {
  return !Some_B05425__eq(this, other);
};
B Some_B05425__equiv(Some_B05425 this, Some_B05425 other);
inline B Some_B05425__inequiv(Some_B05425 this, Some_B05425 other) {
  return !Some_B05425__equiv(this, other);
};
void Some_B05425_string_(STACK_FRAME String result, Some_B05425 this);
void Some_B05425_cprint(Some_B05425 this, B isOut);

inline B Some_B05425__is(STACK_FRAME void* this) {
  return ((Some_B05425) this)->type == TSome_B05425;
}

inline Some_B05425 Some_B05425__as(STACK_FRAME void *this) {
  if (Some_B05425__is(CALLER this)) return (Some_B05425) this;
  sfAbortImpl(CALLER "Invalid cast to Some[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api].");
  abort();
}

void Some_B05425_apply(STACK_FRAME Some_B05425 this, RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif