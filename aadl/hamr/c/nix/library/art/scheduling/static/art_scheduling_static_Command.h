#ifndef SIREUM_H_art_scheduling_static_Command
#define SIREUM_H_art_scheduling_static_Command

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.Command

#define art_scheduling_static_Command__eq(this, other) Type__eq(this, other)
#define art_scheduling_static_Command__ne(this, other) (!Type__eq(this, other))
#define art_scheduling_static_Command__equiv(this, other) Type__equiv(this, other)
#define art_scheduling_static_Command__inequiv(this, other) (!Type__equiv(this, other))
#define art_scheduling_static_Command_cprint(this, isOut) Type_cprint(this, isOut)
B art_scheduling_static_Command__is(STACK_FRAME void *this);
art_scheduling_static_Command art_scheduling_static_Command__as(STACK_FRAME void *this);
inline void art_scheduling_static_Command_string_(STACK_FRAME String result, art_scheduling_static_Command this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif