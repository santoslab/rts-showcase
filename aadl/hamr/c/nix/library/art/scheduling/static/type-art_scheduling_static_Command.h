#ifndef SIREUM_TYPE_H_art_scheduling_static_Command
#define SIREUM_TYPE_H_art_scheduling_static_Command

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.Command

#include <type-art_scheduling_static_Unrecognized.h>
#include <type-art_scheduling_static_Unsupported.h>
#include <type-art_scheduling_static_Stop.h>
#include <type-art_scheduling_static_Help.h>
#include <type-art_scheduling_static_Sstep.h>
#include <type-art_scheduling_static_Hstep.h>
#include <type-art_scheduling_static_RunToHP.h>
#include <type-art_scheduling_static_RunToState.h>
#include <type-art_scheduling_static_RunToDomain.h>
#include <type-art_scheduling_static_RunToSlot.h>
#include <type-art_scheduling_static_RunToThread.h>
#include <type-art_scheduling_static_Infostate.h>
#include <type-art_scheduling_static_Infoschedule.h>
#include <type-art_scheduling_static_InfoInputs.h>
#include <type-art_scheduling_static_InfoOutputs.h>
#include <type-art_scheduling_static_InfoComponentStateId.h>
#include <type-art_scheduling_static_InfoComponentState.h>
#include <type-art_scheduling_static_InfoThreadNickNames.h>

typedef union art_scheduling_static_Command *art_scheduling_static_Command;
union art_scheduling_static_Command {
  TYPE type;
  struct art_scheduling_static_Unrecognized art_scheduling_static_Unrecognized;
  struct art_scheduling_static_Unsupported art_scheduling_static_Unsupported;
  struct art_scheduling_static_Stop art_scheduling_static_Stop;
  struct art_scheduling_static_Help art_scheduling_static_Help;
  struct art_scheduling_static_Sstep art_scheduling_static_Sstep;
  struct art_scheduling_static_Hstep art_scheduling_static_Hstep;
  struct art_scheduling_static_RunToHP art_scheduling_static_RunToHP;
  struct art_scheduling_static_RunToState art_scheduling_static_RunToState;
  struct art_scheduling_static_RunToDomain art_scheduling_static_RunToDomain;
  struct art_scheduling_static_RunToSlot art_scheduling_static_RunToSlot;
  struct art_scheduling_static_RunToThread art_scheduling_static_RunToThread;
  struct art_scheduling_static_Infostate art_scheduling_static_Infostate;
  struct art_scheduling_static_Infoschedule art_scheduling_static_Infoschedule;
  struct art_scheduling_static_InfoInputs art_scheduling_static_InfoInputs;
  struct art_scheduling_static_InfoOutputs art_scheduling_static_InfoOutputs;
  struct art_scheduling_static_InfoComponentStateId art_scheduling_static_InfoComponentStateId;
  struct art_scheduling_static_InfoComponentState art_scheduling_static_InfoComponentState;
  struct art_scheduling_static_InfoThreadNickNames art_scheduling_static_InfoThreadNickNames;
};

#define DeclNewart_scheduling_static_Command(x) union art_scheduling_static_Command x = { 0 }

#ifdef __cplusplus
}
#endif

#endif