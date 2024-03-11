#include <all.h>

// art.scheduling.static.Command

B art_scheduling_static_Command__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_scheduling_static_Unrecognized: return T;
    case Tart_scheduling_static_Unsupported: return T;
    case Tart_scheduling_static_Stop: return T;
    case Tart_scheduling_static_Help: return T;
    case Tart_scheduling_static_Sstep: return T;
    case Tart_scheduling_static_Hstep: return T;
    case Tart_scheduling_static_RunToHP: return T;
    case Tart_scheduling_static_RunToState: return T;
    case Tart_scheduling_static_RunToDomain: return T;
    case Tart_scheduling_static_RunToSlot: return T;
    case Tart_scheduling_static_RunToThread: return T;
    case Tart_scheduling_static_Infostate: return T;
    case Tart_scheduling_static_Infoschedule: return T;
    case Tart_scheduling_static_InfoInputs: return T;
    case Tart_scheduling_static_InfoOutputs: return T;
    case Tart_scheduling_static_InfoComponentStateId: return T;
    case Tart_scheduling_static_InfoComponentState: return T;
    case Tart_scheduling_static_InfoThreadNickNames: return T;
    default: return F;
  }
}

art_scheduling_static_Command art_scheduling_static_Command__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_scheduling_static_Unrecognized: break;
    case Tart_scheduling_static_Unsupported: break;
    case Tart_scheduling_static_Stop: break;
    case Tart_scheduling_static_Help: break;
    case Tart_scheduling_static_Sstep: break;
    case Tart_scheduling_static_Hstep: break;
    case Tart_scheduling_static_RunToHP: break;
    case Tart_scheduling_static_RunToState: break;
    case Tart_scheduling_static_RunToDomain: break;
    case Tart_scheduling_static_RunToSlot: break;
    case Tart_scheduling_static_RunToThread: break;
    case Tart_scheduling_static_Infostate: break;
    case Tart_scheduling_static_Infoschedule: break;
    case Tart_scheduling_static_InfoInputs: break;
    case Tart_scheduling_static_InfoOutputs: break;
    case Tart_scheduling_static_InfoComponentStateId: break;
    case Tart_scheduling_static_InfoComponentState: break;
    case Tart_scheduling_static_InfoThreadNickNames: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.scheduling.static.Command.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_scheduling_static_Command) this;
}

void art_scheduling_static_Command_string_(STACK_FRAME String result, art_scheduling_static_Command this);