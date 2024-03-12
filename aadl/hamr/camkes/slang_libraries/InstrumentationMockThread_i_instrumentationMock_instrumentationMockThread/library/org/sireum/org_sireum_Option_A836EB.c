#include <all.h>

// Option[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]

B Option_A836EB__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_174952: return T;
    case TSome_51E221: return T;
    default: return F;
  }
}

Option_A836EB Option_A836EB__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_174952: break;
    case TSome_51E221: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_A836EB) this;
}

void Option_A836EB_string_(STACK_FRAME String result, Option_A836EB this);

void Option_A836EB_get_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api result, Option_A836EB this) {
  switch (this->type) {
    case TNone_174952: None_174952_get_(CALLER (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) result, (None_174952) this); return;
    case TSome_51E221: Some_51E221_get_(CALLER (RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api) result, (Some_51E221) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}