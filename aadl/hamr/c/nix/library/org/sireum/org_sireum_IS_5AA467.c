#include <all.h>

// IS[Z, art.scheduling.static.Schedule.Slot]
art_scheduling_static_Schedule_Slot IS_5AA467_at(IS_5AA467 this, Z i);
void IS_5AA467_up(IS_5AA467 this, Z i, art_scheduling_static_Schedule_Slot e);
Z IS_5AA467_size(STACK_FRAME IS_5AA467 this);
Z IS_5AA467_zize(STACK_FRAME IS_5AA467 this);

B IS_5AA467__eq(IS_5AA467 this, IS_5AA467 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (art_scheduling_static_Schedule_Slot__ne((art_scheduling_static_Schedule_Slot) &this->value[i], (art_scheduling_static_Schedule_Slot) &other->value[i])) return F;
  }
  return T;
}

B IS_5AA467__equiv(IS_5AA467 this, IS_5AA467 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (art_scheduling_static_Schedule_Slot__inequiv((art_scheduling_static_Schedule_Slot) &this->value[i], (art_scheduling_static_Schedule_Slot) &other->value[i])) return F;
  }
  return T;
}

void IS_5AA467_create(STACK_FRAME IS_5AA467 result, Z size, art_scheduling_static_Schedule_Slot dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert((Z) size <= MaxIS_5AA467, "Insufficient maximum for IS[Z, art.scheduling.static.Schedule.Slot] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct art_scheduling_static_Schedule_Slot));
  }
  result->size = zize;
}

void IS_5AA467__append(STACK_FRAME IS_5AA467 result, IS_5AA467 this, art_scheduling_static_Schedule_Slot value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_5AA467, "Insufficient maximum for IS[Z, art.scheduling.static.Schedule.Slot] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_5AA467));
  Type_assign(&result->value[thisSize], value, sizeof(struct art_scheduling_static_Schedule_Slot));
  result->size = (int8_t) (thisSize + 1);
}

void IS_5AA467__prepend(STACK_FRAME IS_5AA467 result, IS_5AA467 this, art_scheduling_static_Schedule_Slot value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_5AA467, "Insufficient maximum for IS[Z, art.scheduling.static.Schedule.Slot] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(struct art_scheduling_static_Schedule_Slot));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(struct art_scheduling_static_Schedule_Slot));
  result->size = (int8_t) thisSize + 1;
}

void IS_5AA467__appendAll(STACK_FRAME IS_5AA467 result, IS_5AA467 this, IS_5AA467 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_5AA467, "Insufficient maximum for IS[Z, art.scheduling.static.Schedule.Slot] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_5AA467));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(struct art_scheduling_static_Schedule_Slot));
}

void IS_5AA467__sub(STACK_FRAME IS_5AA467 result, IS_5AA467 this, art_scheduling_static_Schedule_Slot value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    art_scheduling_static_Schedule_Slot o = (art_scheduling_static_Schedule_Slot) &this->value[i];
    if (art_scheduling_static_Schedule_Slot__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(struct art_scheduling_static_Schedule_Slot));
  }
  result->size = k;
}

void IS_5AA467__removeAll(STACK_FRAME IS_5AA467 result, IS_5AA467 this, IS_5AA467 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    art_scheduling_static_Schedule_Slot o = (art_scheduling_static_Schedule_Slot) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (art_scheduling_static_Schedule_Slot__eq(o, (art_scheduling_static_Schedule_Slot) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(struct art_scheduling_static_Schedule_Slot));
  }
  result->size = k;
}

void IS_5AA467_cprint(IS_5AA467 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    struct art_scheduling_static_Schedule_Slot *value = this->value;
    art_scheduling_static_Schedule_Slot_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      art_scheduling_static_Schedule_Slot_cprint(&value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_5AA467_string_(STACK_FRAME String result, IS_5AA467 this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    struct art_scheduling_static_Schedule_Slot *value = this->value;
    art_scheduling_static_Schedule_Slot_string_(SF result, (art_scheduling_static_Schedule_Slot) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      art_scheduling_static_Schedule_Slot_string_(SF result, (art_scheduling_static_Schedule_Slot) &(value[i]));
    }
  }
  String_string_(SF result, string("]"));
}

B IS_5AA467__ne(IS_5AA467 this, IS_5AA467 other);
