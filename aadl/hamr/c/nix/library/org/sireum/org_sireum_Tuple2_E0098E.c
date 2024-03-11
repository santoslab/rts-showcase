#include <all.h>

// (String, art.Art.BridgeId)

String Tuple2_E0098E_1(Tuple2_E0098E this);
art_Art_BridgeId Tuple2_E0098E_2(Tuple2_E0098E this);

B Tuple2_E0098E__ne(Tuple2_E0098E this, Tuple2_E0098E other);

void Tuple2_E0098E_apply(STACK_FRAME Tuple2_E0098E this, String _1, art_Art_BridgeId _2) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "apply", 0);
  Type_assign(&(this->_1), _1, sizeof(struct String));
  this->_2 = _2;
}

B Tuple2_E0098E__eq(Tuple2_E0098E this, Tuple2_E0098E other) {
  if (String__ne((String) &this->_1, (String) &other->_1)) return F;
  if (art_Art_BridgeId__ne(this->_2, other->_2)) return F;
  return T;
}

B Tuple2_E0098E__equiv(Tuple2_E0098E this, Tuple2_E0098E other) {
  if (String__inequiv((String) &this->_1, (String) &other->_1)) return F;
  if (art_Art_BridgeId__inequiv(this->_2, other->_2)) return F;
  return T;
}
void Tuple2_E0098E_cprint(Tuple2_E0098E this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String sep = string(", ");
  String_cprint(string("("), isOut);
  String_cprint(&this->_1, isOut);
  String_cprint(sep, isOut);
  art_Art_BridgeId_cprint(this->_2, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void Tuple2_E0098E_string_(STACK_FRAME String result, Tuple2_E0098E this) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "string", 0);
  String sep = string(", ");
  String_string_(SF result, string("("));
  String_string_(SF result, (String) &this->_1);
  String_string_(SF result, sep);
  art_Art_BridgeId_string_(SF result, this->_2);
  String_string_(SF result, string(")"));
}