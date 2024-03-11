#ifndef SIREUM_H_org_sireum_MS_9C0286
#define SIREUM_H_org_sireum_MS_9C0286

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MS[art.Art.PortId, Option[art.UPort]]

inline Option_6239DB MS_9C0286_at(MS_9C0286 this, art_Art_PortId i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  return (Option_6239DB) &(this->value[(int8_t) idx]);
}

inline void MS_9C0286_up(MS_9C0286 this, art_Art_PortId i, Option_6239DB e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(union Option_6239DB));
}

inline art_Art_PortId MS_9C0286_size(STACK_FRAME MS_9C0286 this) {
   return (art_Art_PortId) (this)->size;
}

inline Z MS_9C0286_zize(STACK_FRAME MS_9C0286 this) {
   return (Z) (this)->size;
}

inline B MS_9C0286_isEmpty(STACK_FRAME MS_9C0286 this) {
   return (this)->size == 0;
}

inline B MS_9C0286_nonEmpty(STACK_FRAME MS_9C0286 this) {
   return (this)->size != 0;
}

B MS_9C0286__eq(MS_9C0286 this, MS_9C0286 other);
B MS_9C0286__equiv(MS_9C0286 this, MS_9C0286 other);
void MS_9C0286_create(STACK_FRAME MS_9C0286 result, Z size, Option_6239DB dflt);
void MS_9C0286__append(STACK_FRAME MS_9C0286 result, MS_9C0286 this, Option_6239DB value);
void MS_9C0286__prepend(STACK_FRAME MS_9C0286 result, MS_9C0286 this, Option_6239DB value);
void MS_9C0286__appendAll(STACK_FRAME MS_9C0286 result, MS_9C0286 this, MS_9C0286 other);
void MS_9C0286__sub(STACK_FRAME MS_9C0286 result, MS_9C0286 this, Option_6239DB value);
void MS_9C0286__removeAll(STACK_FRAME MS_9C0286 result, MS_9C0286 this, MS_9C0286 other);
void MS_9C0286_cprint(MS_9C0286 this, B isOut);
void MS_9C0286_string_(STACK_FRAME String result, MS_9C0286 this);

inline B MS_9C0286__ne(MS_9C0286 this, MS_9C0286 other) {
  return !MS_9C0286__eq(this, other);
}
inline B MS_9C0286__inequiv(MS_9C0286 this, MS_9C0286 other) {
  return !MS_9C0286__equiv(this, other);
}


#ifdef __cplusplus
}
#endif

#endif