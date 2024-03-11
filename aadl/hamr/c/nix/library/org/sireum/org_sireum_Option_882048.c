#include <all.h>

// Option[Z]

B Option_882048__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_76463B: return T;
    case TSome_488F47: return T;
    default: return F;
  }
}

Option_882048 Option_882048__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_76463B: break;
    case TSome_488F47: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[Z].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_882048) this;
}

void Option_882048_string_(STACK_FRAME String result, Option_882048 this);