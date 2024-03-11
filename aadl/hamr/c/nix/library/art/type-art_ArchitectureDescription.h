#ifndef SIREUM_TYPE_H_art_ArchitectureDescription
#define SIREUM_TYPE_H_art_ArchitectureDescription

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.ArchitectureDescription
#include <type-org_sireum_IS_058E6F.h>
#include <type-org_sireum_IS_996770.h>

typedef struct art_ArchitectureDescription *art_ArchitectureDescription;
struct art_ArchitectureDescription {
  TYPE type;
  struct IS_058E6F components;
  struct IS_996770 connections;
};

#define DeclNewart_ArchitectureDescription(x) struct art_ArchitectureDescription x = { .type = Tart_ArchitectureDescription }

#ifdef __cplusplus
}
#endif

#endif