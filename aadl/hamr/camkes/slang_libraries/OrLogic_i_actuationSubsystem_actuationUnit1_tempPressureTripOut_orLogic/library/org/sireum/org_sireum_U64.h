#ifndef SIREUM_H_org_sireum_U64
#define SIREUM_H_org_sireum_U64

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#include <lib.h>

#define U64_range(n) n;
inline U64 U64__plus(U64 n) {
  return U64_range(n);
}

inline U64 U64__minus(U64 n) {
  return U64_range((U64) -n);
}

inline U64 U64__add(U64 n1, U64 n2) {
  return U64_range((U64) (n1 + n2));
}

inline U64 U64__sub(U64 n1, U64 n2) {
  return U64_range((U64) (n1 - n2));
}

inline U64 U64__mul(U64 n1, U64 n2) {
  return U64_range((U64) (n1 * n2));
}

inline U64 U64__div(U64 n1, U64 n2) {
  return U64_range((U64) (n1 / n2));
}

inline U64 U64__rem(U64 n1, U64 n2) {
  return U64_range((U64) (n1 % n2));
}

inline B U64__eq(U64 n1, U64 n2) {
  return (B) (n1 == n2);
}

inline B U64__ne(U64 n1, U64 n2) {
  return (B) (n1 != n2);
}

inline B U64__equiv(U64 n1, U64 n2) {
  return (B) (n1 == n2);
}

inline B U64__inequiv(U64 n1, U64 n2) {
  return (B) (n1 != n2);
}

inline B U64__lt(U64 n1, U64 n2) {
  return (B) (n1 < n2);
}

inline B U64__le(U64 n1, U64 n2) {
  return (B) (n1 <= n2);
}

inline B U64__gt(U64 n1, U64 n2) {
  return (B) (n1 > n2);
}

inline B U64__ge(U64 n1, U64 n2) {
  return (B) (n1 >= n2);
}

inline U64 U64__complement(U64 n) {
  return U64_range((U64) ~n);
}

inline U64 U64__shl(U64 n1, U64 n2) {
  return U64_range((U64) (n1 << n2));
}

inline U64 U64__shr(U64 n1, U64 n2) {
  return U64_range((U64) (n1 >> n2));
}

inline U64 U64__ushr(U64 n1, U64 n2) {
  return U64_range((U64) (n1 >> n2));
}

inline U64 U64__and(U64 n1, U64 n2) {
  return U64_range((U64) (n1 & n2));
}

inline U64 U64__or(U64 n1, U64 n2) {
  return U64_range((U64) (n1 | n2));
}

inline U64 U64__xor(U64 n1, U64 n2) {
  return U64_range((U64) (n1 ^ n2));
}
Z U64_toZ_(STACK_FRAME U64 this);
U64 U64_fromZ(STACK_FRAME Z n);

#ifdef SIREUM_NO_PRINT
#define U64_cprint(this, isOut)
#else
#define U64_cprint(this, isOut) { if (isOut) printf(U64_F, this); else fprintf(stderr, U64_F, this); }
#endif
void U64_string_(STACK_FRAME String result, U64 this);

#ifdef __cplusplus
}
#endif

#endif