#include <all.h>

#include <lib.h>

S8 S8__plus(S8 n);
S8 S8__minus(S8 n);
S8 S8__add(S8 n1, S8 n2);
S8 S8__sub(S8 n1, S8 n2);
S8 S8__mul(S8 n1, S8 n2);
S8 S8__div(S8 n1, S8 n2);
S8 S8__rem(S8 n1, S8 n2);
B S8__eq(S8 n1, S8 n2);
B S8__ne(S8 n1, S8 n2);
B S8__equiv(S8 n1, S8 n2);
B S8__inequiv(S8 n1, S8 n2);
B S8__lt(S8 n1, S8 n2);
B S8__le(S8 n1, S8 n2);
B S8__gt(S8 n1, S8 n2);
B S8__ge(S8 n1, S8 n2);

S8 S8__complement(S8 n);
S8 S8__shl(S8 n1, S8 n2);
S8 S8__shr(S8 n1, S8 n2);
S8 S8__ushr(S8 n1, S8 n2);
S8 S8__and(S8 n1, S8 n2);
S8 S8__or(S8 n1, S8 n2);
S8 S8__xor(S8 n1, S8 n2);
Z S8_toZ_(STACK_FRAME S8 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.S8", "toZ", 0);
  return (Z) this;
}
S8 S8_fromZ(STACK_FRAME Z n) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.S8", "fromZ", 0);
  #ifdef SIREUM_RANGE_CHECK
  sfAssert(INT8_MIN <= n && n <= INT8_MAX, "S8.fromZ range check failed");
  #endif
  return (S8) n;
}

void S8_string_(STACK_FRAME String result, S8 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.S8", "string", 0);
  int nSize = snprintf(NULL, 0, S8_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, S8_F, this);
  result->size = newSize;
}