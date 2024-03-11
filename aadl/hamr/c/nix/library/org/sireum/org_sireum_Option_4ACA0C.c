#include <all.h>

// Option[RTS.Actuation.Actuator_i_Operational_Api]

B Option_4ACA0C__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_52D9AF: return T;
    case TSome_42319A: return T;
    default: return F;
  }
}

Option_4ACA0C Option_4ACA0C__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_52D9AF: break;
    case TSome_42319A: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[RTS.Actuation.Actuator_i_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_4ACA0C) this;
}

void Option_4ACA0C_string_(STACK_FRAME String result, Option_4ACA0C this);

void Option_4ACA0C_get_(STACK_FRAME RTS_Actuation_Actuator_i_Operational_Api result, Option_4ACA0C this) {
  switch (this->type) {
    case TNone_52D9AF: None_52D9AF_get_(CALLER (RTS_Actuation_Actuator_i_Operational_Api) result, (None_52D9AF) this); return;
    case TSome_42319A: Some_42319A_get_(CALLER (RTS_Actuation_Actuator_i_Operational_Api) result, (Some_42319A) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}