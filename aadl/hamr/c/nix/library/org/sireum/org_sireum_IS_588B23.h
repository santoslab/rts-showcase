#ifndef SIREUM_H_org_sireum_IS_588B23
#define SIREUM_H_org_sireum_IS_588B23

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[Z, (String, art.Art.BridgeId)]

inline Tuple2_E0098E IS_588B23_at(IS_588B23 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  return (Tuple2_E0098E) &(this->value[(int8_t) idx]);
}

inline void IS_588B23_up(IS_588B23 this, Z i, Tuple2_E0098E e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(struct Tuple2_E0098E));
}

inline Z IS_588B23_size(STACK_FRAME IS_588B23 this) {
   return (Z) (this)->size;
}

inline Z IS_588B23_zize(STACK_FRAME IS_588B23 this) {
   return (Z) (this)->size;
}

inline B IS_588B23_isEmpty(STACK_FRAME IS_588B23 this) {
   return (this)->size == 0;
}

inline B IS_588B23_nonEmpty(STACK_FRAME IS_588B23 this) {
   return (this)->size != 0;
}

B IS_588B23__eq(IS_588B23 this, IS_588B23 other);
B IS_588B23__equiv(IS_588B23 this, IS_588B23 other);
void IS_588B23_create(STACK_FRAME IS_588B23 result, Z size, Tuple2_E0098E dflt);
void IS_588B23__append(STACK_FRAME IS_588B23 result, IS_588B23 this, Tuple2_E0098E value);
void IS_588B23__prepend(STACK_FRAME IS_588B23 result, IS_588B23 this, Tuple2_E0098E value);
void IS_588B23__appendAll(STACK_FRAME IS_588B23 result, IS_588B23 this, IS_588B23 other);
void IS_588B23__sub(STACK_FRAME IS_588B23 result, IS_588B23 this, Tuple2_E0098E value);
void IS_588B23__removeAll(STACK_FRAME IS_588B23 result, IS_588B23 this, IS_588B23 other);
void IS_588B23_cprint(IS_588B23 this, B isOut);
void IS_588B23_string_(STACK_FRAME String result, IS_588B23 this);

inline B IS_588B23__ne(IS_588B23 this, IS_588B23 other) {
  return !IS_588B23__eq(this, other);
}
inline B IS_588B23__inequiv(IS_588B23 this, IS_588B23 other) {
  return !IS_588B23__equiv(this, other);
}


#ifdef __cplusplus
}
#endif

#endif