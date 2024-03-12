#include <all.h>

// Option[RTS.Actuation.CoincidenceLogic_i_Operational_Api]

B Option_80DE21__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_37A019: return T;
    case TSome_B99BC9: return T;
    default: return F;
  }
}

Option_80DE21 Option_80DE21__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_37A019: break;
    case TSome_B99BC9: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[RTS.Actuation.CoincidenceLogic_i_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_80DE21) this;
}

void Option_80DE21_string_(STACK_FRAME String result, Option_80DE21 this);

void Option_80DE21_get_(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Operational_Api result, Option_80DE21 this) {
  switch (this->type) {
    case TNone_37A019: None_37A019_get_(CALLER (RTS_Actuation_CoincidenceLogic_i_Operational_Api) result, (None_37A019) this); return;
    case TSome_B99BC9: Some_B99BC9_get_(CALLER (RTS_Actuation_CoincidenceLogic_i_Operational_Api) result, (Some_B99BC9) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}