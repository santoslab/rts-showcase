#ifndef SIREUM_H_art_scheduling_static_CommandInterpreter
#define SIREUM_H_art_scheduling_static_CommandInterpreter

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

B art_scheduling_static_CommandInterpreter_interpretCmd(STACK_FRAME art_scheduling_static_Command cmd);

Unit art_scheduling_static_CommandInterpreter_message(STACK_FRAME String str);

#ifdef __cplusplus
}
#endif

#endif