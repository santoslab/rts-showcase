#include <all.h>

#include <lib.h>

S16 S16__plus(S16 n);
S16 S16__minus(S16 n);
S16 S16__add(S16 n1, S16 n2);
S16 S16__sub(S16 n1, S16 n2);
S16 S16__mul(S16 n1, S16 n2);
S16 S16__div(S16 n1, S16 n2);
S16 S16__rem(S16 n1, S16 n2);
B S16__eq(S16 n1, S16 n2);
B S16__ne(S16 n1, S16 n2);
B S16__equiv(S16 n1, S16 n2);
B S16__inequiv(S16 n1, S16 n2);
B S16__lt(S16 n1, S16 n2);
B S16__le(S16 n1, S16 n2);
B S16__gt(S16 n1, S16 n2);
B S16__ge(S16 n1, S16 n2);

S16 S16__complement(S16 n);
S16 S16__shl(S16 n1, S16 n2);
S16 S16__shr(S16 n1, S16 n2);
S16 S16__ushr(S16 n1, S16 n2);
S16 S16__and(S16 n1, S16 n2);
S16 S16__or(S16 n1, S16 n2);
S16 S16__xor(S16 n1, S16 n2);
Z S16_toZ_(STACK_FRAME S16 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.S16", "toZ", 0);
  return (Z) this;
}
S16 S16_fromZ(STACK_FRAME Z n) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.S16", "fromZ", 0);
  #ifdef SIREUM_RANGE_CHECK
  sfAssert(INT16_MIN <= n && n <= INT16_MAX, "S16.fromZ range check failed");
  #endif
  return (S16) n;
}

void S16_string_(STACK_FRAME String result, S16 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.S16", "string", 0);
  int nSize = snprintf(NULL, 0, S16_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, S16_F, this);
  result->size = newSize;
}