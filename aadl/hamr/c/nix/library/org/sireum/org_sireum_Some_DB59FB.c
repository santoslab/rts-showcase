#include <all.h>

// Some[B]

B Some_DB59FB__eq(Some_DB59FB this, Some_DB59FB other) {
  if (B__ne(this->value, other->value)) return F;
  return T;
}

B Some_DB59FB__equiv(Some_DB59FB this, Some_DB59FB other) {
  if (B__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_DB59FB__ne(Some_DB59FB this, Some_DB59FB other);
B Some_DB59FB__inequiv(Some_DB59FB this, Some_DB59FB other);

void Some_DB59FB_string_(STACK_FRAME String result, Some_DB59FB this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  B_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_DB59FB_cprint(Some_DB59FB this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  B_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_DB59FB__is(STACK_FRAME void* this);
Some_DB59FB Some_DB59FB__as(STACK_FRAME void *this);

void Some_DB59FB_apply(STACK_FRAME Some_DB59FB this, B value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_DB59FB", "apply", 0);
  this->value = value;
}