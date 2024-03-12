#include <all.h>

#include <lib.h>

U64 U64__plus(U64 n);
U64 U64__minus(U64 n);
U64 U64__add(U64 n1, U64 n2);
U64 U64__sub(U64 n1, U64 n2);
U64 U64__mul(U64 n1, U64 n2);
U64 U64__div(U64 n1, U64 n2);
U64 U64__rem(U64 n1, U64 n2);
B U64__eq(U64 n1, U64 n2);
B U64__ne(U64 n1, U64 n2);
B U64__equiv(U64 n1, U64 n2);
B U64__inequiv(U64 n1, U64 n2);
B U64__lt(U64 n1, U64 n2);
B U64__le(U64 n1, U64 n2);
B U64__gt(U64 n1, U64 n2);
B U64__ge(U64 n1, U64 n2);

U64 U64__complement(U64 n);
U64 U64__shl(U64 n1, U64 n2);
U64 U64__shr(U64 n1, U64 n2);
U64 U64__ushr(U64 n1, U64 n2);
U64 U64__and(U64 n1, U64 n2);
U64 U64__or(U64 n1, U64 n2);
U64 U64__xor(U64 n1, U64 n2);
Z U64_toZ_(STACK_FRAME U64 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.U64", "toZ", 0);
  #ifdef SIREUM_RANGE_CHECK
  intmax_t min = Z_Min;
  intmax_t max = Z_Max;
  intmax_t n = this;
  sfAssert(min <= n && n <= max, "U64.toZ range check failed");
  #endif
  return (Z) this;
}
U64 U64_fromZ(STACK_FRAME Z n) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.U64", "fromZ", 0);
  return (U64) n;
}

void U64_string_(STACK_FRAME String result, U64 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.U64", "string", 0);
  int nSize = snprintf(NULL, 0, U64_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, U64_F, this);
  result->size = newSize;
}