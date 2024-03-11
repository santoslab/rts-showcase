#include <all.h>

// art.scheduling.static.InfoComponentStateId

B art_scheduling_static_InfoComponentStateId__eq(art_scheduling_static_InfoComponentStateId this, art_scheduling_static_InfoComponentStateId other) {
  if (Z__ne(this->bridgeId, other->bridgeId)) return F;
  return T;
}

B art_scheduling_static_InfoComponentStateId__equiv(art_scheduling_static_InfoComponentStateId this, art_scheduling_static_InfoComponentStateId other) {
  if (Z__inequiv(this->bridgeId, other->bridgeId)) return F;
  return T;
}

B art_scheduling_static_InfoComponentStateId__ne(art_scheduling_static_InfoComponentStateId this, art_scheduling_static_InfoComponentStateId other);
B art_scheduling_static_InfoComponentStateId__inequiv(art_scheduling_static_InfoComponentStateId this, art_scheduling_static_InfoComponentStateId other);

void art_scheduling_static_InfoComponentStateId_string_(STACK_FRAME String result, art_scheduling_static_InfoComponentStateId this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.InfoComponentStateId", "string", 0);
  String_string_(SF result, string("InfoComponentStateId("));
  Z_string_(SF result, this->bridgeId);
  String_string_(SF result, string(")"));
}

void art_scheduling_static_InfoComponentStateId_cprint(art_scheduling_static_InfoComponentStateId this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("InfoComponentStateId("), isOut);
  Z_cprint(this->bridgeId, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_InfoComponentStateId__is(STACK_FRAME void* this);
art_scheduling_static_InfoComponentStateId art_scheduling_static_InfoComponentStateId__as(STACK_FRAME void *this);

void art_scheduling_static_InfoComponentStateId_apply(STACK_FRAME art_scheduling_static_InfoComponentStateId this, Z bridgeId) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.InfoComponentStateId", "apply", 0);
  this->bridgeId = bridgeId;
}