#include <all.h>

// MS[art.Art.BridgeId, S64]
S64 MS_A7EF1B_at(MS_A7EF1B this, art_Art_BridgeId i);
void MS_A7EF1B_up(MS_A7EF1B this, art_Art_BridgeId i, S64 e);
art_Art_BridgeId MS_A7EF1B_size(STACK_FRAME MS_A7EF1B this);
Z MS_A7EF1B_zize(STACK_FRAME MS_A7EF1B this);

B MS_A7EF1B__eq(MS_A7EF1B this, MS_A7EF1B other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (S64__ne(this->value[i], other->value[i])) return F;
  }
  return T;
}

B MS_A7EF1B__equiv(MS_A7EF1B this, MS_A7EF1B other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (S64__inequiv(this->value[i], other->value[i])) return F;
  }
  return T;
}

void MS_A7EF1B_create(STACK_FRAME MS_A7EF1B result, Z size, S64 dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "create", 0);
  sfAssert((Z) size <= MaxMS_A7EF1B, "Insufficient maximum for MS[art.Art.BridgeId, S64] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    result->value[i] = dflt;
  }
  result->size = zize;
}

void MS_A7EF1B__append(STACK_FRAME MS_A7EF1B result, MS_A7EF1B this, S64 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", ":+", 0);
  sfAssert(this->size + 1 <= MaxMS_A7EF1B, "Insufficient maximum for MS[art.Art.BridgeId, S64] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct MS_A7EF1B));
  result->value[thisSize] = value;
  result->size = (int8_t) (thisSize + 1);
}

void MS_A7EF1B__prepend(STACK_FRAME MS_A7EF1B result, MS_A7EF1B this, S64 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "+:", 0);
  sfAssert(this->size + 1 <= MaxMS_A7EF1B, "Insufficient maximum for MS[art.Art.BridgeId, S64] elements.");
  int8_t thisSize = this->size;
  result->value[0] = value;
  for (int8_t i = 0; i < thisSize; i++)
    result->value[i + 1] = this->value[i];
  result->size = (int8_t) (thisSize + 1);
}

void MS_A7EF1B__appendAll(STACK_FRAME MS_A7EF1B result, MS_A7EF1B this, MS_A7EF1B other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "++", 0);
  sfAssert(this->size + other->size <= MaxMS_A7EF1B, "Insufficient maximum for MS[art.Art.BridgeId, S64] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct MS_A7EF1B));
  result->size = (int8_t) (thisSize + otherSize);
  for (int8_t i = 0; i < otherSize; i++)
    result->value[thisSize + i] = other->value[i];
}

void MS_A7EF1B__sub(STACK_FRAME MS_A7EF1B result, MS_A7EF1B this, S64 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    S64 o = this->value[i];
    if (S64__ne(o, value)) result->value[k++] = o;
  }
  result->size = k;
}

void MS_A7EF1B__removeAll(STACK_FRAME MS_A7EF1B result, MS_A7EF1B this, MS_A7EF1B other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    S64 o = this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (S64__eq(o, other->value[j])) found = T;
    if (!found) result->value[k++] = o;
  }
  result->size = k;
}

void MS_A7EF1B_cprint(MS_A7EF1B this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    S64 *value = this->value;
    S64_cprint(value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      S64_cprint(value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void MS_A7EF1B_string_(STACK_FRAME String result, MS_A7EF1B this) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    S64 *value = this->value;
    S64_string_(SF result, value[0]);
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      S64_string_(SF result, value[i]);
    }
  }
  String_string_(SF result, string("]"));
}

B MS_A7EF1B__ne(MS_A7EF1B this, MS_A7EF1B other);
