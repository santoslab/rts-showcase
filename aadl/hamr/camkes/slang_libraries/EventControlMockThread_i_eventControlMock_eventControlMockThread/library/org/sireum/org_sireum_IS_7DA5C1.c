#include <all.h>

// IS[Z, (B, B)]
Tuple2_0862A0 IS_7DA5C1_at(IS_7DA5C1 this, Z i);
void IS_7DA5C1_up(IS_7DA5C1 this, Z i, Tuple2_0862A0 e);
Z IS_7DA5C1_size(STACK_FRAME IS_7DA5C1 this);
Z IS_7DA5C1_zize(STACK_FRAME IS_7DA5C1 this);

B IS_7DA5C1__eq(IS_7DA5C1 this, IS_7DA5C1 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Tuple2_0862A0__ne((Tuple2_0862A0) &this->value[i], (Tuple2_0862A0) &other->value[i])) return F;
  }
  return T;
}

B IS_7DA5C1__equiv(IS_7DA5C1 this, IS_7DA5C1 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Tuple2_0862A0__inequiv((Tuple2_0862A0) &this->value[i], (Tuple2_0862A0) &other->value[i])) return F;
  }
  return T;
}

void IS_7DA5C1_create(STACK_FRAME IS_7DA5C1 result, Z size, Tuple2_0862A0 dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert((Z) size <= MaxIS_7DA5C1, "Insufficient maximum for IS[Z, (B, B)] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct Tuple2_0862A0));
  }
  result->size = zize;
}

void IS_7DA5C1__append(STACK_FRAME IS_7DA5C1 result, IS_7DA5C1 this, Tuple2_0862A0 value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_7DA5C1, "Insufficient maximum for IS[Z, (B, B)] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_7DA5C1));
  Type_assign(&result->value[thisSize], value, sizeof(struct Tuple2_0862A0));
  result->size = (int8_t) (thisSize + 1);
}

void IS_7DA5C1__prepend(STACK_FRAME IS_7DA5C1 result, IS_7DA5C1 this, Tuple2_0862A0 value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_7DA5C1, "Insufficient maximum for IS[Z, (B, B)] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(struct Tuple2_0862A0));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(struct Tuple2_0862A0));
  result->size = (int8_t) thisSize + 1;
}

void IS_7DA5C1__appendAll(STACK_FRAME IS_7DA5C1 result, IS_7DA5C1 this, IS_7DA5C1 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_7DA5C1, "Insufficient maximum for IS[Z, (B, B)] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_7DA5C1));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(struct Tuple2_0862A0));
}

void IS_7DA5C1__sub(STACK_FRAME IS_7DA5C1 result, IS_7DA5C1 this, Tuple2_0862A0 value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    Tuple2_0862A0 o = (Tuple2_0862A0) &this->value[i];
    if (Tuple2_0862A0__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(struct Tuple2_0862A0));
  }
  result->size = k;
}

void IS_7DA5C1__removeAll(STACK_FRAME IS_7DA5C1 result, IS_7DA5C1 this, IS_7DA5C1 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    Tuple2_0862A0 o = (Tuple2_0862A0) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (Tuple2_0862A0__eq(o, (Tuple2_0862A0) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(struct Tuple2_0862A0));
  }
  result->size = k;
}

void IS_7DA5C1_cprint(IS_7DA5C1 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    struct Tuple2_0862A0 *value = this->value;
    Tuple2_0862A0_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      Tuple2_0862A0_cprint(&value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_7DA5C1_string_(STACK_FRAME String result, IS_7DA5C1 this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    struct Tuple2_0862A0 *value = this->value;
    Tuple2_0862A0_string_(SF result, (Tuple2_0862A0) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      Tuple2_0862A0_string_(SF result, (Tuple2_0862A0) &(value[i]));
    }
  }
  String_string_(SF result, string("]"));
}

B IS_7DA5C1__ne(IS_7DA5C1 this, IS_7DA5C1 other);
