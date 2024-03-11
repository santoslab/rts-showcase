#ifndef SIREUM_H_org_sireum_MOption_AEC260
#define SIREUM_H_org_sireum_MOption_AEC260

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MOption[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)]

#define MOption_AEC260__eq(this, other) Type__eq(this, other)
#define MOption_AEC260__ne(this, other) (!Type__eq(this, other))
#define MOption_AEC260__equiv(this, other) Type__equiv(this, other)
#define MOption_AEC260__inequiv(this, other) (!Type__equiv(this, other))
#define MOption_AEC260_cprint(this, isOut) Type_cprint(this, isOut)
B MOption_AEC260__is(STACK_FRAME void *this);
MOption_AEC260 MOption_AEC260__as(STACK_FRAME void *this);
inline void MOption_AEC260_string_(STACK_FRAME String result, MOption_AEC260 this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif