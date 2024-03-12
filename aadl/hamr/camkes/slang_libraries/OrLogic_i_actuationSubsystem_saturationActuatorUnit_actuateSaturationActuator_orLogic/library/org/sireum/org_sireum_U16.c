#include <all.h>

#include <lib.h>

U16 U16__plus(U16 n);
U16 U16__minus(U16 n);
U16 U16__add(U16 n1, U16 n2);
U16 U16__sub(U16 n1, U16 n2);
U16 U16__mul(U16 n1, U16 n2);
U16 U16__div(U16 n1, U16 n2);
U16 U16__rem(U16 n1, U16 n2);
B U16__eq(U16 n1, U16 n2);
B U16__ne(U16 n1, U16 n2);
B U16__equiv(U16 n1, U16 n2);
B U16__inequiv(U16 n1, U16 n2);
B U16__lt(U16 n1, U16 n2);
B U16__le(U16 n1, U16 n2);
B U16__gt(U16 n1, U16 n2);
B U16__ge(U16 n1, U16 n2);

U16 U16__complement(U16 n);
U16 U16__shl(U16 n1, U16 n2);
U16 U16__shr(U16 n1, U16 n2);
U16 U16__ushr(U16 n1, U16 n2);
U16 U16__and(U16 n1, U16 n2);
U16 U16__or(U16 n1, U16 n2);
U16 U16__xor(U16 n1, U16 n2);
Z U16_toZ_(STACK_FRAME U16 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.U16", "toZ", 0);
  return (Z) this;
}
U16 U16_fromZ(STACK_FRAME Z n) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.U16", "fromZ", 0);
  #ifdef SIREUM_RANGE_CHECK
  sfAssert(U16_C(0) <= n && n <= UINT16_MAX, "U16.fromZ range check failed");
  #endif
  return (U16) n;
}

void U16_string_(STACK_FRAME String result, U16 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.U16", "string", 0);
  int nSize = snprintf(NULL, 0, U16_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, U16_F, this);
  result->size = newSize;
}