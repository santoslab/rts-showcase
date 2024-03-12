#include <all.h>

// MBox2[art.Art.PortId, art.DataContent]

B MBox2_43CC67__eq(MBox2_43CC67 this, MBox2_43CC67 other) {
  if (art_Art_PortId__ne(this->value1, other->value1)) return F;
  if (art_DataContent__ne((art_DataContent) &this->value2, (art_DataContent) &other->value2)) return F;
  return T;
}

B MBox2_43CC67__equiv(MBox2_43CC67 this, MBox2_43CC67 other) {
  if (art_Art_PortId__inequiv(this->value1, other->value1)) return F;
  if (art_DataContent__inequiv((art_DataContent) &this->value2, (art_DataContent) &other->value2)) return F;
  return T;
}

B MBox2_43CC67__ne(MBox2_43CC67 this, MBox2_43CC67 other);
B MBox2_43CC67__inequiv(MBox2_43CC67 this, MBox2_43CC67 other);

void MBox2_43CC67_string_(STACK_FRAME String result, MBox2_43CC67 this) {
  DeclNewStackFrame(caller, "MBox.scala", "org.sireum.MBox2", "string", 0);
  String_string_(SF result, string("MBox2("));
  String sep = string(", ");
  art_Art_PortId_string_(SF result, this->value1);
  String_string_(SF result, sep);
  art_DataContent_string_(SF result, (art_DataContent) &this->value2);
  String_string_(SF result, string(")"));
}

void MBox2_43CC67_cprint(MBox2_43CC67 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("MBox2("), isOut);
  String sep = string(", ");
  art_Art_PortId_cprint(this->value1, isOut);
  String_cprint(sep, isOut);
  art_DataContent_cprint((art_DataContent) &this->value2, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B MBox2_43CC67__is(STACK_FRAME void* this);
MBox2_43CC67 MBox2_43CC67__as(STACK_FRAME void *this);

void MBox2_43CC67_apply(STACK_FRAME MBox2_43CC67 this, art_Art_PortId value1, art_DataContent value2) {
  DeclNewStackFrame(caller, "MBox.scala", "org.sireum.MBox2_43CC67", "apply", 0);
  this->value1 = value1;
  Type_assign(&this->value2, value2, sizeof(union art_DataContent));
}