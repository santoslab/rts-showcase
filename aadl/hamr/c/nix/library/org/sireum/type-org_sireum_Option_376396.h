#ifndef SIREUM_TYPE_H_org_sireum_Option_376396
#define SIREUM_TYPE_H_org_sireum_Option_376396

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[art.ArtSlangMessage]

#include <type-org_sireum_None_50AF88.h>
#include <type-org_sireum_Some_24B656.h>

typedef union Option_376396 *Option_376396;
union Option_376396 {
  TYPE type;
  struct None_50AF88 None_50AF88;
  struct Some_24B656 Some_24B656;
};

#define DeclNewOption_376396(x) union Option_376396 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif