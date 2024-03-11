#ifndef SIREUM_H_org_sireum_Tuple2_275908
#define SIREUM_H_org_sireum_Tuple2_275908

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// (String, Option[art.DataContent])
void Tuple2_275908_apply(STACK_FRAME Tuple2_275908 this, String _1, Option_8E9F45 _2);
B Tuple2_275908__eq(Tuple2_275908 this, Tuple2_275908 other);
B Tuple2_275908__equiv(Tuple2_275908 this, Tuple2_275908 other);
void Tuple2_275908_cprint(Tuple2_275908 this, B isOut);
void Tuple2_275908_string_(STACK_FRAME String result, Tuple2_275908 this);

inline String Tuple2_275908_1(Tuple2_275908 this) {
  return (String) &this->_1;
}

inline Option_8E9F45 Tuple2_275908_2(Tuple2_275908 this) {
  return (Option_8E9F45) &this->_2;
};

inline B Tuple2_275908__ne(Tuple2_275908 this, Tuple2_275908 other) {
  return !Tuple2_275908__eq(this, other);
}

inline B Tuple2_275908__inequiv(Tuple2_275908 this, Tuple2_275908 other) {
  return !Tuple2_275908__equiv(this, other);
}

#ifdef __cplusplus
}
#endif

#endif