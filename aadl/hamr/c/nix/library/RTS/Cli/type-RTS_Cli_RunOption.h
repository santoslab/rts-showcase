#ifndef SIREUM_TYPE_H_RTS_Cli_RunOption
#define SIREUM_TYPE_H_RTS_Cli_RunOption

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Cli.RunOption
#include <type-org_sireum_IS_948B60.h>
#include <type-RTS_Cli_RunChoice_Type.h>

typedef struct RTS_Cli_RunOption *RTS_Cli_RunOption;
struct RTS_Cli_RunOption {
  TYPE type;
  struct StaticString help;
  struct IS_948B60 args;
  RTS_Cli_RunChoice_Type scheduler;
};

#define DeclNewRTS_Cli_RunOption(x) struct RTS_Cli_RunOption x = { .type = TRTS_Cli_RunOption }

#ifdef __cplusplus
}
#endif

#endif