#ifndef SIREUM_H_RTS_Cli_RunChoice_Type
#define SIREUM_H_RTS_Cli_RunChoice_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// RTS.Cli.RunChoice.Type
void RTS_Cli_RunChoice_Type_byName(STACK_FRAME Option_E8BC07 result, String s);
void RTS_Cli_RunChoice_Type_byOrdinal(STACK_FRAME Option_E8BC07 result, Z n);
Z RTS_Cli_RunChoice_Type_numOfElements(void);
void RTS_Cli_RunChoice_Type_cprint(RTS_Cli_RunChoice_Type this, B isOut);
void RTS_Cli_RunChoice_Type_string_(STACK_FRAME String result, RTS_Cli_RunChoice_Type this);

#ifdef __cplusplus
}
#endif

#endif