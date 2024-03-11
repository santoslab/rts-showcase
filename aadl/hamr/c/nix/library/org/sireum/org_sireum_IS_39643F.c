#include <all.h>

// IS[Z, (String, Option[art.DataContent])]
Tuple2_275908 IS_39643F_at(IS_39643F this, Z i);
void IS_39643F_up(IS_39643F this, Z i, Tuple2_275908 e);
Z IS_39643F_size(STACK_FRAME IS_39643F this);
Z IS_39643F_zize(STACK_FRAME IS_39643F this);

B IS_39643F__eq(IS_39643F this, IS_39643F other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Tuple2_275908__ne((Tuple2_275908) &this->value[i], (Tuple2_275908) &other->value[i])) return F;
  }
  return T;
}

B IS_39643F__equiv(IS_39643F this, IS_39643F other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Tuple2_275908__inequiv((Tuple2_275908) &this->value[i], (Tuple2_275908) &other->value[i])) return F;
  }
  return T;
}

void IS_39643F_create(STACK_FRAME IS_39643F result, Z size, Tuple2_275908 dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert((Z) size <= MaxIS_39643F, "Insufficient maximum for IS[Z, (String, Option[art.DataContent])] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct Tuple2_275908));
  }
  result->size = zize;
}

void IS_39643F__append(STACK_FRAME IS_39643F result, IS_39643F this, Tuple2_275908 value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_39643F, "Insufficient maximum for IS[Z, (String, Option[art.DataContent])] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_39643F));
  Type_assign(&result->value[thisSize], value, sizeof(struct Tuple2_275908));
  result->size = (int8_t) (thisSize + 1);
}

void IS_39643F__prepend(STACK_FRAME IS_39643F result, IS_39643F this, Tuple2_275908 value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_39643F, "Insufficient maximum for IS[Z, (String, Option[art.DataContent])] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(struct Tuple2_275908));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(struct Tuple2_275908));
  result->size = (int8_t) thisSize + 1;
}

void IS_39643F__appendAll(STACK_FRAME IS_39643F result, IS_39643F this, IS_39643F other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_39643F, "Insufficient maximum for IS[Z, (String, Option[art.DataContent])] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_39643F));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(struct Tuple2_275908));
}

void IS_39643F__sub(STACK_FRAME IS_39643F result, IS_39643F this, Tuple2_275908 value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    Tuple2_275908 o = (Tuple2_275908) &this->value[i];
    if (Tuple2_275908__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(struct Tuple2_275908));
  }
  result->size = k;
}

void IS_39643F__removeAll(STACK_FRAME IS_39643F result, IS_39643F this, IS_39643F other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    Tuple2_275908 o = (Tuple2_275908) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (Tuple2_275908__eq(o, (Tuple2_275908) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(struct Tuple2_275908));
  }
  result->size = k;
}

void IS_39643F_cprint(IS_39643F this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    struct Tuple2_275908 *value = this->value;
    Tuple2_275908_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      Tuple2_275908_cprint(&value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_39643F_string_(STACK_FRAME String result, IS_39643F this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    struct Tuple2_275908 *value = this->value;
    Tuple2_275908_string_(SF result, (Tuple2_275908) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      Tuple2_275908_string_(SF result, (Tuple2_275908) &(value[i]));
    }
  }
  String_string_(SF result, string("]"));
}

B IS_39643F__ne(IS_39643F this, IS_39643F other);
