#include <all.h>

// IS[Z, art.Art.BridgeId]
art_Art_BridgeId IS_FDDCB6_at(IS_FDDCB6 this, Z i);
void IS_FDDCB6_up(IS_FDDCB6 this, Z i, art_Art_BridgeId e);
Z IS_FDDCB6_size(STACK_FRAME IS_FDDCB6 this);
Z IS_FDDCB6_zize(STACK_FRAME IS_FDDCB6 this);

B IS_FDDCB6__eq(IS_FDDCB6 this, IS_FDDCB6 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (art_Art_BridgeId__ne(this->value[i], other->value[i])) return F;
  }
  return T;
}

B IS_FDDCB6__equiv(IS_FDDCB6 this, IS_FDDCB6 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (art_Art_BridgeId__inequiv(this->value[i], other->value[i])) return F;
  }
  return T;
}

void IS_FDDCB6_create(STACK_FRAME IS_FDDCB6 result, Z size, art_Art_BridgeId dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert((Z) size <= MaxIS_FDDCB6, "Insufficient maximum for IS[Z, art.Art.BridgeId] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    result->value[i] = dflt;
  }
  result->size = zize;
}

void IS_FDDCB6__append(STACK_FRAME IS_FDDCB6 result, IS_FDDCB6 this, art_Art_BridgeId value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_FDDCB6, "Insufficient maximum for IS[Z, art.Art.BridgeId] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_FDDCB6));
  result->value[thisSize] = value;
  result->size = (int8_t) (thisSize + 1);
}

void IS_FDDCB6__prepend(STACK_FRAME IS_FDDCB6 result, IS_FDDCB6 this, art_Art_BridgeId value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_FDDCB6, "Insufficient maximum for IS[Z, art.Art.BridgeId] elements.");
  int8_t thisSize = this->size;
  result->value[0] = value;
  for (int8_t i = 0; i < thisSize; i++)
    result->value[i + 1] = this->value[i];
  result->size = (int8_t) (thisSize + 1);
}

void IS_FDDCB6__appendAll(STACK_FRAME IS_FDDCB6 result, IS_FDDCB6 this, IS_FDDCB6 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_FDDCB6, "Insufficient maximum for IS[Z, art.Art.BridgeId] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_FDDCB6));
  result->size = (int8_t) (thisSize + otherSize);
  for (int8_t i = 0; i < otherSize; i++)
    result->value[thisSize + i] = other->value[i];
}

void IS_FDDCB6__sub(STACK_FRAME IS_FDDCB6 result, IS_FDDCB6 this, art_Art_BridgeId value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    art_Art_BridgeId o = this->value[i];
    if (art_Art_BridgeId__ne(o, value)) result->value[k++] = o;
  }
  result->size = k;
}

void IS_FDDCB6__removeAll(STACK_FRAME IS_FDDCB6 result, IS_FDDCB6 this, IS_FDDCB6 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    art_Art_BridgeId o = this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (art_Art_BridgeId__eq(o, other->value[j])) found = T;
    if (!found) result->value[k++] = o;
  }
  result->size = k;
}

void IS_FDDCB6_cprint(IS_FDDCB6 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    art_Art_BridgeId *value = this->value;
    art_Art_BridgeId_cprint(value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      art_Art_BridgeId_cprint(value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_FDDCB6_string_(STACK_FRAME String result, IS_FDDCB6 this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    art_Art_BridgeId *value = this->value;
    art_Art_BridgeId_string_(SF result, value[0]);
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      art_Art_BridgeId_string_(SF result, value[i]);
    }
  }
  String_string_(SF result, string("]"));
}

B IS_FDDCB6__ne(IS_FDDCB6 this, IS_FDDCB6 other);
