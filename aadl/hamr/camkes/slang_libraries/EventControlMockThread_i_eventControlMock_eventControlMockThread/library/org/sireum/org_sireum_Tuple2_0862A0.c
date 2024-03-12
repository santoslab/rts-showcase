#include <all.h>

// (B, B)

B Tuple2_0862A0_1(Tuple2_0862A0 this);
B Tuple2_0862A0_2(Tuple2_0862A0 this);

B Tuple2_0862A0__ne(Tuple2_0862A0 this, Tuple2_0862A0 other);

void Tuple2_0862A0_apply(STACK_FRAME Tuple2_0862A0 this, B _1, B _2) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "apply", 0);
  this->_1 = _1;
  this->_2 = _2;
}

B Tuple2_0862A0__eq(Tuple2_0862A0 this, Tuple2_0862A0 other) {
  if (B__ne(this->_1, other->_1)) return F;
  if (B__ne(this->_2, other->_2)) return F;
  return T;
}

B Tuple2_0862A0__equiv(Tuple2_0862A0 this, Tuple2_0862A0 other) {
  if (B__inequiv(this->_1, other->_1)) return F;
  if (B__inequiv(this->_2, other->_2)) return F;
  return T;
}
void Tuple2_0862A0_cprint(Tuple2_0862A0 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String sep = string(", ");
  String_cprint(string("("), isOut);
  B_cprint(this->_1, isOut);
  String_cprint(sep, isOut);
  B_cprint(this->_2, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void Tuple2_0862A0_string_(STACK_FRAME String result, Tuple2_0862A0 this) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "string", 0);
  String sep = string(", ");
  String_string_(SF result, string("("));
  B_string_(SF result, this->_1);
  String_string_(SF result, sep);
  B_string_(SF result, this->_2);
  String_string_(SF result, string(")"));
}