#ifndef SIREUM_H_org_sireum_IS_5AA467
#define SIREUM_H_org_sireum_IS_5AA467

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[Z, art.scheduling.static.Schedule.Slot]

inline art_scheduling_static_Schedule_Slot IS_5AA467_at(IS_5AA467 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  return (art_scheduling_static_Schedule_Slot) &(this->value[(int8_t) idx]);
}

inline void IS_5AA467_up(IS_5AA467 this, Z i, art_scheduling_static_Schedule_Slot e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(struct art_scheduling_static_Schedule_Slot));
}

inline Z IS_5AA467_size(STACK_FRAME IS_5AA467 this) {
   return (Z) (this)->size;
}

inline Z IS_5AA467_zize(STACK_FRAME IS_5AA467 this) {
   return (Z) (this)->size;
}

inline B IS_5AA467_isEmpty(STACK_FRAME IS_5AA467 this) {
   return (this)->size == 0;
}

inline B IS_5AA467_nonEmpty(STACK_FRAME IS_5AA467 this) {
   return (this)->size != 0;
}

B IS_5AA467__eq(IS_5AA467 this, IS_5AA467 other);
B IS_5AA467__equiv(IS_5AA467 this, IS_5AA467 other);
void IS_5AA467_create(STACK_FRAME IS_5AA467 result, Z size, art_scheduling_static_Schedule_Slot dflt);
void IS_5AA467__append(STACK_FRAME IS_5AA467 result, IS_5AA467 this, art_scheduling_static_Schedule_Slot value);
void IS_5AA467__prepend(STACK_FRAME IS_5AA467 result, IS_5AA467 this, art_scheduling_static_Schedule_Slot value);
void IS_5AA467__appendAll(STACK_FRAME IS_5AA467 result, IS_5AA467 this, IS_5AA467 other);
void IS_5AA467__sub(STACK_FRAME IS_5AA467 result, IS_5AA467 this, art_scheduling_static_Schedule_Slot value);
void IS_5AA467__removeAll(STACK_FRAME IS_5AA467 result, IS_5AA467 this, IS_5AA467 other);
void IS_5AA467_cprint(IS_5AA467 this, B isOut);
void IS_5AA467_string_(STACK_FRAME String result, IS_5AA467 this);

inline B IS_5AA467__ne(IS_5AA467 this, IS_5AA467 other) {
  return !IS_5AA467__eq(this, other);
}
inline B IS_5AA467__inequiv(IS_5AA467 this, IS_5AA467 other) {
  return !IS_5AA467__equiv(this, other);
}


#ifdef __cplusplus
}
#endif

#endif