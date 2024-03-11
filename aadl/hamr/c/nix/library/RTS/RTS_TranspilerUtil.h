#ifndef SIREUM_H_RTS_TranspilerUtil
#define SIREUM_H_RTS_TranspilerUtil

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit RTS_TranspilerUtil_touch_printDataContent(STACK_FRAME art_DataContent a);

Unit RTS_TranspilerUtil_touch(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif