#include <all.h>

// Option[RTS.Actuation.OrLogic_i_Operational_Api]

B Option_E142FF__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_1AA45D: return T;
    case TSome_6FC748: return T;
    default: return F;
  }
}

Option_E142FF Option_E142FF__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_1AA45D: break;
    case TSome_6FC748: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[RTS.Actuation.OrLogic_i_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_E142FF) this;
}

void Option_E142FF_string_(STACK_FRAME String result, Option_E142FF this);

void Option_E142FF_get_(STACK_FRAME RTS_Actuation_OrLogic_i_Operational_Api result, Option_E142FF this) {
  switch (this->type) {
    case TNone_1AA45D: None_1AA45D_get_(CALLER (RTS_Actuation_OrLogic_i_Operational_Api) result, (None_1AA45D) this); return;
    case TSome_6FC748: Some_6FC748_get_(CALLER (RTS_Actuation_OrLogic_i_Operational_Api) result, (Some_6FC748) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}