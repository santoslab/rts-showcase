#ifndef SIREUM_TYPE_H_RTS_Cli_RunTopOption
#define SIREUM_TYPE_H_RTS_Cli_RunTopOption

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Cli.RunTopOption

#include <type-RTS_Cli_HelpOption.h>
#include <type-RTS_Cli_RunOption.h>

typedef union RTS_Cli_RunTopOption *RTS_Cli_RunTopOption;
union RTS_Cli_RunTopOption {
  TYPE type;
  struct RTS_Cli_HelpOption RTS_Cli_HelpOption;
  struct RTS_Cli_RunOption RTS_Cli_RunOption;
};

#define DeclNewRTS_Cli_RunTopOption(x) union RTS_Cli_RunTopOption x = { 0 }

#ifdef __cplusplus
}
#endif

#endif