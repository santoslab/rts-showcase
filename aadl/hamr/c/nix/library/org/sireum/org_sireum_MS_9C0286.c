#include <all.h>

// MS[art.Art.PortId, Option[art.UPort]]
Option_6239DB MS_9C0286_at(MS_9C0286 this, art_Art_PortId i);
void MS_9C0286_up(MS_9C0286 this, art_Art_PortId i, Option_6239DB e);
art_Art_PortId MS_9C0286_size(STACK_FRAME MS_9C0286 this);
Z MS_9C0286_zize(STACK_FRAME MS_9C0286 this);

B MS_9C0286__eq(MS_9C0286 this, MS_9C0286 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Option_6239DB__ne((Option_6239DB) &this->value[i], (Option_6239DB) &other->value[i])) return F;
  }
  return T;
}

B MS_9C0286__equiv(MS_9C0286 this, MS_9C0286 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Option_6239DB__inequiv((Option_6239DB) &this->value[i], (Option_6239DB) &other->value[i])) return F;
  }
  return T;
}

void MS_9C0286_create(STACK_FRAME MS_9C0286 result, Z size, Option_6239DB dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "create", 0);
  sfAssert((Z) size <= MaxMS_9C0286, "Insufficient maximum for MS[art.Art.PortId, Option[art.UPort]] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union Option_6239DB));
  }
  result->size = zize;
}

void MS_9C0286__append(STACK_FRAME MS_9C0286 result, MS_9C0286 this, Option_6239DB value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", ":+", 0);
  sfAssert(this->size + 1 <= MaxMS_9C0286, "Insufficient maximum for MS[art.Art.PortId, Option[art.UPort]] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct MS_9C0286));
  Type_assign(&result->value[thisSize], value, sizeof(union Option_6239DB));
  result->size = (int8_t) (thisSize + 1);
}

void MS_9C0286__prepend(STACK_FRAME MS_9C0286 result, MS_9C0286 this, Option_6239DB value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "+:", 0);
  sfAssert(this->size + 1 <= MaxMS_9C0286, "Insufficient maximum for MS[art.Art.PortId, Option[art.UPort]] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(union Option_6239DB));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(union Option_6239DB));
  result->size = (int8_t) thisSize + 1;
}

void MS_9C0286__appendAll(STACK_FRAME MS_9C0286 result, MS_9C0286 this, MS_9C0286 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "++", 0);
  sfAssert(this->size + other->size <= MaxMS_9C0286, "Insufficient maximum for MS[art.Art.PortId, Option[art.UPort]] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct MS_9C0286));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(union Option_6239DB));
}

void MS_9C0286__sub(STACK_FRAME MS_9C0286 result, MS_9C0286 this, Option_6239DB value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    Option_6239DB o = (Option_6239DB) &this->value[i];
    if (Option_6239DB__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(union Option_6239DB));
  }
  result->size = k;
}

void MS_9C0286__removeAll(STACK_FRAME MS_9C0286 result, MS_9C0286 this, MS_9C0286 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    Option_6239DB o = (Option_6239DB) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (Option_6239DB__eq(o, (Option_6239DB) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(union Option_6239DB));
  }
  result->size = k;
}

void MS_9C0286_cprint(MS_9C0286 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    union Option_6239DB *value = this->value;
    Option_6239DB_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      Option_6239DB_cprint(&value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void MS_9C0286_string_(STACK_FRAME String result, MS_9C0286 this) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    union Option_6239DB *value = this->value;
    Option_6239DB_string_(SF result, (Option_6239DB) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      Option_6239DB_string_(SF result, (Option_6239DB) &(value[i]));
    }
  }
  String_string_(SF result, string("]"));
}

B MS_9C0286__ne(MS_9C0286 this, MS_9C0286 other);
