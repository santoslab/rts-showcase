#include <all.h>

// Option[art.scheduling.static.Explorer.ScheduleState]

B Option_069397__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_336F0A: return T;
    case TSome_6D5259: return T;
    default: return F;
  }
}

Option_069397 Option_069397__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_336F0A: break;
    case TSome_6D5259: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[art.scheduling.static.Explorer.ScheduleState].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_069397) this;
}

void Option_069397_string_(STACK_FRAME String result, Option_069397 this);