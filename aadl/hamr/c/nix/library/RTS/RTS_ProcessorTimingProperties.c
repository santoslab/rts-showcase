#include <all.h>

// RTS.ProcessorTimingProperties

B RTS_ProcessorTimingProperties__eq(RTS_ProcessorTimingProperties this, RTS_ProcessorTimingProperties other) {
  if (Option_882048__ne((Option_882048) &this->clockPeriod, (Option_882048) &other->clockPeriod)) return F;
  if (Option_882048__ne((Option_882048) &this->framePeriod, (Option_882048) &other->framePeriod)) return F;
  if (Option_882048__ne((Option_882048) &this->maxDomain, (Option_882048) &other->maxDomain)) return F;
  if (Option_882048__ne((Option_882048) &this->slotTime, (Option_882048) &other->slotTime)) return F;
  return T;
}

B RTS_ProcessorTimingProperties__equiv(RTS_ProcessorTimingProperties this, RTS_ProcessorTimingProperties other) {
  if (Option_882048__inequiv((Option_882048) &this->clockPeriod, (Option_882048) &other->clockPeriod)) return F;
  if (Option_882048__inequiv((Option_882048) &this->framePeriod, (Option_882048) &other->framePeriod)) return F;
  if (Option_882048__inequiv((Option_882048) &this->maxDomain, (Option_882048) &other->maxDomain)) return F;
  if (Option_882048__inequiv((Option_882048) &this->slotTime, (Option_882048) &other->slotTime)) return F;
  return T;
}

B RTS_ProcessorTimingProperties__ne(RTS_ProcessorTimingProperties this, RTS_ProcessorTimingProperties other);
B RTS_ProcessorTimingProperties__inequiv(RTS_ProcessorTimingProperties this, RTS_ProcessorTimingProperties other);

void RTS_ProcessorTimingProperties_string_(STACK_FRAME String result, RTS_ProcessorTimingProperties this) {
  DeclNewStackFrame(caller, "Schedulers.scala", "RTS.ProcessorTimingProperties", "string", 0);
  String_string_(SF result, string("ProcessorTimingProperties("));
  String sep = string(", ");
  Option_882048_string_(SF result, (Option_882048) &this->clockPeriod);
  String_string_(SF result, sep);
  Option_882048_string_(SF result, (Option_882048) &this->framePeriod);
  String_string_(SF result, sep);
  Option_882048_string_(SF result, (Option_882048) &this->maxDomain);
  String_string_(SF result, sep);
  Option_882048_string_(SF result, (Option_882048) &this->slotTime);
  String_string_(SF result, string(")"));
}

void RTS_ProcessorTimingProperties_cprint(RTS_ProcessorTimingProperties this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("ProcessorTimingProperties("), isOut);
  String sep = string(", ");
  Option_882048_cprint((Option_882048) &this->clockPeriod, isOut);
  String_cprint(sep, isOut);
  Option_882048_cprint((Option_882048) &this->framePeriod, isOut);
  String_cprint(sep, isOut);
  Option_882048_cprint((Option_882048) &this->maxDomain, isOut);
  String_cprint(sep, isOut);
  Option_882048_cprint((Option_882048) &this->slotTime, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_ProcessorTimingProperties__is(STACK_FRAME void* this);
RTS_ProcessorTimingProperties RTS_ProcessorTimingProperties__as(STACK_FRAME void *this);

void RTS_ProcessorTimingProperties_apply(STACK_FRAME RTS_ProcessorTimingProperties this, Option_882048 clockPeriod, Option_882048 framePeriod, Option_882048 maxDomain, Option_882048 slotTime) {
  DeclNewStackFrame(caller, "Schedulers.scala", "RTS.ProcessorTimingProperties", "apply", 0);
  Type_assign(&this->clockPeriod, clockPeriod, sizeof(union Option_882048));
  Type_assign(&this->framePeriod, framePeriod, sizeof(union Option_882048));
  Type_assign(&this->maxDomain, maxDomain, sizeof(union Option_882048));
  Type_assign(&this->slotTime, slotTime, sizeof(union Option_882048));
}