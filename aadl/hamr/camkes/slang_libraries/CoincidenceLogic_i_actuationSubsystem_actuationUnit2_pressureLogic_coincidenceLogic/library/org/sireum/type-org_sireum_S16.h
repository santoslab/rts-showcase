#ifndef SIREUM_TYPE_H_org_sireum_S16
#define SIREUM_TYPE_H_org_sireum_S16

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

typedef int16_t S16;

#define S16_C(n) INT16_C(n)

#define S16_Min INT16_MIN
#define S16_Max INT16_MAX

#define S16_F "%" PRId16 ""

#ifdef __cplusplus
}
#endif

#endif