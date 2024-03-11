#include <all.h>

// Some[art.ArtSlangMessage]

B Some_24B656__eq(Some_24B656 this, Some_24B656 other) {
  if (art_ArtSlangMessage__ne((art_ArtSlangMessage) &this->value, (art_ArtSlangMessage) &other->value)) return F;
  return T;
}

B Some_24B656__equiv(Some_24B656 this, Some_24B656 other) {
  if (art_ArtSlangMessage__inequiv((art_ArtSlangMessage) &this->value, (art_ArtSlangMessage) &other->value)) return F;
  return T;
}

B Some_24B656__ne(Some_24B656 this, Some_24B656 other);
B Some_24B656__inequiv(Some_24B656 this, Some_24B656 other);

void Some_24B656_string_(STACK_FRAME String result, Some_24B656 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  art_ArtSlangMessage_string_(SF result, (art_ArtSlangMessage) &this->value);
  String_string_(SF result, string(")"));
}

void Some_24B656_cprint(Some_24B656 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  art_ArtSlangMessage_cprint((art_ArtSlangMessage) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_24B656__is(STACK_FRAME void* this);
Some_24B656 Some_24B656__as(STACK_FRAME void *this);

void Some_24B656_apply(STACK_FRAME Some_24B656 this, art_ArtSlangMessage value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_24B656", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct art_ArtSlangMessage));
}