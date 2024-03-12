#ifndef SIREUM_H_art_Art_BridgeId
#define SIREUM_H_art_Art_BridgeId

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#include <lib.h>

inline art_Art_BridgeId art_Art_BridgeId_range(art_Art_BridgeId n) {
  #ifdef SIREUM_RANGE_CHECK
  sassert(art_Art_BridgeId_C(0) <= n && n <= art_Art_BridgeId_C(14));
  #endif
  return n;
};
inline art_Art_BridgeId art_Art_BridgeId__plus(art_Art_BridgeId n) {
  return art_Art_BridgeId_range(n);
}

inline art_Art_BridgeId art_Art_BridgeId__minus(art_Art_BridgeId n) {
  return art_Art_BridgeId_range((art_Art_BridgeId) -n);
}

inline art_Art_BridgeId art_Art_BridgeId__add(art_Art_BridgeId n1, art_Art_BridgeId n2) {
  return art_Art_BridgeId_range((art_Art_BridgeId) (n1 + n2));
}

inline art_Art_BridgeId art_Art_BridgeId__sub(art_Art_BridgeId n1, art_Art_BridgeId n2) {
  return art_Art_BridgeId_range((art_Art_BridgeId) (n1 - n2));
}

inline art_Art_BridgeId art_Art_BridgeId__mul(art_Art_BridgeId n1, art_Art_BridgeId n2) {
  return art_Art_BridgeId_range((art_Art_BridgeId) (n1 * n2));
}

inline art_Art_BridgeId art_Art_BridgeId__div(art_Art_BridgeId n1, art_Art_BridgeId n2) {
  return art_Art_BridgeId_range((art_Art_BridgeId) (n1 / n2));
}

inline art_Art_BridgeId art_Art_BridgeId__rem(art_Art_BridgeId n1, art_Art_BridgeId n2) {
  return art_Art_BridgeId_range((art_Art_BridgeId) (n1 % n2));
}

inline B art_Art_BridgeId__eq(art_Art_BridgeId n1, art_Art_BridgeId n2) {
  return (B) (n1 == n2);
}

inline B art_Art_BridgeId__ne(art_Art_BridgeId n1, art_Art_BridgeId n2) {
  return (B) (n1 != n2);
}

inline B art_Art_BridgeId__equiv(art_Art_BridgeId n1, art_Art_BridgeId n2) {
  return (B) (n1 == n2);
}

inline B art_Art_BridgeId__inequiv(art_Art_BridgeId n1, art_Art_BridgeId n2) {
  return (B) (n1 != n2);
}

inline B art_Art_BridgeId__lt(art_Art_BridgeId n1, art_Art_BridgeId n2) {
  return (B) (n1 < n2);
}

inline B art_Art_BridgeId__le(art_Art_BridgeId n1, art_Art_BridgeId n2) {
  return (B) (n1 <= n2);
}

inline B art_Art_BridgeId__gt(art_Art_BridgeId n1, art_Art_BridgeId n2) {
  return (B) (n1 > n2);
}

inline B art_Art_BridgeId__ge(art_Art_BridgeId n1, art_Art_BridgeId n2) {
  return (B) (n1 >= n2);
}

Z art_Art_BridgeId_toZ_(STACK_FRAME art_Art_BridgeId this);
art_Art_BridgeId art_Art_BridgeId_fromZ(STACK_FRAME Z n);

#ifdef SIREUM_NO_PRINT
#define art_Art_BridgeId_cprint(this, isOut)
#else
#define art_Art_BridgeId_cprint(this, isOut) { if (isOut) printf(art_Art_BridgeId_F, this); else fprintf(stderr, art_Art_BridgeId_F, this); }
#endif
void art_Art_BridgeId_string_(STACK_FRAME String result, art_Art_BridgeId this);

#ifdef __cplusplus
}
#endif

#endif