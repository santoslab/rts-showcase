#include <all.h>

B RTS_Arch_initialized_ = F;

struct RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge _RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread;
struct RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge _RTS_Arch_RTS_i_Instance_eventControlMock_eventControlMockThread;
struct RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge _RTS_Arch_RTS_i_Instance_actuatorsMock_actuatorsMockThread;
struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge _RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic;
struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge _RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic;
struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge _RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic;
struct RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge _RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic;
struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge _RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic;
struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge _RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic;
struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge _RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic;
struct RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge _RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic;
struct RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge _RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic;
struct RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge _RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator;
struct RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge _RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic;
struct RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge _RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator;
struct art_ArchitectureDescription _RTS_Arch_ad;

void RTS_Arch_init(STACK_FRAME_ONLY) {
  if (RTS_Arch_initialized_) return;
  RTS_Arch_initialized_ = T;
  DeclNewStackFrame(caller, "Arch.scala", "RTS.Arch", "<init>", 0);
  RTS_Arch_init_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST);
  RTS_Arch_init_RTS_i_Instance_eventControlMock_eventControlMockThread(SF_LAST);
  RTS_Arch_init_RTS_i_Instance_actuatorsMock_actuatorsMockThread(SF_LAST);
  RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic(SF_LAST);
  RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic(SF_LAST);
  RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic(SF_LAST);
  RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic(SF_LAST);
  RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic(SF_LAST);
  RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic(SF_LAST);
  RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic(SF_LAST);
  RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic(SF_LAST);
  RTS_Arch_init_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic(SF_LAST);
  RTS_Arch_init_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator(SF_LAST);
  RTS_Arch_init_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic(SF_LAST);
  RTS_Arch_init_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator(SF_LAST);
  RTS_Arch_init_ad(SF_LAST);
}

RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(STACK_FRAME_ONLY) {
  RTS_Arch_init(CALLER_LAST);
  return (RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge) &_RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread;
}

RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge RTS_Arch_RTS_i_Instance_eventControlMock_eventControlMockThread(STACK_FRAME_ONLY) {
  RTS_Arch_init(CALLER_LAST);
  return (RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge) &_RTS_Arch_RTS_i_Instance_eventControlMock_eventControlMockThread;
}

RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge RTS_Arch_RTS_i_Instance_actuatorsMock_actuatorsMockThread(STACK_FRAME_ONLY) {
  RTS_Arch_init(CALLER_LAST);
  return (RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge) &_RTS_Arch_RTS_i_Instance_actuatorsMock_actuatorsMockThread;
}

RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic(STACK_FRAME_ONLY) {
  RTS_Arch_init(CALLER_LAST);
  return (RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge) &_RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic;
}

RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic(STACK_FRAME_ONLY) {
  RTS_Arch_init(CALLER_LAST);
  return (RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge) &_RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic;
}

RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic(STACK_FRAME_ONLY) {
  RTS_Arch_init(CALLER_LAST);
  return (RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge) &_RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic;
}

RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic(STACK_FRAME_ONLY) {
  RTS_Arch_init(CALLER_LAST);
  return (RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge) &_RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic;
}

RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic(STACK_FRAME_ONLY) {
  RTS_Arch_init(CALLER_LAST);
  return (RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge) &_RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic;
}

RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic(STACK_FRAME_ONLY) {
  RTS_Arch_init(CALLER_LAST);
  return (RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge) &_RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic;
}

RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic(STACK_FRAME_ONLY) {
  RTS_Arch_init(CALLER_LAST);
  return (RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge) &_RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic;
}

RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic(STACK_FRAME_ONLY) {
  RTS_Arch_init(CALLER_LAST);
  return (RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge) &_RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic;
}

RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic(STACK_FRAME_ONLY) {
  RTS_Arch_init(CALLER_LAST);
  return (RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge) &_RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic;
}

RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator(STACK_FRAME_ONLY) {
  RTS_Arch_init(CALLER_LAST);
  return (RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge) &_RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator;
}

RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic(STACK_FRAME_ONLY) {
  RTS_Arch_init(CALLER_LAST);
  return (RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge) &_RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic;
}

RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator(STACK_FRAME_ONLY) {
  RTS_Arch_init(CALLER_LAST);
  return (RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge) &_RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator;
}

art_ArchitectureDescription RTS_Arch_ad(STACK_FRAME_ONLY) {
  RTS_Arch_init(CALLER_LAST);
  return (art_ArchitectureDescription) &_RTS_Arch_ad;
}

