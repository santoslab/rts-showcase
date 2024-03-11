#ifndef SIREUM_H_org_sireum_MS_CA6EDB
#define SIREUM_H_org_sireum_MS_CA6EDB

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MS[art.Art.PortId, IS[art.Art.ConnectionId, art.Art.PortId]]

inline IS_7267A0 MS_CA6EDB_at(MS_CA6EDB this, art_Art_PortId i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  return (IS_7267A0) &(this->value[(int8_t) idx]);
}

inline void MS_CA6EDB_up(MS_CA6EDB this, art_Art_PortId i, IS_7267A0 e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(struct IS_7267A0));
}

inline art_Art_PortId MS_CA6EDB_size(STACK_FRAME MS_CA6EDB this) {
   return (art_Art_PortId) (this)->size;
}

inline Z MS_CA6EDB_zize(STACK_FRAME MS_CA6EDB this) {
   return (Z) (this)->size;
}

inline B MS_CA6EDB_isEmpty(STACK_FRAME MS_CA6EDB this) {
   return (this)->size == 0;
}

inline B MS_CA6EDB_nonEmpty(STACK_FRAME MS_CA6EDB this) {
   return (this)->size != 0;
}

B MS_CA6EDB__eq(MS_CA6EDB this, MS_CA6EDB other);
B MS_CA6EDB__equiv(MS_CA6EDB this, MS_CA6EDB other);
void MS_CA6EDB_create(STACK_FRAME MS_CA6EDB result, Z size, IS_7267A0 dflt);
void MS_CA6EDB__append(STACK_FRAME MS_CA6EDB result, MS_CA6EDB this, IS_7267A0 value);
void MS_CA6EDB__prepend(STACK_FRAME MS_CA6EDB result, MS_CA6EDB this, IS_7267A0 value);
void MS_CA6EDB__appendAll(STACK_FRAME MS_CA6EDB result, MS_CA6EDB this, MS_CA6EDB other);
void MS_CA6EDB__sub(STACK_FRAME MS_CA6EDB result, MS_CA6EDB this, IS_7267A0 value);
void MS_CA6EDB__removeAll(STACK_FRAME MS_CA6EDB result, MS_CA6EDB this, MS_CA6EDB other);
void MS_CA6EDB_cprint(MS_CA6EDB this, B isOut);
void MS_CA6EDB_string_(STACK_FRAME String result, MS_CA6EDB this);

inline B MS_CA6EDB__ne(MS_CA6EDB this, MS_CA6EDB other) {
  return !MS_CA6EDB__eq(this, other);
}
inline B MS_CA6EDB__inequiv(MS_CA6EDB this, MS_CA6EDB other) {
  return !MS_CA6EDB__equiv(this, other);
}


#ifdef __cplusplus
}
#endif

#endif