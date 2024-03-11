#include <all.h>

// IS[Z, (String, art.Art.BridgeId)]
Tuple2_E0098E IS_588B23_at(IS_588B23 this, Z i);
void IS_588B23_up(IS_588B23 this, Z i, Tuple2_E0098E e);
Z IS_588B23_size(STACK_FRAME IS_588B23 this);
Z IS_588B23_zize(STACK_FRAME IS_588B23 this);

B IS_588B23__eq(IS_588B23 this, IS_588B23 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Tuple2_E0098E__ne((Tuple2_E0098E) &this->value[i], (Tuple2_E0098E) &other->value[i])) return F;
  }
  return T;
}

B IS_588B23__equiv(IS_588B23 this, IS_588B23 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Tuple2_E0098E__inequiv((Tuple2_E0098E) &this->value[i], (Tuple2_E0098E) &other->value[i])) return F;
  }
  return T;
}

void IS_588B23_create(STACK_FRAME IS_588B23 result, Z size, Tuple2_E0098E dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert((Z) size <= MaxIS_588B23, "Insufficient maximum for IS[Z, (String, art.Art.BridgeId)] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct Tuple2_E0098E));
  }
  result->size = zize;
}

void IS_588B23__append(STACK_FRAME IS_588B23 result, IS_588B23 this, Tuple2_E0098E value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_588B23, "Insufficient maximum for IS[Z, (String, art.Art.BridgeId)] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_588B23));
  Type_assign(&result->value[thisSize], value, sizeof(struct Tuple2_E0098E));
  result->size = (int8_t) (thisSize + 1);
}

void IS_588B23__prepend(STACK_FRAME IS_588B23 result, IS_588B23 this, Tuple2_E0098E value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_588B23, "Insufficient maximum for IS[Z, (String, art.Art.BridgeId)] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(struct Tuple2_E0098E));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(struct Tuple2_E0098E));
  result->size = (int8_t) thisSize + 1;
}

void IS_588B23__appendAll(STACK_FRAME IS_588B23 result, IS_588B23 this, IS_588B23 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_588B23, "Insufficient maximum for IS[Z, (String, art.Art.BridgeId)] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_588B23));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(struct Tuple2_E0098E));
}

void IS_588B23__sub(STACK_FRAME IS_588B23 result, IS_588B23 this, Tuple2_E0098E value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    Tuple2_E0098E o = (Tuple2_E0098E) &this->value[i];
    if (Tuple2_E0098E__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(struct Tuple2_E0098E));
  }
  result->size = k;
}

void IS_588B23__removeAll(STACK_FRAME IS_588B23 result, IS_588B23 this, IS_588B23 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    Tuple2_E0098E o = (Tuple2_E0098E) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (Tuple2_E0098E__eq(o, (Tuple2_E0098E) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(struct Tuple2_E0098E));
  }
  result->size = k;
}

void IS_588B23_cprint(IS_588B23 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    struct Tuple2_E0098E *value = this->value;
    Tuple2_E0098E_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      Tuple2_E0098E_cprint(&value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_588B23_string_(STACK_FRAME String result, IS_588B23 this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    struct Tuple2_E0098E *value = this->value;
    Tuple2_E0098E_string_(SF result, (Tuple2_E0098E) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      Tuple2_E0098E_string_(SF result, (Tuple2_E0098E) &(value[i]));
    }
  }
  String_string_(SF result, string("]"));
}

B IS_588B23__ne(IS_588B23 this, IS_588B23 other);
