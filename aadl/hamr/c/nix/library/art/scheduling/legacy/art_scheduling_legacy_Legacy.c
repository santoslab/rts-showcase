#include <all.h>

// art.scheduling.legacy.Legacy

B art_scheduling_legacy_Legacy__eq(art_scheduling_legacy_Legacy this, art_scheduling_legacy_Legacy other) {
  if (IS_058E6F__ne((IS_058E6F) &this->bridges, (IS_058E6F) &other->bridges)) return F;
  return T;
}

B art_scheduling_legacy_Legacy__equiv(art_scheduling_legacy_Legacy this, art_scheduling_legacy_Legacy other) {
  if (IS_058E6F__inequiv((IS_058E6F) &this->bridges, (IS_058E6F) &other->bridges)) return F;
  return T;
}

B art_scheduling_legacy_Legacy__ne(art_scheduling_legacy_Legacy this, art_scheduling_legacy_Legacy other);
B art_scheduling_legacy_Legacy__inequiv(art_scheduling_legacy_Legacy this, art_scheduling_legacy_Legacy other);

void art_scheduling_legacy_Legacy_string_(STACK_FRAME String result, art_scheduling_legacy_Legacy this) {
  DeclNewStackFrame(caller, "Legacy.scala", "art.scheduling.legacy.Legacy", "string", 0);
  String_string_(SF result, string("Legacy("));
  IS_058E6F_string_(SF result, (IS_058E6F) &this->bridges);
  String_string_(SF result, string(")"));
}

void art_scheduling_legacy_Legacy_cprint(art_scheduling_legacy_Legacy this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Legacy("), isOut);
  IS_058E6F_cprint((IS_058E6F) &this->bridges, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_legacy_Legacy__is(STACK_FRAME void* this);
art_scheduling_legacy_Legacy art_scheduling_legacy_Legacy__as(STACK_FRAME void *this);

void art_scheduling_legacy_Legacy_apply(STACK_FRAME art_scheduling_legacy_Legacy this, IS_058E6F bridges) {
  DeclNewStackFrame(caller, "Legacy.scala", "art.scheduling.legacy.Legacy", "apply", 0);
  Type_assign(&this->bridges, bridges, sizeof(struct IS_058E6F));
}

Unit art_scheduling_legacy_Legacy_initialize_(STACK_FRAME art_scheduling_legacy_Legacy this) {
  DeclNewStackFrame(caller, "Legacy.scala", "art.scheduling.legacy.Legacy", "initialize", 0);
}

Unit art_scheduling_legacy_Legacy_initializationPhase_(STACK_FRAME art_scheduling_legacy_Legacy this) {
  DeclNewStackFrame(caller, "Legacy.scala", "art.scheduling.legacy.Legacy", "initializationPhase", 0);

  sfUpdateLoc(14);
  {
    IS_058E6F t_4 = art_scheduling_legacy_Legacy_bridges_(this);
    int8_t t_5 = (art_scheduling_legacy_Legacy_bridges_(this))->size;
    for (int8_t t_6 = 0; t_6 < t_5; t_6++) {
      art_Bridge bridge = (art_Bridge) &(t_4->value[t_6]);

      sfUpdateLoc(15);
      {
        DeclNewart_Bridge_EntryPoints(t_0);
        art_Bridge_entryPoints_(SF (art_Bridge_EntryPoints) &t_0, bridge);
        art_Bridge_EntryPoints_initialise_(SF ((art_Bridge_EntryPoints) &t_0));
      }

      sfUpdateLoc(16);
      {
        art_Art_BridgeId t_1 = art_Bridge_id_(SF bridge);
        DeclNewString(t_2);
        String_string_(SF (String) &t_2, string("Initialized bridge: "));
        DeclNewString(t_3);
        art_Bridge_name_(SF (String) &t_3, bridge);
        String_string_(SF (String) &t_2, ((String) &t_3));
        String_string_(SF (String) &t_2, string(""));
        art_Art_logInfo(SF t_1, (String) ((String) &t_2));
      }
    }
  }
}

Unit art_scheduling_legacy_Legacy_computePhase_(STACK_FRAME art_scheduling_legacy_Legacy this) {
  DeclNewStackFrame(caller, "Legacy.scala", "art.scheduling.legacy.Legacy", "computePhase", 0);

  sfUpdateLoc(21);
  {
    art_scheduling_legacy_LegacyInterface_computePhase(SF (IS_058E6F) art_scheduling_legacy_Legacy_bridges_(this));
  }
}

Unit art_scheduling_legacy_Legacy_finalizePhase_(STACK_FRAME art_scheduling_legacy_Legacy this) {
  DeclNewStackFrame(caller, "Legacy.scala", "art.scheduling.legacy.Legacy", "finalizePhase", 0);

  sfUpdateLoc(25);
  {
    IS_058E6F t_4 = art_scheduling_legacy_Legacy_bridges_(this);
    int8_t t_5 = (art_scheduling_legacy_Legacy_bridges_(this))->size;
    for (int8_t t_6 = 0; t_6 < t_5; t_6++) {
      art_Bridge bridge = (art_Bridge) &(t_4->value[t_6]);

      sfUpdateLoc(26);
      {
        DeclNewart_Bridge_EntryPoints(t_0);
        art_Bridge_entryPoints_(SF (art_Bridge_EntryPoints) &t_0, bridge);
        art_Bridge_EntryPoints_finalise_(SF ((art_Bridge_EntryPoints) &t_0));
      }

      sfUpdateLoc(27);
      {
        art_Art_BridgeId t_1 = art_Bridge_id_(SF bridge);
        DeclNewString(t_2);
        String_string_(SF (String) &t_2, string("Finalized bridge: "));
        DeclNewString(t_3);
        art_Bridge_name_(SF (String) &t_3, bridge);
        String_string_(SF (String) &t_2, ((String) &t_3));
        String_string_(SF (String) &t_2, string(""));
        art_Art_logInfo(SF t_1, (String) ((String) &t_2));
      }
    }
  }
}