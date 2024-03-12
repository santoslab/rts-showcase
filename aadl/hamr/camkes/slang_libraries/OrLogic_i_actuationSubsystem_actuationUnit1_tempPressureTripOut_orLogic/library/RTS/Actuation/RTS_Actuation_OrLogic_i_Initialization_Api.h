#ifndef SIREUM_H_RTS_Actuation_OrLogic_i_Initialization_Api
#define SIREUM_H_RTS_Actuation_OrLogic_i_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// RTS.Actuation.OrLogic_i_Initialization_Api

#define RTS_Actuation_OrLogic_i_Initialization_Api_id_(this) ((this)->id)
#define RTS_Actuation_OrLogic_i_Initialization_Api_channel1_Id_(this) ((this)->channel1_Id)
#define RTS_Actuation_OrLogic_i_Initialization_Api_channel2_Id_(this) ((this)->channel2_Id)
#define RTS_Actuation_OrLogic_i_Initialization_Api_actuate_Id_(this) ((this)->actuate_Id)

B RTS_Actuation_OrLogic_i_Initialization_Api__eq(RTS_Actuation_OrLogic_i_Initialization_Api this, RTS_Actuation_OrLogic_i_Initialization_Api other);
inline B RTS_Actuation_OrLogic_i_Initialization_Api__ne(RTS_Actuation_OrLogic_i_Initialization_Api this, RTS_Actuation_OrLogic_i_Initialization_Api other) {
  return !RTS_Actuation_OrLogic_i_Initialization_Api__eq(this, other);
};
B RTS_Actuation_OrLogic_i_Initialization_Api__equiv(RTS_Actuation_OrLogic_i_Initialization_Api this, RTS_Actuation_OrLogic_i_Initialization_Api other);
inline B RTS_Actuation_OrLogic_i_Initialization_Api__inequiv(RTS_Actuation_OrLogic_i_Initialization_Api this, RTS_Actuation_OrLogic_i_Initialization_Api other) {
  return !RTS_Actuation_OrLogic_i_Initialization_Api__equiv(this, other);
};
void RTS_Actuation_OrLogic_i_Initialization_Api_string_(STACK_FRAME String result, RTS_Actuation_OrLogic_i_Initialization_Api this);
void RTS_Actuation_OrLogic_i_Initialization_Api_cprint(RTS_Actuation_OrLogic_i_Initialization_Api this, B isOut);

inline B RTS_Actuation_OrLogic_i_Initialization_Api__is(STACK_FRAME void* this) {
  return ((RTS_Actuation_OrLogic_i_Initialization_Api) this)->type == TRTS_Actuation_OrLogic_i_Initialization_Api;
}

inline RTS_Actuation_OrLogic_i_Initialization_Api RTS_Actuation_OrLogic_i_Initialization_Api__as(STACK_FRAME void *this) {
  if (RTS_Actuation_OrLogic_i_Initialization_Api__is(CALLER this)) return (RTS_Actuation_OrLogic_i_Initialization_Api) this;
  sfAbortImpl(CALLER "Invalid cast to RTS.Actuation.OrLogic_i_Initialization_Api.");
  abort();
}

void RTS_Actuation_OrLogic_i_Initialization_Api_apply(STACK_FRAME RTS_Actuation_OrLogic_i_Initialization_Api this, art_Art_BridgeId id, art_Art_PortId channel1_Id, art_Art_PortId channel2_Id, art_Art_PortId actuate_Id);

#ifdef __cplusplus
}
#endif

#endif