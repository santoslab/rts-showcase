#ifndef SIREUM_H_org_sireum_IS_4D6DA5
#define SIREUM_H_org_sireum_IS_4D6DA5

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[Z, (Z, art.ArtSlangMessage)]

inline Tuple2_4DFC06 IS_4D6DA5_at(IS_4D6DA5 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  return (Tuple2_4DFC06) &(this->value[(int8_t) idx]);
}

inline void IS_4D6DA5_up(IS_4D6DA5 this, Z i, Tuple2_4DFC06 e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(struct Tuple2_4DFC06));
}

inline Z IS_4D6DA5_size(STACK_FRAME IS_4D6DA5 this) {
   return (Z) (this)->size;
}

inline Z IS_4D6DA5_zize(STACK_FRAME IS_4D6DA5 this) {
   return (Z) (this)->size;
}

inline B IS_4D6DA5_isEmpty(STACK_FRAME IS_4D6DA5 this) {
   return (this)->size == 0;
}

inline B IS_4D6DA5_nonEmpty(STACK_FRAME IS_4D6DA5 this) {
   return (this)->size != 0;
}

B IS_4D6DA5__eq(IS_4D6DA5 this, IS_4D6DA5 other);
B IS_4D6DA5__equiv(IS_4D6DA5 this, IS_4D6DA5 other);
void IS_4D6DA5_create(STACK_FRAME IS_4D6DA5 result, Z size, Tuple2_4DFC06 dflt);
void IS_4D6DA5__append(STACK_FRAME IS_4D6DA5 result, IS_4D6DA5 this, Tuple2_4DFC06 value);
void IS_4D6DA5__prepend(STACK_FRAME IS_4D6DA5 result, IS_4D6DA5 this, Tuple2_4DFC06 value);
void IS_4D6DA5__appendAll(STACK_FRAME IS_4D6DA5 result, IS_4D6DA5 this, IS_4D6DA5 other);
void IS_4D6DA5__sub(STACK_FRAME IS_4D6DA5 result, IS_4D6DA5 this, Tuple2_4DFC06 value);
void IS_4D6DA5__removeAll(STACK_FRAME IS_4D6DA5 result, IS_4D6DA5 this, IS_4D6DA5 other);
void IS_4D6DA5_cprint(IS_4D6DA5 this, B isOut);
void IS_4D6DA5_string_(STACK_FRAME String result, IS_4D6DA5 this);

inline B IS_4D6DA5__ne(IS_4D6DA5 this, IS_4D6DA5 other) {
  return !IS_4D6DA5__eq(this, other);
}
inline B IS_4D6DA5__inequiv(IS_4D6DA5 this, IS_4D6DA5 other) {
  return !IS_4D6DA5__equiv(this, other);
}


#ifdef __cplusplus
}
#endif

#endif