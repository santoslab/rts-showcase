#ifndef SIREUM_TYPE_H_org_sireum_None_50AF88
#define SIREUM_TYPE_H_org_sireum_None_50AF88

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[art.ArtSlangMessage]

typedef struct None_50AF88 *None_50AF88;
struct None_50AF88 {
  TYPE type;
};

#define DeclNewNone_50AF88(x) struct None_50AF88 x = { .type = TNone_50AF88 }

#ifdef __cplusplus
}
#endif

#endif