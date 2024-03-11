#include <all.h>

// Some[art.Art.PortId]

B Some_A0133F__eq(Some_A0133F this, Some_A0133F other) {
  if (art_Art_PortId__ne(this->value, other->value)) return F;
  return T;
}

B Some_A0133F__equiv(Some_A0133F this, Some_A0133F other) {
  if (art_Art_PortId__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_A0133F__ne(Some_A0133F this, Some_A0133F other);
B Some_A0133F__inequiv(Some_A0133F this, Some_A0133F other);

void Some_A0133F_string_(STACK_FRAME String result, Some_A0133F this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  art_Art_PortId_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_A0133F_cprint(Some_A0133F this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  art_Art_PortId_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_A0133F__is(STACK_FRAME void* this);
Some_A0133F Some_A0133F__as(STACK_FRAME void *this);

void Some_A0133F_apply(STACK_FRAME Some_A0133F this, art_Art_PortId value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_A0133F", "apply", 0);
  this->value = value;
}