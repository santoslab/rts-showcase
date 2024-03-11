#ifndef SIREUM_H_org_sireum_IS_7267A0
#define SIREUM_H_org_sireum_IS_7267A0

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[art.Art.ConnectionId, art.Art.PortId]

inline art_Art_PortId IS_7267A0_at(IS_7267A0 this, art_Art_ConnectionId i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  return this->value[(int8_t) idx];
}

inline void IS_7267A0_up(IS_7267A0 this, art_Art_ConnectionId i, art_Art_PortId e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  this->value[(int8_t) idx] = e;
}

inline art_Art_ConnectionId IS_7267A0_size(STACK_FRAME IS_7267A0 this) {
   return (art_Art_ConnectionId) (this)->size;
}

inline Z IS_7267A0_zize(STACK_FRAME IS_7267A0 this) {
   return (Z) (this)->size;
}

inline B IS_7267A0_isEmpty(STACK_FRAME IS_7267A0 this) {
   return (this)->size == 0;
}

inline B IS_7267A0_nonEmpty(STACK_FRAME IS_7267A0 this) {
   return (this)->size != 0;
}

B IS_7267A0__eq(IS_7267A0 this, IS_7267A0 other);
B IS_7267A0__equiv(IS_7267A0 this, IS_7267A0 other);
void IS_7267A0_create(STACK_FRAME IS_7267A0 result, Z size, art_Art_PortId dflt);
void IS_7267A0__append(STACK_FRAME IS_7267A0 result, IS_7267A0 this, art_Art_PortId value);
void IS_7267A0__prepend(STACK_FRAME IS_7267A0 result, IS_7267A0 this, art_Art_PortId value);
void IS_7267A0__appendAll(STACK_FRAME IS_7267A0 result, IS_7267A0 this, IS_7267A0 other);
void IS_7267A0__sub(STACK_FRAME IS_7267A0 result, IS_7267A0 this, art_Art_PortId value);
void IS_7267A0__removeAll(STACK_FRAME IS_7267A0 result, IS_7267A0 this, IS_7267A0 other);
void IS_7267A0_cprint(IS_7267A0 this, B isOut);
void IS_7267A0_string_(STACK_FRAME String result, IS_7267A0 this);

inline B IS_7267A0__ne(IS_7267A0 this, IS_7267A0 other) {
  return !IS_7267A0__eq(this, other);
}
inline B IS_7267A0__inequiv(IS_7267A0 this, IS_7267A0 other) {
  return !IS_7267A0__equiv(this, other);
}


#ifdef __cplusplus
}
#endif

#endif