#ifndef SIREUM_TYPE_H_RTS_ProcessorTimingProperties
#define SIREUM_TYPE_H_RTS_ProcessorTimingProperties

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.ProcessorTimingProperties
#include <type-org_sireum_Option_882048.h>
#include <type-org_sireum_Option_882048.h>
#include <type-org_sireum_Option_882048.h>
#include <type-org_sireum_Option_882048.h>

typedef struct RTS_ProcessorTimingProperties *RTS_ProcessorTimingProperties;
struct RTS_ProcessorTimingProperties {
  TYPE type;
  union Option_882048 clockPeriod;
  union Option_882048 framePeriod;
  union Option_882048 maxDomain;
  union Option_882048 slotTime;
};

#define DeclNewRTS_ProcessorTimingProperties(x) struct RTS_ProcessorTimingProperties x = { .type = TRTS_ProcessorTimingProperties }

#ifdef __cplusplus
}
#endif

#endif