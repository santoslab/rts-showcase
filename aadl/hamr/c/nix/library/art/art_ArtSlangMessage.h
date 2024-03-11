#ifndef SIREUM_H_art_ArtSlangMessage
#define SIREUM_H_art_ArtSlangMessage

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void art_ArtSlangMessage_init(STACK_FRAME_ONLY);

S64 art_ArtSlangMessage_UNSET_TIME(STACK_FRAME_ONLY);

// art.ArtSlangMessage

#define art_ArtSlangMessage_data_(this) ((art_DataContent) &(this)->data)
#define art_ArtSlangMessage_srcPortId_(this) ((this)->srcPortId)
#define art_ArtSlangMessage_dstPortId_(this) ((Option_1CF021) &(this)->dstPortId)
#define art_ArtSlangMessage_putValueTimestamp_(this) ((this)->putValueTimestamp)
#define art_ArtSlangMessage_sendOutputTimestamp_(this) ((this)->sendOutputTimestamp)
#define art_ArtSlangMessage_dstArrivalTimestamp_(this) ((this)->dstArrivalTimestamp)
#define art_ArtSlangMessage_receiveInputTimestamp_(this) ((this)->receiveInputTimestamp)

B art_ArtSlangMessage__eq(art_ArtSlangMessage this, art_ArtSlangMessage other);
inline B art_ArtSlangMessage__ne(art_ArtSlangMessage this, art_ArtSlangMessage other) {
  return !art_ArtSlangMessage__eq(this, other);
};
B art_ArtSlangMessage__equiv(art_ArtSlangMessage this, art_ArtSlangMessage other);
inline B art_ArtSlangMessage__inequiv(art_ArtSlangMessage this, art_ArtSlangMessage other) {
  return !art_ArtSlangMessage__equiv(this, other);
};
void art_ArtSlangMessage_string_(STACK_FRAME String result, art_ArtSlangMessage this);
void art_ArtSlangMessage_cprint(art_ArtSlangMessage this, B isOut);

inline B art_ArtSlangMessage__is(STACK_FRAME void* this) {
  return ((art_ArtSlangMessage) this)->type == Tart_ArtSlangMessage;
}

inline art_ArtSlangMessage art_ArtSlangMessage__as(STACK_FRAME void *this) {
  if (art_ArtSlangMessage__is(CALLER this)) return (art_ArtSlangMessage) this;
  sfAbortImpl(CALLER "Invalid cast to art.ArtSlangMessage.");
  abort();
}

void art_ArtSlangMessage_apply(STACK_FRAME art_ArtSlangMessage this, art_DataContent data, art_Art_PortId srcPortId, Option_1CF021 dstPortId, S64 putValueTimestamp, S64 sendOutputTimestamp, S64 dstArrivalTimestamp, S64 receiveInputTimestamp);

void art_ArtSlangMessage_init_UNSET_TIME(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif