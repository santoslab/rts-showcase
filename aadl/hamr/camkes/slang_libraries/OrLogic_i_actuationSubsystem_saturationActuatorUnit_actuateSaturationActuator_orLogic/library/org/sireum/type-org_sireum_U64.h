#ifndef SIREUM_TYPE_H_org_sireum_U64
#define SIREUM_TYPE_H_org_sireum_U64

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

typedef uint64_t U64;

#define U64_C(n) UINT64_C(n)

#define U64_Min U64_C(0)
#define U64_Max UINT64_MAX

#define U64_F "%016" PRIX64 ""

#ifdef __cplusplus
}
#endif

#endif