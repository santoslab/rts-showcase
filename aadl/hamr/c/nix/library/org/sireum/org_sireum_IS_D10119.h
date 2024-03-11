#ifndef SIREUM_H_org_sireum_IS_D10119
#define SIREUM_H_org_sireum_IS_D10119

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[Z, art.Art.PortId]

inline art_Art_PortId IS_D10119_at(IS_D10119 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  return this->value[(int8_t) idx];
}

inline void IS_D10119_up(IS_D10119 this, Z i, art_Art_PortId e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  this->value[(int8_t) idx] = e;
}

inline Z IS_D10119_size(STACK_FRAME IS_D10119 this) {
   return (Z) (this)->size;
}

inline Z IS_D10119_zize(STACK_FRAME IS_D10119 this) {
   return (Z) (this)->size;
}

inline B IS_D10119_isEmpty(STACK_FRAME IS_D10119 this) {
   return (this)->size == 0;
}

inline B IS_D10119_nonEmpty(STACK_FRAME IS_D10119 this) {
   return (this)->size != 0;
}

B IS_D10119__eq(IS_D10119 this, IS_D10119 other);
B IS_D10119__equiv(IS_D10119 this, IS_D10119 other);
void IS_D10119_create(STACK_FRAME IS_D10119 result, Z size, art_Art_PortId dflt);
void IS_D10119__append(STACK_FRAME IS_D10119 result, IS_D10119 this, art_Art_PortId value);
void IS_D10119__prepend(STACK_FRAME IS_D10119 result, IS_D10119 this, art_Art_PortId value);
void IS_D10119__appendAll(STACK_FRAME IS_D10119 result, IS_D10119 this, IS_D10119 other);
void IS_D10119__sub(STACK_FRAME IS_D10119 result, IS_D10119 this, art_Art_PortId value);
void IS_D10119__removeAll(STACK_FRAME IS_D10119 result, IS_D10119 this, IS_D10119 other);
void IS_D10119_cprint(IS_D10119 this, B isOut);
void IS_D10119_string_(STACK_FRAME String result, IS_D10119 this);

inline B IS_D10119__ne(IS_D10119 this, IS_D10119 other) {
  return !IS_D10119__eq(this, other);
}
inline B IS_D10119__inequiv(IS_D10119 this, IS_D10119 other) {
  return !IS_D10119__equiv(this, other);
}


#ifdef __cplusplus
}
#endif

#endif