#include <all.h>

// IS[art.Art.ConnectionId, art.UConnection]
art_UConnection IS_996770_at(IS_996770 this, art_Art_ConnectionId i);
void IS_996770_up(IS_996770 this, art_Art_ConnectionId i, art_UConnection e);
art_Art_ConnectionId IS_996770_size(STACK_FRAME IS_996770 this);
Z IS_996770_zize(STACK_FRAME IS_996770 this);

B IS_996770__eq(IS_996770 this, IS_996770 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (art_UConnection__ne((art_UConnection) &this->value[i], (art_UConnection) &other->value[i])) return F;
  }
  return T;
}

B IS_996770__equiv(IS_996770 this, IS_996770 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (art_UConnection__inequiv((art_UConnection) &this->value[i], (art_UConnection) &other->value[i])) return F;
  }
  return T;
}

void IS_996770_create(STACK_FRAME IS_996770 result, Z size, art_UConnection dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert((Z) size <= MaxIS_996770, "Insufficient maximum for IS[art.Art.ConnectionId, art.UConnection] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union art_UConnection));
  }
  result->size = zize;
}

void IS_996770__append(STACK_FRAME IS_996770 result, IS_996770 this, art_UConnection value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_996770, "Insufficient maximum for IS[art.Art.ConnectionId, art.UConnection] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_996770));
  Type_assign(&result->value[thisSize], value, sizeof(union art_UConnection));
  result->size = (int8_t) (thisSize + 1);
}

void IS_996770__prepend(STACK_FRAME IS_996770 result, IS_996770 this, art_UConnection value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_996770, "Insufficient maximum for IS[art.Art.ConnectionId, art.UConnection] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(union art_UConnection));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(union art_UConnection));
  result->size = (int8_t) thisSize + 1;
}

void IS_996770__appendAll(STACK_FRAME IS_996770 result, IS_996770 this, IS_996770 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_996770, "Insufficient maximum for IS[art.Art.ConnectionId, art.UConnection] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_996770));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(union art_UConnection));
}

void IS_996770__sub(STACK_FRAME IS_996770 result, IS_996770 this, art_UConnection value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    art_UConnection o = (art_UConnection) &this->value[i];
    if (art_UConnection__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(union art_UConnection));
  }
  result->size = k;
}

void IS_996770__removeAll(STACK_FRAME IS_996770 result, IS_996770 this, IS_996770 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    art_UConnection o = (art_UConnection) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (art_UConnection__eq(o, (art_UConnection) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(union art_UConnection));
  }
  result->size = k;
}

void IS_996770_cprint(IS_996770 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    union art_UConnection *value = this->value;
    art_UConnection_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      art_UConnection_cprint(&value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_996770_string_(STACK_FRAME String result, IS_996770 this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    union art_UConnection *value = this->value;
    art_UConnection_string_(SF result, (art_UConnection) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      art_UConnection_string_(SF result, (art_UConnection) &(value[i]));
    }
  }
  String_string_(SF result, string("]"));
}

B IS_996770__ne(IS_996770 this, IS_996770 other);
