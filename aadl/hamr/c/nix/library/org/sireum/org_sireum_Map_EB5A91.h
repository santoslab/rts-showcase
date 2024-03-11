#ifndef SIREUM_H_org_sireum_Map_EB5A91
#define SIREUM_H_org_sireum_Map_EB5A91

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Map[String, art.Art.BridgeId]

#define Map_EB5A91_entries_(this) ((IS_588B23) &(this)->entries)

B Map_EB5A91__eq(Map_EB5A91 this, Map_EB5A91 other);
inline B Map_EB5A91__ne(Map_EB5A91 this, Map_EB5A91 other) {
  return !Map_EB5A91__eq(this, other);
};
B Map_EB5A91__equiv(Map_EB5A91 this, Map_EB5A91 other);
inline B Map_EB5A91__inequiv(Map_EB5A91 this, Map_EB5A91 other) {
  return !Map_EB5A91__equiv(this, other);
};
void Map_EB5A91_string_(STACK_FRAME String result, Map_EB5A91 this);
void Map_EB5A91_cprint(Map_EB5A91 this, B isOut);

inline B Map_EB5A91__is(STACK_FRAME void* this) {
  return ((Map_EB5A91) this)->type == TMap_EB5A91;
}

inline Map_EB5A91 Map_EB5A91__as(STACK_FRAME void *this) {
  if (Map_EB5A91__is(CALLER this)) return (Map_EB5A91) this;
  sfAbortImpl(CALLER "Invalid cast to Map[String, art.Art.BridgeId].");
  abort();
}

void Map_EB5A91_apply(STACK_FRAME Map_EB5A91 this, IS_588B23 entries);

#ifdef __cplusplus
}
#endif

#endif