#include <all.h>

// Map[String, art.Art.BridgeId]

B Map_EB5A91__eq(Map_EB5A91 this, Map_EB5A91 other) {
  if (IS_588B23__ne((IS_588B23) &this->entries, (IS_588B23) &other->entries)) return F;
  return T;
}

B Map_EB5A91__equiv(Map_EB5A91 this, Map_EB5A91 other) {
  if (IS_588B23__inequiv((IS_588B23) &this->entries, (IS_588B23) &other->entries)) return F;
  return T;
}

B Map_EB5A91__ne(Map_EB5A91 this, Map_EB5A91 other);
B Map_EB5A91__inequiv(Map_EB5A91 this, Map_EB5A91 other);

void Map_EB5A91_string_(STACK_FRAME String result, Map_EB5A91 this) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "string", 0);
  String_string_(SF result, string("Map("));
  IS_588B23_string_(SF result, (IS_588B23) &this->entries);
  String_string_(SF result, string(")"));
}

void Map_EB5A91_cprint(Map_EB5A91 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Map("), isOut);
  IS_588B23_cprint((IS_588B23) &this->entries, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Map_EB5A91__is(STACK_FRAME void* this);
Map_EB5A91 Map_EB5A91__as(STACK_FRAME void *this);

void Map_EB5A91_apply(STACK_FRAME Map_EB5A91 this, IS_588B23 entries) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map_EB5A91", "apply", 0);
  Type_assign(&this->entries, entries, sizeof(struct IS_588B23));
}