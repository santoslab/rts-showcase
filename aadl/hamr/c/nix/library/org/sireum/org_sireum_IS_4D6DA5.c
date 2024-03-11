#include <all.h>

// IS[Z, (Z, art.ArtSlangMessage)]
Tuple2_4DFC06 IS_4D6DA5_at(IS_4D6DA5 this, Z i);
void IS_4D6DA5_up(IS_4D6DA5 this, Z i, Tuple2_4DFC06 e);
Z IS_4D6DA5_size(STACK_FRAME IS_4D6DA5 this);
Z IS_4D6DA5_zize(STACK_FRAME IS_4D6DA5 this);

B IS_4D6DA5__eq(IS_4D6DA5 this, IS_4D6DA5 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Tuple2_4DFC06__ne((Tuple2_4DFC06) &this->value[i], (Tuple2_4DFC06) &other->value[i])) return F;
  }
  return T;
}

B IS_4D6DA5__equiv(IS_4D6DA5 this, IS_4D6DA5 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Tuple2_4DFC06__inequiv((Tuple2_4DFC06) &this->value[i], (Tuple2_4DFC06) &other->value[i])) return F;
  }
  return T;
}

void IS_4D6DA5_create(STACK_FRAME IS_4D6DA5 result, Z size, Tuple2_4DFC06 dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert((Z) size <= MaxIS_4D6DA5, "Insufficient maximum for IS[Z, (Z, art.ArtSlangMessage)] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct Tuple2_4DFC06));
  }
  result->size = zize;
}

void IS_4D6DA5__append(STACK_FRAME IS_4D6DA5 result, IS_4D6DA5 this, Tuple2_4DFC06 value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_4D6DA5, "Insufficient maximum for IS[Z, (Z, art.ArtSlangMessage)] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_4D6DA5));
  Type_assign(&result->value[thisSize], value, sizeof(struct Tuple2_4DFC06));
  result->size = (int8_t) (thisSize + 1);
}

void IS_4D6DA5__prepend(STACK_FRAME IS_4D6DA5 result, IS_4D6DA5 this, Tuple2_4DFC06 value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_4D6DA5, "Insufficient maximum for IS[Z, (Z, art.ArtSlangMessage)] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(struct Tuple2_4DFC06));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(struct Tuple2_4DFC06));
  result->size = (int8_t) thisSize + 1;
}

void IS_4D6DA5__appendAll(STACK_FRAME IS_4D6DA5 result, IS_4D6DA5 this, IS_4D6DA5 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_4D6DA5, "Insufficient maximum for IS[Z, (Z, art.ArtSlangMessage)] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_4D6DA5));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(struct Tuple2_4DFC06));
}

void IS_4D6DA5__sub(STACK_FRAME IS_4D6DA5 result, IS_4D6DA5 this, Tuple2_4DFC06 value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    Tuple2_4DFC06 o = (Tuple2_4DFC06) &this->value[i];
    if (Tuple2_4DFC06__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(struct Tuple2_4DFC06));
  }
  result->size = k;
}

void IS_4D6DA5__removeAll(STACK_FRAME IS_4D6DA5 result, IS_4D6DA5 this, IS_4D6DA5 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    Tuple2_4DFC06 o = (Tuple2_4DFC06) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (Tuple2_4DFC06__eq(o, (Tuple2_4DFC06) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(struct Tuple2_4DFC06));
  }
  result->size = k;
}

void IS_4D6DA5_cprint(IS_4D6DA5 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    struct Tuple2_4DFC06 *value = this->value;
    Tuple2_4DFC06_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      Tuple2_4DFC06_cprint(&value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_4D6DA5_string_(STACK_FRAME String result, IS_4D6DA5 this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    struct Tuple2_4DFC06 *value = this->value;
    Tuple2_4DFC06_string_(SF result, (Tuple2_4DFC06) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      Tuple2_4DFC06_string_(SF result, (Tuple2_4DFC06) &(value[i]));
    }
  }
  String_string_(SF result, string("]"));
}

B IS_4D6DA5__ne(IS_4D6DA5 this, IS_4D6DA5 other);
