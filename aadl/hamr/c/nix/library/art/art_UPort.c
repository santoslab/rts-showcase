#include <all.h>

// art.UPort

B art_UPort__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Port_C0524D: return T;
    default: return F;
  }
}

art_UPort art_UPort__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Port_C0524D: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.UPort.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_UPort) this;
}

void art_UPort_string_(STACK_FRAME String result, art_UPort this);

art_Art_PortId art_UPort_id_(STACK_FRAME art_UPort this) {
  switch (this->type) {
    case Tart_Port_C0524D: return art_Port_C0524D_id_((art_Port_C0524D) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

art_PortMode_Type art_UPort_mode_(STACK_FRAME art_UPort this) {
  switch (this->type) {
    case Tart_Port_C0524D: return art_Port_C0524D_mode_((art_Port_C0524D) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_UPort_name_(STACK_FRAME String result, art_UPort this) {
  switch (this->type) {
    case Tart_Port_C0524D: Type_assign(result, art_Port_C0524D_name_((art_Port_C0524D) this), sizeof(struct StaticString)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}