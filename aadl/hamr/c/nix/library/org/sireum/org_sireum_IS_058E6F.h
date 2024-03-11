#ifndef SIREUM_H_org_sireum_IS_058E6F
#define SIREUM_H_org_sireum_IS_058E6F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[art.Art.BridgeId, art.Bridge]

inline art_Bridge IS_058E6F_at(IS_058E6F this, art_Art_BridgeId i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  return (art_Bridge) &(this->value[(int8_t) idx]);
}

inline void IS_058E6F_up(IS_058E6F this, art_Art_BridgeId i, art_Bridge e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(union art_Bridge));
}

inline art_Art_BridgeId IS_058E6F_size(STACK_FRAME IS_058E6F this) {
   return (art_Art_BridgeId) (this)->size;
}

inline Z IS_058E6F_zize(STACK_FRAME IS_058E6F this) {
   return (Z) (this)->size;
}

inline B IS_058E6F_isEmpty(STACK_FRAME IS_058E6F this) {
   return (this)->size == 0;
}

inline B IS_058E6F_nonEmpty(STACK_FRAME IS_058E6F this) {
   return (this)->size != 0;
}

B IS_058E6F__eq(IS_058E6F this, IS_058E6F other);
B IS_058E6F__equiv(IS_058E6F this, IS_058E6F other);
void IS_058E6F_create(STACK_FRAME IS_058E6F result, Z size, art_Bridge dflt);
void IS_058E6F__append(STACK_FRAME IS_058E6F result, IS_058E6F this, art_Bridge value);
void IS_058E6F__prepend(STACK_FRAME IS_058E6F result, IS_058E6F this, art_Bridge value);
void IS_058E6F__appendAll(STACK_FRAME IS_058E6F result, IS_058E6F this, IS_058E6F other);
void IS_058E6F__sub(STACK_FRAME IS_058E6F result, IS_058E6F this, art_Bridge value);
void IS_058E6F__removeAll(STACK_FRAME IS_058E6F result, IS_058E6F this, IS_058E6F other);
void IS_058E6F_cprint(IS_058E6F this, B isOut);
void IS_058E6F_string_(STACK_FRAME String result, IS_058E6F this);

inline B IS_058E6F__ne(IS_058E6F this, IS_058E6F other) {
  return !IS_058E6F__eq(this, other);
}
inline B IS_058E6F__inequiv(IS_058E6F this, IS_058E6F other) {
  return !IS_058E6F__equiv(this, other);
}


#ifdef __cplusplus
}
#endif

#endif