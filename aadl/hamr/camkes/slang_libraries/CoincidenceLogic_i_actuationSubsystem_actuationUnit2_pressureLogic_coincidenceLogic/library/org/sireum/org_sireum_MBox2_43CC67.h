#ifndef SIREUM_H_org_sireum_MBox2_43CC67
#define SIREUM_H_org_sireum_MBox2_43CC67

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MBox2[art.Art.PortId, art.DataContent]

#define MBox2_43CC67_value1_(this) ((this)->value1)
#define MBox2_43CC67_value1_a(this, p_value) (this)->value1 = (p_value)
#define MBox2_43CC67_value2_(this) ((art_DataContent) &(this)->value2)
#define MBox2_43CC67_value2_a(this, p_value) Type_assign(&(this)->value2, p_value, sizeof(union art_DataContent))

B MBox2_43CC67__eq(MBox2_43CC67 this, MBox2_43CC67 other);
inline B MBox2_43CC67__ne(MBox2_43CC67 this, MBox2_43CC67 other) {
  return !MBox2_43CC67__eq(this, other);
};
B MBox2_43CC67__equiv(MBox2_43CC67 this, MBox2_43CC67 other);
inline B MBox2_43CC67__inequiv(MBox2_43CC67 this, MBox2_43CC67 other) {
  return !MBox2_43CC67__equiv(this, other);
};
void MBox2_43CC67_string_(STACK_FRAME String result, MBox2_43CC67 this);
void MBox2_43CC67_cprint(MBox2_43CC67 this, B isOut);

inline B MBox2_43CC67__is(STACK_FRAME void* this) {
  return ((MBox2_43CC67) this)->type == TMBox2_43CC67;
}

inline MBox2_43CC67 MBox2_43CC67__as(STACK_FRAME void *this) {
  if (MBox2_43CC67__is(CALLER this)) return (MBox2_43CC67) this;
  sfAbortImpl(CALLER "Invalid cast to MBox2[art.Art.PortId, art.DataContent].");
  abort();
}

void MBox2_43CC67_apply(STACK_FRAME MBox2_43CC67 this, art_Art_PortId value1, art_DataContent value2);

#ifdef __cplusplus
}
#endif

#endif