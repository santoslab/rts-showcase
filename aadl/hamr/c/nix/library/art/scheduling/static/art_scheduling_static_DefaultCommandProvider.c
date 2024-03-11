#include <all.h>

// art.scheduling.static.DefaultCommandProvider

B art_scheduling_static_DefaultCommandProvider__eq(art_scheduling_static_DefaultCommandProvider this, art_scheduling_static_DefaultCommandProvider other) {
  return T;
}

B art_scheduling_static_DefaultCommandProvider__equiv(art_scheduling_static_DefaultCommandProvider this, art_scheduling_static_DefaultCommandProvider other) {
  return T;
}

B art_scheduling_static_DefaultCommandProvider__ne(art_scheduling_static_DefaultCommandProvider this, art_scheduling_static_DefaultCommandProvider other);
B art_scheduling_static_DefaultCommandProvider__inequiv(art_scheduling_static_DefaultCommandProvider this, art_scheduling_static_DefaultCommandProvider other);

void art_scheduling_static_DefaultCommandProvider_string_(STACK_FRAME String result, art_scheduling_static_DefaultCommandProvider this) {
  DeclNewStackFrame(caller, "DefaultCommandProvider.scala", "art.scheduling.static.DefaultCommandProvider", "string", 0);
  String_string_(SF result, string("DefaultCommandProvider("));
  String_string_(SF result, string(")"));
}

void art_scheduling_static_DefaultCommandProvider_cprint(art_scheduling_static_DefaultCommandProvider this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("DefaultCommandProvider("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_DefaultCommandProvider__is(STACK_FRAME void* this);
art_scheduling_static_DefaultCommandProvider art_scheduling_static_DefaultCommandProvider__as(STACK_FRAME void *this);

void art_scheduling_static_DefaultCommandProvider_apply(STACK_FRAME art_scheduling_static_DefaultCommandProvider this) {
  DeclNewStackFrame(caller, "DefaultCommandProvider.scala", "art.scheduling.static.DefaultCommandProvider", "apply", 0);
}

void art_scheduling_static_DefaultCommandProvider_nextCommand_(STACK_FRAME art_scheduling_static_Command result, art_scheduling_static_DefaultCommandProvider this) {
  DeclNewStackFrame(caller, "DefaultCommandProvider.scala", "art.scheduling.static.DefaultCommandProvider", "nextCommand", 0);
  DeclNewart_scheduling_static_Hstep(t_0);
  art_scheduling_static_Hstep_apply(SF &t_0, Z_C(1));
  Type_assign(result, (&t_0), sizeof(struct art_scheduling_static_Hstep));
  return;
}