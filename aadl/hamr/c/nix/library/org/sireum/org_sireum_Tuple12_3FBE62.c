#include <all.h>

// (B, B, B, B, B, B, B, B, B, B, B, B)

B Tuple12_3FBE62_1(Tuple12_3FBE62 this);
B Tuple12_3FBE62_2(Tuple12_3FBE62 this);
B Tuple12_3FBE62_3(Tuple12_3FBE62 this);
B Tuple12_3FBE62_4(Tuple12_3FBE62 this);
B Tuple12_3FBE62_5(Tuple12_3FBE62 this);
B Tuple12_3FBE62_6(Tuple12_3FBE62 this);
B Tuple12_3FBE62_7(Tuple12_3FBE62 this);
B Tuple12_3FBE62_8(Tuple12_3FBE62 this);
B Tuple12_3FBE62_9(Tuple12_3FBE62 this);
B Tuple12_3FBE62_10(Tuple12_3FBE62 this);
B Tuple12_3FBE62_11(Tuple12_3FBE62 this);
B Tuple12_3FBE62_12(Tuple12_3FBE62 this);

B Tuple12_3FBE62__ne(Tuple12_3FBE62 this, Tuple12_3FBE62 other);

void Tuple12_3FBE62_apply(STACK_FRAME Tuple12_3FBE62 this, B _1, B _2, B _3, B _4, B _5, B _6, B _7, B _8, B _9, B _10, B _11, B _12) {
  DeclNewStackFrame(caller, "Tuple12.scala", "org.sireum.Tuple12", "apply", 0);
  this->_1 = _1;
  this->_2 = _2;
  this->_3 = _3;
  this->_4 = _4;
  this->_5 = _5;
  this->_6 = _6;
  this->_7 = _7;
  this->_8 = _8;
  this->_9 = _9;
  this->_10 = _10;
  this->_11 = _11;
  this->_12 = _12;
}

B Tuple12_3FBE62__eq(Tuple12_3FBE62 this, Tuple12_3FBE62 other) {
  if (B__ne(this->_1, other->_1)) return F;
  if (B__ne(this->_2, other->_2)) return F;
  if (B__ne(this->_3, other->_3)) return F;
  if (B__ne(this->_4, other->_4)) return F;
  if (B__ne(this->_5, other->_5)) return F;
  if (B__ne(this->_6, other->_6)) return F;
  if (B__ne(this->_7, other->_7)) return F;
  if (B__ne(this->_8, other->_8)) return F;
  if (B__ne(this->_9, other->_9)) return F;
  if (B__ne(this->_10, other->_10)) return F;
  if (B__ne(this->_11, other->_11)) return F;
  if (B__ne(this->_12, other->_12)) return F;
  return T;
}

B Tuple12_3FBE62__equiv(Tuple12_3FBE62 this, Tuple12_3FBE62 other) {
  if (B__inequiv(this->_1, other->_1)) return F;
  if (B__inequiv(this->_2, other->_2)) return F;
  if (B__inequiv(this->_3, other->_3)) return F;
  if (B__inequiv(this->_4, other->_4)) return F;
  if (B__inequiv(this->_5, other->_5)) return F;
  if (B__inequiv(this->_6, other->_6)) return F;
  if (B__inequiv(this->_7, other->_7)) return F;
  if (B__inequiv(this->_8, other->_8)) return F;
  if (B__inequiv(this->_9, other->_9)) return F;
  if (B__inequiv(this->_10, other->_10)) return F;
  if (B__inequiv(this->_11, other->_11)) return F;
  if (B__inequiv(this->_12, other->_12)) return F;
  return T;
}
void Tuple12_3FBE62_cprint(Tuple12_3FBE62 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String sep = string(", ");
  String_cprint(string("("), isOut);
  B_cprint(this->_1, isOut);
  String_cprint(sep, isOut);
  B_cprint(this->_2, isOut);
  String_cprint(sep, isOut);
  B_cprint(this->_3, isOut);
  String_cprint(sep, isOut);
  B_cprint(this->_4, isOut);
  String_cprint(sep, isOut);
  B_cprint(this->_5, isOut);
  String_cprint(sep, isOut);
  B_cprint(this->_6, isOut);
  String_cprint(sep, isOut);
  B_cprint(this->_7, isOut);
  String_cprint(sep, isOut);
  B_cprint(this->_8, isOut);
  String_cprint(sep, isOut);
  B_cprint(this->_9, isOut);
  String_cprint(sep, isOut);
  B_cprint(this->_10, isOut);
  String_cprint(sep, isOut);
  B_cprint(this->_11, isOut);
  String_cprint(sep, isOut);
  B_cprint(this->_12, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void Tuple12_3FBE62_string_(STACK_FRAME String result, Tuple12_3FBE62 this) {
  DeclNewStackFrame(caller, "Tuple12.scala", "org.sireum.Tuple12", "string", 0);
  String sep = string(", ");
  String_string_(SF result, string("("));
  B_string_(SF result, this->_1);
  String_string_(SF result, sep);
  B_string_(SF result, this->_2);
  String_string_(SF result, sep);
  B_string_(SF result, this->_3);
  String_string_(SF result, sep);
  B_string_(SF result, this->_4);
  String_string_(SF result, sep);
  B_string_(SF result, this->_5);
  String_string_(SF result, sep);
  B_string_(SF result, this->_6);
  String_string_(SF result, sep);
  B_string_(SF result, this->_7);
  String_string_(SF result, sep);
  B_string_(SF result, this->_8);
  String_string_(SF result, sep);
  B_string_(SF result, this->_9);
  String_string_(SF result, sep);
  B_string_(SF result, this->_10);
  String_string_(SF result, sep);
  B_string_(SF result, this->_11);
  String_string_(SF result, sep);
  B_string_(SF result, this->_12);
  String_string_(SF result, string(")"));
}