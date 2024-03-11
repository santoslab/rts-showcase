#include <all.h>

// Option[art.Bridge]

B Option_7BBFBE__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_734370: return T;
    case TSome_482E57: return T;
    default: return F;
  }
}

Option_7BBFBE Option_7BBFBE__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_734370: break;
    case TSome_482E57: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[art.Bridge].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_7BBFBE) this;
}

void Option_7BBFBE_string_(STACK_FRAME String result, Option_7BBFBE this);

B Option_7BBFBE_nonEmpty_(STACK_FRAME Option_7BBFBE this) {
  switch (this->type) {
    case TNone_734370: return None_734370_nonEmpty_(CALLER (None_734370) this);
    case TSome_482E57: return Some_482E57_nonEmpty_(CALLER (Some_482E57) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void Option_7BBFBE_get_(STACK_FRAME art_Bridge result, Option_7BBFBE this) {
  switch (this->type) {
    case TNone_734370: None_734370_get_(CALLER (art_Bridge) result, (None_734370) this); return;
    case TSome_482E57: Some_482E57_get_(CALLER (art_Bridge) result, (Some_482E57) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}