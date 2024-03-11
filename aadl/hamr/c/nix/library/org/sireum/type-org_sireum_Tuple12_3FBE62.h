#ifndef SIREUM_TYPE_H_org_sireum_Tuple12_3FBE62
#define SIREUM_TYPE_H_org_sireum_Tuple12_3FBE62

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// (B, B, B, B, B, B, B, B, B, B, B, B)

typedef struct Tuple12_3FBE62 *Tuple12_3FBE62;
struct Tuple12_3FBE62 {
  TYPE type;
  B _1;
  B _2;
  B _3;
  B _4;
  B _5;
  B _6;
  B _7;
  B _8;
  B _9;
  B _10;
  B _11;
  B _12;
};

#define DeclNewTuple12_3FBE62(x) struct Tuple12_3FBE62 x = { .type = TTuple12_3FBE62 }
#define Tuple12_3FBE62_size(this) Z_C(12)

#ifdef __cplusplus
}
#endif

#endif