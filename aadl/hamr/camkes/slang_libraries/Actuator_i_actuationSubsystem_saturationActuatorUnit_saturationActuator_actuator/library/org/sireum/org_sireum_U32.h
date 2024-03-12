#ifndef SIREUM_H_org_sireum_U32
#define SIREUM_H_org_sireum_U32

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#include <lib.h>

#define U32_range(n) n;
inline U32 U32__plus(U32 n) {
  return U32_range(n);
}

inline U32 U32__minus(U32 n) {
  return U32_range((U32) -n);
}

inline U32 U32__add(U32 n1, U32 n2) {
  return U32_range((U32) (n1 + n2));
}

inline U32 U32__sub(U32 n1, U32 n2) {
  return U32_range((U32) (n1 - n2));
}

inline U32 U32__mul(U32 n1, U32 n2) {
  return U32_range((U32) (n1 * n2));
}

inline U32 U32__div(U32 n1, U32 n2) {
  return U32_range((U32) (n1 / n2));
}

inline U32 U32__rem(U32 n1, U32 n2) {
  return U32_range((U32) (n1 % n2));
}

inline B U32__eq(U32 n1, U32 n2) {
  return (B) (n1 == n2);
}

inline B U32__ne(U32 n1, U32 n2) {
  return (B) (n1 != n2);
}

inline B U32__equiv(U32 n1, U32 n2) {
  return (B) (n1 == n2);
}

inline B U32__inequiv(U32 n1, U32 n2) {
  return (B) (n1 != n2);
}

inline B U32__lt(U32 n1, U32 n2) {
  return (B) (n1 < n2);
}

inline B U32__le(U32 n1, U32 n2) {
  return (B) (n1 <= n2);
}

inline B U32__gt(U32 n1, U32 n2) {
  return (B) (n1 > n2);
}

inline B U32__ge(U32 n1, U32 n2) {
  return (B) (n1 >= n2);
}

inline U32 U32__complement(U32 n) {
  return U32_range((U32) ~n);
}

inline U32 U32__shl(U32 n1, U32 n2) {
  return U32_range((U32) (n1 << n2));
}

inline U32 U32__shr(U32 n1, U32 n2) {
  return U32_range((U32) (n1 >> n2));
}

inline U32 U32__ushr(U32 n1, U32 n2) {
  return U32_range((U32) (n1 >> n2));
}

inline U32 U32__and(U32 n1, U32 n2) {
  return U32_range((U32) (n1 & n2));
}

inline U32 U32__or(U32 n1, U32 n2) {
  return U32_range((U32) (n1 | n2));
}

inline U32 U32__xor(U32 n1, U32 n2) {
  return U32_range((U32) (n1 ^ n2));
}
Z U32_toZ_(STACK_FRAME U32 this);
U32 U32_fromZ(STACK_FRAME Z n);

#ifdef SIREUM_NO_PRINT
#define U32_cprint(this, isOut)
#else
#define U32_cprint(this, isOut) { if (isOut) printf(U32_F, this); else fprintf(stderr, U32_F, this); }
#endif
void U32_string_(STACK_FRAME String result, U32 this);

#ifdef __cplusplus
}
#endif

#endif