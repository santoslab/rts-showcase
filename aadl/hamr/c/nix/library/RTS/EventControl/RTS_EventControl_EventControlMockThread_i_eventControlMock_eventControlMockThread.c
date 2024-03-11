#include <all.h>

B RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_initialized_ = F;

struct IS_7DA5C1 _RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frames;
Z _RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frame;

void RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_init(STACK_FRAME_ONLY) {
  if (RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_initialized_) return;
  RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_initialized_ = T;
  DeclNewStackFrame(caller, "EventControlMockThread_i_eventControlMock_eventControlMockThread.scala", "RTS.EventControl.EventControlMockThread_i_eventControlMock_eventControlMockThread", "<init>", 0);
  RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_init_frames(SF_LAST);
  RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_init_frame(SF_LAST);
}

IS_7DA5C1 RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frames(STACK_FRAME_ONLY) {
  RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_init(CALLER_LAST);
  return (IS_7DA5C1) &_RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frames;
}

Z RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frame(STACK_FRAME_ONLY) {
  RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_init(CALLER_LAST);
  return _RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frame;
}

void RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frame_a(STACK_FRAME Z p_frame) {
  RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_init(CALLER_LAST);
  _RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frame = p_frame;
}

Unit RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_initialise(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Initialization_Api api) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_eventControlMock_eventControlMockThread.scala", "RTS.EventControl.EventControlMockThread_i_eventControlMock_eventControlMockThread", "initialise", 0);

  sfUpdateLoc(12);
  {
    RTS_EventControl_EventControlMockThread_i_Initialization_Api_logInfo_(SF api, (String) string("Initialize Entry Point: Event Control Mock"));
  }

  sfUpdateLoc(14);
  B v;
  {
    v = F;
  }

  sfUpdateLoc(17);
  {
    RTS_EventControl_EventControlMockThread_i_Initialization_Api_put_manualActuatorInput1_(SF api, v);
  }

  sfUpdateLoc(18);
  {
    RTS_EventControl_EventControlMockThread_i_Initialization_Api_put_manualActuatorInput2_(SF api, v);
  }
}

Unit RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_timeTriggered(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Operational_Api api) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_eventControlMock_eventControlMockThread.scala", "RTS.EventControl.EventControlMockThread_i_eventControlMock_eventControlMockThread", "timeTriggered", 0);

  sfUpdateLoc(44);
  {
    RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_putFrame(SF RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frame(SF_LAST), (RTS_EventControl_EventControlMockThread_i_Operational_Api) api);
  }

  sfUpdateLoc(47);
  {
    RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frame_a(SF (Z) Z__add(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frame(SF_LAST), Z_C(1)));
  }

  sfUpdateLoc(48);
  B t_0;
  {
    Z t_1 = IS_7DA5C1_size(SF RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frames(SF_LAST));
    t_0 = Z__eq(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frame(SF_LAST), t_1);
  }
  if (t_0) {

    sfUpdateLoc(49);
    {
      RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frame_a(SF (Z) Z_C(0));
    }
  }
}

Unit RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_finalise(STACK_FRAME RTS_EventControl_EventControlMockThread_i_Operational_Api api) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_eventControlMock_eventControlMockThread.scala", "RTS.EventControl.EventControlMockThread_i_eventControlMock_eventControlMockThread", "finalise", 0);
}

Unit RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_putFrame(STACK_FRAME Z frame, RTS_EventControl_EventControlMockThread_i_Operational_Api api) {
  DeclNewStackFrame(caller, "EventControlMockThread_i_eventControlMock_eventControlMockThread.scala", "RTS.EventControl.EventControlMockThread_i_eventControlMock_eventControlMockThread", "putFrame", 0);

  sfUpdateLoc(55);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string("Event Control: Frame: "));
    Z_string_(SF (String) &t_0, frame);
    String_string_(SF (String) &t_0, string(""));
    RTS_EventControl_EventControlMockThread_i_Operational_Api_logInfo_(SF api, (String) ((String) &t_0));
  }

  sfUpdateLoc(57);
  Tuple2_0862A0 manualActuatorInputs;
  manualActuatorInputs = (Tuple2_0862A0) IS_7DA5C1_at(RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frames(SF_LAST), frame);

  sfUpdateLoc(58);
  {
    DeclNewString(t_1);
    String_string_(SF (String) &t_1, string("  Event Control test vector: "));
    Tuple2_0862A0_string_(SF (String) &t_1, manualActuatorInputs);
    String_string_(SF (String) &t_1, string(""));
    RTS_EventControl_EventControlMockThread_i_Operational_Api_logInfo_(SF api, (String) ((String) &t_1));
  }

  sfUpdateLoc(59);
  {
    RTS_EventControl_EventControlMockThread_i_Operational_Api_put_manualActuatorInput1_(SF api, Tuple2_0862A0_1(manualActuatorInputs));
  }

  sfUpdateLoc(60);
  {
    RTS_EventControl_EventControlMockThread_i_Operational_Api_put_manualActuatorInput2_(SF api, Tuple2_0862A0_2(manualActuatorInputs));
  }
}

void RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_init_frames(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(21);
  STATIC_ASSERT(9 <= MaxIS_7DA5C1, "Insufficient maximum for IS[Z, (B, B)] elements.");
  DeclNewIS_7DA5C1(t_0);
  t_0.size = (int8_t) 9;
  DeclNewTuple2_0862A0(t_1);
  Tuple2_0862A0_apply(SF &t_1, F, F);
  IS_7DA5C1_up(&t_0, 0, (Tuple2_0862A0) (&t_1));
  DeclNewTuple2_0862A0(t_2);
  Tuple2_0862A0_apply(SF &t_2, F, F);
  IS_7DA5C1_up(&t_0, 1, (Tuple2_0862A0) (&t_2));
  DeclNewTuple2_0862A0(t_3);
  Tuple2_0862A0_apply(SF &t_3, F, F);
  IS_7DA5C1_up(&t_0, 2, (Tuple2_0862A0) (&t_3));
  DeclNewTuple2_0862A0(t_4);
  Tuple2_0862A0_apply(SF &t_4, F, F);
  IS_7DA5C1_up(&t_0, 3, (Tuple2_0862A0) (&t_4));
  DeclNewTuple2_0862A0(t_5);
  Tuple2_0862A0_apply(SF &t_5, F, F);
  IS_7DA5C1_up(&t_0, 4, (Tuple2_0862A0) (&t_5));
  DeclNewTuple2_0862A0(t_6);
  Tuple2_0862A0_apply(SF &t_6, F, F);
  IS_7DA5C1_up(&t_0, 5, (Tuple2_0862A0) (&t_6));
  DeclNewTuple2_0862A0(t_7);
  Tuple2_0862A0_apply(SF &t_7, T, F);
  IS_7DA5C1_up(&t_0, 6, (Tuple2_0862A0) (&t_7));
  DeclNewTuple2_0862A0(t_8);
  Tuple2_0862A0_apply(SF &t_8, T, T);
  IS_7DA5C1_up(&t_0, 7, (Tuple2_0862A0) (&t_8));
  DeclNewTuple2_0862A0(t_9);
  Tuple2_0862A0_apply(SF &t_9, F, F);
  IS_7DA5C1_up(&t_0, 8, (Tuple2_0862A0) (&t_9));
  Type_assign(&_RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frames, (&t_0), sizeof(struct IS_7DA5C1));
};

void RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_init_frame(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(34);
  _RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_frame = Z_C(0);
};