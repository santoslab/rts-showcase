#include <all.h>

// art.scheduling.static.Sstep

B art_scheduling_static_Sstep__eq(art_scheduling_static_Sstep this, art_scheduling_static_Sstep other) {
  if (Z__ne(this->numSteps, other->numSteps)) return F;
  return T;
}

B art_scheduling_static_Sstep__equiv(art_scheduling_static_Sstep this, art_scheduling_static_Sstep other) {
  if (Z__inequiv(this->numSteps, other->numSteps)) return F;
  return T;
}

B art_scheduling_static_Sstep__ne(art_scheduling_static_Sstep this, art_scheduling_static_Sstep other);
B art_scheduling_static_Sstep__inequiv(art_scheduling_static_Sstep this, art_scheduling_static_Sstep other);

void art_scheduling_static_Sstep_string_(STACK_FRAME String result, art_scheduling_static_Sstep this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.Sstep", "string", 0);
  String_string_(SF result, string("Sstep("));
  Z_string_(SF result, this->numSteps);
  String_string_(SF result, string(")"));
}

void art_scheduling_static_Sstep_cprint(art_scheduling_static_Sstep this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Sstep("), isOut);
  Z_cprint(this->numSteps, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_Sstep__is(STACK_FRAME void* this);
art_scheduling_static_Sstep art_scheduling_static_Sstep__as(STACK_FRAME void *this);

void art_scheduling_static_Sstep_apply(STACK_FRAME art_scheduling_static_Sstep this, Z numSteps) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.Sstep", "apply", 0);
  this->numSteps = numSteps;
}