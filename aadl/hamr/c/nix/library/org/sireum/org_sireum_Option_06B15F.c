#include <all.h>

// Option[RTS.EventControl.EventControlMockThread_i_Initialization_Api]

B Option_06B15F__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_2939E3: return T;
    case TSome_4347C6: return T;
    default: return F;
  }
}

Option_06B15F Option_06B15F__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_2939E3: break;
    case TSome_4347C6: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[RTS.EventControl.EventControlMockThread_i_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_06B15F) this;
}

void Option_06B15F_string_(STACK_FRAME String result, Option_06B15F this);

void Option_06B15F_get_(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Initialization_Api result, Option_06B15F this) {
  switch (this->type) {
    case TNone_2939E3: None_2939E3_get_(CALLER (RTS_EventControl_EventControlMockThread_i_Initialization_Api) result, (None_2939E3) this); return;
    case TSome_4347C6: Some_4347C6_get_(CALLER (RTS_EventControl_EventControlMockThread_i_Initialization_Api) result, (Some_4347C6) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}