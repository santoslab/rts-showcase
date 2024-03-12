#ifndef SIREUM_H_org_sireum_U16
#define SIREUM_H_org_sireum_U16

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#include <lib.h>

#define U16_range(n) n;
inline U16 U16__plus(U16 n) {
  return U16_range(n);
}

inline U16 U16__minus(U16 n) {
  return U16_range((U16) -n);
}

inline U16 U16__add(U16 n1, U16 n2) {
  return U16_range((U16) (n1 + n2));
}

inline U16 U16__sub(U16 n1, U16 n2) {
  return U16_range((U16) (n1 - n2));
}

inline U16 U16__mul(U16 n1, U16 n2) {
  return U16_range((U16) (n1 * n2));
}

inline U16 U16__div(U16 n1, U16 n2) {
  return U16_range((U16) (n1 / n2));
}

inline U16 U16__rem(U16 n1, U16 n2) {
  return U16_range((U16) (n1 % n2));
}

inline B U16__eq(U16 n1, U16 n2) {
  return (B) (n1 == n2);
}

inline B U16__ne(U16 n1, U16 n2) {
  return (B) (n1 != n2);
}

inline B U16__equiv(U16 n1, U16 n2) {
  return (B) (n1 == n2);
}

inline B U16__inequiv(U16 n1, U16 n2) {
  return (B) (n1 != n2);
}

inline B U16__lt(U16 n1, U16 n2) {
  return (B) (n1 < n2);
}

inline B U16__le(U16 n1, U16 n2) {
  return (B) (n1 <= n2);
}

inline B U16__gt(U16 n1, U16 n2) {
  return (B) (n1 > n2);
}

inline B U16__ge(U16 n1, U16 n2) {
  return (B) (n1 >= n2);
}

inline U16 U16__complement(U16 n) {
  return U16_range((U16) ~n);
}

inline U16 U16__shl(U16 n1, U16 n2) {
  return U16_range((U16) (n1 << n2));
}

inline U16 U16__shr(U16 n1, U16 n2) {
  return U16_range((U16) (n1 >> n2));
}

inline U16 U16__ushr(U16 n1, U16 n2) {
  return U16_range((U16) (n1 >> n2));
}

inline U16 U16__and(U16 n1, U16 n2) {
  return U16_range((U16) (n1 & n2));
}

inline U16 U16__or(U16 n1, U16 n2) {
  return U16_range((U16) (n1 | n2));
}

inline U16 U16__xor(U16 n1, U16 n2) {
  return U16_range((U16) (n1 ^ n2));
}
Z U16_toZ_(STACK_FRAME U16 this);
U16 U16_fromZ(STACK_FRAME Z n);

#ifdef SIREUM_NO_PRINT
#define U16_cprint(this, isOut)
#else
#define U16_cprint(this, isOut) { if (isOut) printf(U16_F, this); else fprintf(stderr, U16_F, this); }
#endif
void U16_string_(STACK_FRAME String result, U16 this);

#ifdef __cplusplus
}
#endif

#endif