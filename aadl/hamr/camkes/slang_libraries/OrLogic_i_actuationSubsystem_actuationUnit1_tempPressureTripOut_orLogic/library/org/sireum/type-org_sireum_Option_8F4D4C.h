#ifndef SIREUM_TYPE_H_org_sireum_Option_8F4D4C
#define SIREUM_TYPE_H_org_sireum_Option_8F4D4C

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[B]

#include <type-org_sireum_None_7E20F8.h>
#include <type-org_sireum_Some_DB59FB.h>

typedef union Option_8F4D4C *Option_8F4D4C;
union Option_8F4D4C {
  TYPE type;
  struct None_7E20F8 None_7E20F8;
  struct Some_DB59FB Some_DB59FB;
};

#define DeclNewOption_8F4D4C(x) union Option_8F4D4C x = { 0 }

#ifdef __cplusplus
}
#endif

#endif