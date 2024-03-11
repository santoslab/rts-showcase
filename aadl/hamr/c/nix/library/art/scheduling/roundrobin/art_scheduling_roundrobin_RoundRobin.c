#include <all.h>

// art.scheduling.roundrobin.RoundRobin

B art_scheduling_roundrobin_RoundRobin__eq(art_scheduling_roundrobin_RoundRobin this, art_scheduling_roundrobin_RoundRobin other) {
  if (IS_FDDCB6__ne((IS_FDDCB6) &this->schedule, (IS_FDDCB6) &other->schedule)) return F;
  return T;
}

B art_scheduling_roundrobin_RoundRobin__equiv(art_scheduling_roundrobin_RoundRobin this, art_scheduling_roundrobin_RoundRobin other) {
  if (MS_A7EF1B__inequiv((MS_A7EF1B) &this->lastDispatch, (MS_A7EF1B) &other->lastDispatch)) return F;
  if (MS_A7EF1B__inequiv((MS_A7EF1B) &this->lastSporadic, (MS_A7EF1B) &other->lastSporadic)) return F;
  if (IS_FDDCB6__inequiv((IS_FDDCB6) &this->schedule, (IS_FDDCB6) &other->schedule)) return F;
  return T;
}

B art_scheduling_roundrobin_RoundRobin__ne(art_scheduling_roundrobin_RoundRobin this, art_scheduling_roundrobin_RoundRobin other);
B art_scheduling_roundrobin_RoundRobin__inequiv(art_scheduling_roundrobin_RoundRobin this, art_scheduling_roundrobin_RoundRobin other);

void art_scheduling_roundrobin_RoundRobin_string_(STACK_FRAME String result, art_scheduling_roundrobin_RoundRobin this) {
  DeclNewStackFrame(caller, "RoundRobin.scala", "art.scheduling.roundrobin.RoundRobin", "string", 0);
  String_string_(SF result, string("RoundRobin("));
  IS_FDDCB6_string_(SF result, (IS_FDDCB6) &this->schedule);
  String_string_(SF result, string(")"));
}

void art_scheduling_roundrobin_RoundRobin_cprint(art_scheduling_roundrobin_RoundRobin this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("RoundRobin("), isOut);
  IS_FDDCB6_cprint((IS_FDDCB6) &this->schedule, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_roundrobin_RoundRobin__is(STACK_FRAME void* this);
art_scheduling_roundrobin_RoundRobin art_scheduling_roundrobin_RoundRobin__as(STACK_FRAME void *this);

void art_scheduling_roundrobin_RoundRobin_apply(STACK_FRAME art_scheduling_roundrobin_RoundRobin this, IS_FDDCB6 schedule) {
  DeclNewStackFrame(caller, "RoundRobin.scala", "art.scheduling.roundrobin.RoundRobin", "apply", 0);
  Type_assign(&this->schedule, schedule, sizeof(struct IS_FDDCB6));
  {
    sfUpdateLoc(11);
    Z t_0 = IS_FDDCB6_size(SF art_scheduling_roundrobin_RoundRobin_schedule_(this));
    DeclNewMS_A7EF1B(t_1);
    MS_A7EF1B_create(SF (MS_A7EF1B) &t_1, t_0, S64_C(0));
    Type_assign(&this->lastDispatch, ((MS_A7EF1B) &t_1), sizeof(struct MS_A7EF1B));
  }
  {
    sfUpdateLoc(12);
    Z t_2 = IS_FDDCB6_size(SF art_scheduling_roundrobin_RoundRobin_schedule_(this));
    DeclNewMS_A7EF1B(t_3);
    MS_A7EF1B_create(SF (MS_A7EF1B) &t_3, t_2, S64_C(0));
    Type_assign(&this->lastSporadic, ((MS_A7EF1B) &t_3), sizeof(struct MS_A7EF1B));
  }
}

Unit art_scheduling_roundrobin_RoundRobin_initialize_(STACK_FRAME art_scheduling_roundrobin_RoundRobin this) {
  DeclNewStackFrame(caller, "RoundRobin.scala", "art.scheduling.roundrobin.RoundRobin", "initialize", 0);

  sfUpdateLoc(15);
  {
    art_scheduling_roundrobin_RoundRobinExtensions_init(SF_LAST);
  }
}

Unit art_scheduling_roundrobin_RoundRobin_initializationPhase_(STACK_FRAME art_scheduling_roundrobin_RoundRobin this) {
  DeclNewStackFrame(caller, "RoundRobin.scala", "art.scheduling.roundrobin.RoundRobin", "initializationPhase", 0);

  sfUpdateLoc(19);
  {
    IS_FDDCB6 t_7 = art_scheduling_roundrobin_RoundRobin_schedule_(this);
    int8_t t_8 = (art_scheduling_roundrobin_RoundRobin_schedule_(this))->size;
    for (int8_t t_9 = 0; t_9 < t_8; t_9++) {
      art_Art_BridgeId bridgeId = t_7->value[t_9];

      sfUpdateLoc(20);
      {
        Z t_0 = art_Art_BridgeId_toZ_(SF bridgeId);
        DeclNewart_Bridge(t_1);
        Option_7BBFBE_get_(SF (art_Bridge) &t_1, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_0));
        DeclNewart_Bridge_EntryPoints(t_2);
        art_Bridge_entryPoints_(SF (art_Bridge_EntryPoints) &t_2, ((art_Bridge) &t_1));
        art_Bridge_EntryPoints_initialise_(SF ((art_Bridge_EntryPoints) &t_2));
      }

      sfUpdateLoc(21);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Initialized bridge: "));
        Z t_4 = art_Art_BridgeId_toZ_(SF bridgeId);
        DeclNewart_Bridge(t_5);
        Option_7BBFBE_get_(SF (art_Bridge) &t_5, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_4));
        DeclNewString(t_6);
        art_Bridge_name_(SF (String) &t_6, ((art_Bridge) &t_5));
        String_string_(SF (String) &t_3, ((String) &t_6));
        String_string_(SF (String) &t_3, string(""));
        art_Art_logInfo(SF bridgeId, (String) ((String) &t_3));
      }
    }
  }
}

