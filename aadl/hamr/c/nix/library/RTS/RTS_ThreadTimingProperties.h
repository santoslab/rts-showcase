#ifndef SIREUM_H_RTS_ThreadTimingProperties
#define SIREUM_H_RTS_ThreadTimingProperties

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// RTS.ThreadTimingProperties

#define RTS_ThreadTimingProperties_domain_(this) ((Option_882048) &(this)->domain)
#define RTS_ThreadTimingProperties_computeExecutionTime_(this) ((Option_B47750) &(this)->computeExecutionTime)

B RTS_ThreadTimingProperties__eq(RTS_ThreadTimingProperties this, RTS_ThreadTimingProperties other);
inline B RTS_ThreadTimingProperties__ne(RTS_ThreadTimingProperties this, RTS_ThreadTimingProperties other) {
  return !RTS_ThreadTimingProperties__eq(this, other);
};
B RTS_ThreadTimingProperties__equiv(RTS_ThreadTimingProperties this, RTS_ThreadTimingProperties other);
inline B RTS_ThreadTimingProperties__inequiv(RTS_ThreadTimingProperties this, RTS_ThreadTimingProperties other) {
  return !RTS_ThreadTimingProperties__equiv(this, other);
};
void RTS_ThreadTimingProperties_string_(STACK_FRAME String result, RTS_ThreadTimingProperties this);
void RTS_ThreadTimingProperties_cprint(RTS_ThreadTimingProperties this, B isOut);

inline B RTS_ThreadTimingProperties__is(STACK_FRAME void* this) {
  return ((RTS_ThreadTimingProperties) this)->type == TRTS_ThreadTimingProperties;
}

inline RTS_ThreadTimingProperties RTS_ThreadTimingProperties__as(STACK_FRAME void *this) {
  if (RTS_ThreadTimingProperties__is(CALLER this)) return (RTS_ThreadTimingProperties) this;
  sfAbortImpl(CALLER "Invalid cast to RTS.ThreadTimingProperties.");
  abort();
}

void RTS_ThreadTimingProperties_apply(STACK_FRAME RTS_ThreadTimingProperties this, Option_882048 domain, Option_B47750 computeExecutionTime);

#ifdef __cplusplus
}
#endif

#endif