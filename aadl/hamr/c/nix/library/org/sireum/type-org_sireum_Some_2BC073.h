#ifndef SIREUM_TYPE_H_org_sireum_Some_2BC073
#define SIREUM_TYPE_H_org_sireum_Some_2BC073

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[RTS.Cli.RunTopOption]
#include <type-RTS_Cli_RunTopOption.h>

typedef struct Some_2BC073 *Some_2BC073;
struct Some_2BC073 {
  TYPE type;
  union RTS_Cli_RunTopOption value;
};

#define DeclNewSome_2BC073(x) struct Some_2BC073 x = { .type = TSome_2BC073 }

#ifdef __cplusplus
}
#endif

#endif