Unit art_scheduling_roundrobin_RoundRobin_computePhase_(STACK_FRAME art_scheduling_roundrobin_RoundRobin this) {
  DeclNewStackFrame(caller, "RoundRobin.scala", "art.scheduling.roundrobin.RoundRobin", "computePhase", 0);

  sfUpdateLoc(44);
  B t_44_5;
  {
    t_44_5 = (!art_scheduling_roundrobin_RoundRobinExtensions_shouldStop(SF_LAST));
  }
  while(t_44_5) {

    sfUpdateLoc(45);
    {
      IS_FDDCB6 t_11 = art_scheduling_roundrobin_RoundRobin_schedule_(this);
      int8_t t_12 = (art_scheduling_roundrobin_RoundRobin_schedule_(this))->size;
      for (int8_t t_13 = 0; t_13 < t_12; t_13++) {
        art_Art_BridgeId bridgeId = t_11->value[t_13];

        sfUpdateLoc(46);
        B t_0;
        {
          B t_1 = art_scheduling_roundrobin_RoundRobin_shouldDispatch_(SF this, bridgeId);
          t_0 = t_1;
        }
        if (t_0) {

          sfUpdateLoc(47);
          {
            S64 t_2 = art_Art_time(SF_LAST);
            MS_A7EF1B_up(art_scheduling_roundrobin_RoundRobin_lastDispatch_(this), bridgeId, (S64) t_2);
          }

          sfUpdateLoc(48);
          {
            Z t_3 = art_Art_BridgeId_toZ_(SF bridgeId);
            DeclNewart_Bridge(t_4);
            Option_7BBFBE_get_(SF (art_Bridge) &t_4, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_3));
            DeclNewart_Bridge_EntryPoints(t_5);
            art_Bridge_entryPoints_(SF (art_Bridge_EntryPoints) &t_5, ((art_Bridge) &t_4));
            art_Bridge_EntryPoints_compute_(SF ((art_Bridge_EntryPoints) &t_5));
          }

          sfUpdateLoc(50);
          B t_6;
          {
            Z t_7 = art_Art_BridgeId_toZ_(SF bridgeId);
            DeclNewart_Bridge(t_8);
            Option_7BBFBE_get_(SF (art_Bridge) &t_8, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_7));
            DeclNewart_DispatchPropertyProtocol(t_9);
            art_Bridge_dispatchProtocol_(SF (art_DispatchPropertyProtocol) &t_9, ((art_Bridge) &t_8));
            t_6 = art_DispatchPropertyProtocol_Sporadic__is(SF ((art_DispatchPropertyProtocol) &t_9));
          }
          if (t_6) {

            sfUpdateLoc(51);
            {
              S64 t_10 = art_Art_time(SF_LAST);
              MS_A7EF1B_up(art_scheduling_roundrobin_RoundRobin_lastSporadic_(this), bridgeId, (S64) t_10);
            }
          }
        }
      }
    }

    sfUpdateLoc(44);
    t_44_5 = (!art_scheduling_roundrobin_RoundRobinExtensions_shouldStop(SF_LAST));
  }
}

