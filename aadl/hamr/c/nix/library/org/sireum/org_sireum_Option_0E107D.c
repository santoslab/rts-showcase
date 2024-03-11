#include <all.h>

// Option[art.Art.BridgeId]

B Option_0E107D__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_D34309: return T;
    case TSome_9D1CD4: return T;
    default: return F;
  }
}

Option_0E107D Option_0E107D__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_D34309: break;
    case TSome_9D1CD4: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[art.Art.BridgeId].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_0E107D) this;
}

void Option_0E107D_string_(STACK_FRAME String result, Option_0E107D this);

art_Art_BridgeId Option_0E107D_get_(STACK_FRAME Option_0E107D this) {
  switch (this->type) {
    case TNone_D34309: return None_D34309_get_(CALLER (None_D34309) this);
    case TSome_9D1CD4: return Some_9D1CD4_get_(CALLER (Some_9D1CD4) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}