#ifndef SIREUM_TYPE_H_org_sireum_Option_069397
#define SIREUM_TYPE_H_org_sireum_Option_069397

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[art.scheduling.static.Explorer.ScheduleState]

#include <type-org_sireum_None_336F0A.h>
#include <type-org_sireum_Some_6D5259.h>

typedef union Option_069397 *Option_069397;
union Option_069397 {
  TYPE type;
  struct None_336F0A None_336F0A;
  struct Some_6D5259 Some_6D5259;
};

#define DeclNewOption_069397(x) union Option_069397 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif