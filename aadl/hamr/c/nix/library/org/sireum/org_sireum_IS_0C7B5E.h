#ifndef SIREUM_H_org_sireum_IS_0C7B5E
#define SIREUM_H_org_sireum_IS_0C7B5E

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[Z, ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))]

inline Tuple2_04A4F6 IS_0C7B5E_at(IS_0C7B5E this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  return (Tuple2_04A4F6) &(this->value[(int8_t) idx]);
}

inline void IS_0C7B5E_up(IS_0C7B5E this, Z i, Tuple2_04A4F6 e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(struct Tuple2_04A4F6));
}

inline Z IS_0C7B5E_size(STACK_FRAME IS_0C7B5E this) {
   return (Z) (this)->size;
}

inline Z IS_0C7B5E_zize(STACK_FRAME IS_0C7B5E this) {
   return (Z) (this)->size;
}

inline B IS_0C7B5E_isEmpty(STACK_FRAME IS_0C7B5E this) {
   return (this)->size == 0;
}

inline B IS_0C7B5E_nonEmpty(STACK_FRAME IS_0C7B5E this) {
   return (this)->size != 0;
}

B IS_0C7B5E__eq(IS_0C7B5E this, IS_0C7B5E other);
B IS_0C7B5E__equiv(IS_0C7B5E this, IS_0C7B5E other);
void IS_0C7B5E_create(STACK_FRAME IS_0C7B5E result, Z size, Tuple2_04A4F6 dflt);
void IS_0C7B5E__append(STACK_FRAME IS_0C7B5E result, IS_0C7B5E this, Tuple2_04A4F6 value);
void IS_0C7B5E__prepend(STACK_FRAME IS_0C7B5E result, IS_0C7B5E this, Tuple2_04A4F6 value);
void IS_0C7B5E__appendAll(STACK_FRAME IS_0C7B5E result, IS_0C7B5E this, IS_0C7B5E other);
void IS_0C7B5E__sub(STACK_FRAME IS_0C7B5E result, IS_0C7B5E this, Tuple2_04A4F6 value);
void IS_0C7B5E__removeAll(STACK_FRAME IS_0C7B5E result, IS_0C7B5E this, IS_0C7B5E other);
void IS_0C7B5E_cprint(IS_0C7B5E this, B isOut);
void IS_0C7B5E_string_(STACK_FRAME String result, IS_0C7B5E this);

inline B IS_0C7B5E__ne(IS_0C7B5E this, IS_0C7B5E other) {
  return !IS_0C7B5E__eq(this, other);
}
inline B IS_0C7B5E__inequiv(IS_0C7B5E this, IS_0C7B5E other) {
  return !IS_0C7B5E__equiv(this, other);
}


#ifdef __cplusplus
}
#endif

#endif