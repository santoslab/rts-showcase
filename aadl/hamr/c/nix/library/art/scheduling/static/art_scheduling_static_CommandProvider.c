#include <all.h>

// art.scheduling.static.CommandProvider

B art_scheduling_static_CommandProvider__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_scheduling_static_DefaultCommandProvider: return T;
    default: return F;
  }
}

art_scheduling_static_CommandProvider art_scheduling_static_CommandProvider__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_scheduling_static_DefaultCommandProvider: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.scheduling.static.CommandProvider.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_scheduling_static_CommandProvider) this;
}

void art_scheduling_static_CommandProvider_string_(STACK_FRAME String result, art_scheduling_static_CommandProvider this);

void art_scheduling_static_CommandProvider_nextCommand_(STACK_FRAME art_scheduling_static_Command result, art_scheduling_static_CommandProvider this) {
  switch (this->type) {
    case Tart_scheduling_static_DefaultCommandProvider: art_scheduling_static_DefaultCommandProvider_nextCommand_(CALLER (art_scheduling_static_Command) result, (art_scheduling_static_DefaultCommandProvider) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}