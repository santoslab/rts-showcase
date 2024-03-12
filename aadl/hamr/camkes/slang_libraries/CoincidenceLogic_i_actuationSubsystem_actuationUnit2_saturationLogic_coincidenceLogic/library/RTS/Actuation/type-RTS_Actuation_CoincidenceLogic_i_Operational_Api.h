#ifndef SIREUM_TYPE_H_RTS_Actuation_CoincidenceLogic_i_Operational_Api
#define SIREUM_TYPE_H_RTS_Actuation_CoincidenceLogic_i_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Actuation.CoincidenceLogic_i_Operational_Api
#include <type-art_Art_BridgeId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>

typedef struct RTS_Actuation_CoincidenceLogic_i_Operational_Api *RTS_Actuation_CoincidenceLogic_i_Operational_Api;
struct RTS_Actuation_CoincidenceLogic_i_Operational_Api {
  TYPE type;
  art_Art_BridgeId id;
  art_Art_PortId channel1_Id;
  art_Art_PortId channel2_Id;
  art_Art_PortId channel3_Id;
  art_Art_PortId channel4_Id;
  art_Art_PortId actuate_Id;
};

#define DeclNewRTS_Actuation_CoincidenceLogic_i_Operational_Api(x) struct RTS_Actuation_CoincidenceLogic_i_Operational_Api x = { .type = TRTS_Actuation_CoincidenceLogic_i_Operational_Api }

#ifdef __cplusplus
}
#endif

#endif