void RTS_Arch_init_RTS_i_Instance_instrumentationMock_instrumentationMockThread(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  {

    sfUpdateLoc(16);
    art_Port_C0524D unit1_temperatureLogic_channel1;
    DeclNewart_Port_C0524D(t_0);
    art_Port_C0524D_apply(SF &t_0, art_Art_PortId_C(0), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit1_temperatureLogic_channel1"), art_PortMode_Type_DataOut);
    unit1_temperatureLogic_channel1 = (art_Port_C0524D) (&t_0);

    sfUpdateLoc(17);
    art_Port_C0524D unit1_temperatureLogic_channel2;
    DeclNewart_Port_C0524D(t_1);
    art_Port_C0524D_apply(SF &t_1, art_Art_PortId_C(1), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit1_temperatureLogic_channel2"), art_PortMode_Type_DataOut);
    unit1_temperatureLogic_channel2 = (art_Port_C0524D) (&t_1);

    sfUpdateLoc(18);
    art_Port_C0524D unit1_temperatureLogic_channel3;
    DeclNewart_Port_C0524D(t_2);
    art_Port_C0524D_apply(SF &t_2, art_Art_PortId_C(2), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit1_temperatureLogic_channel3"), art_PortMode_Type_DataOut);
    unit1_temperatureLogic_channel3 = (art_Port_C0524D) (&t_2);

    sfUpdateLoc(19);
    art_Port_C0524D unit1_temperatureLogic_channel4;
    DeclNewart_Port_C0524D(t_3);
    art_Port_C0524D_apply(SF &t_3, art_Art_PortId_C(3), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit1_temperatureLogic_channel4"), art_PortMode_Type_DataOut);
    unit1_temperatureLogic_channel4 = (art_Port_C0524D) (&t_3);

    sfUpdateLoc(20);
    art_Port_C0524D unit1_pressureLogic_channel1;
    DeclNewart_Port_C0524D(t_4);
    art_Port_C0524D_apply(SF &t_4, art_Art_PortId_C(4), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit1_pressureLogic_channel1"), art_PortMode_Type_DataOut);
    unit1_pressureLogic_channel1 = (art_Port_C0524D) (&t_4);

    sfUpdateLoc(21);
    art_Port_C0524D unit1_pressureLogic_channel2;
    DeclNewart_Port_C0524D(t_5);
    art_Port_C0524D_apply(SF &t_5, art_Art_PortId_C(5), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit1_pressureLogic_channel2"), art_PortMode_Type_DataOut);
    unit1_pressureLogic_channel2 = (art_Port_C0524D) (&t_5);

    sfUpdateLoc(22);
    art_Port_C0524D unit1_pressureLogic_channel3;
    DeclNewart_Port_C0524D(t_6);
    art_Port_C0524D_apply(SF &t_6, art_Art_PortId_C(6), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit1_pressureLogic_channel3"), art_PortMode_Type_DataOut);
    unit1_pressureLogic_channel3 = (art_Port_C0524D) (&t_6);

    sfUpdateLoc(23);
    art_Port_C0524D unit1_pressureLogic_channel4;
    DeclNewart_Port_C0524D(t_7);
    art_Port_C0524D_apply(SF &t_7, art_Art_PortId_C(7), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit1_pressureLogic_channel4"), art_PortMode_Type_DataOut);
    unit1_pressureLogic_channel4 = (art_Port_C0524D) (&t_7);

    sfUpdateLoc(24);
    art_Port_C0524D unit1_saturationLogic_channel1;
    DeclNewart_Port_C0524D(t_8);
    art_Port_C0524D_apply(SF &t_8, art_Art_PortId_C(8), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit1_saturationLogic_channel1"), art_PortMode_Type_DataOut);
    unit1_saturationLogic_channel1 = (art_Port_C0524D) (&t_8);

    sfUpdateLoc(25);
    art_Port_C0524D unit1_saturationLogic_channel2;
    DeclNewart_Port_C0524D(t_9);
    art_Port_C0524D_apply(SF &t_9, art_Art_PortId_C(9), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit1_saturationLogic_channel2"), art_PortMode_Type_DataOut);
    unit1_saturationLogic_channel2 = (art_Port_C0524D) (&t_9);

    sfUpdateLoc(26);
    art_Port_C0524D unit1_saturationLogic_channel3;
    DeclNewart_Port_C0524D(t_10);
    art_Port_C0524D_apply(SF &t_10, art_Art_PortId_C(10), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit1_saturationLogic_channel3"), art_PortMode_Type_DataOut);
    unit1_saturationLogic_channel3 = (art_Port_C0524D) (&t_10);

    sfUpdateLoc(27);
    art_Port_C0524D unit1_saturationLogic_channel4;
    DeclNewart_Port_C0524D(t_11);
    art_Port_C0524D_apply(SF &t_11, art_Art_PortId_C(11), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit1_saturationLogic_channel4"), art_PortMode_Type_DataOut);
    unit1_saturationLogic_channel4 = (art_Port_C0524D) (&t_11);

    sfUpdateLoc(28);
    art_Port_C0524D unit2_temperatureLogic_channel1;
    DeclNewart_Port_C0524D(t_12);
    art_Port_C0524D_apply(SF &t_12, art_Art_PortId_C(12), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit2_temperatureLogic_channel1"), art_PortMode_Type_DataOut);
    unit2_temperatureLogic_channel1 = (art_Port_C0524D) (&t_12);

    sfUpdateLoc(29);
    art_Port_C0524D unit2_temperatureLogic_channel2;
    DeclNewart_Port_C0524D(t_13);
    art_Port_C0524D_apply(SF &t_13, art_Art_PortId_C(13), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit2_temperatureLogic_channel2"), art_PortMode_Type_DataOut);
    unit2_temperatureLogic_channel2 = (art_Port_C0524D) (&t_13);

    sfUpdateLoc(30);
    art_Port_C0524D unit2_temperatureLogic_channel3;
    DeclNewart_Port_C0524D(t_14);
    art_Port_C0524D_apply(SF &t_14, art_Art_PortId_C(14), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit2_temperatureLogic_channel3"), art_PortMode_Type_DataOut);
    unit2_temperatureLogic_channel3 = (art_Port_C0524D) (&t_14);

    sfUpdateLoc(31);
    art_Port_C0524D unit2_temperatureLogic_channel4;
    DeclNewart_Port_C0524D(t_15);
    art_Port_C0524D_apply(SF &t_15, art_Art_PortId_C(15), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit2_temperatureLogic_channel4"), art_PortMode_Type_DataOut);
    unit2_temperatureLogic_channel4 = (art_Port_C0524D) (&t_15);

    sfUpdateLoc(32);
    art_Port_C0524D unit2_pressureLogic_channel1;
    DeclNewart_Port_C0524D(t_16);
    art_Port_C0524D_apply(SF &t_16, art_Art_PortId_C(16), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit2_pressureLogic_channel1"), art_PortMode_Type_DataOut);
    unit2_pressureLogic_channel1 = (art_Port_C0524D) (&t_16);

    sfUpdateLoc(33);
    art_Port_C0524D unit2_pressureLogic_channel2;
    DeclNewart_Port_C0524D(t_17);
    art_Port_C0524D_apply(SF &t_17, art_Art_PortId_C(17), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit2_pressureLogic_channel2"), art_PortMode_Type_DataOut);
    unit2_pressureLogic_channel2 = (art_Port_C0524D) (&t_17);

    sfUpdateLoc(34);
    art_Port_C0524D unit2_pressureLogic_channel3;
    DeclNewart_Port_C0524D(t_18);
    art_Port_C0524D_apply(SF &t_18, art_Art_PortId_C(18), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit2_pressureLogic_channel3"), art_PortMode_Type_DataOut);
    unit2_pressureLogic_channel3 = (art_Port_C0524D) (&t_18);

    sfUpdateLoc(35);
    art_Port_C0524D unit2_pressureLogic_channel4;
    DeclNewart_Port_C0524D(t_19);
    art_Port_C0524D_apply(SF &t_19, art_Art_PortId_C(19), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit2_pressureLogic_channel4"), art_PortMode_Type_DataOut);
    unit2_pressureLogic_channel4 = (art_Port_C0524D) (&t_19);

    sfUpdateLoc(36);
    art_Port_C0524D unit2_saturationLogic_channel1;
    DeclNewart_Port_C0524D(t_20);
    art_Port_C0524D_apply(SF &t_20, art_Art_PortId_C(20), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit2_saturationLogic_channel1"), art_PortMode_Type_DataOut);
    unit2_saturationLogic_channel1 = (art_Port_C0524D) (&t_20);

    sfUpdateLoc(37);
    art_Port_C0524D unit2_saturationLogic_channel2;
    DeclNewart_Port_C0524D(t_21);
    art_Port_C0524D_apply(SF &t_21, art_Art_PortId_C(21), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit2_saturationLogic_channel2"), art_PortMode_Type_DataOut);
    unit2_saturationLogic_channel2 = (art_Port_C0524D) (&t_21);

    sfUpdateLoc(38);
    art_Port_C0524D unit2_saturationLogic_channel3;
    DeclNewart_Port_C0524D(t_22);
    art_Port_C0524D_apply(SF &t_22, art_Art_PortId_C(22), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit2_saturationLogic_channel3"), art_PortMode_Type_DataOut);
    unit2_saturationLogic_channel3 = (art_Port_C0524D) (&t_22);

    sfUpdateLoc(39);
    art_Port_C0524D unit2_saturationLogic_channel4;
    DeclNewart_Port_C0524D(t_23);
    art_Port_C0524D_apply(SF &t_23, art_Art_PortId_C(23), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread_unit2_saturationLogic_channel4"), art_PortMode_Type_DataOut);
    unit2_saturationLogic_channel4 = (art_Port_C0524D) (&t_23);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_25);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_25, Z_C(1000));
    DeclNewNone_CFD2B0(t_26);
    None_CFD2B0_apply(SF &t_26);
    DeclNewRTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge(t_24);
    RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_apply(SF &t_24, art_Art_BridgeId_C(0), (String) string("RTS_i_Instance_instrumentationMock_instrumentationMockThread"), (art_DispatchPropertyProtocol) (&t_25), (Option_0247A1) (&t_26), (art_Port_C0524D) unit1_temperatureLogic_channel1, (art_Port_C0524D) unit1_temperatureLogic_channel2, (art_Port_C0524D) unit1_temperatureLogic_channel3, (art_Port_C0524D) unit1_temperatureLogic_channel4, (art_Port_C0524D) unit1_pressureLogic_channel1, (art_Port_C0524D) unit1_pressureLogic_channel2, (art_Port_C0524D) unit1_pressureLogic_channel3, (art_Port_C0524D) unit1_pressureLogic_channel4, (art_Port_C0524D) unit1_saturationLogic_channel1, (art_Port_C0524D) unit1_saturationLogic_channel2, (art_Port_C0524D) unit1_saturationLogic_channel3, (art_Port_C0524D) unit1_saturationLogic_channel4, (art_Port_C0524D) unit2_temperatureLogic_channel1, (art_Port_C0524D) unit2_temperatureLogic_channel2, (art_Port_C0524D) unit2_temperatureLogic_channel3, (art_Port_C0524D) unit2_temperatureLogic_channel4, (art_Port_C0524D) unit2_pressureLogic_channel1, (art_Port_C0524D) unit2_pressureLogic_channel2, (art_Port_C0524D) unit2_pressureLogic_channel3, (art_Port_C0524D) unit2_pressureLogic_channel4, (art_Port_C0524D) unit2_saturationLogic_channel1, (art_Port_C0524D) unit2_saturationLogic_channel2, (art_Port_C0524D) unit2_saturationLogic_channel3, (art_Port_C0524D) unit2_saturationLogic_channel4);
    Type_assign(&_RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread, (&t_24), sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge));
  }
};

void RTS_Arch_init_RTS_i_Instance_eventControlMock_eventControlMockThread(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(73);
  {

    sfUpdateLoc(74);
    art_Port_C0524D manualActuatorInput1;
    DeclNewart_Port_C0524D(t_27);
    art_Port_C0524D_apply(SF &t_27, art_Art_PortId_C(24), (String) string("RTS_i_Instance_eventControlMock_eventControlMockThread_manualActuatorInput1"), art_PortMode_Type_DataOut);
    manualActuatorInput1 = (art_Port_C0524D) (&t_27);

    sfUpdateLoc(75);
    art_Port_C0524D manualActuatorInput2;
    DeclNewart_Port_C0524D(t_28);
    art_Port_C0524D_apply(SF &t_28, art_Art_PortId_C(25), (String) string("RTS_i_Instance_eventControlMock_eventControlMockThread_manualActuatorInput2"), art_PortMode_Type_DataOut);
    manualActuatorInput2 = (art_Port_C0524D) (&t_28);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_30);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_30, Z_C(1000));
    DeclNewNone_CFD2B0(t_31);
    None_CFD2B0_apply(SF &t_31);
    DeclNewRTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge(t_29);
    RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_apply(SF &t_29, art_Art_BridgeId_C(1), (String) string("RTS_i_Instance_eventControlMock_eventControlMockThread"), (art_DispatchPropertyProtocol) (&t_30), (Option_0247A1) (&t_31), (art_Port_C0524D) manualActuatorInput1, (art_Port_C0524D) manualActuatorInput2);
    Type_assign(&_RTS_Arch_RTS_i_Instance_eventControlMock_eventControlMockThread, (&t_29), sizeof(struct RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge));
  }
};

void RTS_Arch_init_RTS_i_Instance_actuatorsMock_actuatorsMockThread(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(87);
  {

    sfUpdateLoc(88);
    art_Port_C0524D tempPressureActuate;
    DeclNewart_Port_C0524D(t_32);
    art_Port_C0524D_apply(SF &t_32, art_Art_PortId_C(26), (String) string("RTS_i_Instance_actuatorsMock_actuatorsMockThread_tempPressureActuate"), art_PortMode_Type_DataIn);
    tempPressureActuate = (art_Port_C0524D) (&t_32);

    sfUpdateLoc(89);
    art_Port_C0524D saturationActuate;
    DeclNewart_Port_C0524D(t_33);
    art_Port_C0524D_apply(SF &t_33, art_Art_PortId_C(27), (String) string("RTS_i_Instance_actuatorsMock_actuatorsMockThread_saturationActuate"), art_PortMode_Type_DataIn);
    saturationActuate = (art_Port_C0524D) (&t_33);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_35);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_35, Z_C(1000));
    DeclNewNone_CFD2B0(t_36);
    None_CFD2B0_apply(SF &t_36);
    DeclNewRTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge(t_34);
    RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_apply(SF &t_34, art_Art_BridgeId_C(2), (String) string("RTS_i_Instance_actuatorsMock_actuatorsMockThread"), (art_DispatchPropertyProtocol) (&t_35), (Option_0247A1) (&t_36), (art_Port_C0524D) tempPressureActuate, (art_Port_C0524D) saturationActuate);
    Type_assign(&_RTS_Arch_RTS_i_Instance_actuatorsMock_actuatorsMockThread, (&t_34), sizeof(struct RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge));
  }
};

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(101);
  {

    sfUpdateLoc(102);
    art_Port_C0524D channel1;
    DeclNewart_Port_C0524D(t_37);
    art_Port_C0524D_apply(SF &t_37, art_Art_PortId_C(28), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_channel1"), art_PortMode_Type_DataIn);
    channel1 = (art_Port_C0524D) (&t_37);

    sfUpdateLoc(103);
    art_Port_C0524D channel2;
    DeclNewart_Port_C0524D(t_38);
    art_Port_C0524D_apply(SF &t_38, art_Art_PortId_C(29), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_channel2"), art_PortMode_Type_DataIn);
    channel2 = (art_Port_C0524D) (&t_38);

    sfUpdateLoc(104);
    art_Port_C0524D channel3;
    DeclNewart_Port_C0524D(t_39);
    art_Port_C0524D_apply(SF &t_39, art_Art_PortId_C(30), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_channel3"), art_PortMode_Type_DataIn);
    channel3 = (art_Port_C0524D) (&t_39);

    sfUpdateLoc(105);
    art_Port_C0524D channel4;
    DeclNewart_Port_C0524D(t_40);
    art_Port_C0524D_apply(SF &t_40, art_Art_PortId_C(31), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_channel4"), art_PortMode_Type_DataIn);
    channel4 = (art_Port_C0524D) (&t_40);

    sfUpdateLoc(106);
    art_Port_C0524D actuate;
    DeclNewart_Port_C0524D(t_41);
    art_Port_C0524D_apply(SF &t_41, art_Art_PortId_C(32), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_actuate"), art_PortMode_Type_DataOut);
    actuate = (art_Port_C0524D) (&t_41);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_43);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_43, Z_C(1000));
    DeclNewNone_CFD2B0(t_44);
    None_CFD2B0_apply(SF &t_44);
    DeclNewRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge(t_42);
    RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_apply(SF &t_42, art_Art_BridgeId_C(3), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic"), (art_DispatchPropertyProtocol) (&t_43), (Option_0247A1) (&t_44), (art_Port_C0524D) channel1, (art_Port_C0524D) channel2, (art_Port_C0524D) channel3, (art_Port_C0524D) channel4, (art_Port_C0524D) actuate);
    Type_assign(&_RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic, (&t_42), sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge));
  }
};

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(121);
  {

    sfUpdateLoc(122);
    art_Port_C0524D channel1;
    DeclNewart_Port_C0524D(t_45);
    art_Port_C0524D_apply(SF &t_45, art_Art_PortId_C(33), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_channel1"), art_PortMode_Type_DataIn);
    channel1 = (art_Port_C0524D) (&t_45);

    sfUpdateLoc(123);
    art_Port_C0524D channel2;
    DeclNewart_Port_C0524D(t_46);
    art_Port_C0524D_apply(SF &t_46, art_Art_PortId_C(34), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_channel2"), art_PortMode_Type_DataIn);
    channel2 = (art_Port_C0524D) (&t_46);

    sfUpdateLoc(124);
    art_Port_C0524D channel3;
    DeclNewart_Port_C0524D(t_47);
    art_Port_C0524D_apply(SF &t_47, art_Art_PortId_C(35), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_channel3"), art_PortMode_Type_DataIn);
    channel3 = (art_Port_C0524D) (&t_47);

    sfUpdateLoc(125);
    art_Port_C0524D channel4;
    DeclNewart_Port_C0524D(t_48);
    art_Port_C0524D_apply(SF &t_48, art_Art_PortId_C(36), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_channel4"), art_PortMode_Type_DataIn);
    channel4 = (art_Port_C0524D) (&t_48);

    sfUpdateLoc(126);
    art_Port_C0524D actuate;
    DeclNewart_Port_C0524D(t_49);
    art_Port_C0524D_apply(SF &t_49, art_Art_PortId_C(37), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_actuate"), art_PortMode_Type_DataOut);
    actuate = (art_Port_C0524D) (&t_49);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_51);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_51, Z_C(1000));
    DeclNewNone_CFD2B0(t_52);
    None_CFD2B0_apply(SF &t_52);
    DeclNewRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge(t_50);
    RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_apply(SF &t_50, art_Art_BridgeId_C(4), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic"), (art_DispatchPropertyProtocol) (&t_51), (Option_0247A1) (&t_52), (art_Port_C0524D) channel1, (art_Port_C0524D) channel2, (art_Port_C0524D) channel3, (art_Port_C0524D) channel4, (art_Port_C0524D) actuate);
    Type_assign(&_RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic, (&t_50), sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge));
  }
};

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(141);
  {

    sfUpdateLoc(142);
    art_Port_C0524D channel1;
    DeclNewart_Port_C0524D(t_53);
    art_Port_C0524D_apply(SF &t_53, art_Art_PortId_C(38), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_channel1"), art_PortMode_Type_DataIn);
    channel1 = (art_Port_C0524D) (&t_53);

    sfUpdateLoc(143);
    art_Port_C0524D channel2;
    DeclNewart_Port_C0524D(t_54);
    art_Port_C0524D_apply(SF &t_54, art_Art_PortId_C(39), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_channel2"), art_PortMode_Type_DataIn);
    channel2 = (art_Port_C0524D) (&t_54);

    sfUpdateLoc(144);
    art_Port_C0524D channel3;
    DeclNewart_Port_C0524D(t_55);
    art_Port_C0524D_apply(SF &t_55, art_Art_PortId_C(40), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_channel3"), art_PortMode_Type_DataIn);
    channel3 = (art_Port_C0524D) (&t_55);

    sfUpdateLoc(145);
    art_Port_C0524D channel4;
    DeclNewart_Port_C0524D(t_56);
    art_Port_C0524D_apply(SF &t_56, art_Art_PortId_C(41), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_channel4"), art_PortMode_Type_DataIn);
    channel4 = (art_Port_C0524D) (&t_56);

    sfUpdateLoc(146);
    art_Port_C0524D actuate;
    DeclNewart_Port_C0524D(t_57);
    art_Port_C0524D_apply(SF &t_57, art_Art_PortId_C(42), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_actuate"), art_PortMode_Type_DataOut);
    actuate = (art_Port_C0524D) (&t_57);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_59);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_59, Z_C(1000));
    DeclNewNone_CFD2B0(t_60);
    None_CFD2B0_apply(SF &t_60);
    DeclNewRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge(t_58);
    RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_apply(SF &t_58, art_Art_BridgeId_C(5), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic"), (art_DispatchPropertyProtocol) (&t_59), (Option_0247A1) (&t_60), (art_Port_C0524D) channel1, (art_Port_C0524D) channel2, (art_Port_C0524D) channel3, (art_Port_C0524D) channel4, (art_Port_C0524D) actuate);
    Type_assign(&_RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic, (&t_58), sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge));
  }
};

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(161);
  {

    sfUpdateLoc(162);
    art_Port_C0524D channel1;
    DeclNewart_Port_C0524D(t_61);
    art_Port_C0524D_apply(SF &t_61, art_Art_PortId_C(43), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_channel1"), art_PortMode_Type_DataIn);
    channel1 = (art_Port_C0524D) (&t_61);

    sfUpdateLoc(163);
    art_Port_C0524D channel2;
    DeclNewart_Port_C0524D(t_62);
    art_Port_C0524D_apply(SF &t_62, art_Art_PortId_C(44), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_channel2"), art_PortMode_Type_DataIn);
    channel2 = (art_Port_C0524D) (&t_62);

    sfUpdateLoc(164);
    art_Port_C0524D actuate;
    DeclNewart_Port_C0524D(t_63);
    art_Port_C0524D_apply(SF &t_63, art_Art_PortId_C(45), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_actuate"), art_PortMode_Type_DataOut);
    actuate = (art_Port_C0524D) (&t_63);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_65);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_65, Z_C(1000));
    DeclNewNone_CFD2B0(t_66);
    None_CFD2B0_apply(SF &t_66);
    DeclNewRTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge(t_64);
    RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_apply(SF &t_64, art_Art_BridgeId_C(6), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic"), (art_DispatchPropertyProtocol) (&t_65), (Option_0247A1) (&t_66), (art_Port_C0524D) channel1, (art_Port_C0524D) channel2, (art_Port_C0524D) actuate);
    Type_assign(&_RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic, (&t_64), sizeof(struct RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge));
  }
};

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(177);
  {

    sfUpdateLoc(178);
    art_Port_C0524D channel1;
    DeclNewart_Port_C0524D(t_67);
    art_Port_C0524D_apply(SF &t_67, art_Art_PortId_C(46), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_channel1"), art_PortMode_Type_DataIn);
    channel1 = (art_Port_C0524D) (&t_67);

    sfUpdateLoc(179);
    art_Port_C0524D channel2;
    DeclNewart_Port_C0524D(t_68);
    art_Port_C0524D_apply(SF &t_68, art_Art_PortId_C(47), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_channel2"), art_PortMode_Type_DataIn);
    channel2 = (art_Port_C0524D) (&t_68);

    sfUpdateLoc(180);
    art_Port_C0524D channel3;
    DeclNewart_Port_C0524D(t_69);
    art_Port_C0524D_apply(SF &t_69, art_Art_PortId_C(48), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_channel3"), art_PortMode_Type_DataIn);
    channel3 = (art_Port_C0524D) (&t_69);

    sfUpdateLoc(181);
    art_Port_C0524D channel4;
    DeclNewart_Port_C0524D(t_70);
    art_Port_C0524D_apply(SF &t_70, art_Art_PortId_C(49), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_channel4"), art_PortMode_Type_DataIn);
    channel4 = (art_Port_C0524D) (&t_70);

    sfUpdateLoc(182);
    art_Port_C0524D actuate;
    DeclNewart_Port_C0524D(t_71);
    art_Port_C0524D_apply(SF &t_71, art_Art_PortId_C(50), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_actuate"), art_PortMode_Type_DataOut);
    actuate = (art_Port_C0524D) (&t_71);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_73);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_73, Z_C(1000));
    DeclNewNone_CFD2B0(t_74);
    None_CFD2B0_apply(SF &t_74);
    DeclNewRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge(t_72);
    RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_apply(SF &t_72, art_Art_BridgeId_C(7), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic"), (art_DispatchPropertyProtocol) (&t_73), (Option_0247A1) (&t_74), (art_Port_C0524D) channel1, (art_Port_C0524D) channel2, (art_Port_C0524D) channel3, (art_Port_C0524D) channel4, (art_Port_C0524D) actuate);
    Type_assign(&_RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic, (&t_72), sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge));
  }
};

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(197);
  {

    sfUpdateLoc(198);
    art_Port_C0524D channel1;
    DeclNewart_Port_C0524D(t_75);
    art_Port_C0524D_apply(SF &t_75, art_Art_PortId_C(51), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_channel1"), art_PortMode_Type_DataIn);
    channel1 = (art_Port_C0524D) (&t_75);

    sfUpdateLoc(199);
    art_Port_C0524D channel2;
    DeclNewart_Port_C0524D(t_76);
    art_Port_C0524D_apply(SF &t_76, art_Art_PortId_C(52), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_channel2"), art_PortMode_Type_DataIn);
    channel2 = (art_Port_C0524D) (&t_76);

    sfUpdateLoc(200);
    art_Port_C0524D channel3;
    DeclNewart_Port_C0524D(t_77);
    art_Port_C0524D_apply(SF &t_77, art_Art_PortId_C(53), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_channel3"), art_PortMode_Type_DataIn);
    channel3 = (art_Port_C0524D) (&t_77);

    sfUpdateLoc(201);
    art_Port_C0524D channel4;
    DeclNewart_Port_C0524D(t_78);
    art_Port_C0524D_apply(SF &t_78, art_Art_PortId_C(54), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_channel4"), art_PortMode_Type_DataIn);
    channel4 = (art_Port_C0524D) (&t_78);

    sfUpdateLoc(202);
    art_Port_C0524D actuate;
    DeclNewart_Port_C0524D(t_79);
    art_Port_C0524D_apply(SF &t_79, art_Art_PortId_C(55), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_actuate"), art_PortMode_Type_DataOut);
    actuate = (art_Port_C0524D) (&t_79);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_81);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_81, Z_C(1000));
    DeclNewNone_CFD2B0(t_82);
    None_CFD2B0_apply(SF &t_82);
    DeclNewRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge(t_80);
    RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_apply(SF &t_80, art_Art_BridgeId_C(8), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic"), (art_DispatchPropertyProtocol) (&t_81), (Option_0247A1) (&t_82), (art_Port_C0524D) channel1, (art_Port_C0524D) channel2, (art_Port_C0524D) channel3, (art_Port_C0524D) channel4, (art_Port_C0524D) actuate);
    Type_assign(&_RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic, (&t_80), sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge));
  }
};

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(217);
  {

    sfUpdateLoc(218);
    art_Port_C0524D channel1;
    DeclNewart_Port_C0524D(t_83);
    art_Port_C0524D_apply(SF &t_83, art_Art_PortId_C(56), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_channel1"), art_PortMode_Type_DataIn);
    channel1 = (art_Port_C0524D) (&t_83);

    sfUpdateLoc(219);
    art_Port_C0524D channel2;
    DeclNewart_Port_C0524D(t_84);
    art_Port_C0524D_apply(SF &t_84, art_Art_PortId_C(57), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_channel2"), art_PortMode_Type_DataIn);
    channel2 = (art_Port_C0524D) (&t_84);

    sfUpdateLoc(220);
    art_Port_C0524D channel3;
    DeclNewart_Port_C0524D(t_85);
    art_Port_C0524D_apply(SF &t_85, art_Art_PortId_C(58), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_channel3"), art_PortMode_Type_DataIn);
    channel3 = (art_Port_C0524D) (&t_85);

    sfUpdateLoc(221);
    art_Port_C0524D channel4;
    DeclNewart_Port_C0524D(t_86);
    art_Port_C0524D_apply(SF &t_86, art_Art_PortId_C(59), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_channel4"), art_PortMode_Type_DataIn);
    channel4 = (art_Port_C0524D) (&t_86);

    sfUpdateLoc(222);
    art_Port_C0524D actuate;
    DeclNewart_Port_C0524D(t_87);
    art_Port_C0524D_apply(SF &t_87, art_Art_PortId_C(60), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_actuate"), art_PortMode_Type_DataOut);
    actuate = (art_Port_C0524D) (&t_87);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_89);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_89, Z_C(1000));
    DeclNewNone_CFD2B0(t_90);
    None_CFD2B0_apply(SF &t_90);
    DeclNewRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge(t_88);
    RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_apply(SF &t_88, art_Art_BridgeId_C(9), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic"), (art_DispatchPropertyProtocol) (&t_89), (Option_0247A1) (&t_90), (art_Port_C0524D) channel1, (art_Port_C0524D) channel2, (art_Port_C0524D) channel3, (art_Port_C0524D) channel4, (art_Port_C0524D) actuate);
    Type_assign(&_RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic, (&t_88), sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge));
  }
};

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(237);
  {

    sfUpdateLoc(238);
    art_Port_C0524D channel1;
    DeclNewart_Port_C0524D(t_91);
    art_Port_C0524D_apply(SF &t_91, art_Art_PortId_C(61), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_channel1"), art_PortMode_Type_DataIn);
    channel1 = (art_Port_C0524D) (&t_91);

    sfUpdateLoc(239);
    art_Port_C0524D channel2;
    DeclNewart_Port_C0524D(t_92);
    art_Port_C0524D_apply(SF &t_92, art_Art_PortId_C(62), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_channel2"), art_PortMode_Type_DataIn);
    channel2 = (art_Port_C0524D) (&t_92);

    sfUpdateLoc(240);
    art_Port_C0524D actuate;
    DeclNewart_Port_C0524D(t_93);
    art_Port_C0524D_apply(SF &t_93, art_Art_PortId_C(63), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_actuate"), art_PortMode_Type_DataOut);
    actuate = (art_Port_C0524D) (&t_93);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_95);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_95, Z_C(1000));
    DeclNewNone_CFD2B0(t_96);
    None_CFD2B0_apply(SF &t_96);
    DeclNewRTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge(t_94);
    RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_apply(SF &t_94, art_Art_BridgeId_C(10), (String) string("RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic"), (art_DispatchPropertyProtocol) (&t_95), (Option_0247A1) (&t_96), (art_Port_C0524D) channel1, (art_Port_C0524D) channel2, (art_Port_C0524D) actuate);
    Type_assign(&_RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic, (&t_94), sizeof(struct RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge));
  }
};

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(253);
  {

    sfUpdateLoc(254);
    art_Port_C0524D channel1;
    DeclNewart_Port_C0524D(t_97);
    art_Port_C0524D_apply(SF &t_97, art_Art_PortId_C(64), (String) string("RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_channel1"), art_PortMode_Type_DataIn);
    channel1 = (art_Port_C0524D) (&t_97);

    sfUpdateLoc(255);
    art_Port_C0524D channel2;
    DeclNewart_Port_C0524D(t_98);
    art_Port_C0524D_apply(SF &t_98, art_Art_PortId_C(65), (String) string("RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_channel2"), art_PortMode_Type_DataIn);
    channel2 = (art_Port_C0524D) (&t_98);

    sfUpdateLoc(256);
    art_Port_C0524D actuate;
    DeclNewart_Port_C0524D(t_99);
    art_Port_C0524D_apply(SF &t_99, art_Art_PortId_C(66), (String) string("RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_actuate"), art_PortMode_Type_DataOut);
    actuate = (art_Port_C0524D) (&t_99);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_101);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_101, Z_C(1000));
    DeclNewNone_CFD2B0(t_102);
    None_CFD2B0_apply(SF &t_102);
    DeclNewRTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge(t_100);
    RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_apply(SF &t_100, art_Art_BridgeId_C(11), (String) string("RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic"), (art_DispatchPropertyProtocol) (&t_101), (Option_0247A1) (&t_102), (art_Port_C0524D) channel1, (art_Port_C0524D) channel2, (art_Port_C0524D) actuate);
    Type_assign(&_RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic, (&t_100), sizeof(struct RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge));
  }
};

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(269);
  {

    sfUpdateLoc(270);
    art_Port_C0524D input;
    DeclNewart_Port_C0524D(t_103);
    art_Port_C0524D_apply(SF &t_103, art_Art_PortId_C(67), (String) string("RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_input"), art_PortMode_Type_DataIn);
    input = (art_Port_C0524D) (&t_103);

    sfUpdateLoc(271);
    art_Port_C0524D manualActuatorInput;
    DeclNewart_Port_C0524D(t_104);
    art_Port_C0524D_apply(SF &t_104, art_Art_PortId_C(68), (String) string("RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_manualActuatorInput"), art_PortMode_Type_DataIn);
    manualActuatorInput = (art_Port_C0524D) (&t_104);

    sfUpdateLoc(272);
    art_Port_C0524D output;
    DeclNewart_Port_C0524D(t_105);
    art_Port_C0524D_apply(SF &t_105, art_Art_PortId_C(69), (String) string("RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_output"), art_PortMode_Type_DataOut);
    output = (art_Port_C0524D) (&t_105);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_107);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_107, Z_C(1000));
    DeclNewNone_CFD2B0(t_108);
    None_CFD2B0_apply(SF &t_108);
    DeclNewRTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge(t_106);
    RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_apply(SF &t_106, art_Art_BridgeId_C(12), (String) string("RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator"), (art_DispatchPropertyProtocol) (&t_107), (Option_0247A1) (&t_108), (art_Port_C0524D) input, (art_Port_C0524D) manualActuatorInput, (art_Port_C0524D) output);
    Type_assign(&_RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator, (&t_106), sizeof(struct RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge));
  }
};

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(285);
  {

    sfUpdateLoc(286);
    art_Port_C0524D channel1;
    DeclNewart_Port_C0524D(t_109);
    art_Port_C0524D_apply(SF &t_109, art_Art_PortId_C(70), (String) string("RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_channel1"), art_PortMode_Type_DataIn);
    channel1 = (art_Port_C0524D) (&t_109);

    sfUpdateLoc(287);
    art_Port_C0524D channel2;
    DeclNewart_Port_C0524D(t_110);
    art_Port_C0524D_apply(SF &t_110, art_Art_PortId_C(71), (String) string("RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_channel2"), art_PortMode_Type_DataIn);
    channel2 = (art_Port_C0524D) (&t_110);

    sfUpdateLoc(288);
    art_Port_C0524D actuate;
    DeclNewart_Port_C0524D(t_111);
    art_Port_C0524D_apply(SF &t_111, art_Art_PortId_C(72), (String) string("RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_actuate"), art_PortMode_Type_DataOut);
    actuate = (art_Port_C0524D) (&t_111);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_113);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_113, Z_C(1000));
    DeclNewNone_CFD2B0(t_114);
    None_CFD2B0_apply(SF &t_114);
    DeclNewRTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge(t_112);
    RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_apply(SF &t_112, art_Art_BridgeId_C(13), (String) string("RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic"), (art_DispatchPropertyProtocol) (&t_113), (Option_0247A1) (&t_114), (art_Port_C0524D) channel1, (art_Port_C0524D) channel2, (art_Port_C0524D) actuate);
    Type_assign(&_RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic, (&t_112), sizeof(struct RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge));
  }
};

void RTS_Arch_init_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(301);
  {

    sfUpdateLoc(302);
    art_Port_C0524D input;
    DeclNewart_Port_C0524D(t_115);
    art_Port_C0524D_apply(SF &t_115, art_Art_PortId_C(73), (String) string("RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_input"), art_PortMode_Type_DataIn);
    input = (art_Port_C0524D) (&t_115);

    sfUpdateLoc(303);
    art_Port_C0524D manualActuatorInput;
    DeclNewart_Port_C0524D(t_116);
    art_Port_C0524D_apply(SF &t_116, art_Art_PortId_C(74), (String) string("RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_manualActuatorInput"), art_PortMode_Type_DataIn);
    manualActuatorInput = (art_Port_C0524D) (&t_116);

    sfUpdateLoc(304);
    art_Port_C0524D output;
    DeclNewart_Port_C0524D(t_117);
    art_Port_C0524D_apply(SF &t_117, art_Art_PortId_C(75), (String) string("RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_output"), art_PortMode_Type_DataOut);
    output = (art_Port_C0524D) (&t_117);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_119);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_119, Z_C(1000));
    DeclNewNone_CFD2B0(t_120);
    None_CFD2B0_apply(SF &t_120);
    DeclNewRTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge(t_118);
    RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_apply(SF &t_118, art_Art_BridgeId_C(14), (String) string("RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator"), (art_DispatchPropertyProtocol) (&t_119), (Option_0247A1) (&t_120), (art_Port_C0524D) input, (art_Port_C0524D) manualActuatorInput, (art_Port_C0524D) output);
    Type_assign(&_RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator, (&t_118), sizeof(struct RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge));
  }
};

void RTS_Arch_init_ad(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(318);
  {

    sfUpdateLoc(319);
    {
      RTS_TranspilerUtil_touch(SF_LAST);
    }
    STATIC_ASSERT(15 <= MaxIS_058E6F, "Insufficient maximum for IS[art.Art.BridgeId, art.Bridge] elements.");
    DeclNewIS_058E6F(t_122);
    t_122.size = (int8_t) 15;
    IS_058E6F_up(&t_122, 0, (art_Bridge) RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST));
    IS_058E6F_up(&t_122, 1, (art_Bridge) RTS_Arch_RTS_i_Instance_eventControlMock_eventControlMockThread(SF_LAST));
    IS_058E6F_up(&t_122, 2, (art_Bridge) RTS_Arch_RTS_i_Instance_actuatorsMock_actuatorsMockThread(SF_LAST));
    IS_058E6F_up(&t_122, 3, (art_Bridge) RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic(SF_LAST));
    IS_058E6F_up(&t_122, 4, (art_Bridge) RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic(SF_LAST));
    IS_058E6F_up(&t_122, 5, (art_Bridge) RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic(SF_LAST));
    IS_058E6F_up(&t_122, 6, (art_Bridge) RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic(SF_LAST));
    IS_058E6F_up(&t_122, 7, (art_Bridge) RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic(SF_LAST));
    IS_058E6F_up(&t_122, 8, (art_Bridge) RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic(SF_LAST));
    IS_058E6F_up(&t_122, 9, (art_Bridge) RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic(SF_LAST));
    IS_058E6F_up(&t_122, 10, (art_Bridge) RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic(SF_LAST));
    IS_058E6F_up(&t_122, 11, (art_Bridge) RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic(SF_LAST));
    IS_058E6F_up(&t_122, 12, (art_Bridge) RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator(SF_LAST));
    IS_058E6F_up(&t_122, 13, (art_Bridge) RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic(SF_LAST));
    IS_058E6F_up(&t_122, 14, (art_Bridge) RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator(SF_LAST));
    STATIC_ASSERT(38 <= MaxIS_996770, "Insufficient maximum for IS[art.Art.ConnectionId, art.UConnection] elements.");
    DeclNewIS_996770(t_123);
    t_123.size = (int8_t) 38;
    DeclNewart_Connection(t_124);
    art_Connection_apply(SF &t_124, (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_actuate_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic(SF_LAST)), (art_UPort) RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_channel1_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic(SF_LAST)));
    IS_996770_up(&t_123, 0, (art_UConnection) (&t_124));
    DeclNewart_Connection(t_125);
    art_Connection_apply(SF &t_125, (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_actuate_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic(SF_LAST)), (art_UPort) RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_channel2_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic(SF_LAST)));
    IS_996770_up(&t_123, 1, (art_UConnection) (&t_125));
    DeclNewart_Connection(t_126);
    art_Connection_apply(SF &t_126, (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_actuate_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic(SF_LAST)), (art_UPort) RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_channel1_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic(SF_LAST)));
    IS_996770_up(&t_123, 2, (art_UConnection) (&t_126));
    DeclNewart_Connection(t_127);
    art_Connection_apply(SF &t_127, (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_actuate_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic(SF_LAST)), (art_UPort) RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_channel2_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic(SF_LAST)));
    IS_996770_up(&t_123, 3, (art_UConnection) (&t_127));
    DeclNewart_Connection(t_128);
    art_Connection_apply(SF &t_128, (art_UPort) RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_actuate_(RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic(SF_LAST)), (art_UPort) RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_input_(RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator(SF_LAST)));
    IS_996770_up(&t_123, 4, (art_UConnection) (&t_128));
    DeclNewart_Connection(t_129);
    art_Connection_apply(SF &t_129, (art_UPort) RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_actuate_(RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic(SF_LAST)), (art_UPort) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_input_(RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator(SF_LAST)));
    IS_996770_up(&t_123, 5, (art_UConnection) (&t_129));
    DeclNewart_Connection(t_130);
    art_Connection_apply(SF &t_130, (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_actuate_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic(SF_LAST)), (art_UPort) RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_channel1_(RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic(SF_LAST)));
    IS_996770_up(&t_123, 6, (art_UConnection) (&t_130));
    DeclNewart_Connection(t_131);
    art_Connection_apply(SF &t_131, (art_UPort) RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_actuate_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic(SF_LAST)), (art_UPort) RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_channel1_(RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic(SF_LAST)));
    IS_996770_up(&t_123, 7, (art_UConnection) (&t_131));
    DeclNewart_Connection(t_132);
    art_Connection_apply(SF &t_132, (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_actuate_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic(SF_LAST)), (art_UPort) RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_channel2_(RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic(SF_LAST)));
    IS_996770_up(&t_123, 8, (art_UConnection) (&t_132));
    DeclNewart_Connection(t_133);
    art_Connection_apply(SF &t_133, (art_UPort) RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_actuate_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic(SF_LAST)), (art_UPort) RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_channel2_(RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic(SF_LAST)));
    IS_996770_up(&t_123, 9, (art_UConnection) (&t_133));
    DeclNewart_Connection(t_134);
    art_Connection_apply(SF &t_134, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel1_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_channel1_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 10, (art_UConnection) (&t_134));
    DeclNewart_Connection(t_135);
    art_Connection_apply(SF &t_135, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel2_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_channel2_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 11, (art_UConnection) (&t_135));
    DeclNewart_Connection(t_136);
    art_Connection_apply(SF &t_136, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel3_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_channel3_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 12, (art_UConnection) (&t_136));
    DeclNewart_Connection(t_137);
    art_Connection_apply(SF &t_137, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_temperatureLogic_channel4_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_channel4_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 13, (art_UConnection) (&t_137));
    DeclNewart_Connection(t_138);
    art_Connection_apply(SF &t_138, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel1_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_channel1_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 14, (art_UConnection) (&t_138));
    DeclNewart_Connection(t_139);
    art_Connection_apply(SF &t_139, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel2_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_channel2_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 15, (art_UConnection) (&t_139));
    DeclNewart_Connection(t_140);
    art_Connection_apply(SF &t_140, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel3_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_channel3_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 16, (art_UConnection) (&t_140));
    DeclNewart_Connection(t_141);
    art_Connection_apply(SF &t_141, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_pressureLogic_channel4_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_channel4_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 17, (art_UConnection) (&t_141));
    DeclNewart_Connection(t_142);
    art_Connection_apply(SF &t_142, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel1_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_channel1_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 18, (art_UConnection) (&t_142));
    DeclNewart_Connection(t_143);
    art_Connection_apply(SF &t_143, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel2_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_channel2_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 19, (art_UConnection) (&t_143));
    DeclNewart_Connection(t_144);
    art_Connection_apply(SF &t_144, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel3_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_channel3_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 20, (art_UConnection) (&t_144));
    DeclNewart_Connection(t_145);
    art_Connection_apply(SF &t_145, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit1_saturationLogic_channel4_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_channel4_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 21, (art_UConnection) (&t_145));
    DeclNewart_Connection(t_146);
    art_Connection_apply(SF &t_146, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel1_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_channel1_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 22, (art_UConnection) (&t_146));
    DeclNewart_Connection(t_147);
    art_Connection_apply(SF &t_147, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel2_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_channel2_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 23, (art_UConnection) (&t_147));
    DeclNewart_Connection(t_148);
    art_Connection_apply(SF &t_148, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel3_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_channel3_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 24, (art_UConnection) (&t_148));
    DeclNewart_Connection(t_149);
    art_Connection_apply(SF &t_149, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_temperatureLogic_channel4_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_channel4_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 25, (art_UConnection) (&t_149));
    DeclNewart_Connection(t_150);
    art_Connection_apply(SF &t_150, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel1_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_channel1_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 26, (art_UConnection) (&t_150));
    DeclNewart_Connection(t_151);
    art_Connection_apply(SF &t_151, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel2_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_channel2_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 27, (art_UConnection) (&t_151));
    DeclNewart_Connection(t_152);
    art_Connection_apply(SF &t_152, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel3_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_channel3_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 28, (art_UConnection) (&t_152));
    DeclNewart_Connection(t_153);
    art_Connection_apply(SF &t_153, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_pressureLogic_channel4_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_channel4_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 29, (art_UConnection) (&t_153));
    DeclNewart_Connection(t_154);
    art_Connection_apply(SF &t_154, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel1_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_channel1_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 30, (art_UConnection) (&t_154));
    DeclNewart_Connection(t_155);
    art_Connection_apply(SF &t_155, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel2_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_channel2_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 31, (art_UConnection) (&t_155));
    DeclNewart_Connection(t_156);
    art_Connection_apply(SF &t_156, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel3_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_channel3_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 32, (art_UConnection) (&t_156));
    DeclNewart_Connection(t_157);
    art_Connection_apply(SF &t_157, (art_UPort) RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_unit2_saturationLogic_channel4_(RTS_Arch_RTS_i_Instance_instrumentationMock_instrumentationMockThread(SF_LAST)), (art_UPort) RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_channel4_(RTS_Arch_RTS_i_Instance_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic(SF_LAST)));
    IS_996770_up(&t_123, 33, (art_UConnection) (&t_157));
    DeclNewart_Connection(t_158);
    art_Connection_apply(SF &t_158, (art_UPort) RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_manualActuatorInput1_(RTS_Arch_RTS_i_Instance_eventControlMock_eventControlMockThread(SF_LAST)), (art_UPort) RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_manualActuatorInput_(RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator(SF_LAST)));
    IS_996770_up(&t_123, 34, (art_UConnection) (&t_158));
    DeclNewart_Connection(t_159);
    art_Connection_apply(SF &t_159, (art_UPort) RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_manualActuatorInput2_(RTS_Arch_RTS_i_Instance_eventControlMock_eventControlMockThread(SF_LAST)), (art_UPort) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_manualActuatorInput_(RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator(SF_LAST)));
    IS_996770_up(&t_123, 35, (art_UConnection) (&t_159));
    DeclNewart_Connection(t_160);
    art_Connection_apply(SF &t_160, (art_UPort) RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_output_(RTS_Arch_RTS_i_Instance_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator(SF_LAST)), (art_UPort) RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_tempPressureActuate_(RTS_Arch_RTS_i_Instance_actuatorsMock_actuatorsMockThread(SF_LAST)));
    IS_996770_up(&t_123, 36, (art_UConnection) (&t_160));
    DeclNewart_Connection(t_161);
    art_Connection_apply(SF &t_161, (art_UPort) RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_output_(RTS_Arch_RTS_i_Instance_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator(SF_LAST)), (art_UPort) RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_saturationActuate_(RTS_Arch_RTS_i_Instance_actuatorsMock_actuatorsMockThread(SF_LAST)));
    IS_996770_up(&t_123, 37, (art_UConnection) (&t_161));
    DeclNewart_ArchitectureDescription(t_121);
    art_ArchitectureDescription_apply(SF &t_121, (IS_058E6F) (&t_122), (IS_996770) (&t_123));
    Type_assign(&_RTS_Arch_ad, (&t_121), sizeof(struct art_ArchitectureDescription));
  }
};