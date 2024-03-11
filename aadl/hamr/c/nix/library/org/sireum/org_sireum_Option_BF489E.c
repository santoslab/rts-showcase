#include <all.h>

// Option[RTS.Cli.RunTopOption]

B Option_BF489E__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_5F3A7A: return T;
    case TSome_2BC073: return T;
    default: return F;
  }
}

Option_BF489E Option_BF489E__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_5F3A7A: break;
    case TSome_2BC073: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[RTS.Cli.RunTopOption].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_BF489E) this;
}

void Option_BF489E_string_(STACK_FRAME String result, Option_BF489E this);