#include <all.h>

// MOption[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)]

B MOption_AEC260__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TMNone_6579ED: return T;
    case TMSome_30C95B: return T;
    default: return F;
  }
}

MOption_AEC260 MOption_AEC260__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TMNone_6579ED: break;
    case TMSome_30C95B: break;
    default:
      fprintf(stderr, "Invalid cast from %s to MOption[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (MOption_AEC260) this;
}

void MOption_AEC260_string_(STACK_FRAME String result, MOption_AEC260 this);