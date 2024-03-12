#include <all.h>

// Option[B]

B Option_8F4D4C__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_7E20F8: return T;
    case TSome_DB59FB: return T;
    default: return F;
  }
}

Option_8F4D4C Option_8F4D4C__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_7E20F8: break;
    case TSome_DB59FB: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[B].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_8F4D4C) this;
}

void Option_8F4D4C_string_(STACK_FRAME String result, Option_8F4D4C this);