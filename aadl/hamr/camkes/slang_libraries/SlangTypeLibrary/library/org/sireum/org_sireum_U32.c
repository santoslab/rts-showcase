#include <all.h>

#include <lib.h>

U32 U32__plus(U32 n);
U32 U32__minus(U32 n);
U32 U32__add(U32 n1, U32 n2);
U32 U32__sub(U32 n1, U32 n2);
U32 U32__mul(U32 n1, U32 n2);
U32 U32__div(U32 n1, U32 n2);
U32 U32__rem(U32 n1, U32 n2);
B U32__eq(U32 n1, U32 n2);
B U32__ne(U32 n1, U32 n2);
B U32__equiv(U32 n1, U32 n2);
B U32__inequiv(U32 n1, U32 n2);
B U32__lt(U32 n1, U32 n2);
B U32__le(U32 n1, U32 n2);
B U32__gt(U32 n1, U32 n2);
B U32__ge(U32 n1, U32 n2);

U32 U32__complement(U32 n);
U32 U32__shl(U32 n1, U32 n2);
U32 U32__shr(U32 n1, U32 n2);
U32 U32__ushr(U32 n1, U32 n2);
U32 U32__and(U32 n1, U32 n2);
U32 U32__or(U32 n1, U32 n2);
U32 U32__xor(U32 n1, U32 n2);
Z U32_toZ_(STACK_FRAME U32 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.U32", "toZ", 0);
  #ifdef SIREUM_RANGE_CHECK
  intmax_t min = Z_Min;
  intmax_t max = Z_Max;
  intmax_t n = this;
  sfAssert(min <= n && n <= max, "U32.toZ range check failed");
  #endif
  return (Z) this;
}
U32 U32_fromZ(STACK_FRAME Z n) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.U32", "fromZ", 0);
  return (U32) n;
}

void U32_string_(STACK_FRAME String result, U32 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.U32", "string", 0);
  int nSize = snprintf(NULL, 0, U32_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, U32_F, this);
  result->size = newSize;
}