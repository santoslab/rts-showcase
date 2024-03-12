#include <all.h>

#include <lib.h>

art_Art_BridgeId art_Art_BridgeId_range(art_Art_BridgeId n);

art_Art_BridgeId art_Art_BridgeId__plus(art_Art_BridgeId n);
art_Art_BridgeId art_Art_BridgeId__minus(art_Art_BridgeId n);
art_Art_BridgeId art_Art_BridgeId__add(art_Art_BridgeId n1, art_Art_BridgeId n2);
art_Art_BridgeId art_Art_BridgeId__sub(art_Art_BridgeId n1, art_Art_BridgeId n2);
art_Art_BridgeId art_Art_BridgeId__mul(art_Art_BridgeId n1, art_Art_BridgeId n2);
art_Art_BridgeId art_Art_BridgeId__div(art_Art_BridgeId n1, art_Art_BridgeId n2);
art_Art_BridgeId art_Art_BridgeId__rem(art_Art_BridgeId n1, art_Art_BridgeId n2);
B art_Art_BridgeId__eq(art_Art_BridgeId n1, art_Art_BridgeId n2);
B art_Art_BridgeId__ne(art_Art_BridgeId n1, art_Art_BridgeId n2);
B art_Art_BridgeId__equiv(art_Art_BridgeId n1, art_Art_BridgeId n2);
B art_Art_BridgeId__inequiv(art_Art_BridgeId n1, art_Art_BridgeId n2);
B art_Art_BridgeId__lt(art_Art_BridgeId n1, art_Art_BridgeId n2);
B art_Art_BridgeId__le(art_Art_BridgeId n1, art_Art_BridgeId n2);
B art_Art_BridgeId__gt(art_Art_BridgeId n1, art_Art_BridgeId n2);
B art_Art_BridgeId__ge(art_Art_BridgeId n1, art_Art_BridgeId n2);

Z art_Art_BridgeId_toZ_(STACK_FRAME art_Art_BridgeId this) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art.BridgeId", "toZ", 0);
  #ifdef SIREUM_RANGE_CHECK
  intmax_t min = Z_Min;
  intmax_t max = Z_Max;
  intmax_t n = this;
  sfAssert(min <= n && n <= max, "art_Art_BridgeId.toZ range check failed");
  #endif
  return (Z) this;
}
art_Art_BridgeId art_Art_BridgeId_fromZ(STACK_FRAME Z n) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art.BridgeId", "fromZ", 0);
  return (art_Art_BridgeId) n;
}

void art_Art_BridgeId_string_(STACK_FRAME String result, art_Art_BridgeId this) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art.BridgeId", "string", 0);
  int nSize = snprintf(NULL, 0, art_Art_BridgeId_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, art_Art_BridgeId_F, this);
  result->size = newSize;
}