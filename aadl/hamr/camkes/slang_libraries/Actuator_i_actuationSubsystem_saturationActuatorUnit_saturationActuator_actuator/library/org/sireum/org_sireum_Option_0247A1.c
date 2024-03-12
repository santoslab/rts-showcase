#include <all.h>

// Option[IS[Z, art.Art.PortId]]

B Option_0247A1__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_CFD2B0: return T;
    default: return F;
  }
}

Option_0247A1 Option_0247A1__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_CFD2B0: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[IS[Z, art.Art.PortId]].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_0247A1) this;
}

void Option_0247A1_string_(STACK_FRAME String result, Option_0247A1 this);