#include <all.h>

// art.scheduling.Scheduler

B art_scheduling_Scheduler__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_scheduling_legacy_Legacy: return T;
    case Tart_scheduling_static_StaticScheduler: return T;
    case Tart_scheduling_roundrobin_RoundRobin: return T;
    default: return F;
  }
}

art_scheduling_Scheduler art_scheduling_Scheduler__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_scheduling_legacy_Legacy: break;
    case Tart_scheduling_static_StaticScheduler: break;
    case Tart_scheduling_roundrobin_RoundRobin: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.scheduling.Scheduler.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_scheduling_Scheduler) this;
}

void art_scheduling_Scheduler_string_(STACK_FRAME String result, art_scheduling_Scheduler this);

Unit art_scheduling_Scheduler_initialize_(STACK_FRAME art_scheduling_Scheduler this) {
  switch (this->type) {
    case Tart_scheduling_legacy_Legacy: art_scheduling_legacy_Legacy_initialize_(CALLER (art_scheduling_legacy_Legacy) this); return;
    case Tart_scheduling_static_StaticScheduler: art_scheduling_static_StaticScheduler_initialize_(CALLER (art_scheduling_static_StaticScheduler) this); return;
    case Tart_scheduling_roundrobin_RoundRobin: art_scheduling_roundrobin_RoundRobin_initialize_(CALLER (art_scheduling_roundrobin_RoundRobin) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

Unit art_scheduling_Scheduler_initializationPhase_(STACK_FRAME art_scheduling_Scheduler this) {
  switch (this->type) {
    case Tart_scheduling_legacy_Legacy: art_scheduling_legacy_Legacy_initializationPhase_(CALLER (art_scheduling_legacy_Legacy) this); return;
    case Tart_scheduling_static_StaticScheduler: art_scheduling_static_StaticScheduler_initializationPhase_(CALLER (art_scheduling_static_StaticScheduler) this); return;
    case Tart_scheduling_roundrobin_RoundRobin: art_scheduling_roundrobin_RoundRobin_initializationPhase_(CALLER (art_scheduling_roundrobin_RoundRobin) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

Unit art_scheduling_Scheduler_computePhase_(STACK_FRAME art_scheduling_Scheduler this) {
  switch (this->type) {
    case Tart_scheduling_legacy_Legacy: art_scheduling_legacy_Legacy_computePhase_(CALLER (art_scheduling_legacy_Legacy) this); return;
    case Tart_scheduling_static_StaticScheduler: art_scheduling_static_StaticScheduler_computePhase_(CALLER (art_scheduling_static_StaticScheduler) this); return;
    case Tart_scheduling_roundrobin_RoundRobin: art_scheduling_roundrobin_RoundRobin_computePhase_(CALLER (art_scheduling_roundrobin_RoundRobin) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

Unit art_scheduling_Scheduler_finalizePhase_(STACK_FRAME art_scheduling_Scheduler this) {
  switch (this->type) {
    case Tart_scheduling_legacy_Legacy: art_scheduling_legacy_Legacy_finalizePhase_(CALLER (art_scheduling_legacy_Legacy) this); return;
    case Tart_scheduling_static_StaticScheduler: art_scheduling_static_StaticScheduler_finalizePhase_(CALLER (art_scheduling_static_StaticScheduler) this); return;
    case Tart_scheduling_roundrobin_RoundRobin: art_scheduling_roundrobin_RoundRobin_finalizePhase_(CALLER (art_scheduling_roundrobin_RoundRobin) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}