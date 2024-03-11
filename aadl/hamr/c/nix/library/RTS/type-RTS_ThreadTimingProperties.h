#ifndef SIREUM_TYPE_H_RTS_ThreadTimingProperties
#define SIREUM_TYPE_H_RTS_ThreadTimingProperties

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.ThreadTimingProperties
#include <type-org_sireum_Option_882048.h>
#include <type-org_sireum_Option_B47750.h>

typedef struct RTS_ThreadTimingProperties *RTS_ThreadTimingProperties;
struct RTS_ThreadTimingProperties {
  TYPE type;
  union Option_882048 domain;
  union Option_B47750 computeExecutionTime;
};

#define DeclNewRTS_ThreadTimingProperties(x) struct RTS_ThreadTimingProperties x = { .type = TRTS_ThreadTimingProperties }

#ifdef __cplusplus
}
#endif

#endif