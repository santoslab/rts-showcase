#ifndef SIREUM_TYPE_H_org_sireum_U32
#define SIREUM_TYPE_H_org_sireum_U32

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

typedef uint32_t U32;

#define U32_C(n) UINT32_C(n)

#define U32_Min U32_C(0)
#define U32_Max UINT32_MAX

#define U32_F "%08" PRIX32 ""

#ifdef __cplusplus
}
#endif

#endif