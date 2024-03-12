#ifndef SIREUM_TYPE_H_org_sireum_None_7E20F8
#define SIREUM_TYPE_H_org_sireum_None_7E20F8

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[B]

typedef struct None_7E20F8 *None_7E20F8;
struct None_7E20F8 {
  TYPE type;
};

#define DeclNewNone_7E20F8(x) struct None_7E20F8 x = { .type = TNone_7E20F8 }

#ifdef __cplusplus
}
#endif

#endif