#ifndef SIREUM_TYPE_H_org_sireum_None_5F3A7A
#define SIREUM_TYPE_H_org_sireum_None_5F3A7A

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[RTS.Cli.RunTopOption]

typedef struct None_5F3A7A *None_5F3A7A;
struct None_5F3A7A {
  TYPE type;
};

#define DeclNewNone_5F3A7A(x) struct None_5F3A7A x = { .type = TNone_5F3A7A }

#ifdef __cplusplus
}
#endif

#endif