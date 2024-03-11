#include <all.h>

// art.scheduling.static.Hstep

B art_scheduling_static_Hstep__eq(art_scheduling_static_Hstep this, art_scheduling_static_Hstep other) {
  if (Z__ne(this->numSteps, other->numSteps)) return F;
  return T;
}

B art_scheduling_static_Hstep__equiv(art_scheduling_static_Hstep this, art_scheduling_static_Hstep other) {
  if (Z__inequiv(this->numSteps, other->numSteps)) return F;
  return T;
}

B art_scheduling_static_Hstep__ne(art_scheduling_static_Hstep this, art_scheduling_static_Hstep other);
B art_scheduling_static_Hstep__inequiv(art_scheduling_static_Hstep this, art_scheduling_static_Hstep other);

void art_scheduling_static_Hstep_string_(STACK_FRAME String result, art_scheduling_static_Hstep this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.Hstep", "string", 0);
  String_string_(SF result, string("Hstep("));
  Z_string_(SF result, this->numSteps);
  String_string_(SF result, string(")"));
}

void art_scheduling_static_Hstep_cprint(art_scheduling_static_Hstep this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Hstep("), isOut);
  Z_cprint(this->numSteps, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_Hstep__is(STACK_FRAME void* this);
art_scheduling_static_Hstep art_scheduling_static_Hstep__as(STACK_FRAME void *this);

void art_scheduling_static_Hstep_apply(STACK_FRAME art_scheduling_static_Hstep this, Z numSteps) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.Hstep", "apply", 0);
  this->numSteps = numSteps;
}