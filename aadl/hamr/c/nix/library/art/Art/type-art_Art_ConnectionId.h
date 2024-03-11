#ifndef SIREUM_TYPE_H_art_Art_ConnectionId
#define SIREUM_TYPE_H_art_Art_ConnectionId

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

typedef uint32_t art_Art_ConnectionId;

#define art_Art_ConnectionId_C(n) UINT32_C(n)

#define art_Art_ConnectionId_Min art_Art_ConnectionId_C(0)
#define art_Art_ConnectionId_Max art_Art_ConnectionId_C(37)

#define art_Art_ConnectionId_F "%" PRIu32 ""

#ifdef __cplusplus
}
#endif

#endif