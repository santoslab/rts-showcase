#include <all.h>

// Some[(Z, Z)]

B Some_80A548__eq(Some_80A548 this, Some_80A548 other) {
  if (Tuple2_EC3B57__ne((Tuple2_EC3B57) &this->value, (Tuple2_EC3B57) &other->value)) return F;
  return T;
}

B Some_80A548__equiv(Some_80A548 this, Some_80A548 other) {
  if (Tuple2_EC3B57__inequiv((Tuple2_EC3B57) &this->value, (Tuple2_EC3B57) &other->value)) return F;
  return T;
}

B Some_80A548__ne(Some_80A548 this, Some_80A548 other);
B Some_80A548__inequiv(Some_80A548 this, Some_80A548 other);

void Some_80A548_string_(STACK_FRAME String result, Some_80A548 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  Tuple2_EC3B57_string_(SF result, (Tuple2_EC3B57) &this->value);
  String_string_(SF result, string(")"));
}

void Some_80A548_cprint(Some_80A548 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  Tuple2_EC3B57_cprint((Tuple2_EC3B57) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_80A548__is(STACK_FRAME void* this);
Some_80A548 Some_80A548__as(STACK_FRAME void *this);

void Some_80A548_apply(STACK_FRAME Some_80A548 this, Tuple2_EC3B57 value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_80A548", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct Tuple2_EC3B57));
}