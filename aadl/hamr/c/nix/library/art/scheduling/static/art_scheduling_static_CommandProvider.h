#ifndef SIREUM_H_art_scheduling_static_CommandProvider
#define SIREUM_H_art_scheduling_static_CommandProvider

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.CommandProvider

#define art_scheduling_static_CommandProvider__eq(this, other) Type__eq(this, other)
#define art_scheduling_static_CommandProvider__ne(this, other) (!Type__eq(this, other))
#define art_scheduling_static_CommandProvider__equiv(this, other) Type__equiv(this, other)
#define art_scheduling_static_CommandProvider__inequiv(this, other) (!Type__equiv(this, other))
#define art_scheduling_static_CommandProvider_cprint(this, isOut) Type_cprint(this, isOut)
B art_scheduling_static_CommandProvider__is(STACK_FRAME void *this);
art_scheduling_static_CommandProvider art_scheduling_static_CommandProvider__as(STACK_FRAME void *this);
inline void art_scheduling_static_CommandProvider_string_(STACK_FRAME String result, art_scheduling_static_CommandProvider this) {
  Type_string_(CALLER result, this);
}

void art_scheduling_static_CommandProvider_nextCommand_(STACK_FRAME art_scheduling_static_Command result, art_scheduling_static_CommandProvider this);

#ifdef __cplusplus
}
#endif

#endif