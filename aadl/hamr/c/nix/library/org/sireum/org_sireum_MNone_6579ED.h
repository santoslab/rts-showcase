#ifndef SIREUM_H_org_sireum_MNone_6579ED
#define SIREUM_H_org_sireum_MNone_6579ED

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MNone[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)]


B MNone_6579ED__eq(MNone_6579ED this, MNone_6579ED other);
inline B MNone_6579ED__ne(MNone_6579ED this, MNone_6579ED other) {
  return !MNone_6579ED__eq(this, other);
};
B MNone_6579ED__equiv(MNone_6579ED this, MNone_6579ED other);
inline B MNone_6579ED__inequiv(MNone_6579ED this, MNone_6579ED other) {
  return !MNone_6579ED__equiv(this, other);
};
void MNone_6579ED_string_(STACK_FRAME String result, MNone_6579ED this);
void MNone_6579ED_cprint(MNone_6579ED this, B isOut);

inline B MNone_6579ED__is(STACK_FRAME void* this) {
  return ((MNone_6579ED) this)->type == TMNone_6579ED;
}

inline MNone_6579ED MNone_6579ED__as(STACK_FRAME void *this) {
  if (MNone_6579ED__is(CALLER this)) return (MNone_6579ED) this;
  sfAbortImpl(CALLER "Invalid cast to MNone[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)].");
  abort();
}

void MNone_6579ED_apply(STACK_FRAME MNone_6579ED this);

#ifdef __cplusplus
}
#endif

#endif