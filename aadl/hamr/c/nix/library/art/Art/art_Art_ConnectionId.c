#include <all.h>

#include <lib.h>

art_Art_ConnectionId art_Art_ConnectionId_range(art_Art_ConnectionId n);

art_Art_ConnectionId art_Art_ConnectionId__plus(art_Art_ConnectionId n);
art_Art_ConnectionId art_Art_ConnectionId__minus(art_Art_ConnectionId n);
art_Art_ConnectionId art_Art_ConnectionId__add(art_Art_ConnectionId n1, art_Art_ConnectionId n2);
art_Art_ConnectionId art_Art_ConnectionId__sub(art_Art_ConnectionId n1, art_Art_ConnectionId n2);
art_Art_ConnectionId art_Art_ConnectionId__mul(art_Art_ConnectionId n1, art_Art_ConnectionId n2);
art_Art_ConnectionId art_Art_ConnectionId__div(art_Art_ConnectionId n1, art_Art_ConnectionId n2);
art_Art_ConnectionId art_Art_ConnectionId__rem(art_Art_ConnectionId n1, art_Art_ConnectionId n2);
B art_Art_ConnectionId__eq(art_Art_ConnectionId n1, art_Art_ConnectionId n2);
B art_Art_ConnectionId__ne(art_Art_ConnectionId n1, art_Art_ConnectionId n2);
B art_Art_ConnectionId__equiv(art_Art_ConnectionId n1, art_Art_ConnectionId n2);
B art_Art_ConnectionId__inequiv(art_Art_ConnectionId n1, art_Art_ConnectionId n2);
B art_Art_ConnectionId__lt(art_Art_ConnectionId n1, art_Art_ConnectionId n2);
B art_Art_ConnectionId__le(art_Art_ConnectionId n1, art_Art_ConnectionId n2);
B art_Art_ConnectionId__gt(art_Art_ConnectionId n1, art_Art_ConnectionId n2);
B art_Art_ConnectionId__ge(art_Art_ConnectionId n1, art_Art_ConnectionId n2);

Z art_Art_ConnectionId_toZ_(STACK_FRAME art_Art_ConnectionId this) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art.ConnectionId", "toZ", 0);
  #ifdef SIREUM_RANGE_CHECK
  intmax_t min = Z_Min;
  intmax_t max = Z_Max;
  intmax_t n = this;
  sfAssert(min <= n && n <= max, "art_Art_ConnectionId.toZ range check failed");
  #endif
  return (Z) this;
}
art_Art_ConnectionId art_Art_ConnectionId_fromZ(STACK_FRAME Z n) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art.ConnectionId", "fromZ", 0);
  return (art_Art_ConnectionId) n;
}

void art_Art_ConnectionId_string_(STACK_FRAME String result, art_Art_ConnectionId this) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art.ConnectionId", "string", 0);
  int nSize = snprintf(NULL, 0, art_Art_ConnectionId_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, art_Art_ConnectionId_F, this);
  result->size = newSize;
}