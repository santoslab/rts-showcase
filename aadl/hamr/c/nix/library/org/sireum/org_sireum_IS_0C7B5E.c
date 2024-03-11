#include <all.h>

// IS[Z, ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))]
Tuple2_04A4F6 IS_0C7B5E_at(IS_0C7B5E this, Z i);
void IS_0C7B5E_up(IS_0C7B5E this, Z i, Tuple2_04A4F6 e);
Z IS_0C7B5E_size(STACK_FRAME IS_0C7B5E this);
Z IS_0C7B5E_zize(STACK_FRAME IS_0C7B5E this);

B IS_0C7B5E__eq(IS_0C7B5E this, IS_0C7B5E other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Tuple2_04A4F6__ne((Tuple2_04A4F6) &this->value[i], (Tuple2_04A4F6) &other->value[i])) return F;
  }
  return T;
}

B IS_0C7B5E__equiv(IS_0C7B5E this, IS_0C7B5E other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Tuple2_04A4F6__inequiv((Tuple2_04A4F6) &this->value[i], (Tuple2_04A4F6) &other->value[i])) return F;
  }
  return T;
}

void IS_0C7B5E_create(STACK_FRAME IS_0C7B5E result, Z size, Tuple2_04A4F6 dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert((Z) size <= MaxIS_0C7B5E, "Insufficient maximum for IS[Z, ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct Tuple2_04A4F6));
  }
  result->size = zize;
}

void IS_0C7B5E__append(STACK_FRAME IS_0C7B5E result, IS_0C7B5E this, Tuple2_04A4F6 value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_0C7B5E, "Insufficient maximum for IS[Z, ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_0C7B5E));
  Type_assign(&result->value[thisSize], value, sizeof(struct Tuple2_04A4F6));
  result->size = (int8_t) (thisSize + 1);
}

void IS_0C7B5E__prepend(STACK_FRAME IS_0C7B5E result, IS_0C7B5E this, Tuple2_04A4F6 value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_0C7B5E, "Insufficient maximum for IS[Z, ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(struct Tuple2_04A4F6));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(struct Tuple2_04A4F6));
  result->size = (int8_t) thisSize + 1;
}

void IS_0C7B5E__appendAll(STACK_FRAME IS_0C7B5E result, IS_0C7B5E this, IS_0C7B5E other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_0C7B5E, "Insufficient maximum for IS[Z, ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_0C7B5E));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(struct Tuple2_04A4F6));
}

void IS_0C7B5E__sub(STACK_FRAME IS_0C7B5E result, IS_0C7B5E this, Tuple2_04A4F6 value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    Tuple2_04A4F6 o = (Tuple2_04A4F6) &this->value[i];
    if (Tuple2_04A4F6__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(struct Tuple2_04A4F6));
  }
  result->size = k;
}

void IS_0C7B5E__removeAll(STACK_FRAME IS_0C7B5E result, IS_0C7B5E this, IS_0C7B5E other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    Tuple2_04A4F6 o = (Tuple2_04A4F6) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (Tuple2_04A4F6__eq(o, (Tuple2_04A4F6) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(struct Tuple2_04A4F6));
  }
  result->size = k;
}

void IS_0C7B5E_cprint(IS_0C7B5E this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    struct Tuple2_04A4F6 *value = this->value;
    Tuple2_04A4F6_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      Tuple2_04A4F6_cprint(&value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_0C7B5E_string_(STACK_FRAME String result, IS_0C7B5E this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    struct Tuple2_04A4F6 *value = this->value;
    Tuple2_04A4F6_string_(SF result, (Tuple2_04A4F6) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      Tuple2_04A4F6_string_(SF result, (Tuple2_04A4F6) &(value[i]));
    }
  }
  String_string_(SF result, string("]"));
}

B IS_0C7B5E__ne(IS_0C7B5E this, IS_0C7B5E other);
