#ifndef SIREUM_TYPE_H_org_sireum_None_1FE67C
#define SIREUM_TYPE_H_org_sireum_None_1FE67C

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[RTS.Actuation.OrLogic_i_Initialization_Api]

typedef struct None_1FE67C *None_1FE67C;
struct None_1FE67C {
  TYPE type;
};

#define DeclNewNone_1FE67C(x) struct None_1FE67C x = { .type = TNone_1FE67C }

#ifdef __cplusplus
}
#endif

#endif