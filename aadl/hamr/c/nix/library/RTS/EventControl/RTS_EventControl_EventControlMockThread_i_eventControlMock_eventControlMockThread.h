#ifndef SIREUM_H_RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread
#define SIREUM_H_RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_init(STACK_FRAME_ONLY);

IS_7DA5C1 RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frames(STACK_FRAME_ONLY);
Z RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frame(STACK_FRAME_ONLY);
void RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frame_a(STACK_FRAME Z p_frame);

Unit RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_initialise(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Initialization_Api api);

Unit RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_timeTriggered(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Operational_Api api);

Unit RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_finalise(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Operational_Api api);

Unit RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_putFrame(STACK_FRAME Z frame, RTS_EventControl_EventControlMockThread_i_Operational_Api api);

void RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_init_frames(STACK_FRAME_ONLY);

void RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_init_frame(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif