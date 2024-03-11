#ifndef SIREUM_TYPE_H_RTS_Cli_HelpOption
#define SIREUM_TYPE_H_RTS_Cli_HelpOption

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Cli.HelpOption

typedef struct RTS_Cli_HelpOption *RTS_Cli_HelpOption;
struct RTS_Cli_HelpOption {
  TYPE type;
};

#define DeclNewRTS_Cli_HelpOption(x) struct RTS_Cli_HelpOption x = { .type = TRTS_Cli_HelpOption }

#ifdef __cplusplus
}
#endif

#endif