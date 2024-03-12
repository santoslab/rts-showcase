#ifndef SIREUM_TYPE_H_art_Art_PortId
#define SIREUM_TYPE_H_art_Art_PortId

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

typedef uint32_t art_Art_PortId;

#define art_Art_PortId_C(n) UINT32_C(n)

#define art_Art_PortId_Min art_Art_PortId_C(0)
#define art_Art_PortId_Max art_Art_PortId_C(75)

#define art_Art_PortId_F "%" PRIu32 ""

#ifdef __cplusplus
}
#endif

#endif