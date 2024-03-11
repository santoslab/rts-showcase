#ifndef SIREUM_H_org_sireum_Some_6D5259
#define SIREUM_H_org_sireum_Some_6D5259

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[art.scheduling.static.Explorer.ScheduleState]

#define Some_6D5259_value_(this) ((art_scheduling_static_Explorer_ScheduleState) &(this)->value)

B Some_6D5259__eq(Some_6D5259 this, Some_6D5259 other);
inline B Some_6D5259__ne(Some_6D5259 this, Some_6D5259 other) {
  return !Some_6D5259__eq(this, other);
};
B Some_6D5259__equiv(Some_6D5259 this, Some_6D5259 other);
inline B Some_6D5259__inequiv(Some_6D5259 this, Some_6D5259 other) {
  return !Some_6D5259__equiv(this, other);
};
void Some_6D5259_string_(STACK_FRAME String result, Some_6D5259 this);
void Some_6D5259_cprint(Some_6D5259 this, B isOut);

inline B Some_6D5259__is(STACK_FRAME void* this) {
  return ((Some_6D5259) this)->type == TSome_6D5259;
}

inline Some_6D5259 Some_6D5259__as(STACK_FRAME void *this) {
  if (Some_6D5259__is(CALLER this)) return (Some_6D5259) this;
  sfAbortImpl(CALLER "Invalid cast to Some[art.scheduling.static.Explorer.ScheduleState].");
  abort();
}

void Some_6D5259_apply(STACK_FRAME Some_6D5259 this, art_scheduling_static_Explorer_ScheduleState value);

#ifdef __cplusplus
}
#endif

#endif