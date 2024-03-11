#ifndef SIREUM_H_org_sireum_IS_7DA5C1
#define SIREUM_H_org_sireum_IS_7DA5C1

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[Z, (B, B)]

inline Tuple2_0862A0 IS_7DA5C1_at(IS_7DA5C1 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  return (Tuple2_0862A0) &(this->value[(int8_t) idx]);
}

inline void IS_7DA5C1_up(IS_7DA5C1 this, Z i, Tuple2_0862A0 e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(struct Tuple2_0862A0));
}

inline Z IS_7DA5C1_size(STACK_FRAME IS_7DA5C1 this) {
   return (Z) (this)->size;
}

inline Z IS_7DA5C1_zize(STACK_FRAME IS_7DA5C1 this) {
   return (Z) (this)->size;
}

inline B IS_7DA5C1_isEmpty(STACK_FRAME IS_7DA5C1 this) {
   return (this)->size == 0;
}

inline B IS_7DA5C1_nonEmpty(STACK_FRAME IS_7DA5C1 this) {
   return (this)->size != 0;
}

B IS_7DA5C1__eq(IS_7DA5C1 this, IS_7DA5C1 other);
B IS_7DA5C1__equiv(IS_7DA5C1 this, IS_7DA5C1 other);
void IS_7DA5C1_create(STACK_FRAME IS_7DA5C1 result, Z size, Tuple2_0862A0 dflt);
void IS_7DA5C1__append(STACK_FRAME IS_7DA5C1 result, IS_7DA5C1 this, Tuple2_0862A0 value);
void IS_7DA5C1__prepend(STACK_FRAME IS_7DA5C1 result, IS_7DA5C1 this, Tuple2_0862A0 value);
void IS_7DA5C1__appendAll(STACK_FRAME IS_7DA5C1 result, IS_7DA5C1 this, IS_7DA5C1 other);
void IS_7DA5C1__sub(STACK_FRAME IS_7DA5C1 result, IS_7DA5C1 this, Tuple2_0862A0 value);
void IS_7DA5C1__removeAll(STACK_FRAME IS_7DA5C1 result, IS_7DA5C1 this, IS_7DA5C1 other);
void IS_7DA5C1_cprint(IS_7DA5C1 this, B isOut);
void IS_7DA5C1_string_(STACK_FRAME String result, IS_7DA5C1 this);

inline B IS_7DA5C1__ne(IS_7DA5C1 this, IS_7DA5C1 other) {
  return !IS_7DA5C1__eq(this, other);
}
inline B IS_7DA5C1__inequiv(IS_7DA5C1 this, IS_7DA5C1 other) {
  return !IS_7DA5C1__equiv(this, other);
}


#ifdef __cplusplus
}
#endif

#endif