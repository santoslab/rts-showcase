#ifndef SIREUM_TYPE_H_org_sireum_Some_B8733D
#define SIREUM_TYPE_H_org_sireum_Some_B8733D

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[RTS.Cli.RunChoice.Type]
#include <type-RTS_Cli_RunChoice_Type.h>

typedef struct Some_B8733D *Some_B8733D;
struct Some_B8733D {
  TYPE type;
  RTS_Cli_RunChoice_Type value;
};

#define DeclNewSome_B8733D(x) struct Some_B8733D x = { .type = TSome_B8733D }

#ifdef __cplusplus
}
#endif

#endif