#ifndef SIREUM_H_org_sireum_IS_996770
#define SIREUM_H_org_sireum_IS_996770

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[art.Art.ConnectionId, art.UConnection]

inline art_UConnection IS_996770_at(IS_996770 this, art_Art_ConnectionId i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  return (art_UConnection) &(this->value[(int8_t) idx]);
}

inline void IS_996770_up(IS_996770 this, art_Art_ConnectionId i, art_UConnection e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(union art_UConnection));
}

inline art_Art_ConnectionId IS_996770_size(STACK_FRAME IS_996770 this) {
   return (art_Art_ConnectionId) (this)->size;
}

inline Z IS_996770_zize(STACK_FRAME IS_996770 this) {
   return (Z) (this)->size;
}

inline B IS_996770_isEmpty(STACK_FRAME IS_996770 this) {
   return (this)->size == 0;
}

inline B IS_996770_nonEmpty(STACK_FRAME IS_996770 this) {
   return (this)->size != 0;
}

B IS_996770__eq(IS_996770 this, IS_996770 other);
B IS_996770__equiv(IS_996770 this, IS_996770 other);
void IS_996770_create(STACK_FRAME IS_996770 result, Z size, art_UConnection dflt);
void IS_996770__append(STACK_FRAME IS_996770 result, IS_996770 this, art_UConnection value);
void IS_996770__prepend(STACK_FRAME IS_996770 result, IS_996770 this, art_UConnection value);
void IS_996770__appendAll(STACK_FRAME IS_996770 result, IS_996770 this, IS_996770 other);
void IS_996770__sub(STACK_FRAME IS_996770 result, IS_996770 this, art_UConnection value);
void IS_996770__removeAll(STACK_FRAME IS_996770 result, IS_996770 this, IS_996770 other);
void IS_996770_cprint(IS_996770 this, B isOut);
void IS_996770_string_(STACK_FRAME String result, IS_996770 this);

inline B IS_996770__ne(IS_996770 this, IS_996770 other) {
  return !IS_996770__eq(this, other);
}
inline B IS_996770__inequiv(IS_996770 this, IS_996770 other) {
  return !IS_996770__equiv(this, other);
}


#ifdef __cplusplus
}
#endif

#endif