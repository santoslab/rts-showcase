#ifndef SIREUM_H_art_scheduling_static_InfoCommandProvider
#define SIREUM_H_art_scheduling_static_InfoCommandProvider

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.InfoCommandProvider

#define art_scheduling_static_InfoCommandProvider__eq(this, other) Type__eq(this, other)
#define art_scheduling_static_InfoCommandProvider__ne(this, other) (!Type__eq(this, other))
#define art_scheduling_static_InfoCommandProvider__equiv(this, other) Type__equiv(this, other)
#define art_scheduling_static_InfoCommandProvider__inequiv(this, other) (!Type__equiv(this, other))
#define art_scheduling_static_InfoCommandProvider_cprint(this, isOut) Type_cprint(this, isOut)
B art_scheduling_static_InfoCommandProvider__is(STACK_FRAME void *this);
art_scheduling_static_InfoCommandProvider art_scheduling_static_InfoCommandProvider__as(STACK_FRAME void *this);
inline void art_scheduling_static_InfoCommandProvider_string_(STACK_FRAME String result, art_scheduling_static_InfoCommandProvider this) {
  Type_string_(CALLER result, this);
}

void art_scheduling_static_InfoCommandProvider_init_(STACK_FRAME art_scheduling_static_CommandProvider result, art_scheduling_static_InfoCommandProvider this, Map_EB5A91 threadNickNames, Z numSlots, IS_FDDCB6 displayOrder);

#ifdef __cplusplus
}
#endif

#endif