#ifndef SIREUM_H_org_sireum_S16
#define SIREUM_H_org_sireum_S16

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#include <lib.h>

#define S16_range(n) n;
inline S16 S16__plus(S16 n) {
  return S16_range(n);
}

inline S16 S16__minus(S16 n) {
  return S16_range((S16) -n);
}

inline S16 S16__add(S16 n1, S16 n2) {
  return S16_range((S16) (n1 + n2));
}

inline S16 S16__sub(S16 n1, S16 n2) {
  return S16_range((S16) (n1 - n2));
}

inline S16 S16__mul(S16 n1, S16 n2) {
  return S16_range((S16) (n1 * n2));
}

inline S16 S16__div(S16 n1, S16 n2) {
  return S16_range((S16) (n1 / n2));
}

inline S16 S16__rem(S16 n1, S16 n2) {
  return S16_range((S16) (n1 % n2));
}

inline B S16__eq(S16 n1, S16 n2) {
  return (B) (n1 == n2);
}

inline B S16__ne(S16 n1, S16 n2) {
  return (B) (n1 != n2);
}

inline B S16__equiv(S16 n1, S16 n2) {
  return (B) (n1 == n2);
}

inline B S16__inequiv(S16 n1, S16 n2) {
  return (B) (n1 != n2);
}

inline B S16__lt(S16 n1, S16 n2) {
  return (B) (n1 < n2);
}

inline B S16__le(S16 n1, S16 n2) {
  return (B) (n1 <= n2);
}

inline B S16__gt(S16 n1, S16 n2) {
  return (B) (n1 > n2);
}

inline B S16__ge(S16 n1, S16 n2) {
  return (B) (n1 >= n2);
}

inline S16 S16__complement(S16 n) {
  uint16_t un = (uint16_t) n;
  return (S16) ~un;
}

inline S16 S16__shl(S16 n1, S16 n2) {
  uint16_t un1 = (uint16_t) n1;
  uint16_t un2 = (uint16_t) n2;
  return S16_range((S16) (un1 << un2));
}

inline S16 S16__shr(S16 n1, S16 n2) {
  uint16_t un1 = (uint16_t) n1;
  uint16_t un2 = (uint16_t) n2;
  return S16_range((S16) (un1 >> un2));
}

inline S16 S16__ushr(S16 n1, S16 n2) {
  uint16_t un1 = (uint16_t) n1;
  uint16_t un2 = (uint16_t) n2;
  return S16_range((S16) (un1 >> un2));
}

inline S16 S16__and(S16 n1, S16 n2) {
  uint16_t un1 = (uint16_t) n1;
  uint16_t un2 = (uint16_t) n2;
  return S16_range((S16) (un1 & un2));
}

inline S16 S16__or(S16 n1, S16 n2) {
  uint16_t un1 = (uint16_t) n1;
  uint16_t un2 = (uint16_t) n2;
  return S16_range((S16) (un1 | un2));
}

inline S16 S16__xor(S16 n1, S16 n2) {
  uint16_t un1 = (uint16_t) n1;
  uint16_t un2 = (uint16_t) n2;
  return S16_range((S16) (un1 ^ un2));
}
Z S16_toZ_(STACK_FRAME S16 this);
S16 S16_fromZ(STACK_FRAME Z n);

#ifdef SIREUM_NO_PRINT
#define S16_cprint(this, isOut)
#else
#define S16_cprint(this, isOut) { if (isOut) printf(S16_F, this); else fprintf(stderr, S16_F, this); }
#endif
void S16_string_(STACK_FRAME String result, S16 this);

#ifdef __cplusplus
}
#endif

#endif