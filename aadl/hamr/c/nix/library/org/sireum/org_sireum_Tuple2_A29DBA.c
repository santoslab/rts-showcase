#include <all.h>

// (Z, (Z, art.ArtSlangMessage))

Z Tuple2_A29DBA_1(Tuple2_A29DBA this);
Tuple2_4DFC06 Tuple2_A29DBA_2(Tuple2_A29DBA this);

B Tuple2_A29DBA__ne(Tuple2_A29DBA this, Tuple2_A29DBA other);

void Tuple2_A29DBA_apply(STACK_FRAME Tuple2_A29DBA this, Z _1, Tuple2_4DFC06 _2) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "apply", 0);
  this->_1 = _1;
  Type_assign(&(this->_2), _2, sizeof(struct Tuple2_4DFC06));
}

B Tuple2_A29DBA__eq(Tuple2_A29DBA this, Tuple2_A29DBA other) {
  if (Z__ne(this->_1, other->_1)) return F;
  if (Tuple2_4DFC06__ne((Tuple2_4DFC06) &this->_2, (Tuple2_4DFC06) &other->_2)) return F;
  return T;
}

B Tuple2_A29DBA__equiv(Tuple2_A29DBA this, Tuple2_A29DBA other) {
  if (Z__inequiv(this->_1, other->_1)) return F;
  if (Tuple2_4DFC06__inequiv((Tuple2_4DFC06) &this->_2, (Tuple2_4DFC06) &other->_2)) return F;
  return T;
}
void Tuple2_A29DBA_cprint(Tuple2_A29DBA this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String sep = string(", ");
  String_cprint(string("("), isOut);
  Z_cprint(this->_1, isOut);
  String_cprint(sep, isOut);
  Tuple2_4DFC06_cprint(&this->_2, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void Tuple2_A29DBA_string_(STACK_FRAME String result, Tuple2_A29DBA this) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "string", 0);
  String sep = string(", ");
  String_string_(SF result, string("("));
  Z_string_(SF result, this->_1);
  String_string_(SF result, sep);
  Tuple2_4DFC06_string_(SF result, (Tuple2_4DFC06) &this->_2);
  String_string_(SF result, string(")"));
}