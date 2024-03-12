#ifndef SIREUM_TYPE_H_art_Bridge
#define SIREUM_TYPE_H_art_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Bridge

#include <type-RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge.h>

typedef union art_Bridge *art_Bridge;
union art_Bridge {
  TYPE type;
  struct RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge;
};

#define DeclNewart_Bridge(x) union art_Bridge x = { 0 }

#ifdef __cplusplus
}
#endif

#endif