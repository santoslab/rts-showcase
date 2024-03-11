#ifndef SIREUM_TYPE_H_org_sireum_None_8BED90
#define SIREUM_TYPE_H_org_sireum_None_8BED90

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[RTS.Actuation.Actuator_i_Initialization_Api]

typedef struct None_8BED90 *None_8BED90;
struct None_8BED90 {
  TYPE type;
};

#define DeclNewNone_8BED90(x) struct None_8BED90 x = { .type = TNone_8BED90 }

#ifdef __cplusplus
}
#endif

#endif