#ifndef SIREUM_TYPE_H_org_sireum_Option_BF489E
#define SIREUM_TYPE_H_org_sireum_Option_BF489E

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[RTS.Cli.RunTopOption]

#include <type-org_sireum_None_5F3A7A.h>
#include <type-org_sireum_Some_2BC073.h>

typedef union Option_BF489E *Option_BF489E;
union Option_BF489E {
  TYPE type;
  struct None_5F3A7A None_5F3A7A;
  struct Some_2BC073 Some_2BC073;
};

#define DeclNewOption_BF489E(x) union Option_BF489E x = { 0 }

#ifdef __cplusplus
}
#endif

#endif