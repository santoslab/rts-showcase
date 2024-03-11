#ifndef SIREUM_TYPE_H_RTS_Cli
#define SIREUM_TYPE_H_RTS_Cli

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Cli

typedef struct RTS_Cli *RTS_Cli;
struct RTS_Cli {
  TYPE type;
  C pathSep;
};

#define DeclNewRTS_Cli(x) struct RTS_Cli x = { .type = TRTS_Cli }

#ifdef __cplusplus
}
#endif

#endif