#include <all.h>

// Option[art.UPort]

B Option_6239DB__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_39BC5F: return T;
    case TSome_3E197E: return T;
    default: return F;
  }
}

Option_6239DB Option_6239DB__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_39BC5F: break;
    case TSome_3E197E: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[art.UPort].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_6239DB) this;
}

void Option_6239DB_string_(STACK_FRAME String result, Option_6239DB this);

void Option_6239DB_get_(STACK_FRAME art_UPort result, Option_6239DB this) {
  switch (this->type) {
    case TNone_39BC5F: None_39BC5F_get_(CALLER (art_UPort) result, (None_39BC5F) this); return;
    case TSome_3E197E: Some_3E197E_get_(CALLER (art_UPort) result, (Some_3E197E) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}