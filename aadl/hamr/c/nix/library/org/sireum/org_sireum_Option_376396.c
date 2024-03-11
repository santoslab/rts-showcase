#include <all.h>

// Option[art.ArtSlangMessage]

B Option_376396__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_50AF88: return T;
    case TSome_24B656: return T;
    default: return F;
  }
}

Option_376396 Option_376396__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_50AF88: break;
    case TSome_24B656: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[art.ArtSlangMessage].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_376396) this;
}

void Option_376396_string_(STACK_FRAME String result, Option_376396 this);

void Option_376396_get_(STACK_FRAME art_ArtSlangMessage result, Option_376396 this) {
  switch (this->type) {
    case TNone_50AF88: None_50AF88_get_(CALLER (art_ArtSlangMessage) result, (None_50AF88) this); return;
    case TSome_24B656: Some_24B656_get_(CALLER (art_ArtSlangMessage) result, (Some_24B656) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}