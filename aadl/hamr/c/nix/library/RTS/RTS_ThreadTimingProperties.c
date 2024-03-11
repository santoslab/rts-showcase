#include <all.h>

// RTS.ThreadTimingProperties

B RTS_ThreadTimingProperties__eq(RTS_ThreadTimingProperties this, RTS_ThreadTimingProperties other) {
  if (Option_882048__ne((Option_882048) &this->domain, (Option_882048) &other->domain)) return F;
  if (Option_B47750__ne((Option_B47750) &this->computeExecutionTime, (Option_B47750) &other->computeExecutionTime)) return F;
  return T;
}

B RTS_ThreadTimingProperties__equiv(RTS_ThreadTimingProperties this, RTS_ThreadTimingProperties other) {
  if (Option_882048__inequiv((Option_882048) &this->domain, (Option_882048) &other->domain)) return F;
  if (Option_B47750__inequiv((Option_B47750) &this->computeExecutionTime, (Option_B47750) &other->computeExecutionTime)) return F;
  return T;
}

B RTS_ThreadTimingProperties__ne(RTS_ThreadTimingProperties this, RTS_ThreadTimingProperties other);
B RTS_ThreadTimingProperties__inequiv(RTS_ThreadTimingProperties this, RTS_ThreadTimingProperties other);

void RTS_ThreadTimingProperties_string_(STACK_FRAME String result, RTS_ThreadTimingProperties this) {
  DeclNewStackFrame(caller, "Schedulers.scala", "RTS.ThreadTimingProperties", "string", 0);
  String_string_(SF result, string("ThreadTimingProperties("));
  String sep = string(", ");
  Option_882048_string_(SF result, (Option_882048) &this->domain);
  String_string_(SF result, sep);
  Option_B47750_string_(SF result, (Option_B47750) &this->computeExecutionTime);
  String_string_(SF result, string(")"));
}

void RTS_ThreadTimingProperties_cprint(RTS_ThreadTimingProperties this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("ThreadTimingProperties("), isOut);
  String sep = string(", ");
  Option_882048_cprint((Option_882048) &this->domain, isOut);
  String_cprint(sep, isOut);
  Option_B47750_cprint((Option_B47750) &this->computeExecutionTime, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B RTS_ThreadTimingProperties__is(STACK_FRAME void* this);
RTS_ThreadTimingProperties RTS_ThreadTimingProperties__as(STACK_FRAME void *this);

void RTS_ThreadTimingProperties_apply(STACK_FRAME RTS_ThreadTimingProperties this, Option_882048 domain, Option_B47750 computeExecutionTime) {
  DeclNewStackFrame(caller, "Schedulers.scala", "RTS.ThreadTimingProperties", "apply", 0);
  Type_assign(&this->domain, domain, sizeof(union Option_882048));
  Type_assign(&this->computeExecutionTime, computeExecutionTime, sizeof(union Option_B47750));
}