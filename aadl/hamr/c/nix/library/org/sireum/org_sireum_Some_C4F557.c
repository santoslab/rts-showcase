#include <all.h>

// Some[IS[Z, art.Art.BridgeId]]

B Some_C4F557__eq(Some_C4F557 this, Some_C4F557 other) {
  if (IS_FDDCB6__ne((IS_FDDCB6) &this->value, (IS_FDDCB6) &other->value)) return F;
  return T;
}

B Some_C4F557__equiv(Some_C4F557 this, Some_C4F557 other) {
  if (IS_FDDCB6__inequiv((IS_FDDCB6) &this->value, (IS_FDDCB6) &other->value)) return F;
  return T;
}

B Some_C4F557__ne(Some_C4F557 this, Some_C4F557 other);
B Some_C4F557__inequiv(Some_C4F557 this, Some_C4F557 other);

void Some_C4F557_string_(STACK_FRAME String result, Some_C4F557 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  IS_FDDCB6_string_(SF result, (IS_FDDCB6) &this->value);
  String_string_(SF result, string(")"));
}

void Some_C4F557_cprint(Some_C4F557 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  IS_FDDCB6_cprint((IS_FDDCB6) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_C4F557__is(STACK_FRAME void* this);
Some_C4F557 Some_C4F557__as(STACK_FRAME void *this);

void Some_C4F557_apply(STACK_FRAME Some_C4F557 this, IS_FDDCB6 value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_C4F557", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct IS_FDDCB6));
}