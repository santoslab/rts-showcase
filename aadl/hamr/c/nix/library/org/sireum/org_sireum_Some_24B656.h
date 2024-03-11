#ifndef SIREUM_H_org_sireum_Some_24B656
#define SIREUM_H_org_sireum_Some_24B656

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[art.ArtSlangMessage]

#define Some_24B656_value_(this) ((art_ArtSlangMessage) &(this)->value)

B Some_24B656__eq(Some_24B656 this, Some_24B656 other);
inline B Some_24B656__ne(Some_24B656 this, Some_24B656 other) {
  return !Some_24B656__eq(this, other);
};
B Some_24B656__equiv(Some_24B656 this, Some_24B656 other);
inline B Some_24B656__inequiv(Some_24B656 this, Some_24B656 other) {
  return !Some_24B656__equiv(this, other);
};
void Some_24B656_string_(STACK_FRAME String result, Some_24B656 this);
void Some_24B656_cprint(Some_24B656 this, B isOut);

inline B Some_24B656__is(STACK_FRAME void* this) {
  return ((Some_24B656) this)->type == TSome_24B656;
}

inline Some_24B656 Some_24B656__as(STACK_FRAME void *this) {
  if (Some_24B656__is(CALLER this)) return (Some_24B656) this;
  sfAbortImpl(CALLER "Invalid cast to Some[art.ArtSlangMessage].");
  abort();
}

void Some_24B656_apply(STACK_FRAME Some_24B656 this, art_ArtSlangMessage value);

#ifdef __cplusplus
}
#endif

#endif