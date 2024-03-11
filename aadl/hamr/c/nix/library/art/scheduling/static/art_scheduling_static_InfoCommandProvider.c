#include <all.h>

// art.scheduling.static.InfoCommandProvider

B art_scheduling_static_InfoCommandProvider__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    default: return F;
  }
}

art_scheduling_static_InfoCommandProvider art_scheduling_static_InfoCommandProvider__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    default:
      fprintf(stderr, "Invalid cast from %s to art.scheduling.static.InfoCommandProvider.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_scheduling_static_InfoCommandProvider) this;
}

void art_scheduling_static_InfoCommandProvider_string_(STACK_FRAME String result, art_scheduling_static_InfoCommandProvider this);

void art_scheduling_static_InfoCommandProvider_init_(STACK_FRAME art_scheduling_static_CommandProvider result, art_scheduling_static_InfoCommandProvider this, Map_EB5A91 threadNickNames, Z numSlots, IS_FDDCB6 displayOrder) {
  switch (this->type) {
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}