#ifndef SIREUM_H_org_sireum_conversions_Z
#define SIREUM_H_org_sireum_conversions_Z

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

inline S64 conversions_Z_toS64(STACK_FRAME_SF Z n) {
  return (S64) n;
}

#ifdef __cplusplus
}
#endif

#endif