#ifndef SIREUM_H_org_sireum_Tuple2_A29DBA
#define SIREUM_H_org_sireum_Tuple2_A29DBA

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// (Z, (Z, art.ArtSlangMessage))
void Tuple2_A29DBA_apply(STACK_FRAME Tuple2_A29DBA this, Z _1, Tuple2_4DFC06 _2);
B Tuple2_A29DBA__eq(Tuple2_A29DBA this, Tuple2_A29DBA other);
B Tuple2_A29DBA__equiv(Tuple2_A29DBA this, Tuple2_A29DBA other);
void Tuple2_A29DBA_cprint(Tuple2_A29DBA this, B isOut);
void Tuple2_A29DBA_string_(STACK_FRAME String result, Tuple2_A29DBA this);

inline Z Tuple2_A29DBA_1(Tuple2_A29DBA this) {
  return this->_1;
}

inline Tuple2_4DFC06 Tuple2_A29DBA_2(Tuple2_A29DBA this) {
  return (Tuple2_4DFC06) &this->_2;
};

inline B Tuple2_A29DBA__ne(Tuple2_A29DBA this, Tuple2_A29DBA other) {
  return !Tuple2_A29DBA__eq(this, other);
}

inline B Tuple2_A29DBA__inequiv(Tuple2_A29DBA this, Tuple2_A29DBA other) {
  return !Tuple2_A29DBA__equiv(this, other);
}

#ifdef __cplusplus
}
#endif

#endif