#include <all.h>

// MBox2[art.Art.PortId, Option[art.DataContent]]

B MBox2_37E193__eq(MBox2_37E193 this, MBox2_37E193 other) {
  if (art_Art_PortId__ne(this->value1, other->value1)) return F;
  if (Option_8E9F45__ne((Option_8E9F45) &this->value2, (Option_8E9F45) &other->value2)) return F;
  return T;
}

B MBox2_37E193__equiv(MBox2_37E193 this, MBox2_37E193 other) {
  if (art_Art_PortId__inequiv(this->value1, other->value1)) return F;
  if (Option_8E9F45__inequiv((Option_8E9F45) &this->value2, (Option_8E9F45) &other->value2)) return F;
  return T;
}

B MBox2_37E193__ne(MBox2_37E193 this, MBox2_37E193 other);
B MBox2_37E193__inequiv(MBox2_37E193 this, MBox2_37E193 other);

void MBox2_37E193_string_(STACK_FRAME String result, MBox2_37E193 this) {
  DeclNewStackFrame(caller, "MBox.scala", "org.sireum.MBox2", "string", 0);
  String_string_(SF result, string("MBox2("));
  String sep = string(", ");
  art_Art_PortId_string_(SF result, this->value1);
  String_string_(SF result, sep);
  Option_8E9F45_string_(SF result, (Option_8E9F45) &this->value2);
  String_string_(SF result, string(")"));
}

void MBox2_37E193_cprint(MBox2_37E193 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("MBox2("), isOut);
  String sep = string(", ");
  art_Art_PortId_cprint(this->value1, isOut);
  String_cprint(sep, isOut);
  Option_8E9F45_cprint((Option_8E9F45) &this->value2, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B MBox2_37E193__is(STACK_FRAME void* this);
MBox2_37E193 MBox2_37E193__as(STACK_FRAME void *this);

void MBox2_37E193_apply(STACK_FRAME MBox2_37E193 this, art_Art_PortId value1, Option_8E9F45 value2) {
  DeclNewStackFrame(caller, "MBox.scala", "org.sireum.MBox2_37E193", "apply", 0);
  this->value1 = value1;
  Type_assign(&this->value2, value2, sizeof(union Option_8E9F45));
}