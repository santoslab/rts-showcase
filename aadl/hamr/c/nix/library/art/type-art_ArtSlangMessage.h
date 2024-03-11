#ifndef SIREUM_TYPE_H_art_ArtSlangMessage
#define SIREUM_TYPE_H_art_ArtSlangMessage

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.ArtSlangMessage
#include <type-art_DataContent.h>
#include <type-art_Art_PortId.h>
#include <type-org_sireum_Option_1CF021.h>
#include <type-org_sireum_S64.h>
#include <type-org_sireum_S64.h>
#include <type-org_sireum_S64.h>
#include <type-org_sireum_S64.h>

typedef struct art_ArtSlangMessage *art_ArtSlangMessage;
struct art_ArtSlangMessage {
  TYPE type;
  union art_DataContent data;
  union Option_1CF021 dstPortId;
  S64 putValueTimestamp;
  S64 sendOutputTimestamp;
  S64 dstArrivalTimestamp;
  S64 receiveInputTimestamp;
  art_Art_PortId srcPortId;
};

#define DeclNewart_ArtSlangMessage(x) struct art_ArtSlangMessage x = { .type = Tart_ArtSlangMessage }

#ifdef __cplusplus
}
#endif

#endif