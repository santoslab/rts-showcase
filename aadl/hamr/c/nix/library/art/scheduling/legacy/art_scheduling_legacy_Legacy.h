#ifndef SIREUM_H_art_scheduling_legacy_Legacy
#define SIREUM_H_art_scheduling_legacy_Legacy

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.legacy.Legacy

#define art_scheduling_legacy_Legacy_bridges_(this) ((IS_058E6F) &(this)->bridges)

B art_scheduling_legacy_Legacy__eq(art_scheduling_legacy_Legacy this, art_scheduling_legacy_Legacy other);
inline B art_scheduling_legacy_Legacy__ne(art_scheduling_legacy_Legacy this, art_scheduling_legacy_Legacy other) {
  return !art_scheduling_legacy_Legacy__eq(this, other);
};
B art_scheduling_legacy_Legacy__equiv(art_scheduling_legacy_Legacy this, art_scheduling_legacy_Legacy other);
inline B art_scheduling_legacy_Legacy__inequiv(art_scheduling_legacy_Legacy this, art_scheduling_legacy_Legacy other) {
  return !art_scheduling_legacy_Legacy__equiv(this, other);
};
void art_scheduling_legacy_Legacy_string_(STACK_FRAME String result, art_scheduling_legacy_Legacy this);
void art_scheduling_legacy_Legacy_cprint(art_scheduling_legacy_Legacy this, B isOut);

inline B art_scheduling_legacy_Legacy__is(STACK_FRAME void* this) {
  return ((art_scheduling_legacy_Legacy) this)->type == Tart_scheduling_legacy_Legacy;
}

inline art_scheduling_legacy_Legacy art_scheduling_legacy_Legacy__as(STACK_FRAME void *this) {
  if (art_scheduling_legacy_Legacy__is(CALLER this)) return (art_scheduling_legacy_Legacy) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.legacy.Legacy.");
  abort();
}

void art_scheduling_legacy_Legacy_apply(STACK_FRAME art_scheduling_legacy_Legacy this, IS_058E6F bridges);

Unit art_scheduling_legacy_Legacy_initialize_(STACK_FRAME art_scheduling_legacy_Legacy this);

Unit art_scheduling_legacy_Legacy_initializationPhase_(STACK_FRAME art_scheduling_legacy_Legacy this);

Unit art_scheduling_legacy_Legacy_computePhase_(STACK_FRAME art_scheduling_legacy_Legacy this);

Unit art_scheduling_legacy_Legacy_finalizePhase_(STACK_FRAME art_scheduling_legacy_Legacy this);

#ifdef __cplusplus
}
#endif

#endif