#include <all.h>

#include <lib.h>

S32 S32__plus(S32 n);
S32 S32__minus(S32 n);
S32 S32__add(S32 n1, S32 n2);
S32 S32__sub(S32 n1, S32 n2);
S32 S32__mul(S32 n1, S32 n2);
S32 S32__div(S32 n1, S32 n2);
S32 S32__rem(S32 n1, S32 n2);
B S32__eq(S32 n1, S32 n2);
B S32__ne(S32 n1, S32 n2);
B S32__equiv(S32 n1, S32 n2);
B S32__inequiv(S32 n1, S32 n2);
B S32__lt(S32 n1, S32 n2);
B S32__le(S32 n1, S32 n2);
B S32__gt(S32 n1, S32 n2);
B S32__ge(S32 n1, S32 n2);

S32 S32__complement(S32 n);
S32 S32__shl(S32 n1, S32 n2);
S32 S32__shr(S32 n1, S32 n2);
S32 S32__ushr(S32 n1, S32 n2);
S32 S32__and(S32 n1, S32 n2);
S32 S32__or(S32 n1, S32 n2);
S32 S32__xor(S32 n1, S32 n2);
Z S32_toZ_(STACK_FRAME S32 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.S32", "toZ", 0);
  #ifdef SIREUM_RANGE_CHECK
  intmax_t min = Z_Min;
  intmax_t max = Z_Max;
  intmax_t n = this;
  sfAssert(min <= n && n <= max, "S32.toZ range check failed");
  #endif
  return (Z) this;
}
S32 S32_fromZ(STACK_FRAME Z n) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.S32", "fromZ", 0);
  return (S32) n;
}

void S32_string_(STACK_FRAME String result, S32 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.S32", "string", 0);
  int nSize = snprintf(NULL, 0, S32_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, S32_F, this);
  result->size = newSize;
}