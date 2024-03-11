#include <all.h>

// Option[RTS.Actuation.OrLogic_i_Initialization_Api]

B Option_1C3ADA__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_1FE67C: return T;
    case TSome_824C23: return T;
    default: return F;
  }
}

Option_1C3ADA Option_1C3ADA__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_1FE67C: break;
    case TSome_824C23: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[RTS.Actuation.OrLogic_i_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_1C3ADA) this;
}

void Option_1C3ADA_string_(STACK_FRAME String result, Option_1C3ADA this);

void Option_1C3ADA_get_(STACK_FRAME RTS_Actuation_OrLogic_i_Initialization_Api result, Option_1C3ADA this) {
  switch (this->type) {
    case TNone_1FE67C: None_1FE67C_get_(CALLER (RTS_Actuation_OrLogic_i_Initialization_Api) result, (None_1FE67C) this); return;
    case TSome_824C23: Some_824C23_get_(CALLER (RTS_Actuation_OrLogic_i_Initialization_Api) result, (Some_824C23) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}