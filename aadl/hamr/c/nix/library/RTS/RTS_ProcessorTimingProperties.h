#ifndef SIREUM_H_RTS_ProcessorTimingProperties
#define SIREUM_H_RTS_ProcessorTimingProperties

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// RTS.ProcessorTimingProperties

#define RTS_ProcessorTimingProperties_clockPeriod_(this) ((Option_882048) &(this)->clockPeriod)
#define RTS_ProcessorTimingProperties_framePeriod_(this) ((Option_882048) &(this)->framePeriod)
#define RTS_ProcessorTimingProperties_maxDomain_(this) ((Option_882048) &(this)->maxDomain)
#define RTS_ProcessorTimingProperties_slotTime_(this) ((Option_882048) &(this)->slotTime)

B RTS_ProcessorTimingProperties__eq(RTS_ProcessorTimingProperties this, RTS_ProcessorTimingProperties other);
inline B RTS_ProcessorTimingProperties__ne(RTS_ProcessorTimingProperties this, RTS_ProcessorTimingProperties other) {
  return !RTS_ProcessorTimingProperties__eq(this, other);
};
B RTS_ProcessorTimingProperties__equiv(RTS_ProcessorTimingProperties this, RTS_ProcessorTimingProperties other);
inline B RTS_ProcessorTimingProperties__inequiv(RTS_ProcessorTimingProperties this, RTS_ProcessorTimingProperties other) {
  return !RTS_ProcessorTimingProperties__equiv(this, other);
};
void RTS_ProcessorTimingProperties_string_(STACK_FRAME String result, RTS_ProcessorTimingProperties this);
void RTS_ProcessorTimingProperties_cprint(RTS_ProcessorTimingProperties this, B isOut);

inline B RTS_ProcessorTimingProperties__is(STACK_FRAME void* this) {
  return ((RTS_ProcessorTimingProperties) this)->type == TRTS_ProcessorTimingProperties;
}

inline RTS_ProcessorTimingProperties RTS_ProcessorTimingProperties__as(STACK_FRAME void *this) {
  if (RTS_ProcessorTimingProperties__is(CALLER this)) return (RTS_ProcessorTimingProperties) this;
  sfAbortImpl(CALLER "Invalid cast to RTS.ProcessorTimingProperties.");
  abort();
}

void RTS_ProcessorTimingProperties_apply(STACK_FRAME RTS_ProcessorTimingProperties this, Option_882048 clockPeriod, Option_882048 framePeriod, Option_882048 maxDomain, Option_882048 slotTime);

#ifdef __cplusplus
}
#endif

#endif