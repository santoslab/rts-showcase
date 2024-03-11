#ifndef SIREUM_H_org_sireum_Tuple12_3FBE62
#define SIREUM_H_org_sireum_Tuple12_3FBE62

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// (B, B, B, B, B, B, B, B, B, B, B, B)
void Tuple12_3FBE62_apply(STACK_FRAME Tuple12_3FBE62 this, B _1, B _2, B _3, B _4, B _5, B _6, B _7, B _8, B _9, B _10, B _11, B _12);
B Tuple12_3FBE62__eq(Tuple12_3FBE62 this, Tuple12_3FBE62 other);
B Tuple12_3FBE62__equiv(Tuple12_3FBE62 this, Tuple12_3FBE62 other);
void Tuple12_3FBE62_cprint(Tuple12_3FBE62 this, B isOut);
void Tuple12_3FBE62_string_(STACK_FRAME String result, Tuple12_3FBE62 this);

inline B Tuple12_3FBE62_1(Tuple12_3FBE62 this) {
  return this->_1;
}

inline B Tuple12_3FBE62_2(Tuple12_3FBE62 this) {
  return this->_2;
}

inline B Tuple12_3FBE62_3(Tuple12_3FBE62 this) {
  return this->_3;
}

inline B Tuple12_3FBE62_4(Tuple12_3FBE62 this) {
  return this->_4;
}

inline B Tuple12_3FBE62_5(Tuple12_3FBE62 this) {
  return this->_5;
}

inline B Tuple12_3FBE62_6(Tuple12_3FBE62 this) {
  return this->_6;
}

inline B Tuple12_3FBE62_7(Tuple12_3FBE62 this) {
  return this->_7;
}

inline B Tuple12_3FBE62_8(Tuple12_3FBE62 this) {
  return this->_8;
}

inline B Tuple12_3FBE62_9(Tuple12_3FBE62 this) {
  return this->_9;
}

inline B Tuple12_3FBE62_10(Tuple12_3FBE62 this) {
  return this->_10;
}

inline B Tuple12_3FBE62_11(Tuple12_3FBE62 this) {
  return this->_11;
}

inline B Tuple12_3FBE62_12(Tuple12_3FBE62 this) {
  return this->_12;
};

inline B Tuple12_3FBE62__ne(Tuple12_3FBE62 this, Tuple12_3FBE62 other) {
  return !Tuple12_3FBE62__eq(this, other);
}

inline B Tuple12_3FBE62__inequiv(Tuple12_3FBE62 this, Tuple12_3FBE62 other) {
  return !Tuple12_3FBE62__equiv(this, other);
}

#ifdef __cplusplus
}
#endif

#endif