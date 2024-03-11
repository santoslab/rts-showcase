#ifndef SIREUM_TYPE_H_org_sireum_Option_FEE1DB
#define SIREUM_TYPE_H_org_sireum_Option_FEE1DB

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[IS[Z, art.Art.BridgeId]]

#include <type-org_sireum_None_00347F.h>
#include <type-org_sireum_Some_C4F557.h>

typedef union Option_FEE1DB *Option_FEE1DB;
union Option_FEE1DB {
  TYPE type;
  struct None_00347F None_00347F;
  struct Some_C4F557 Some_C4F557;
};

#define DeclNewOption_FEE1DB(x) union Option_FEE1DB x = { 0 }

#ifdef __cplusplus
}
#endif

#endif