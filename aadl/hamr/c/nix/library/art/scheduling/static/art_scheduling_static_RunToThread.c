#include <all.h>

// art.scheduling.static.RunToThread

B art_scheduling_static_RunToThread__eq(art_scheduling_static_RunToThread this, art_scheduling_static_RunToThread other) {
  if (String__ne((String) &this->ThreadId, (String) &other->ThreadId)) return F;
  return T;
}

B art_scheduling_static_RunToThread__equiv(art_scheduling_static_RunToThread this, art_scheduling_static_RunToThread other) {
  if (String__inequiv((String) &this->ThreadId, (String) &other->ThreadId)) return F;
  return T;
}

B art_scheduling_static_RunToThread__ne(art_scheduling_static_RunToThread this, art_scheduling_static_RunToThread other);
B art_scheduling_static_RunToThread__inequiv(art_scheduling_static_RunToThread this, art_scheduling_static_RunToThread other);

void art_scheduling_static_RunToThread_string_(STACK_FRAME String result, art_scheduling_static_RunToThread this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.RunToThread", "string", 0);
  String_string_(SF result, string("RunToThread("));
  String_string_(SF result, (String) &this->ThreadId);
  String_string_(SF result, string(")"));
}

void art_scheduling_static_RunToThread_cprint(art_scheduling_static_RunToThread this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("RunToThread("), isOut);
  String_cprint((String) &this->ThreadId, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_RunToThread__is(STACK_FRAME void* this);
art_scheduling_static_RunToThread art_scheduling_static_RunToThread__as(STACK_FRAME void *this);

void art_scheduling_static_RunToThread_apply(STACK_FRAME art_scheduling_static_RunToThread this, String ThreadId) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.RunToThread", "apply", 0);
  Type_assign(&this->ThreadId, ThreadId, sizeof(struct StaticString));
}