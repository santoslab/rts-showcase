#include <all.h>

// (String, Option[art.DataContent])

String Tuple2_275908_1(Tuple2_275908 this);
Option_8E9F45 Tuple2_275908_2(Tuple2_275908 this);

B Tuple2_275908__ne(Tuple2_275908 this, Tuple2_275908 other);

void Tuple2_275908_apply(STACK_FRAME Tuple2_275908 this, String _1, Option_8E9F45 _2) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "apply", 0);
  Type_assign(&(this->_1), _1, sizeof(struct String));
  Type_assign(&(this->_2), _2, sizeof(union Option_8E9F45));
}

B Tuple2_275908__eq(Tuple2_275908 this, Tuple2_275908 other) {
  if (String__ne((String) &this->_1, (String) &other->_1)) return F;
  if (Option_8E9F45__ne((Option_8E9F45) &this->_2, (Option_8E9F45) &other->_2)) return F;
  return T;
}

B Tuple2_275908__equiv(Tuple2_275908 this, Tuple2_275908 other) {
  if (String__inequiv((String) &this->_1, (String) &other->_1)) return F;
  if (Option_8E9F45__inequiv((Option_8E9F45) &this->_2, (Option_8E9F45) &other->_2)) return F;
  return T;
}
void Tuple2_275908_cprint(Tuple2_275908 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String sep = string(", ");
  String_cprint(string("("), isOut);
  String_cprint(&this->_1, isOut);
  String_cprint(sep, isOut);
  Option_8E9F45_cprint(&this->_2, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void Tuple2_275908_string_(STACK_FRAME String result, Tuple2_275908 this) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "string", 0);
  String sep = string(", ");
  String_string_(SF result, string("("));
  String_string_(SF result, (String) &this->_1);
  String_string_(SF result, sep);
  Option_8E9F45_string_(SF result, (Option_8E9F45) &this->_2);
  String_string_(SF result, string(")"));
}