#ifndef SIREUM_H_org_sireum_IS_39643F
#define SIREUM_H_org_sireum_IS_39643F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[Z, (String, Option[art.DataContent])]

inline Tuple2_275908 IS_39643F_at(IS_39643F this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  return (Tuple2_275908) &(this->value[(int8_t) idx]);
}

inline void IS_39643F_up(IS_39643F this, Z i, Tuple2_275908 e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(struct Tuple2_275908));
}

inline Z IS_39643F_size(STACK_FRAME IS_39643F this) {
   return (Z) (this)->size;
}

inline Z IS_39643F_zize(STACK_FRAME IS_39643F this) {
   return (Z) (this)->size;
}

inline B IS_39643F_isEmpty(STACK_FRAME IS_39643F this) {
   return (this)->size == 0;
}

inline B IS_39643F_nonEmpty(STACK_FRAME IS_39643F this) {
   return (this)->size != 0;
}

B IS_39643F__eq(IS_39643F this, IS_39643F other);
B IS_39643F__equiv(IS_39643F this, IS_39643F other);
void IS_39643F_create(STACK_FRAME IS_39643F result, Z size, Tuple2_275908 dflt);
void IS_39643F__append(STACK_FRAME IS_39643F result, IS_39643F this, Tuple2_275908 value);
void IS_39643F__prepend(STACK_FRAME IS_39643F result, IS_39643F this, Tuple2_275908 value);
void IS_39643F__appendAll(STACK_FRAME IS_39643F result, IS_39643F this, IS_39643F other);
void IS_39643F__sub(STACK_FRAME IS_39643F result, IS_39643F this, Tuple2_275908 value);
void IS_39643F__removeAll(STACK_FRAME IS_39643F result, IS_39643F this, IS_39643F other);
void IS_39643F_cprint(IS_39643F this, B isOut);
void IS_39643F_string_(STACK_FRAME String result, IS_39643F this);

inline B IS_39643F__ne(IS_39643F this, IS_39643F other) {
  return !IS_39643F__eq(this, other);
}
inline B IS_39643F__inequiv(IS_39643F this, IS_39643F other) {
  return !IS_39643F__equiv(this, other);
}


#ifdef __cplusplus
}
#endif

#endif