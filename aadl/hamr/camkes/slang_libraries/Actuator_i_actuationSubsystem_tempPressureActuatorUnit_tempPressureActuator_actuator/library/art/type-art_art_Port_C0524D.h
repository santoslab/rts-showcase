#ifndef SIREUM_TYPE_H_art_art_Port_C0524D
#define SIREUM_TYPE_H_art_art_Port_C0524D

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Port[B]
#include <type-art_Art_PortId.h>
#include <type-art_PortMode_Type.h>

typedef struct art_Port_C0524D *art_Port_C0524D;
struct art_Port_C0524D {
  TYPE type;
  struct StaticString name;
  art_Art_PortId id;
  art_PortMode_Type mode;
};

#define DeclNewart_Port_C0524D(x) struct art_Port_C0524D x = { .type = Tart_Port_C0524D }

#ifdef __cplusplus
}
#endif

#endif