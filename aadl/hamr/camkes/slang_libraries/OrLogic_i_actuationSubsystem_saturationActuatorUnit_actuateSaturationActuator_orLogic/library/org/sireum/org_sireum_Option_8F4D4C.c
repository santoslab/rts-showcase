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

B Option_8F4D4C_get_(STACK_FRAME Option_8F4D4C this) {
  switch (this->type) {
    case TNone_7E20F8: return None_7E20F8_get_(CALLER (None_7E20F8) this);
    case TSome_DB59FB: return Some_DB59FB_get_(CALLER (Some_DB59FB) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}