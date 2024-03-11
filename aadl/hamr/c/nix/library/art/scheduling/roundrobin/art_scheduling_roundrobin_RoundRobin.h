#ifndef SIREUM_H_art_scheduling_roundrobin_RoundRobin
#define SIREUM_H_art_scheduling_roundrobin_RoundRobin

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.roundrobin.RoundRobin

#define art_scheduling_roundrobin_RoundRobin_schedule_(this) ((IS_FDDCB6) &(this)->schedule)
#define art_scheduling_roundrobin_RoundRobin_lastDispatch_(this) ((MS_A7EF1B) &(this)->lastDispatch)
#define art_scheduling_roundrobin_RoundRobin_lastDispatch_a(this, p_value) Type_assign(&(this)->lastDispatch, p_value, sizeof(struct MS_A7EF1B))
#define art_scheduling_roundrobin_RoundRobin_lastSporadic_(this) ((MS_A7EF1B) &(this)->lastSporadic)
#define art_scheduling_roundrobin_RoundRobin_lastSporadic_a(this, p_value) Type_assign(&(this)->lastSporadic, p_value, sizeof(struct MS_A7EF1B))

B art_scheduling_roundrobin_RoundRobin__eq(art_scheduling_roundrobin_RoundRobin this, art_scheduling_roundrobin_RoundRobin other);
inline B art_scheduling_roundrobin_RoundRobin__ne(art_scheduling_roundrobin_RoundRobin this, art_scheduling_roundrobin_RoundRobin other) {
  return !art_scheduling_roundrobin_RoundRobin__eq(this, other);
};
B art_scheduling_roundrobin_RoundRobin__equiv(art_scheduling_roundrobin_RoundRobin this, art_scheduling_roundrobin_RoundRobin other);
inline B art_scheduling_roundrobin_RoundRobin__inequiv(art_scheduling_roundrobin_RoundRobin this, art_scheduling_roundrobin_RoundRobin other) {
  return !art_scheduling_roundrobin_RoundRobin__equiv(this, other);
};
void art_scheduling_roundrobin_RoundRobin_string_(STACK_FRAME String result, art_scheduling_roundrobin_RoundRobin this);
void art_scheduling_roundrobin_RoundRobin_cprint(art_scheduling_roundrobin_RoundRobin this, B isOut);

inline B art_scheduling_roundrobin_RoundRobin__is(STACK_FRAME void* this) {
  return ((art_scheduling_roundrobin_RoundRobin) this)->type == Tart_scheduling_roundrobin_RoundRobin;
}

inline art_scheduling_roundrobin_RoundRobin art_scheduling_roundrobin_RoundRobin__as(STACK_FRAME void *this) {
  if (art_scheduling_roundrobin_RoundRobin__is(CALLER this)) return (art_scheduling_roundrobin_RoundRobin) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.roundrobin.RoundRobin.");
  abort();
}

void art_scheduling_roundrobin_RoundRobin_apply(STACK_FRAME art_scheduling_roundrobin_RoundRobin this, IS_FDDCB6 schedule);

Unit art_scheduling_roundrobin_RoundRobin_initialize_(STACK_FRAME art_scheduling_roundrobin_RoundRobin this);

Unit art_scheduling_roundrobin_RoundRobin_initializationPhase_(STACK_FRAME art_scheduling_roundrobin_RoundRobin this);

Unit art_scheduling_roundrobin_RoundRobin_computePhase_(STACK_FRAME art_scheduling_roundrobin_RoundRobin this);

Unit art_scheduling_roundrobin_RoundRobin_finalizePhase_(STACK_FRAME art_scheduling_roundrobin_RoundRobin this);

B art_scheduling_roundrobin_RoundRobin_shouldDispatch_(STACK_FRAME art_scheduling_roundrobin_RoundRobin this, art_Art_BridgeId bridgeId);

#ifdef __cplusplus
}
#endif

#endif