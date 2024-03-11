#include <all.h>

// Option[(Z, Z)]

B Option_B47750__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_80A548: return T;
    default: return F;
  }
}

Option_B47750 Option_B47750__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_80A548: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[(Z, Z)].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_B47750) this;
}

void Option_B47750_string_(STACK_FRAME String result, Option_B47750 this);