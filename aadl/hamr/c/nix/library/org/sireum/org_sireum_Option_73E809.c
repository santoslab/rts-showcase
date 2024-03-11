#include <all.h>

// Option[RTS.EventControl.EventControlMockThread_i_Operational_Api]

B Option_73E809__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_1A60DD: return T;
    case TSome_7FC307: return T;
    default: return F;
  }
}

Option_73E809 Option_73E809__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_1A60DD: break;
    case TSome_7FC307: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[RTS.EventControl.EventControlMockThread_i_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_73E809) this;
}

void Option_73E809_string_(STACK_FRAME String result, Option_73E809 this);

void Option_73E809_get_(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Operational_Api result, Option_73E809 this) {
  switch (this->type) {
    case TNone_1A60DD: None_1A60DD_get_(CALLER (RTS_EventControl_EventControlMockThread_i_Operational_Api) result, (None_1A60DD) this); return;
    case TSome_7FC307: Some_7FC307_get_(CALLER (RTS_EventControl_EventControlMockThread_i_Operational_Api) result, (Some_7FC307) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}