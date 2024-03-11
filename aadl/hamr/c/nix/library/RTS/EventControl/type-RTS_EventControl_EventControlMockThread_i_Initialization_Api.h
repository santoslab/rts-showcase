#ifndef SIREUM_TYPE_H_RTS_EventControl_EventControlMockThread_i_Initialization_Api
#define SIREUM_TYPE_H_RTS_EventControl_EventControlMockThread_i_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.EventControl.EventControlMockThread_i_Initialization_Api
#include <type-art_Art_BridgeId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>

typedef struct RTS_EventControl_EventControlMockThread_i_Initialization_Api *RTS_EventControl_EventControlMockThread_i_Initialization_Api;
struct RTS_EventControl_EventControlMockThread_i_Initialization_Api {
  TYPE type;
  art_Art_BridgeId id;
  art_Art_PortId manualActuatorInput1_Id;
  art_Art_PortId manualActuatorInput2_Id;
};

#define DeclNewRTS_EventControl_EventControlMockThread_i_Initialization_Api(x) struct RTS_EventControl_EventControlMockThread_i_Initialization_Api x = { .type = TRTS_EventControl_EventControlMockThread_i_Initialization_Api }

#ifdef __cplusplus
}
#endif

#endif