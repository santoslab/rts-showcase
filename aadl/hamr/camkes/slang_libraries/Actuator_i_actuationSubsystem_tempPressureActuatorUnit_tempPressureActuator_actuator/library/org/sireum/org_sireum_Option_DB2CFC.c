#include <all.h>

// Option[RTS.Actuation.Actuator_i_Initialization_Api]

B Option_DB2CFC__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_8BED90: return T;
    case TSome_E8C0F3: return T;
    default: return F;
  }
}

Option_DB2CFC Option_DB2CFC__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_8BED90: break;
    case TSome_E8C0F3: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[RTS.Actuation.Actuator_i_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_DB2CFC) this;
}

void Option_DB2CFC_string_(STACK_FRAME String result, Option_DB2CFC this);

void Option_DB2CFC_get_(STACK_FRAME RTS_Actuation_Actuator_i_Initialization_Api result, Option_DB2CFC this) {
  switch (this->type) {
    case TNone_8BED90: None_8BED90_get_(CALLER (RTS_Actuation_Actuator_i_Initialization_Api) result, (None_8BED90) this); return;
    case TSome_E8C0F3: Some_E8C0F3_get_(CALLER (RTS_Actuation_Actuator_i_Initialization_Api) result, (Some_E8C0F3) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}