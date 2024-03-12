#ifndef SIREUM_H_org_sireum_S8
#define SIREUM_H_org_sireum_S8

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#include <lib.h>

#define S8_range(n) n;
inline S8 S8__plus(S8 n) {
  return S8_range(n);
}

inline S8 S8__minus(S8 n) {
  return S8_range((S8) -n);
}

inline S8 S8__add(S8 n1, S8 n2) {
  return S8_range((S8) (n1 + n2));
}

inline S8 S8__sub(S8 n1, S8 n2) {
  return S8_range((S8) (n1 - n2));
}

inline S8 S8__mul(S8 n1, S8 n2) {
  return S8_range((S8) (n1 * n2));
}

inline S8 S8__div(S8 n1, S8 n2) {
  return S8_range((S8) (n1 / n2));
}

inline S8 S8__rem(S8 n1, S8 n2) {
  return S8_range((S8) (n1 % n2));
}

inline B S8__eq(S8 n1, S8 n2) {
  return (B) (n1 == n2);
}

inline B S8__ne(S8 n1, S8 n2) {
  return (B) (n1 != n2);
}

inline B S8__equiv(S8 n1, S8 n2) {
  return (B) (n1 == n2);
}

inline B S8__inequiv(S8 n1, S8 n2) {
  return (B) (n1 != n2);
}

inline B S8__lt(S8 n1, S8 n2) {
  return (B) (n1 < n2);
}

inline B S8__le(S8 n1, S8 n2) {
  return (B) (n1 <= n2);
}

inline B S8__gt(S8 n1, S8 n2) {
  return (B) (n1 > n2);
}

inline B S8__ge(S8 n1, S8 n2) {
  return (B) (n1 >= n2);
}

inline S8 S8__complement(S8 n) {
  uint8_t un = (uint8_t) n;
  return (S8) ~un;
}

inline S8 S8__shl(S8 n1, S8 n2) {
  uint8_t un1 = (uint8_t) n1;
  uint8_t un2 = (uint8_t) n2;
  return S8_range((S8) (un1 << un2));
}

inline S8 S8__shr(S8 n1, S8 n2) {
  uint8_t un1 = (uint8_t) n1;
  uint8_t un2 = (uint8_t) n2;
  return S8_range((S8) (un1 >> un2));
}

inline S8 S8__ushr(S8 n1, S8 n2) {
  uint8_t un1 = (uint8_t) n1;
  uint8_t un2 = (uint8_t) n2;
  return S8_range((S8) (un1 >> un2));
}

inline S8 S8__and(S8 n1, S8 n2) {
  uint8_t un1 = (uint8_t) n1;
  uint8_t un2 = (uint8_t) n2;
  return S8_range((S8) (un1 & un2));
}

inline S8 S8__or(S8 n1, S8 n2) {
  uint8_t un1 = (uint8_t) n1;
  uint8_t un2 = (uint8_t) n2;
  return S8_range((S8) (un1 | un2));
}

inline S8 S8__xor(S8 n1, S8 n2) {
  uint8_t un1 = (uint8_t) n1;
  uint8_t un2 = (uint8_t) n2;
  return S8_range((S8) (un1 ^ un2));
}
Z S8_toZ_(STACK_FRAME S8 this);
S8 S8_fromZ(STACK_FRAME Z n);

#ifdef SIREUM_NO_PRINT
#define S8_cprint(this, isOut)
#else
#define S8_cprint(this, isOut) { if (isOut) printf(S8_F, this); else fprintf(stderr, S8_F, this); }
#endif
void S8_string_(STACK_FRAME String result, S8 this);

#ifdef __cplusplus
}
#endif

#endif