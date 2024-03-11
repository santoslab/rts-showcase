#include <all.h>

// MS[art.Art.PortId, IS[art.Art.ConnectionId, art.Art.PortId]]
IS_7267A0 MS_CA6EDB_at(MS_CA6EDB this, art_Art_PortId i);
void MS_CA6EDB_up(MS_CA6EDB this, art_Art_PortId i, IS_7267A0 e);
art_Art_PortId MS_CA6EDB_size(STACK_FRAME MS_CA6EDB this);
Z MS_CA6EDB_zize(STACK_FRAME MS_CA6EDB this);

B MS_CA6EDB__eq(MS_CA6EDB this, MS_CA6EDB other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (IS_7267A0__ne((IS_7267A0) &this->value[i], (IS_7267A0) &other->value[i])) return F;
  }
  return T;
}

B MS_CA6EDB__equiv(MS_CA6EDB this, MS_CA6EDB other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (IS_7267A0__inequiv((IS_7267A0) &this->value[i], (IS_7267A0) &other->value[i])) return F;
  }
  return T;
}

void MS_CA6EDB_create(STACK_FRAME MS_CA6EDB result, Z size, IS_7267A0 dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "create", 0);
  sfAssert((Z) size <= MaxMS_CA6EDB, "Insufficient maximum for MS[art.Art.PortId, IS[art.Art.ConnectionId, art.Art.PortId]] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct IS_7267A0));
  }
  result->size = zize;
}

void MS_CA6EDB__append(STACK_FRAME MS_CA6EDB result, MS_CA6EDB this, IS_7267A0 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", ":+", 0);
  sfAssert(this->size + 1 <= MaxMS_CA6EDB, "Insufficient maximum for MS[art.Art.PortId, IS[art.Art.ConnectionId, art.Art.PortId]] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct MS_CA6EDB));
  Type_assign(&result->value[thisSize], value, sizeof(struct IS_7267A0));
  result->size = (int8_t) (thisSize + 1);
}

void MS_CA6EDB__prepend(STACK_FRAME MS_CA6EDB result, MS_CA6EDB this, IS_7267A0 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "+:", 0);
  sfAssert(this->size + 1 <= MaxMS_CA6EDB, "Insufficient maximum for MS[art.Art.PortId, IS[art.Art.ConnectionId, art.Art.PortId]] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(struct IS_7267A0));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(struct IS_7267A0));
  result->size = (int8_t) thisSize + 1;
}

void MS_CA6EDB__appendAll(STACK_FRAME MS_CA6EDB result, MS_CA6EDB this, MS_CA6EDB other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "++", 0);
  sfAssert(this->size + other->size <= MaxMS_CA6EDB, "Insufficient maximum for MS[art.Art.PortId, IS[art.Art.ConnectionId, art.Art.PortId]] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct MS_CA6EDB));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(struct IS_7267A0));
}

void MS_CA6EDB__sub(STACK_FRAME MS_CA6EDB result, MS_CA6EDB this, IS_7267A0 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    IS_7267A0 o = (IS_7267A0) &this->value[i];
    if (IS_7267A0__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(struct IS_7267A0));
  }
  result->size = k;
}

void MS_CA6EDB__removeAll(STACK_FRAME MS_CA6EDB result, MS_CA6EDB this, MS_CA6EDB other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    IS_7267A0 o = (IS_7267A0) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (IS_7267A0__eq(o, (IS_7267A0) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(struct IS_7267A0));
  }
  result->size = k;
}

void MS_CA6EDB_cprint(MS_CA6EDB this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    struct IS_7267A0 *value = this->value;
    IS_7267A0_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      IS_7267A0_cprint(&value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void MS_CA6EDB_string_(STACK_FRAME String result, MS_CA6EDB this) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    struct IS_7267A0 *value = this->value;
    IS_7267A0_string_(SF result, (IS_7267A0) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      IS_7267A0_string_(SF result, (IS_7267A0) &(value[i]));
    }
  }
  String_string_(SF result, string("]"));
}

B MS_CA6EDB__ne(MS_CA6EDB this, MS_CA6EDB other);
