#include <all.h>

// ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))

Tuple12_3FBE62 Tuple2_04A4F6_1(Tuple2_04A4F6 this);
Tuple12_3FBE62 Tuple2_04A4F6_2(Tuple2_04A4F6 this);

B Tuple2_04A4F6__ne(Tuple2_04A4F6 this, Tuple2_04A4F6 other);

void Tuple2_04A4F6_apply(STACK_FRAME Tuple2_04A4F6 this, Tuple12_3FBE62 _1, Tuple12_3FBE62 _2) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "apply", 0);
  Type_assign(&(this->_1), _1, sizeof(struct Tuple12_3FBE62));
  Type_assign(&(this->_2), _2, sizeof(struct Tuple12_3FBE62));
}

B Tuple2_04A4F6__eq(Tuple2_04A4F6 this, Tuple2_04A4F6 other) {
  if (Tuple12_3FBE62__ne((Tuple12_3FBE62) &this->_1, (Tuple12_3FBE62) &other->_1)) return F;
  if (Tuple12_3FBE62__ne((Tuple12_3FBE62) &this->_2, (Tuple12_3FBE62) &other->_2)) return F;
  return T;
}

B Tuple2_04A4F6__equiv(Tuple2_04A4F6 this, Tuple2_04A4F6 other) {
  if (Tuple12_3FBE62__inequiv((Tuple12_3FBE62) &this->_1, (Tuple12_3FBE62) &other->_1)) return F;
  if (Tuple12_3FBE62__inequiv((Tuple12_3FBE62) &this->_2, (Tuple12_3FBE62) &other->_2)) return F;
  return T;
}
void Tuple2_04A4F6_cprint(Tuple2_04A4F6 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String sep = string(", ");
  String_cprint(string("("), isOut);
  Tuple12_3FBE62_cprint(&this->_1, isOut);
  String_cprint(sep, isOut);
  Tuple12_3FBE62_cprint(&this->_2, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void Tuple2_04A4F6_string_(STACK_FRAME String result, Tuple2_04A4F6 this) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "string", 0);
  String sep = string(", ");
  String_string_(SF result, string("("));
  Tuple12_3FBE62_string_(SF result, (Tuple12_3FBE62) &this->_1);
  String_string_(SF result, sep);
  Tuple12_3FBE62_string_(SF result, (Tuple12_3FBE62) &this->_2);
  String_string_(SF result, string(")"));
}