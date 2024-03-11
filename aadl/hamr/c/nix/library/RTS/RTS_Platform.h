#ifndef SIREUM_H_RTS_Platform
#define SIREUM_H_RTS_Platform

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit RTS_Platform_setup(STACK_FRAME_ONLY);

Unit RTS_Platform_tearDown(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif