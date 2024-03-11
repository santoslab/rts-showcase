#ifndef SIREUM_H_art_scheduling_roundrobin_RoundRobinExtensions
#define SIREUM_H_art_scheduling_roundrobin_RoundRobinExtensions

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit art_scheduling_roundrobin_RoundRobinExtensions_init(STACK_FRAME_ONLY);

B art_scheduling_roundrobin_RoundRobinExtensions_shouldStop(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif