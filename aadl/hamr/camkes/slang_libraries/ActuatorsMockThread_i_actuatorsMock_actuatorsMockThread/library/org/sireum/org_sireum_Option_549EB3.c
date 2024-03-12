#include <all.h>

// Option[RTS.Actuators.ActuatorsMockThread_i_Operational_Api]

B Option_549EB3__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_C050C2: return T;
    case TSome_B8A5BD: return T;
    default: return F;
  }
}

Option_549EB3 Option_549EB3__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_C050C2: break;
    case TSome_B8A5BD: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[RTS.Actuators.ActuatorsMockThread_i_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_549EB3) this;
}

void Option_549EB3_string_(STACK_FRAME String result, Option_549EB3 this);

void Option_549EB3_get_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Operational_Api result, Option_549EB3 this) {
  switch (this->type) {
    case TNone_C050C2: None_C050C2_get_(CALLER (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) result, (None_C050C2) this); return;
    case TSome_B8A5BD: Some_B8A5BD_get_(CALLER (RTS_Actuators_ActuatorsMockThread_i_Operational_Api) result, (Some_B8A5BD) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}