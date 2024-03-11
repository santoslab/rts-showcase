#ifndef SIREUM_H_org_sireum_MS_A7EF1B
#define SIREUM_H_org_sireum_MS_A7EF1B

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MS[art.Art.BridgeId, S64]

inline S64 MS_A7EF1B_at(MS_A7EF1B this, art_Art_BridgeId i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  return this->value[(int8_t) idx];
}

inline void MS_A7EF1B_up(MS_A7EF1B this, art_Art_BridgeId i, S64 e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  sassert (0 <= idx && idx < this->size);
  #endif
  this->value[(int8_t) idx] = e;
}

inline art_Art_BridgeId MS_A7EF1B_size(STACK_FRAME MS_A7EF1B this) {
   return (art_Art_BridgeId) (this)->size;
}

inline Z MS_A7EF1B_zize(STACK_FRAME MS_A7EF1B this) {
   return (Z) (this)->size;
}

inline B MS_A7EF1B_isEmpty(STACK_FRAME MS_A7EF1B this) {
   return (this)->size == 0;
}

inline B MS_A7EF1B_nonEmpty(STACK_FRAME MS_A7EF1B this) {
   return (this)->size != 0;
}

B MS_A7EF1B__eq(MS_A7EF1B this, MS_A7EF1B other);
B MS_A7EF1B__equiv(MS_A7EF1B this, MS_A7EF1B other);
void MS_A7EF1B_create(STACK_FRAME MS_A7EF1B result, Z size, S64 dflt);
void MS_A7EF1B__append(STACK_FRAME MS_A7EF1B result, MS_A7EF1B this, S64 value);
void MS_A7EF1B__prepend(STACK_FRAME MS_A7EF1B result, MS_A7EF1B this, S64 value);
void MS_A7EF1B__appendAll(STACK_FRAME MS_A7EF1B result, MS_A7EF1B this, MS_A7EF1B other);
void MS_A7EF1B__sub(STACK_FRAME MS_A7EF1B result, MS_A7EF1B this, S64 value);
void MS_A7EF1B__removeAll(STACK_FRAME MS_A7EF1B result, MS_A7EF1B this, MS_A7EF1B other);
void MS_A7EF1B_cprint(MS_A7EF1B this, B isOut);
void MS_A7EF1B_string_(STACK_FRAME String result, MS_A7EF1B this);

inline B MS_A7EF1B__ne(MS_A7EF1B this, MS_A7EF1B other) {
  return !MS_A7EF1B__eq(this, other);
}
inline B MS_A7EF1B__inequiv(MS_A7EF1B this, MS_A7EF1B other) {
  return !MS_A7EF1B__equiv(this, other);
}


#ifdef __cplusplus
}
#endif

#endif