#ifndef SIREUM_TYPE_H_org_sireum_IS_D10119
#define SIREUM_TYPE_H_org_sireum_IS_D10119

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[Z, art.Art.PortId]
#include <type-art_Art_PortId.h>

#define MaxIS_D10119 2
#define IS_D10119SizeT int8_t

typedef struct IS_D10119 *IS_D10119;
struct IS_D10119 {
  TYPE type;
  IS_D10119SizeT size;
  art_Art_PortId value[MaxIS_D10119];
};

#define DeclNewIS_D10119(x) struct IS_D10119 x = { .type = TIS_D10119 }

#ifdef __cplusplus
}
#endif

#endif