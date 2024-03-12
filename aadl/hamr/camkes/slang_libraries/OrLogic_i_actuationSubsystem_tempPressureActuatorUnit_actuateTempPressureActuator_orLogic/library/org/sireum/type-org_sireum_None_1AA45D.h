#ifndef SIREUM_TYPE_H_org_sireum_None_1AA45D
#define SIREUM_TYPE_H_org_sireum_None_1AA45D

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[RTS.Actuation.OrLogic_i_Operational_Api]

typedef struct None_1AA45D *None_1AA45D;
struct None_1AA45D {
  TYPE type;
};

#define DeclNewNone_1AA45D(x) struct None_1AA45D x = { .type = TNone_1AA45D }

#ifdef __cplusplus
}
#endif

#endif