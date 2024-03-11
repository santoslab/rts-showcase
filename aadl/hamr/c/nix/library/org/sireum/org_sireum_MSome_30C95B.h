#ifndef SIREUM_H_org_sireum_MSome_30C95B
#define SIREUM_H_org_sireum_MSome_30C95B

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MSome[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)]

#define MSome_30C95B_value_(this) ((Tuple4_FA9F23) &(this)->value)

B MSome_30C95B__eq(MSome_30C95B this, MSome_30C95B other);
inline B MSome_30C95B__ne(MSome_30C95B this, MSome_30C95B other) {
  return !MSome_30C95B__eq(this, other);
};
B MSome_30C95B__equiv(MSome_30C95B this, MSome_30C95B other);
inline B MSome_30C95B__inequiv(MSome_30C95B this, MSome_30C95B other) {
  return !MSome_30C95B__equiv(this, other);
};
void MSome_30C95B_string_(STACK_FRAME String result, MSome_30C95B this);
void MSome_30C95B_cprint(MSome_30C95B this, B isOut);

inline B MSome_30C95B__is(STACK_FRAME void* this) {
  return ((MSome_30C95B) this)->type == TMSome_30C95B;
}

inline MSome_30C95B MSome_30C95B__as(STACK_FRAME void *this) {
  if (MSome_30C95B__is(CALLER this)) return (MSome_30C95B) this;
  sfAbortImpl(CALLER "Invalid cast to MSome[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)].");
  abort();
}

void MSome_30C95B_apply(STACK_FRAME MSome_30C95B this, Tuple4_FA9F23 value);

#ifdef __cplusplus
}
#endif

#endif