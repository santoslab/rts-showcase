#ifndef SIREUM_H_org_sireum_Tuple2_E0098E
#define SIREUM_H_org_sireum_Tuple2_E0098E

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// (String, art.Art.BridgeId)
void Tuple2_E0098E_apply(STACK_FRAME Tuple2_E0098E this, String _1, art_Art_BridgeId _2);
B Tuple2_E0098E__eq(Tuple2_E0098E this, Tuple2_E0098E other);
B Tuple2_E0098E__equiv(Tuple2_E0098E this, Tuple2_E0098E other);
void Tuple2_E0098E_cprint(Tuple2_E0098E this, B isOut);
void Tuple2_E0098E_string_(STACK_FRAME String result, Tuple2_E0098E this);

inline String Tuple2_E0098E_1(Tuple2_E0098E this) {
  return (String) &this->_1;
}

inline art_Art_BridgeId Tuple2_E0098E_2(Tuple2_E0098E this) {
  return this->_2;
};

inline B Tuple2_E0098E__ne(Tuple2_E0098E this, Tuple2_E0098E other) {
  return !Tuple2_E0098E__eq(this, other);
}

inline B Tuple2_E0098E__inequiv(Tuple2_E0098E this, Tuple2_E0098E other) {
  return !Tuple2_E0098E__equiv(this, other);
}

#ifdef __cplusplus
}
#endif

#endif