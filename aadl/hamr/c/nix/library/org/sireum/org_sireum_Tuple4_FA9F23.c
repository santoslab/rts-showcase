#include <all.h>

// (art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)

art_scheduling_static_Schedule_DScheduleSpec Tuple4_FA9F23_1(Tuple4_FA9F23 this);
IS_FDDCB6 Tuple4_FA9F23_2(Tuple4_FA9F23 this);
Map_EB5A91 Tuple4_FA9F23_3(Tuple4_FA9F23 this);
art_scheduling_static_CommandProvider Tuple4_FA9F23_4(Tuple4_FA9F23 this);

B Tuple4_FA9F23__ne(Tuple4_FA9F23 this, Tuple4_FA9F23 other);

void Tuple4_FA9F23_apply(STACK_FRAME Tuple4_FA9F23 this, art_scheduling_static_Schedule_DScheduleSpec _1, IS_FDDCB6 _2, Map_EB5A91 _3, art_scheduling_static_CommandProvider _4) {
  DeclNewStackFrame(caller, "Tuple4.scala", "org.sireum.Tuple4", "apply", 0);
  Type_assign(&(this->_1), _1, sizeof(struct art_scheduling_static_Schedule_DScheduleSpec));
  Type_assign(&(this->_2), _2, sizeof(struct IS_FDDCB6));
  Type_assign(&(this->_3), _3, sizeof(struct Map_EB5A91));
  Type_assign(&(this->_4), _4, sizeof(union art_scheduling_static_CommandProvider));
}

B Tuple4_FA9F23__eq(Tuple4_FA9F23 this, Tuple4_FA9F23 other) {
  if (art_scheduling_static_Schedule_DScheduleSpec__ne((art_scheduling_static_Schedule_DScheduleSpec) &this->_1, (art_scheduling_static_Schedule_DScheduleSpec) &other->_1)) return F;
  if (IS_FDDCB6__ne((IS_FDDCB6) &this->_2, (IS_FDDCB6) &other->_2)) return F;
  if (Map_EB5A91__ne((Map_EB5A91) &this->_3, (Map_EB5A91) &other->_3)) return F;
  if (art_scheduling_static_CommandProvider__ne((art_scheduling_static_CommandProvider) &this->_4, (art_scheduling_static_CommandProvider) &other->_4)) return F;
  return T;
}

B Tuple4_FA9F23__equiv(Tuple4_FA9F23 this, Tuple4_FA9F23 other) {
  if (art_scheduling_static_Schedule_DScheduleSpec__inequiv((art_scheduling_static_Schedule_DScheduleSpec) &this->_1, (art_scheduling_static_Schedule_DScheduleSpec) &other->_1)) return F;
  if (IS_FDDCB6__inequiv((IS_FDDCB6) &this->_2, (IS_FDDCB6) &other->_2)) return F;
  if (Map_EB5A91__inequiv((Map_EB5A91) &this->_3, (Map_EB5A91) &other->_3)) return F;
  if (art_scheduling_static_CommandProvider__inequiv((art_scheduling_static_CommandProvider) &this->_4, (art_scheduling_static_CommandProvider) &other->_4)) return F;
  return T;
}
void Tuple4_FA9F23_cprint(Tuple4_FA9F23 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String sep = string(", ");
  String_cprint(string("("), isOut);
  art_scheduling_static_Schedule_DScheduleSpec_cprint(&this->_1, isOut);
  String_cprint(sep, isOut);
  IS_FDDCB6_cprint(&this->_2, isOut);
  String_cprint(sep, isOut);
  Map_EB5A91_cprint(&this->_3, isOut);
  String_cprint(sep, isOut);
  art_scheduling_static_CommandProvider_cprint(&this->_4, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void Tuple4_FA9F23_string_(STACK_FRAME String result, Tuple4_FA9F23 this) {
  DeclNewStackFrame(caller, "Tuple4.scala", "org.sireum.Tuple4", "string", 0);
  String sep = string(", ");
  String_string_(SF result, string("("));
  art_scheduling_static_Schedule_DScheduleSpec_string_(SF result, (art_scheduling_static_Schedule_DScheduleSpec) &this->_1);
  String_string_(SF result, sep);
  IS_FDDCB6_string_(SF result, (IS_FDDCB6) &this->_2);
  String_string_(SF result, sep);
  Map_EB5A91_string_(SF result, (Map_EB5A91) &this->_3);
  String_string_(SF result, sep);
  art_scheduling_static_CommandProvider_string_(SF result, (art_scheduling_static_CommandProvider) &this->_4);
  String_string_(SF result, string(")"));
}