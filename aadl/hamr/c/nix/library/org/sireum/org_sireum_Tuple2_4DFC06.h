#ifndef SIREUM_H_org_sireum_Tuple2_4DFC06
#define SIREUM_H_org_sireum_Tuple2_4DFC06

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// (Z, art.ArtSlangMessage)
void Tuple2_4DFC06_apply(STACK_FRAME Tuple2_4DFC06 this, Z _1, art_ArtSlangMessage _2);
B Tuple2_4DFC06__eq(Tuple2_4DFC06 this, Tuple2_4DFC06 other);
B Tuple2_4DFC06__equiv(Tuple2_4DFC06 this, Tuple2_4DFC06 other);
void Tuple2_4DFC06_cprint(Tuple2_4DFC06 this, B isOut);
void Tuple2_4DFC06_string_(STACK_FRAME String result, Tuple2_4DFC06 this);

inline Z Tuple2_4DFC06_1(Tuple2_4DFC06 this) {
  return this->_1;
}

inline art_ArtSlangMessage Tuple2_4DFC06_2(Tuple2_4DFC06 this) {
  return (art_ArtSlangMessage) &this->_2;
};

inline B Tuple2_4DFC06__ne(Tuple2_4DFC06 this, Tuple2_4DFC06 other) {
  return !Tuple2_4DFC06__eq(this, other);
}

inline B Tuple2_4DFC06__inequiv(Tuple2_4DFC06 this, Tuple2_4DFC06 other) {
  return !Tuple2_4DFC06__equiv(this, other);
}

#ifdef __cplusplus
}
#endif

#endif