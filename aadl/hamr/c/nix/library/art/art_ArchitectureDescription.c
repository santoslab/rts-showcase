#include <all.h>

// art.ArchitectureDescription

B art_ArchitectureDescription__eq(art_ArchitectureDescription this, art_ArchitectureDescription other) {
  if (IS_058E6F__ne((IS_058E6F) &this->components, (IS_058E6F) &other->components)) return F;
  if (IS_996770__ne((IS_996770) &this->connections, (IS_996770) &other->connections)) return F;
  return T;
}

B art_ArchitectureDescription__equiv(art_ArchitectureDescription this, art_ArchitectureDescription other) {
  if (IS_058E6F__inequiv((IS_058E6F) &this->components, (IS_058E6F) &other->components)) return F;
  if (IS_996770__inequiv((IS_996770) &this->connections, (IS_996770) &other->connections)) return F;
  return T;
}

B art_ArchitectureDescription__ne(art_ArchitectureDescription this, art_ArchitectureDescription other);
B art_ArchitectureDescription__inequiv(art_ArchitectureDescription this, art_ArchitectureDescription other);

void art_ArchitectureDescription_string_(STACK_FRAME String result, art_ArchitectureDescription this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.ArchitectureDescription", "string", 0);
  String_string_(SF result, string("ArchitectureDescription("));
  String sep = string(", ");
  IS_058E6F_string_(SF result, (IS_058E6F) &this->components);
  String_string_(SF result, sep);
  IS_996770_string_(SF result, (IS_996770) &this->connections);
  String_string_(SF result, string(")"));
}

void art_ArchitectureDescription_cprint(art_ArchitectureDescription this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("ArchitectureDescription("), isOut);
  String sep = string(", ");
  IS_058E6F_cprint((IS_058E6F) &this->components, isOut);
  String_cprint(sep, isOut);
  IS_996770_cprint((IS_996770) &this->connections, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_ArchitectureDescription__is(STACK_FRAME void* this);
art_ArchitectureDescription art_ArchitectureDescription__as(STACK_FRAME void *this);

void art_ArchitectureDescription_apply(STACK_FRAME art_ArchitectureDescription this, IS_058E6F components, IS_996770 connections) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.ArchitectureDescription", "apply", 0);
  Type_assign(&this->components, components, sizeof(struct IS_058E6F));
  Type_assign(&this->connections, connections, sizeof(struct IS_996770));
}