#ifndef SIREUM_H_org_sireum_Some_51E221
#define SIREUM_H_org_sireum_Some_51E221

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]

#define Some_51E221_value_(this) ((RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) &(this)->value)

B Some_51E221__eq(Some_51E221 this, Some_51E221 other);
inline B Some_51E221__ne(Some_51E221 this, Some_51E221 other) {
  return !Some_51E221__eq(this, other);
};
B Some_51E221__equiv(Some_51E221 this, Some_51E221 other);
inline B Some_51E221__inequiv(Some_51E221 this, Some_51E221 other) {
  return !Some_51E221__equiv(this, other);
};
void Some_51E221_string_(STACK_FRAME String result, Some_51E221 this);
void Some_51E221_cprint(Some_51E221 this, B isOut);

inline B Some_51E221__is(STACK_FRAME void* this) {
  return ((Some_51E221) this)->type == TSome_51E221;
}

inline Some_51E221 Some_51E221__as(STACK_FRAME void *this) {
  if (Some_51E221__is(CALLER this)) return (Some_51E221) this;
  sfAbortImpl(CALLER "Invalid cast to Some[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api].");
  abort();
}

void Some_51E221_apply(STACK_FRAME Some_51E221 this, RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif