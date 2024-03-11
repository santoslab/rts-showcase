#ifndef SIREUM_TYPE_H_org_sireum_Some_24B656
#define SIREUM_TYPE_H_org_sireum_Some_24B656

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[art.ArtSlangMessage]
#include <type-art_ArtSlangMessage.h>

typedef struct Some_24B656 *Some_24B656;
struct Some_24B656 {
  TYPE type;
  struct art_ArtSlangMessage value;
};

#define DeclNewSome_24B656(x) struct Some_24B656 x = { .type = TSome_24B656 }

#ifdef __cplusplus
}
#endif

#endif