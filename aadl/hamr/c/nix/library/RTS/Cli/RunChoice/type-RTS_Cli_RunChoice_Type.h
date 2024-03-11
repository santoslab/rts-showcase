#ifndef SIREUM_TYPE_H_RTS_Cli_RunChoice_Type
#define SIREUM_TYPE_H_RTS_Cli_RunChoice_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// RTS.Cli.RunChoice.Type
typedef enum {
  RTS_Cli_RunChoice_Type_Default = 0,
  RTS_Cli_RunChoice_Type_RoundRobin = 1,
  RTS_Cli_RunChoice_Type_Static = 2,
  RTS_Cli_RunChoice_Type_Legacy = 3
} RTS_Cli_RunChoice_Type;

inline B RTS_Cli_RunChoice_Type__eq(RTS_Cli_RunChoice_Type this, RTS_Cli_RunChoice_Type other) {
  return this == other;
}

inline B RTS_Cli_RunChoice_Type__ne(RTS_Cli_RunChoice_Type this, RTS_Cli_RunChoice_Type other) {
  return this != other;
}

inline B RTS_Cli_RunChoice_Type__equiv(RTS_Cli_RunChoice_Type this, RTS_Cli_RunChoice_Type other) {
  return this == other;
}

inline B RTS_Cli_RunChoice_Type__inequiv(RTS_Cli_RunChoice_Type this, RTS_Cli_RunChoice_Type other) {
  return this != other;
}

inline Z RTS_Cli_RunChoice_Type__ordinal(RTS_Cli_RunChoice_Type this) {
  return (Z) this;
}

inline void RTS_Cli_RunChoice_Type_name_(String result, RTS_Cli_RunChoice_Type this) {
  switch (this) {
    case RTS_Cli_RunChoice_Type_Default: String_assign(result, string("Default")); return;
    case RTS_Cli_RunChoice_Type_RoundRobin: String_assign(result, string("RoundRobin")); return;
    case RTS_Cli_RunChoice_Type_Static: String_assign(result, string("Static")); return;
    case RTS_Cli_RunChoice_Type_Legacy: String_assign(result, string("Legacy")); return;
  }
}

#ifdef __cplusplus
}
#endif

#endif