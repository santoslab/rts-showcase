#ifndef SIREUM_H_org_sireum_IS_FDDCB6
#define SIREUM_H_org_sireum_IS_FDDCB6

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[Z, art.Art.BridgeId]

inline art_Art_BridgeId IS_FDDCB6_at(IS_FDDCB6 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  return this->value[(int8_t) idx];
}

inline void IS_FDDCB6_up(IS_FDDCB6 this, Z i, art_Art_BridgeId e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  this->value[(int8_t) idx] = e;
}

inline Z IS_FDDCB6_size(STACK_FRAME IS_FDDCB6 this) {
   return (Z) (this)->size;
}

inline Z IS_FDDCB6_zize(STACK_FRAME IS_FDDCB6 this) {
   return (Z) (this)->size;
}

inline B IS_FDDCB6_isEmpty(STACK_FRAME IS_FDDCB6 this) {
   return (this)->size == 0;
}

inline B IS_FDDCB6_nonEmpty(STACK_FRAME IS_FDDCB6 this) {
   return (this)->size != 0;
}

B IS_FDDCB6__eq(IS_FDDCB6 this, IS_FDDCB6 other);
B IS_FDDCB6__equiv(IS_FDDCB6 this, IS_FDDCB6 other);
void IS_FDDCB6_create(STACK_FRAME IS_FDDCB6 result, Z size, art_Art_BridgeId dflt);
void IS_FDDCB6__append(STACK_FRAME IS_FDDCB6 result, IS_FDDCB6 this, art_Art_BridgeId value);
void IS_FDDCB6__prepend(STACK_FRAME IS_FDDCB6 result, IS_FDDCB6 this, art_Art_BridgeId value);
void IS_FDDCB6__appendAll(STACK_FRAME IS_FDDCB6 result, IS_FDDCB6 this, IS_FDDCB6 other);
void IS_FDDCB6__sub(STACK_FRAME IS_FDDCB6 result, IS_FDDCB6 this, art_Art_BridgeId value);
void IS_FDDCB6__removeAll(STACK_FRAME IS_FDDCB6 result, IS_FDDCB6 this, IS_FDDCB6 other);
void IS_FDDCB6_cprint(IS_FDDCB6 this, B isOut);
void IS_FDDCB6_string_(STACK_FRAME String result, IS_FDDCB6 this);

inline B IS_FDDCB6__ne(IS_FDDCB6 this, IS_FDDCB6 other) {
  return !IS_FDDCB6__eq(this, other);
}
inline B IS_FDDCB6__inequiv(IS_FDDCB6 this, IS_FDDCB6 other) {
  return !IS_FDDCB6__equiv(this, other);
}


#ifdef __cplusplus
}
#endif

#endif