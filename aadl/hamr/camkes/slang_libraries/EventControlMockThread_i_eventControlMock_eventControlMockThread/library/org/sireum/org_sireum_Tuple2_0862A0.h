#ifndef SIREUM_H_org_sireum_Tuple2_0862A0
#define SIREUM_H_org_sireum_Tuple2_0862A0

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// (B, B)
void Tuple2_0862A0_apply(STACK_FRAME Tuple2_0862A0 this, B _1, B _2);
B Tuple2_0862A0__eq(Tuple2_0862A0 this, Tuple2_0862A0 other);
B Tuple2_0862A0__equiv(Tuple2_0862A0 this, Tuple2_0862A0 other);
void Tuple2_0862A0_cprint(Tuple2_0862A0 this, B isOut);
void Tuple2_0862A0_string_(STACK_FRAME String result, Tuple2_0862A0 this);

inline B Tuple2_0862A0_1(Tuple2_0862A0 this) {
  return this->_1;
}

inline B Tuple2_0862A0_2(Tuple2_0862A0 this) {
  return this->_2;
};

inline B Tuple2_0862A0__ne(Tuple2_0862A0 this, Tuple2_0862A0 other) {
  return !Tuple2_0862A0__eq(this, other);
}

inline B Tuple2_0862A0__inequiv(Tuple2_0862A0 this, Tuple2_0862A0 other) {
  return !Tuple2_0862A0__equiv(this, other);
}

#ifdef __cplusplus
}
#endif

#endif