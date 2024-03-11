#ifndef SIREUM_H_org_sireum_Map_9C6840
#define SIREUM_H_org_sireum_Map_9C6840

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Map[Z, art.ArtSlangMessage]

#define Map_9C6840_entries_(this) ((IS_4D6DA5) &(this)->entries)

B Map_9C6840__eq(Map_9C6840 this, Map_9C6840 other);
inline B Map_9C6840__ne(Map_9C6840 this, Map_9C6840 other) {
  return !Map_9C6840__eq(this, other);
};
B Map_9C6840__equiv(Map_9C6840 this, Map_9C6840 other);
inline B Map_9C6840__inequiv(Map_9C6840 this, Map_9C6840 other) {
  return !Map_9C6840__equiv(this, other);
};
void Map_9C6840_string_(STACK_FRAME String result, Map_9C6840 this);
void Map_9C6840_cprint(Map_9C6840 this, B isOut);

inline B Map_9C6840__is(STACK_FRAME void* this) {
  return ((Map_9C6840) this)->type == TMap_9C6840;
}

inline Map_9C6840 Map_9C6840__as(STACK_FRAME void *this) {
  if (Map_9C6840__is(CALLER this)) return (Map_9C6840) this;
  sfAbortImpl(CALLER "Invalid cast to Map[Z, art.ArtSlangMessage].");
  abort();
}

void Map_9C6840_apply(STACK_FRAME Map_9C6840 this, IS_4D6DA5 entries);

#ifdef __cplusplus
}
#endif

#endif