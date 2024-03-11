#include <all.h>

// art.scheduling.static.InfoComponentState

B art_scheduling_static_InfoComponentState__eq(art_scheduling_static_InfoComponentState this, art_scheduling_static_InfoComponentState other) {
  if (String__ne((String) &this->threadNickName, (String) &other->threadNickName)) return F;
  return T;
}

B art_scheduling_static_InfoComponentState__equiv(art_scheduling_static_InfoComponentState this, art_scheduling_static_InfoComponentState other) {
  if (String__inequiv((String) &this->threadNickName, (String) &other->threadNickName)) return F;
  return T;
}

B art_scheduling_static_InfoComponentState__ne(art_scheduling_static_InfoComponentState this, art_scheduling_static_InfoComponentState other);
B art_scheduling_static_InfoComponentState__inequiv(art_scheduling_static_InfoComponentState this, art_scheduling_static_InfoComponentState other);

void art_scheduling_static_InfoComponentState_string_(STACK_FRAME String result, art_scheduling_static_InfoComponentState this) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.InfoComponentState", "string", 0);
  String_string_(SF result, string("InfoComponentState("));
  String_string_(SF result, (String) &this->threadNickName);
  String_string_(SF result, string(")"));
}

void art_scheduling_static_InfoComponentState_cprint(art_scheduling_static_InfoComponentState this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("InfoComponentState("), isOut);
  String_cprint((String) &this->threadNickName, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_InfoComponentState__is(STACK_FRAME void* this);
art_scheduling_static_InfoComponentState art_scheduling_static_InfoComponentState__as(STACK_FRAME void *this);

void art_scheduling_static_InfoComponentState_apply(STACK_FRAME art_scheduling_static_InfoComponentState this, String threadNickName) {
  DeclNewStackFrame(caller, "Command.scala", "art.scheduling.static.InfoComponentState", "apply", 0);
  Type_assign(&this->threadNickName, threadNickName, sizeof(struct StaticString));
}