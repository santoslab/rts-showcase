#ifndef SIREUM_TYPE_H_RTS_Actuation_Actuator_i_Initialization_Api
#define SIREUM_TYPE_H_RTS_Actuation_Actuator_i_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Actuation.Actuator_i_Initialization_Api
#include <type-art_Art_BridgeId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>

typedef struct RTS_Actuation_Actuator_i_Initialization_Api *RTS_Actuation_Actuator_i_Initialization_Api;
struct RTS_Actuation_Actuator_i_Initialization_Api {
  TYPE type;
  art_Art_BridgeId id;
  art_Art_PortId input_Id;
  art_Art_PortId manualActuatorInput_Id;
  art_Art_PortId output_Id;
};

#define DeclNewRTS_Actuation_Actuator_i_Initialization_Api(x) struct RTS_Actuation_Actuator_i_Initialization_Api x = { .type = TRTS_Actuation_Actuator_i_Initialization_Api }

#ifdef __cplusplus
}
#endif

#endif