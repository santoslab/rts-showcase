#include <all.h>

// MSome[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)]

B MSome_30C95B__eq(MSome_30C95B this, MSome_30C95B other) {
  if (Tuple4_FA9F23__ne((Tuple4_FA9F23) &this->value, (Tuple4_FA9F23) &other->value)) return F;
  return T;
}

B MSome_30C95B__equiv(MSome_30C95B this, MSome_30C95B other) {
  if (Tuple4_FA9F23__inequiv((Tuple4_FA9F23) &this->value, (Tuple4_FA9F23) &other->value)) return F;
  return T;
}

B MSome_30C95B__ne(MSome_30C95B this, MSome_30C95B other);
B MSome_30C95B__inequiv(MSome_30C95B this, MSome_30C95B other);

void MSome_30C95B_string_(STACK_FRAME String result, MSome_30C95B this) {
  DeclNewStackFrame(caller, "MOption.scala", "org.sireum.MSome", "string", 0);
  String_string_(SF result, string("MSome("));
  Tuple4_FA9F23_string_(SF result, (Tuple4_FA9F23) &this->value);
  String_string_(SF result, string(")"));
}

void MSome_30C95B_cprint(MSome_30C95B this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("MSome("), isOut);
  Tuple4_FA9F23_cprint((Tuple4_FA9F23) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B MSome_30C95B__is(STACK_FRAME void* this);
MSome_30C95B MSome_30C95B__as(STACK_FRAME void *this);

void MSome_30C95B_apply(STACK_FRAME MSome_30C95B this, Tuple4_FA9F23 value) {
  DeclNewStackFrame(caller, "MOption.scala", "org.sireum.MSome_30C95B", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct Tuple4_FA9F23));
}