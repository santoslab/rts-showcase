#include <all.h>

// Option[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]

B Option_5CC377__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_8D6171: return T;
    case TSome_B05425: return T;
    default: return F;
  }
}

Option_5CC377 Option_5CC377__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_8D6171: break;
    case TSome_B05425: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_5CC377) this;
}

void Option_5CC377_string_(STACK_FRAME String result, Option_5CC377 this);

void Option_5CC377_get_(STACK_FRAME RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api result, Option_5CC377 this) {
  switch (this->type) {
    case TNone_8D6171: None_8D6171_get_(CALLER (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) result, (None_8D6171) this); return;
    case TSome_B05425: Some_B05425_get_(CALLER (RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api) result, (Some_B05425) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}