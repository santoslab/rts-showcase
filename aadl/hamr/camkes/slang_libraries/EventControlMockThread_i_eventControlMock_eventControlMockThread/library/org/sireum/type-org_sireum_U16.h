#ifndef SIREUM_TYPE_H_org_sireum_U16
#define SIREUM_TYPE_H_org_sireum_U16

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

typedef uint16_t U16;

#define U16_C(n) UINT16_C(n)

#define U16_Min U16_C(0)
#define U16_Max UINT16_MAX

#define U16_F "%04" PRIX16 ""

#ifdef __cplusplus
}
#endif

#endif