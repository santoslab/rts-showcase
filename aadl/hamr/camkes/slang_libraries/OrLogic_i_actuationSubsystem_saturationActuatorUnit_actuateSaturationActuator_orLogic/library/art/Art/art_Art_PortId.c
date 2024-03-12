#include <all.h>

#include <lib.h>

art_Art_PortId art_Art_PortId_range(art_Art_PortId n);

art_Art_PortId art_Art_PortId__plus(art_Art_PortId n);
art_Art_PortId art_Art_PortId__minus(art_Art_PortId n);
art_Art_PortId art_Art_PortId__add(art_Art_PortId n1, art_Art_PortId n2);
art_Art_PortId art_Art_PortId__sub(art_Art_PortId n1, art_Art_PortId n2);
art_Art_PortId art_Art_PortId__mul(art_Art_PortId n1, art_Art_PortId n2);
art_Art_PortId art_Art_PortId__div(art_Art_PortId n1, art_Art_PortId n2);
art_Art_PortId art_Art_PortId__rem(art_Art_PortId n1, art_Art_PortId n2);
B art_Art_PortId__eq(art_Art_PortId n1, art_Art_PortId n2);
B art_Art_PortId__ne(art_Art_PortId n1, art_Art_PortId n2);
B art_Art_PortId__equiv(art_Art_PortId n1, art_Art_PortId n2);
B art_Art_PortId__inequiv(art_Art_PortId n1, art_Art_PortId n2);
B art_Art_PortId__lt(art_Art_PortId n1, art_Art_PortId n2);
B art_Art_PortId__le(art_Art_PortId n1, art_Art_PortId n2);
B art_Art_PortId__gt(art_Art_PortId n1, art_Art_PortId n2);
B art_Art_PortId__ge(art_Art_PortId n1, art_Art_PortId n2);

Z art_Art_PortId_toZ_(STACK_FRAME art_Art_PortId this) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art.PortId", "toZ", 0);
  #ifdef SIREUM_RANGE_CHECK
  intmax_t min = Z_Min;
  intmax_t max = Z_Max;
  intmax_t n = this;
  sfAssert(min <= n && n <= max, "art_Art_PortId.toZ range check failed");
  #endif
  return (Z) this;
}
art_Art_PortId art_Art_PortId_fromZ(STACK_FRAME Z n) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art.PortId", "fromZ", 0);
  return (art_Art_PortId) n;
}

void art_Art_PortId_string_(STACK_FRAME String result, art_Art_PortId this) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art.PortId", "string", 0);
  int nSize = snprintf(NULL, 0, art_Art_PortId_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, art_Art_PortId_F, this);
  result->size = newSize;
}