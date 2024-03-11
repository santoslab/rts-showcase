#include <all.h>

// Some[art.Art.BridgeId]

B Some_9D1CD4__eq(Some_9D1CD4 this, Some_9D1CD4 other) {
  if (art_Art_BridgeId__ne(this->value, other->value)) return F;
  return T;
}

B Some_9D1CD4__equiv(Some_9D1CD4 this, Some_9D1CD4 other) {
  if (art_Art_BridgeId__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_9D1CD4__ne(Some_9D1CD4 this, Some_9D1CD4 other);
B Some_9D1CD4__inequiv(Some_9D1CD4 this, Some_9D1CD4 other);

void Some_9D1CD4_string_(STACK_FRAME String result, Some_9D1CD4 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  art_Art_BridgeId_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_9D1CD4_cprint(Some_9D1CD4 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  art_Art_BridgeId_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_9D1CD4__is(STACK_FRAME void* this);
Some_9D1CD4 Some_9D1CD4__as(STACK_FRAME void *this);

void Some_9D1CD4_apply(STACK_FRAME Some_9D1CD4 this, art_Art_BridgeId value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_9D1CD4", "apply", 0);
  this->value = value;
}