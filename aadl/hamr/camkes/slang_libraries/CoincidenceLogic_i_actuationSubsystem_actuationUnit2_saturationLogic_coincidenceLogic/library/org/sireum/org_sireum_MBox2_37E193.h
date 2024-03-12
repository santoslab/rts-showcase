#ifndef SIREUM_H_org_sireum_MBox2_37E193
#define SIREUM_H_org_sireum_MBox2_37E193

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MBox2[art.Art.PortId, Option[art.DataContent]]

#define MBox2_37E193_value1_(this) ((this)->value1)
#define MBox2_37E193_value1_a(this, p_value) (this)->value1 = (p_value)
#define MBox2_37E193_value2_(this) ((Option_8E9F45) &(this)->value2)
#define MBox2_37E193_value2_a(this, p_value) Type_assign(&(this)->value2, p_value, sizeof(union Option_8E9F45))

B MBox2_37E193__eq(MBox2_37E193 this, MBox2_37E193 other);
inline B MBox2_37E193__ne(MBox2_37E193 this, MBox2_37E193 other) {
  return !MBox2_37E193__eq(this, other);
};
B MBox2_37E193__equiv(MBox2_37E193 this, MBox2_37E193 other);
inline B MBox2_37E193__inequiv(MBox2_37E193 this, MBox2_37E193 other) {
  return !MBox2_37E193__equiv(this, other);
};
void MBox2_37E193_string_(STACK_FRAME String result, MBox2_37E193 this);
void MBox2_37E193_cprint(MBox2_37E193 this, B isOut);

inline B MBox2_37E193__is(STACK_FRAME void* this) {
  return ((MBox2_37E193) this)->type == TMBox2_37E193;
}

inline MBox2_37E193 MBox2_37E193__as(STACK_FRAME void *this) {
  if (MBox2_37E193__is(CALLER this)) return (MBox2_37E193) this;
  sfAbortImpl(CALLER "Invalid cast to MBox2[art.Art.PortId, Option[art.DataContent]].");
  abort();
}

void MBox2_37E193_apply(STACK_FRAME MBox2_37E193 this, art_Art_PortId value1, Option_8E9F45 value2);

#ifdef __cplusplus
}
#endif

#endif