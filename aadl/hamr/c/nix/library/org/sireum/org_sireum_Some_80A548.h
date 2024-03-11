#ifndef SIREUM_H_org_sireum_Some_80A548
#define SIREUM_H_org_sireum_Some_80A548

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[(Z, Z)]

#define Some_80A548_value_(this) ((Tuple2_EC3B57) &(this)->value)

B Some_80A548__eq(Some_80A548 this, Some_80A548 other);
inline B Some_80A548__ne(Some_80A548 this, Some_80A548 other) {
  return !Some_80A548__eq(this, other);
};
B Some_80A548__equiv(Some_80A548 this, Some_80A548 other);
inline B Some_80A548__inequiv(Some_80A548 this, Some_80A548 other) {
  return !Some_80A548__equiv(this, other);
};
void Some_80A548_string_(STACK_FRAME String result, Some_80A548 this);
void Some_80A548_cprint(Some_80A548 this, B isOut);

inline B Some_80A548__is(STACK_FRAME void* this) {
  return ((Some_80A548) this)->type == TSome_80A548;
}

inline Some_80A548 Some_80A548__as(STACK_FRAME void *this) {
  if (Some_80A548__is(CALLER this)) return (Some_80A548) this;
  sfAbortImpl(CALLER "Invalid cast to Some[(Z, Z)].");
  abort();
}

void Some_80A548_apply(STACK_FRAME Some_80A548 this, Tuple2_EC3B57 value);

#ifdef __cplusplus
}
#endif

#endif