#include <all.h>

// MNone[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)]

B MNone_6579ED__eq(MNone_6579ED this, MNone_6579ED other) {
  return T;
}

B MNone_6579ED__equiv(MNone_6579ED this, MNone_6579ED other) {
  return T;
}

B MNone_6579ED__ne(MNone_6579ED this, MNone_6579ED other);
B MNone_6579ED__inequiv(MNone_6579ED this, MNone_6579ED other);

void MNone_6579ED_string_(STACK_FRAME String result, MNone_6579ED this) {
  DeclNewStackFrame(caller, "MOption.scala", "org.sireum.MNone", "string", 0);
  String_string_(SF result, string("MNone("));
  String_string_(SF result, string(")"));
}

void MNone_6579ED_cprint(MNone_6579ED this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("MNone("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B MNone_6579ED__is(STACK_FRAME void* this);
MNone_6579ED MNone_6579ED__as(STACK_FRAME void *this);

void MNone_6579ED_apply(STACK_FRAME MNone_6579ED this) {
  DeclNewStackFrame(caller, "MOption.scala", "org.sireum.MNone_6579ED", "apply", 0);
}