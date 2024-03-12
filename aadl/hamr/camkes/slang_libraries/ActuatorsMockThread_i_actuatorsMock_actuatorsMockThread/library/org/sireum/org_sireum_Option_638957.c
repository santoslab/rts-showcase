#include <all.h>

// Option[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api]

B Option_638957__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_8D8A06: return T;
    case TSome_E625E9: return T;
    default: return F;
  }
}

Option_638957 Option_638957__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_8D8A06: break;
    case TSome_E625E9: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_638957) this;
}

void Option_638957_string_(STACK_FRAME String result, Option_638957 this);

void Option_638957_get_(STACK_FRAME RTS_Actuators_ActuatorsMockThread_i_Initialization_Api result, Option_638957 this) {
  switch (this->type) {
    case TNone_8D8A06: None_8D8A06_get_(CALLER (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) result, (None_8D8A06) this); return;
    case TSome_E625E9: Some_E625E9_get_(CALLER (RTS_Actuators_ActuatorsMockThread_i_Initialization_Api) result, (Some_E625E9) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}