#ifndef SIREUM_H_art_Art_ConnectionId
#define SIREUM_H_art_Art_ConnectionId

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#include <lib.h>

inline art_Art_ConnectionId art_Art_ConnectionId_range(art_Art_ConnectionId n) {
  #ifdef SIREUM_RANGE_CHECK
  sassert(art_Art_ConnectionId_C(0) <= n && n <= art_Art_ConnectionId_C(37));
  #endif
  return n;
};
inline art_Art_ConnectionId art_Art_ConnectionId__plus(art_Art_ConnectionId n) {
  return art_Art_ConnectionId_range(n);
}

inline art_Art_ConnectionId art_Art_ConnectionId__minus(art_Art_ConnectionId n) {
  return art_Art_ConnectionId_range((art_Art_ConnectionId) -n);
}

inline art_Art_ConnectionId art_Art_ConnectionId__add(art_Art_ConnectionId n1, art_Art_ConnectionId n2) {
  return art_Art_ConnectionId_range((art_Art_ConnectionId) (n1 + n2));
}

inline art_Art_ConnectionId art_Art_ConnectionId__sub(art_Art_ConnectionId n1, art_Art_ConnectionId n2) {
  return art_Art_ConnectionId_range((art_Art_ConnectionId) (n1 - n2));
}

inline art_Art_ConnectionId art_Art_ConnectionId__mul(art_Art_ConnectionId n1, art_Art_ConnectionId n2) {
  return art_Art_ConnectionId_range((art_Art_ConnectionId) (n1 * n2));
}

inline art_Art_ConnectionId art_Art_ConnectionId__div(art_Art_ConnectionId n1, art_Art_ConnectionId n2) {
  return art_Art_ConnectionId_range((art_Art_ConnectionId) (n1 / n2));
}

inline art_Art_ConnectionId art_Art_ConnectionId__rem(art_Art_ConnectionId n1, art_Art_ConnectionId n2) {
  return art_Art_ConnectionId_range((art_Art_ConnectionId) (n1 % n2));
}

inline B art_Art_ConnectionId__eq(art_Art_ConnectionId n1, art_Art_ConnectionId n2) {
  return (B) (n1 == n2);
}

inline B art_Art_ConnectionId__ne(art_Art_ConnectionId n1, art_Art_ConnectionId n2) {
  return (B) (n1 != n2);
}

inline B art_Art_ConnectionId__equiv(art_Art_ConnectionId n1, art_Art_ConnectionId n2) {
  return (B) (n1 == n2);
}

inline B art_Art_ConnectionId__inequiv(art_Art_ConnectionId n1, art_Art_ConnectionId n2) {
  return (B) (n1 != n2);
}

inline B art_Art_ConnectionId__lt(art_Art_ConnectionId n1, art_Art_ConnectionId n2) {
  return (B) (n1 < n2);
}

inline B art_Art_ConnectionId__le(art_Art_ConnectionId n1, art_Art_ConnectionId n2) {
  return (B) (n1 <= n2);
}

inline B art_Art_ConnectionId__gt(art_Art_ConnectionId n1, art_Art_ConnectionId n2) {
  return (B) (n1 > n2);
}

inline B art_Art_ConnectionId__ge(art_Art_ConnectionId n1, art_Art_ConnectionId n2) {
  return (B) (n1 >= n2);
}

Z art_Art_ConnectionId_toZ_(STACK_FRAME art_Art_ConnectionId this);
art_Art_ConnectionId art_Art_ConnectionId_fromZ(STACK_FRAME Z n);

#ifdef SIREUM_NO_PRINT
#define art_Art_ConnectionId_cprint(this, isOut)
#else
#define art_Art_ConnectionId_cprint(this, isOut) { if (isOut) printf(art_Art_ConnectionId_F, this); else fprintf(stderr, art_Art_ConnectionId_F, this); }
#endif
void art_Art_ConnectionId_string_(STACK_FRAME String result, art_Art_ConnectionId this);

#ifdef __cplusplus
}
#endif

#endif