Unit art_scheduling_roundrobin_RoundRobin_finalizePhase_(STACK_FRAME art_scheduling_roundrobin_RoundRobin this) {
  DeclNewStackFrame(caller, "RoundRobin.scala", "art.scheduling.roundrobin.RoundRobin", "finalizePhase", 0);

  sfUpdateLoc(59);
  {
    IS_FDDCB6 t_7 = art_scheduling_roundrobin_RoundRobin_schedule_(this);
    int8_t t_8 = (art_scheduling_roundrobin_RoundRobin_schedule_(this))->size;
    for (int8_t t_9 = 0; t_9 < t_8; t_9++) {
      art_Art_BridgeId bridgeId = t_7->value[t_9];

      sfUpdateLoc(60);
      {
        Z t_0 = art_Art_BridgeId_toZ_(SF bridgeId);
        DeclNewart_Bridge(t_1);
        Option_7BBFBE_get_(SF (art_Bridge) &t_1, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_0));
        DeclNewart_Bridge_EntryPoints(t_2);
        art_Bridge_entryPoints_(SF (art_Bridge_EntryPoints) &t_2, ((art_Bridge) &t_1));
        art_Bridge_EntryPoints_finalise_(SF ((art_Bridge_EntryPoints) &t_2));
      }

      sfUpdateLoc(61);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Finalized bridge: "));
        Z t_4 = art_Art_BridgeId_toZ_(SF bridgeId);
        DeclNewart_Bridge(t_5);
        Option_7BBFBE_get_(SF (art_Bridge) &t_5, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_4));
        DeclNewString(t_6);
        art_Bridge_name_(SF (String) &t_6, ((art_Bridge) &t_5));
        String_string_(SF (String) &t_3, ((String) &t_6));
        String_string_(SF (String) &t_3, string(""));
        art_Art_logInfo(SF bridgeId, (String) ((String) &t_3));
      }
    }
  }
}

inline B art_scheduling_roundrobin_RoundRobin_shouldDispatch_extract_27_12(STACK_FRAME_SF art_DispatchPropertyProtocol t_0, art_scheduling_roundrobin_RoundRobin this, Z *_period_27_46) {
  if (!art_DispatchPropertyProtocol_Periodic__is(SF t_0)) return F;
  *_period_27_46 = art_DispatchPropertyProtocol_Periodic_period_(art_DispatchPropertyProtocol_Periodic__as(SF t_0));
  return T;
}

inline B art_scheduling_roundrobin_RoundRobin_shouldDispatch_extract_33_12(STACK_FRAME_SF art_DispatchPropertyProtocol t_0, art_scheduling_roundrobin_RoundRobin this, Z *_minRate_33_46) {
  if (!art_DispatchPropertyProtocol_Sporadic__is(SF t_0)) return F;
  *_minRate_33_46 = art_DispatchPropertyProtocol_Sporadic_min_(art_DispatchPropertyProtocol_Sporadic__as(SF t_0));
  return T;
}

B art_scheduling_roundrobin_RoundRobin_shouldDispatch_(STACK_FRAME art_scheduling_roundrobin_RoundRobin this, art_Art_BridgeId bridgeId) {
  DeclNewStackFrame(caller, "RoundRobin.scala", "art.scheduling.roundrobin.RoundRobin", "shouldDispatch", 0);

  sfUpdateLoc(26);
  Z t_1 = art_Art_BridgeId_toZ_(SF bridgeId);
  DeclNewart_Bridge(t_2);
  Option_7BBFBE_get_(SF (art_Bridge) &t_2, MS_83D5EB_at(art_Art_bridges(SF_LAST), t_1));
  DeclNewart_DispatchPropertyProtocol(t_3);
  art_Bridge_dispatchProtocol_(SF (art_DispatchPropertyProtocol) &t_3, ((art_Bridge) &t_2));
  art_DispatchPropertyProtocol t_0 = ((art_DispatchPropertyProtocol) &t_3);
  B match_26_35 = F;
  if (!match_26_35) {
    Z period_27_46;
    match_26_35 = art_scheduling_roundrobin_RoundRobin_shouldDispatch_extract_27_12(SF t_0, this, &period_27_46);
    if (match_26_35) {

      sfUpdateLoc(28);
      B t_4;
      {
        S64 t_5 = art_Art_time(SF_LAST);
        t_4 = S64__gt(S64__sub(t_5, MS_A7EF1B_at(art_scheduling_roundrobin_RoundRobin_lastDispatch_(this), bridgeId)), conversions_Z_toS64(SF period_27_46));
      }
      if (t_4) {
        return art_ArtNativeSlang_shouldDispatch(SF bridgeId);
      } else {
        return F;
      }
    }
  }
  if (!match_26_35) {
    Z minRate_33_46;
    match_26_35 = art_scheduling_roundrobin_RoundRobin_shouldDispatch_extract_33_12(SF t_0, this, &minRate_33_46);
    if (match_26_35) {

      sfUpdateLoc(34);
      B t_6;
      {
        S64 t_7 = art_Art_time(SF_LAST);
        t_6 = S64__lt(S64__sub(t_7, MS_A7EF1B_at(art_scheduling_roundrobin_RoundRobin_lastSporadic_(this), bridgeId)), conversions_Z_toS64(SF minRate_33_46));
      }
      if (t_6) {
        return F;
      } else {
        return art_ArtNativeSlang_shouldDispatch(SF bridgeId);
      }
    }
  }
  sfAssert(match_26_35, "Error when pattern matching.");
  exit(-1);
}