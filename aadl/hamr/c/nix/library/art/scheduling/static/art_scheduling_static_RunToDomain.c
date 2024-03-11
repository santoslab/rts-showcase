#include <all.h>

// art.scheduling.static.RunToDomain

B art_scheduling_static_RunToDomain__eq(art_scheduling_static_RunToDomain this, art_scheduling_static_RunToDomain other) {
  if (Z__ne(this->domainId, other->domainId)) return F;
  return T;
}

B art_scheduling_static_RunToDomain__equiv(art_scheduling_static_RunToDomain this, art_scheduling_static_RunToDomain other) {
  if (Z__inequiv(this->domainId, other->domainId)) return F;
  return T;
}

B art_scheduling_static_RunToDomain__ne(art_scheduling_static_RunToDomain this, art_scheduling_static_RunToDomain other);
B art_scheduling_static_RunToDomain__inequiv(art_scheduling_static_RunToDomain this, art_scheduling_static_RunToDomain other);

void art_scheduling_static_RunToDomain_string_(STACK_FRAME String result, art_scheduling_static_RunToDomain this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.RunToDomain", "string", 0);
  String_string_(SF result, string("RunToDomain("));
  Z_string_(SF result, this->domainId);
  String_string_(SF result, string(")"));
}

void art_scheduling_static_RunToDomain_cprint(art_scheduling_static_RunToDomain this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("RunToDomain("), isOut);
  Z_cprint(this->domainId, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_RunToDomain__is(STACK_FRAME void* this);
art_scheduling_static_RunToDomain art_scheduling_static_RunToDomain__as(STACK_FRAME void *this);

void art_scheduling_static_RunToDomain_apply(STACK_FRAME art_scheduling_static_RunToDomain this, Z domainId) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.RunToDomain", "apply", 0);
  this->domainId = domainId;
}