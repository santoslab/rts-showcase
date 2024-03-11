#include <all.h>

// Option[IS[Z, art.Art.BridgeId]]

B Option_FEE1DB__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_00347F: return T;
    case TSome_C4F557: return T;
    default: return F;
  }
}

Option_FEE1DB Option_FEE1DB__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_00347F: break;
    case TSome_C4F557: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[IS[Z, art.Art.BridgeId]].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_FEE1DB) this;
}

void Option_FEE1DB_string_(STACK_FRAME String result, Option_FEE1DB this);