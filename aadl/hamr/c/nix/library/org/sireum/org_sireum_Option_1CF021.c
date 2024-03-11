#include <all.h>

// Option[art.Art.PortId]

B Option_1CF021__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_B2694B: return T;
    case TSome_A0133F: return T;
    default: return F;
  }
}

Option_1CF021 Option_1CF021__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_B2694B: break;
    case TSome_A0133F: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[art.Art.PortId].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_1CF021) this;
}

void Option_1CF021_string_(STACK_FRAME String result, Option_1CF021 this);