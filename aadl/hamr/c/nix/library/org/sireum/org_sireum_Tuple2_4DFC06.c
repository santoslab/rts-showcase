#include <all.h>

// (Z, art.ArtSlangMessage)

Z Tuple2_4DFC06_1(Tuple2_4DFC06 this);
art_ArtSlangMessage Tuple2_4DFC06_2(Tuple2_4DFC06 this);

B Tuple2_4DFC06__ne(Tuple2_4DFC06 this, Tuple2_4DFC06 other);

void Tuple2_4DFC06_apply(STACK_FRAME Tuple2_4DFC06 this, Z _1, art_ArtSlangMessage _2) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "apply", 0);
  this->_1 = _1;
  Type_assign(&(this->_2), _2, sizeof(struct art_ArtSlangMessage));
}

B Tuple2_4DFC06__eq(Tuple2_4DFC06 this, Tuple2_4DFC06 other) {
  if (Z__ne(this->_1, other->_1)) return F;
  if (art_ArtSlangMessage__ne((art_ArtSlangMessage) &this->_2, (art_ArtSlangMessage) &other->_2)) return F;
  return T;
}

B Tuple2_4DFC06__equiv(Tuple2_4DFC06 this, Tuple2_4DFC06 other) {
  if (Z__inequiv(this->_1, other->_1)) return F;
  if (art_ArtSlangMessage__inequiv((art_ArtSlangMessage) &this->_2, (art_ArtSlangMessage) &other->_2)) return F;
  return T;
}
void Tuple2_4DFC06_cprint(Tuple2_4DFC06 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String sep = string(", ");
  String_cprint(string("("), isOut);
  Z_cprint(this->_1, isOut);
  String_cprint(sep, isOut);
  art_ArtSlangMessage_cprint(&this->_2, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void Tuple2_4DFC06_string_(STACK_FRAME String result, Tuple2_4DFC06 this) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "string", 0);
  String sep = string(", ");
  String_string_(SF result, string("("));
  Z_string_(SF result, this->_1);
  String_string_(SF result, sep);
  art_ArtSlangMessage_string_(SF result, (art_ArtSlangMessage) &this->_2);
  String_string_(SF result, string(")"));
}