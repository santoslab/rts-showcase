#ifndef SIREUM_TYPE_H_org_sireum_None_00347F
#define SIREUM_TYPE_H_org_sireum_None_00347F

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[IS[Z, art.Art.BridgeId]]

typedef struct None_00347F *None_00347F;
struct None_00347F {
  TYPE type;
};

#define DeclNewNone_00347F(x) struct None_00347F x = { .type = TNone_00347F }

#ifdef __cplusplus
}
#endif

#endif