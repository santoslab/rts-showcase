#ifndef SIREUM_TYPE_H_org_sireum_Some_DB59FB
#define SIREUM_TYPE_H_org_sireum_Some_DB59FB

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[B]

typedef struct Some_DB59FB *Some_DB59FB;
struct Some_DB59FB {
  TYPE type;
  B value;
};

#define DeclNewSome_DB59FB(x) struct Some_DB59FB x = { .type = TSome_DB59FB }

#ifdef __cplusplus
}
#endif

#endif