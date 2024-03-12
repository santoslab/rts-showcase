#ifndef SIREUM_H_art_Art_PortId
#define SIREUM_H_art_Art_PortId

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#include <lib.h>

inline art_Art_PortId art_Art_PortId_range(art_Art_PortId n) {
  #ifdef SIREUM_RANGE_CHECK
  sassert(art_Art_PortId_C(0) <= n && n <= art_Art_PortId_C(75));
  #endif
  return n;
};
inline art_Art_PortId art_Art_PortId__plus(art_Art_PortId n) {
  return art_Art_PortId_range(n);
}

inline art_Art_PortId art_Art_PortId__minus(art_Art_PortId n) {
  return art_Art_PortId_range((art_Art_PortId) -n);
}

inline art_Art_PortId art_Art_PortId__add(art_Art_PortId n1, art_Art_PortId n2) {
  return art_Art_PortId_range((art_Art_PortId) (n1 + n2));
}

inline art_Art_PortId art_Art_PortId__sub(art_Art_PortId n1, art_Art_PortId n2) {
  return art_Art_PortId_range((art_Art_PortId) (n1 - n2));
}

inline art_Art_PortId art_Art_PortId__mul(art_Art_PortId n1, art_Art_PortId n2) {
  return art_Art_PortId_range((art_Art_PortId) (n1 * n2));
}

inline art_Art_PortId art_Art_PortId__div(art_Art_PortId n1, art_Art_PortId n2) {
  return art_Art_PortId_range((art_Art_PortId) (n1 / n2));
}

inline art_Art_PortId art_Art_PortId__rem(art_Art_PortId n1, art_Art_PortId n2) {
  return art_Art_PortId_range((art_Art_PortId) (n1 % n2));
}

inline B art_Art_PortId__eq(art_Art_PortId n1, art_Art_PortId n2) {
  return (B) (n1 == n2);
}

inline B art_Art_PortId__ne(art_Art_PortId n1, art_Art_PortId n2) {
  return (B) (n1 != n2);
}

inline B art_Art_PortId__equiv(art_Art_PortId n1, art_Art_PortId n2) {
  return (B) (n1 == n2);
}

inline B art_Art_PortId__inequiv(art_Art_PortId n1, art_Art_PortId n2) {
  return (B) (n1 != n2);
}

inline B art_Art_PortId__lt(art_Art_PortId n1, art_Art_PortId n2) {
  return (B) (n1 < n2);
}

inline B art_Art_PortId__le(art_Art_PortId n1, art_Art_PortId n2) {
  return (B) (n1 <= n2);
}

inline B art_Art_PortId__gt(art_Art_PortId n1, art_Art_PortId n2) {
  return (B) (n1 > n2);
}

inline B art_Art_PortId__ge(art_Art_PortId n1, art_Art_PortId n2) {
  return (B) (n1 >= n2);
}

Z art_Art_PortId_toZ_(STACK_FRAME art_Art_PortId this);
art_Art_PortId art_Art_PortId_fromZ(STACK_FRAME Z n);

#ifdef SIREUM_NO_PRINT
#define art_Art_PortId_cprint(this, isOut)
#else
#define art_Art_PortId_cprint(this, isOut) { if (isOut) printf(art_Art_PortId_F, this); else fprintf(stderr, art_Art_PortId_F, this); }
#endif
void art_Art_PortId_string_(STACK_FRAME String result, art_Art_PortId this);

#ifdef __cplusplus
}
#endif

#endif