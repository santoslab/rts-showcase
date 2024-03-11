#ifndef SIREUM_TYPE_H_org_sireum_Option_E8BC07
#define SIREUM_TYPE_H_org_sireum_Option_E8BC07

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[RTS.Cli.RunChoice.Type]

#include <type-org_sireum_None_9803C0.h>
#include <type-org_sireum_Some_B8733D.h>

typedef union Option_E8BC07 *Option_E8BC07;
union Option_E8BC07 {
  TYPE type;
  struct None_9803C0 None_9803C0;
  struct Some_B8733D Some_B8733D;
};

#define DeclNewOption_E8BC07(x) union Option_E8BC07 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif