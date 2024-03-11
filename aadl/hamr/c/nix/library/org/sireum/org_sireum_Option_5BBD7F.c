#include <all.h>

// Option[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]

B Option_5BBD7F__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_080F67: return T;
    case TSome_7A7168: return T;
    default: return F;
  }
}

Option_5BBD7F Option_5BBD7F__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_080F67: break;
    case TSome_7A7168: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[RTS.Actuation.CoincidenceLogic_i_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_5BBD7F) this;
}

void Option_5BBD7F_string_(STACK_FRAME String result, Option_5BBD7F this);

void Option_5BBD7F_get_(STACK_FRAME RTS_Actuation_CoincidenceLogic_i_Initialization_Api result, Option_5BBD7F this) {
  switch (this->type) {
    case TNone_080F67: None_080F67_get_(CALLER (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) result, (None_080F67) this); return;
    case TSome_7A7168: Some_7A7168_get_(CALLER (RTS_Actuation_CoincidenceLogic_i_Initialization_Api) result, (Some_7A7168) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}