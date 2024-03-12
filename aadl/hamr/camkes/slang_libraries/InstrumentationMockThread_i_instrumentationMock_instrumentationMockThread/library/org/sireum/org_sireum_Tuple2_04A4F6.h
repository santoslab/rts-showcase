#ifndef SIREUM_H_org_sireum_Tuple2_04A4F6
#define SIREUM_H_org_sireum_Tuple2_04A4F6

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))
void Tuple2_04A4F6_apply(STACK_FRAME Tuple2_04A4F6 this, Tuple12_3FBE62 _1, Tuple12_3FBE62 _2);
B Tuple2_04A4F6__eq(Tuple2_04A4F6 this, Tuple2_04A4F6 other);
B Tuple2_04A4F6__equiv(Tuple2_04A4F6 this, Tuple2_04A4F6 other);
void Tuple2_04A4F6_cprint(Tuple2_04A4F6 this, B isOut);
void Tuple2_04A4F6_string_(STACK_FRAME String result, Tuple2_04A4F6 this);

inline Tuple12_3FBE62 Tuple2_04A4F6_1(Tuple2_04A4F6 this) {
  return (Tuple12_3FBE62) &this->_1;
}

inline Tuple12_3FBE62 Tuple2_04A4F6_2(Tuple2_04A4F6 this) {
  return (Tuple12_3FBE62) &this->_2;
};

inline B Tuple2_04A4F6__ne(Tuple2_04A4F6 this, Tuple2_04A4F6 other) {
  return !Tuple2_04A4F6__eq(this, other);
}

inline B Tuple2_04A4F6__inequiv(Tuple2_04A4F6 this, Tuple2_04A4F6 other) {
  return !Tuple2_04A4F6__equiv(this, other);
}

#ifdef __cplusplus
}
#endif

#endif