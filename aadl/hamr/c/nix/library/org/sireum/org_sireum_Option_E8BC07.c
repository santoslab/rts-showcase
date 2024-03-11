#include <all.h>

// Option[RTS.Cli.RunChoice.Type]

B Option_E8BC07__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_9803C0: return T;
    case TSome_B8733D: return T;
    default: return F;
  }
}

Option_E8BC07 Option_E8BC07__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_9803C0: break;
    case TSome_B8733D: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[RTS.Cli.RunChoice.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_E8BC07) this;
}

void Option_E8BC07_string_(STACK_FRAME String result, Option_E8BC07 this);