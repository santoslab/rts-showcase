#ifndef SIREUM_H_art_art_Port_C0524D
#define SIREUM_H_art_art_Port_C0524D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.Port[B]

#define art_Port_C0524D_id_(this) ((this)->id)
#define art_Port_C0524D_name_(this) ((String) &(this)->name)
#define art_Port_C0524D_mode_(this) ((this)->mode)

B art_Port_C0524D__eq(art_Port_C0524D this, art_Port_C0524D other);
inline B art_Port_C0524D__ne(art_Port_C0524D this, art_Port_C0524D other) {
  return !art_Port_C0524D__eq(this, other);
};
B art_Port_C0524D__equiv(art_Port_C0524D this, art_Port_C0524D other);
inline B art_Port_C0524D__inequiv(art_Port_C0524D this, art_Port_C0524D other) {
  return !art_Port_C0524D__equiv(this, other);
};
void art_Port_C0524D_string_(STACK_FRAME String result, art_Port_C0524D this);
void art_Port_C0524D_cprint(art_Port_C0524D this, B isOut);

inline B art_Port_C0524D__is(STACK_FRAME void* this) {
  return ((art_Port_C0524D) this)->type == Tart_Port_C0524D;
}

inline art_Port_C0524D art_Port_C0524D__as(STACK_FRAME void *this) {
  if (art_Port_C0524D__is(CALLER this)) return (art_Port_C0524D) this;
  sfAbortImpl(CALLER "Invalid cast to art.Port[B].");
  abort();
}

void art_Port_C0524D_apply(STACK_FRAME art_Port_C0524D this, art_Art_PortId id, String name, art_PortMode_Type mode);

#ifdef __cplusplus
}
#endif

#endif