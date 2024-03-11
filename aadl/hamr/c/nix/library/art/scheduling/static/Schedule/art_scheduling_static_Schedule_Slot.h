#ifndef SIREUM_H_art_scheduling_static_Schedule_Slot
#define SIREUM_H_art_scheduling_static_Schedule_Slot

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.Schedule.Slot

#define art_scheduling_static_Schedule_Slot_domain_(this) ((this)->domain)
#define art_scheduling_static_Schedule_Slot_length_(this) ((this)->length)

B art_scheduling_static_Schedule_Slot__eq(art_scheduling_static_Schedule_Slot this, art_scheduling_static_Schedule_Slot other);
inline B art_scheduling_static_Schedule_Slot__ne(art_scheduling_static_Schedule_Slot this, art_scheduling_static_Schedule_Slot other) {
  return !art_scheduling_static_Schedule_Slot__eq(this, other);
};
B art_scheduling_static_Schedule_Slot__equiv(art_scheduling_static_Schedule_Slot this, art_scheduling_static_Schedule_Slot other);
inline B art_scheduling_static_Schedule_Slot__inequiv(art_scheduling_static_Schedule_Slot this, art_scheduling_static_Schedule_Slot other) {
  return !art_scheduling_static_Schedule_Slot__equiv(this, other);
};
void art_scheduling_static_Schedule_Slot_string_(STACK_FRAME String result, art_scheduling_static_Schedule_Slot this);
void art_scheduling_static_Schedule_Slot_cprint(art_scheduling_static_Schedule_Slot this, B isOut);

inline B art_scheduling_static_Schedule_Slot__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_Schedule_Slot) this)->type == Tart_scheduling_static_Schedule_Slot;
}

inline art_scheduling_static_Schedule_Slot art_scheduling_static_Schedule_Slot__as(STACK_FRAME void *this) {
  if (art_scheduling_static_Schedule_Slot__is(CALLER this)) return (art_scheduling_static_Schedule_Slot) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.Schedule.Slot.");
  abort();
}

void art_scheduling_static_Schedule_Slot_apply(STACK_FRAME art_scheduling_static_Schedule_Slot this, Z domain, Z length);

#ifdef __cplusplus
}
#endif

#endif