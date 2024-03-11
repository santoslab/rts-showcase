#include <all.h>

// Map[Z, art.ArtSlangMessage]

B Map_9C6840__eq(Map_9C6840 this, Map_9C6840 other) {
  if (IS_4D6DA5__ne((IS_4D6DA5) &this->entries, (IS_4D6DA5) &other->entries)) return F;
  return T;
}

B Map_9C6840__equiv(Map_9C6840 this, Map_9C6840 other) {
  if (IS_4D6DA5__inequiv((IS_4D6DA5) &this->entries, (IS_4D6DA5) &other->entries)) return F;
  return T;
}

B Map_9C6840__ne(Map_9C6840 this, Map_9C6840 other);
B Map_9C6840__inequiv(Map_9C6840 this, Map_9C6840 other);

void Map_9C6840_string_(STACK_FRAME String result, Map_9C6840 this) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map", "string", 0);
  String_string_(SF result, string("Map("));
  IS_4D6DA5_string_(SF result, (IS_4D6DA5) &this->entries);
  String_string_(SF result, string(")"));
}

void Map_9C6840_cprint(Map_9C6840 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Map("), isOut);
  IS_4D6DA5_cprint((IS_4D6DA5) &this->entries, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Map_9C6840__is(STACK_FRAME void* this);
Map_9C6840 Map_9C6840__as(STACK_FRAME void *this);

void Map_9C6840_apply(STACK_FRAME Map_9C6840 this, IS_4D6DA5 entries) {
  DeclNewStackFrame(caller, "Map.scala", "org.sireum.Map_9C6840", "apply", 0);
  Type_assign(&this->entries, entries, sizeof(struct IS_4D6DA5));
}