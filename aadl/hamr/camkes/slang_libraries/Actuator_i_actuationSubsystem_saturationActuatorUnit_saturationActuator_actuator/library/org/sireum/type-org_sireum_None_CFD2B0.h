#ifndef SIREUM_TYPE_H_org_sireum_None_CFD2B0
#define SIREUM_TYPE_H_org_sireum_None_CFD2B0

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[IS[Z, art.Art.PortId]]

typedef struct None_CFD2B0 *None_CFD2B0;
struct None_CFD2B0 {
  TYPE type;
};

#define DeclNewNone_CFD2B0(x) struct None_CFD2B0 x = { .type = TNone_CFD2B0 }

#ifdef __cplusplus
}
#endif

#endif