#include <types.h>

size_t sizeOf(Type t) {
  TYPE type = t->type;
  switch (type) {
    case TTuple2_04A4F6: return sizeof(struct Tuple2_04A4F6); // ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))
    case TTuple2_0862A0: return sizeof(struct Tuple2_0862A0); // (B, B)
    case TTuple12_3FBE62: return sizeof(struct Tuple12_3FBE62); // (B, B, B, B, B, B, B, B, B, B, B, B)
    case TTuple2_275908: return sizeof(struct Tuple2_275908); // (String, Option[art.DataContent])
    case TTuple2_E0098E: return sizeof(struct Tuple2_E0098E); // (String, art.Art.BridgeId)
    case TTuple2_A29DBA: return sizeof(struct Tuple2_A29DBA); // (Z, (Z, art.ArtSlangMessage))
    case TTuple2_EC3B57: return sizeof(struct Tuple2_EC3B57); // (Z, Z)
    case TTuple2_4DFC06: return sizeof(struct Tuple2_4DFC06); // (Z, art.ArtSlangMessage)
    case TTuple4_FA9F23: return sizeof(struct Tuple4_FA9F23); // (art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)
    case TIS_0C7B5E: return sizeof(struct IS_0C7B5E); // IS[Z, ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))]
    case TIS_7DA5C1: return sizeof(struct IS_7DA5C1); // IS[Z, (B, B)]
    case TIS_39643F: return sizeof(struct IS_39643F); // IS[Z, (String, Option[art.DataContent])]
    case TIS_588B23: return sizeof(struct IS_588B23); // IS[Z, (String, art.Art.BridgeId)]
    case TIS_4D6DA5: return sizeof(struct IS_4D6DA5); // IS[Z, (Z, art.ArtSlangMessage)]
    case TIS_948B60: return sizeof(struct IS_948B60); // IS[Z, String]
    case TIS_FDDCB6: return sizeof(struct IS_FDDCB6); // IS[Z, art.Art.BridgeId]
    case TIS_D10119: return sizeof(struct IS_D10119); // IS[Z, art.Art.PortId]
    case TIS_820232: return sizeof(struct IS_820232); // IS[Z, art.UPort]
    case TIS_5AA467: return sizeof(struct IS_5AA467); // IS[Z, art.scheduling.static.Schedule.Slot]
    case TIS_058E6F: return sizeof(struct IS_058E6F); // IS[art.Art.BridgeId, art.Bridge]
    case TIS_7267A0: return sizeof(struct IS_7267A0); // IS[art.Art.ConnectionId, art.Art.PortId]
    case TIS_996770: return sizeof(struct IS_996770); // IS[art.Art.ConnectionId, art.UConnection]
    case TMBox2_37E193: return sizeof(struct MBox2_37E193); // MBox2[art.Art.PortId, Option[art.DataContent]]
    case TMBox2_43CC67: return sizeof(struct MBox2_43CC67); // MBox2[art.Art.PortId, art.DataContent]
    case TMNone_6579ED: return sizeof(struct MNone_6579ED); // MNone[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)]
    case TMS_83D5EB: return sizeof(struct MS_83D5EB); // MS[Z, Option[art.Bridge]]
    case TMS_A7EF1B: return sizeof(struct MS_A7EF1B); // MS[art.Art.BridgeId, S64]
    case TMS_CA6EDB: return sizeof(struct MS_CA6EDB); // MS[art.Art.PortId, IS[art.Art.ConnectionId, art.Art.PortId]]
    case TMS_9C0286: return sizeof(struct MS_9C0286); // MS[art.Art.PortId, Option[art.UPort]]
    case TMSome_30C95B: return sizeof(struct MSome_30C95B); // MSome[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)]
    case TMap_EB5A91: return sizeof(struct Map_EB5A91); // Map[String, art.Art.BridgeId]
    case TMap_9C6840: return sizeof(struct Map_9C6840); // Map[Z, art.ArtSlangMessage]
    case TNone_7E20F8: return sizeof(struct None_7E20F8); // None[B]
    case TNone_00347F: return sizeof(struct None_00347F); // None[IS[Z, art.Art.BridgeId]]
    case TNone_CFD2B0: return sizeof(struct None_CFD2B0); // None[IS[Z, art.Art.PortId]]
    case TNone_8BED90: return sizeof(struct None_8BED90); // None[RTS.Actuation.Actuator_i_Initialization_Api]
    case TNone_52D9AF: return sizeof(struct None_52D9AF); // None[RTS.Actuation.Actuator_i_Operational_Api]
    case TNone_080F67: return sizeof(struct None_080F67); // None[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]
    case TNone_37A019: return sizeof(struct None_37A019); // None[RTS.Actuation.CoincidenceLogic_i_Operational_Api]
    case TNone_1FE67C: return sizeof(struct None_1FE67C); // None[RTS.Actuation.OrLogic_i_Initialization_Api]
    case TNone_1AA45D: return sizeof(struct None_1AA45D); // None[RTS.Actuation.OrLogic_i_Operational_Api]
    case TNone_8D8A06: return sizeof(struct None_8D8A06); // None[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api]
    case TNone_C050C2: return sizeof(struct None_C050C2); // None[RTS.Actuators.ActuatorsMockThread_i_Operational_Api]
    case TNone_9803C0: return sizeof(struct None_9803C0); // None[RTS.Cli.RunChoice.Type]
    case TNone_5F3A7A: return sizeof(struct None_5F3A7A); // None[RTS.Cli.RunTopOption]
    case TNone_2939E3: return sizeof(struct None_2939E3); // None[RTS.EventControl.EventControlMockThread_i_Initialization_Api]
    case TNone_1A60DD: return sizeof(struct None_1A60DD); // None[RTS.EventControl.EventControlMockThread_i_Operational_Api]
    case TNone_8D6171: return sizeof(struct None_8D6171); // None[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]
    case TNone_174952: return sizeof(struct None_174952); // None[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]
    case TNone_76463B: return sizeof(struct None_76463B); // None[Z]
    case TNone_D34309: return sizeof(struct None_D34309); // None[art.Art.BridgeId]
    case TNone_B2694B: return sizeof(struct None_B2694B); // None[art.Art.PortId]
    case TNone_50AF88: return sizeof(struct None_50AF88); // None[art.ArtSlangMessage]
    case TNone_734370: return sizeof(struct None_734370); // None[art.Bridge]
    case TNone_964667: return sizeof(struct None_964667); // None[art.DataContent]
    case TNone_39BC5F: return sizeof(struct None_39BC5F); // None[art.UPort]
    case TNone_336F0A: return sizeof(struct None_336F0A); // None[art.scheduling.static.Explorer.ScheduleState]
    case TRTS_Actuation_Actuator_i_Initialization_Api: return sizeof(struct RTS_Actuation_Actuator_i_Initialization_Api); // RTS.Actuation.Actuator_i_Initialization_Api
    case TRTS_Actuation_Actuator_i_Operational_Api: return sizeof(struct RTS_Actuation_Actuator_i_Operational_Api); // RTS.Actuation.Actuator_i_Operational_Api
    case TRTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge: return sizeof(struct RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge); // RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge
    case TRTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints: return sizeof(struct RTS_Actuation_Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge_EntryPoints); // RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.EntryPoints
    case TRTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge: return sizeof(struct RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge); // RTS.Actuation.Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge
    case TRTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_EntryPoints: return sizeof(struct RTS_Actuation_Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge_EntryPoints); // RTS.Actuation.Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge.EntryPoints
    case TRTS_Actuation_CoincidenceLogic_i_Initialization_Api: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_Initialization_Api); // RTS.Actuation.CoincidenceLogic_i_Initialization_Api
    case TRTS_Actuation_CoincidenceLogic_i_Operational_Api: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_Operational_Api); // RTS.Actuation.CoincidenceLogic_i_Operational_Api
    case TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge); // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge
    case TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge_EntryPoints); // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge.EntryPoints
    case TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge); // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge
    case TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_EntryPoints: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge_EntryPoints); // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge.EntryPoints
    case TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge); // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge
    case TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_EntryPoints: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge_EntryPoints); // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge.EntryPoints
    case TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge); // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge
    case TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_EntryPoints: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge_EntryPoints); // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge.EntryPoints
    case TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge); // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge
    case TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_EntryPoints: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge_EntryPoints); // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge.EntryPoints
    case TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge); // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge
    case TRTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_EntryPoints: return sizeof(struct RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge_EntryPoints); // RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge.EntryPoints
    case TRTS_Actuation_OrLogic_i_Initialization_Api: return sizeof(struct RTS_Actuation_OrLogic_i_Initialization_Api); // RTS.Actuation.OrLogic_i_Initialization_Api
    case TRTS_Actuation_OrLogic_i_Operational_Api: return sizeof(struct RTS_Actuation_OrLogic_i_Operational_Api); // RTS.Actuation.OrLogic_i_Operational_Api
    case TRTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge: return sizeof(struct RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge); // RTS.Actuation.OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge
    case TRTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_EntryPoints: return sizeof(struct RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge_EntryPoints); // RTS.Actuation.OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge.EntryPoints
    case TRTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge: return sizeof(struct RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge); // RTS.Actuation.OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge
    case TRTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_EntryPoints: return sizeof(struct RTS_Actuation_OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge_EntryPoints); // RTS.Actuation.OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge.EntryPoints
    case TRTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge: return sizeof(struct RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge); // RTS.Actuation.OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge
    case TRTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_EntryPoints: return sizeof(struct RTS_Actuation_OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge_EntryPoints); // RTS.Actuation.OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge.EntryPoints
    case TRTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge: return sizeof(struct RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge); // RTS.Actuation.OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge
    case TRTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints: return sizeof(struct RTS_Actuation_OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge_EntryPoints); // RTS.Actuation.OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge.EntryPoints
    case TRTS_Actuators_ActuatorsMockThread_i_Initialization_Api: return sizeof(struct RTS_Actuators_ActuatorsMockThread_i_Initialization_Api); // RTS.Actuators.ActuatorsMockThread_i_Initialization_Api
    case TRTS_Actuators_ActuatorsMockThread_i_Operational_Api: return sizeof(struct RTS_Actuators_ActuatorsMockThread_i_Operational_Api); // RTS.Actuators.ActuatorsMockThread_i_Operational_Api
    case TRTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge: return sizeof(struct RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge); // RTS.Actuators.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge
    case TRTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints: return sizeof(struct RTS_Actuators_ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge_EntryPoints); // RTS.Actuators.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge.EntryPoints
    case TRTS_Base_Types_Boolean_Payload: return sizeof(struct RTS_Base_Types_Boolean_Payload); // RTS.Base_Types.Boolean_Payload
    case TRTS_Base_Types_Character_Payload: return sizeof(struct RTS_Base_Types_Character_Payload); // RTS.Base_Types.Character_Payload
    case TRTS_Base_Types_Float_32_Payload: return sizeof(struct RTS_Base_Types_Float_32_Payload); // RTS.Base_Types.Float_32_Payload
    case TRTS_Base_Types_Float_64_Payload: return sizeof(struct RTS_Base_Types_Float_64_Payload); // RTS.Base_Types.Float_64_Payload
    case TRTS_Base_Types_Float_Payload: return sizeof(struct RTS_Base_Types_Float_Payload); // RTS.Base_Types.Float_Payload
    case TRTS_Base_Types_Integer_16_Payload: return sizeof(struct RTS_Base_Types_Integer_16_Payload); // RTS.Base_Types.Integer_16_Payload
    case TRTS_Base_Types_Integer_32_Payload: return sizeof(struct RTS_Base_Types_Integer_32_Payload); // RTS.Base_Types.Integer_32_Payload
    case TRTS_Base_Types_Integer_64_Payload: return sizeof(struct RTS_Base_Types_Integer_64_Payload); // RTS.Base_Types.Integer_64_Payload
    case TRTS_Base_Types_Integer_8_Payload: return sizeof(struct RTS_Base_Types_Integer_8_Payload); // RTS.Base_Types.Integer_8_Payload
    case TRTS_Base_Types_Integer_Payload: return sizeof(struct RTS_Base_Types_Integer_Payload); // RTS.Base_Types.Integer_Payload
    case TRTS_Base_Types_String_Payload: return sizeof(struct RTS_Base_Types_String_Payload); // RTS.Base_Types.String_Payload
    case TRTS_Base_Types_Unsigned_16_Payload: return sizeof(struct RTS_Base_Types_Unsigned_16_Payload); // RTS.Base_Types.Unsigned_16_Payload
    case TRTS_Base_Types_Unsigned_32_Payload: return sizeof(struct RTS_Base_Types_Unsigned_32_Payload); // RTS.Base_Types.Unsigned_32_Payload
    case TRTS_Base_Types_Unsigned_64_Payload: return sizeof(struct RTS_Base_Types_Unsigned_64_Payload); // RTS.Base_Types.Unsigned_64_Payload
    case TRTS_Base_Types_Unsigned_8_Payload: return sizeof(struct RTS_Base_Types_Unsigned_8_Payload); // RTS.Base_Types.Unsigned_8_Payload
    case TRTS_Cli: return sizeof(struct RTS_Cli); // RTS.Cli
    case TRTS_Cli_HelpOption: return sizeof(struct RTS_Cli_HelpOption); // RTS.Cli.HelpOption
    case TRTS_Cli_RunOption: return sizeof(struct RTS_Cli_RunOption); // RTS.Cli.RunOption
    case TRTS_EventControl_EventControlMockThread_i_Initialization_Api: return sizeof(struct RTS_EventControl_EventControlMockThread_i_Initialization_Api); // RTS.EventControl.EventControlMockThread_i_Initialization_Api
    case TRTS_EventControl_EventControlMockThread_i_Operational_Api: return sizeof(struct RTS_EventControl_EventControlMockThread_i_Operational_Api); // RTS.EventControl.EventControlMockThread_i_Operational_Api
    case TRTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge: return sizeof(struct RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge); // RTS.EventControl.EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge
    case TRTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_EntryPoints: return sizeof(struct RTS_EventControl_EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge_EntryPoints); // RTS.EventControl.EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge.EntryPoints
    case TRTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api: return sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_Initialization_Api); // RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api
    case TRTS_Instrumentation_InstrumentationMockThread_i_Operational_Api: return sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_Operational_Api); // RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api
    case TRTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge: return sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge); // RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge
    case TRTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints: return sizeof(struct RTS_Instrumentation_InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge_EntryPoints); // RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.EntryPoints
    case TRTS_ProcessorTimingProperties: return sizeof(struct RTS_ProcessorTimingProperties); // RTS.ProcessorTimingProperties
    case TRTS_ThreadTimingProperties: return sizeof(struct RTS_ThreadTimingProperties); // RTS.ThreadTimingProperties
    case TSome_80A548: return sizeof(struct Some_80A548); // Some[(Z, Z)]
    case TSome_DB59FB: return sizeof(struct Some_DB59FB); // Some[B]
    case TSome_C4F557: return sizeof(struct Some_C4F557); // Some[IS[Z, art.Art.BridgeId]]
    case TSome_E8C0F3: return sizeof(struct Some_E8C0F3); // Some[RTS.Actuation.Actuator_i_Initialization_Api]
    case TSome_42319A: return sizeof(struct Some_42319A); // Some[RTS.Actuation.Actuator_i_Operational_Api]
    case TSome_7A7168: return sizeof(struct Some_7A7168); // Some[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]
    case TSome_B99BC9: return sizeof(struct Some_B99BC9); // Some[RTS.Actuation.CoincidenceLogic_i_Operational_Api]
    case TSome_824C23: return sizeof(struct Some_824C23); // Some[RTS.Actuation.OrLogic_i_Initialization_Api]
    case TSome_6FC748: return sizeof(struct Some_6FC748); // Some[RTS.Actuation.OrLogic_i_Operational_Api]
    case TSome_E625E9: return sizeof(struct Some_E625E9); // Some[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api]
    case TSome_B8A5BD: return sizeof(struct Some_B8A5BD); // Some[RTS.Actuators.ActuatorsMockThread_i_Operational_Api]
    case TSome_B8733D: return sizeof(struct Some_B8733D); // Some[RTS.Cli.RunChoice.Type]
    case TSome_2BC073: return sizeof(struct Some_2BC073); // Some[RTS.Cli.RunTopOption]
    case TSome_4347C6: return sizeof(struct Some_4347C6); // Some[RTS.EventControl.EventControlMockThread_i_Initialization_Api]
    case TSome_7FC307: return sizeof(struct Some_7FC307); // Some[RTS.EventControl.EventControlMockThread_i_Operational_Api]
    case TSome_B05425: return sizeof(struct Some_B05425); // Some[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]
    case TSome_51E221: return sizeof(struct Some_51E221); // Some[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]
    case TSome_488F47: return sizeof(struct Some_488F47); // Some[Z]
    case TSome_9D1CD4: return sizeof(struct Some_9D1CD4); // Some[art.Art.BridgeId]
    case TSome_A0133F: return sizeof(struct Some_A0133F); // Some[art.Art.PortId]
    case TSome_24B656: return sizeof(struct Some_24B656); // Some[art.ArtSlangMessage]
    case TSome_482E57: return sizeof(struct Some_482E57); // Some[art.Bridge]
    case TSome_D29615: return sizeof(struct Some_D29615); // Some[art.DataContent]
    case TSome_3E197E: return sizeof(struct Some_3E197E); // Some[art.UPort]
    case TSome_6D5259: return sizeof(struct Some_6D5259); // Some[art.scheduling.static.Explorer.ScheduleState]
    case TString: return sizeof(struct String); // String
    case Tart_ArchitectureDescription: return sizeof(struct art_ArchitectureDescription); // art.ArchitectureDescription
    case Tart_ArtSlangMessage: return sizeof(struct art_ArtSlangMessage); // art.ArtSlangMessage
    case Tart_Bridge_Ports: return sizeof(struct art_Bridge_Ports); // art.Bridge.Ports
    case Tart_Connection: return sizeof(struct art_Connection); // art.Connection
    case Tart_DispatchPropertyProtocol_Periodic: return sizeof(struct art_DispatchPropertyProtocol_Periodic); // art.DispatchPropertyProtocol.Periodic
    case Tart_DispatchPropertyProtocol_Sporadic: return sizeof(struct art_DispatchPropertyProtocol_Sporadic); // art.DispatchPropertyProtocol.Sporadic
    case Tart_Empty: return sizeof(struct art_Empty); // art.Empty
    case Tart_Port_C0524D: return sizeof(struct art_Port_C0524D); // art.Port[B]
    case Tart_scheduling_legacy_Legacy: return sizeof(struct art_scheduling_legacy_Legacy); // art.scheduling.legacy.Legacy
    case Tart_scheduling_roundrobin_RoundRobin: return sizeof(struct art_scheduling_roundrobin_RoundRobin); // art.scheduling.roundrobin.RoundRobin
    case Tart_scheduling_static_DefaultCommandProvider: return sizeof(struct art_scheduling_static_DefaultCommandProvider); // art.scheduling.static.DefaultCommandProvider
    case Tart_scheduling_static_Explorer_ScheduleState: return sizeof(struct art_scheduling_static_Explorer_ScheduleState); // art.scheduling.static.Explorer.ScheduleState
    case Tart_scheduling_static_Help: return sizeof(struct art_scheduling_static_Help); // art.scheduling.static.Help
    case Tart_scheduling_static_Hstep: return sizeof(struct art_scheduling_static_Hstep); // art.scheduling.static.Hstep
    case Tart_scheduling_static_InfoComponentState: return sizeof(struct art_scheduling_static_InfoComponentState); // art.scheduling.static.InfoComponentState
    case Tart_scheduling_static_InfoComponentStateId: return sizeof(struct art_scheduling_static_InfoComponentStateId); // art.scheduling.static.InfoComponentStateId
    case Tart_scheduling_static_InfoInputs: return sizeof(struct art_scheduling_static_InfoInputs); // art.scheduling.static.InfoInputs
    case Tart_scheduling_static_InfoOutputs: return sizeof(struct art_scheduling_static_InfoOutputs); // art.scheduling.static.InfoOutputs
    case Tart_scheduling_static_InfoThreadNickNames: return sizeof(struct art_scheduling_static_InfoThreadNickNames); // art.scheduling.static.InfoThreadNickNames
    case Tart_scheduling_static_Infoschedule: return sizeof(struct art_scheduling_static_Infoschedule); // art.scheduling.static.Infoschedule
    case Tart_scheduling_static_Infostate: return sizeof(struct art_scheduling_static_Infostate); // art.scheduling.static.Infostate
    case Tart_scheduling_static_RunToDomain: return sizeof(struct art_scheduling_static_RunToDomain); // art.scheduling.static.RunToDomain
    case Tart_scheduling_static_RunToHP: return sizeof(struct art_scheduling_static_RunToHP); // art.scheduling.static.RunToHP
    case Tart_scheduling_static_RunToSlot: return sizeof(struct art_scheduling_static_RunToSlot); // art.scheduling.static.RunToSlot
    case Tart_scheduling_static_RunToState: return sizeof(struct art_scheduling_static_RunToState); // art.scheduling.static.RunToState
    case Tart_scheduling_static_RunToThread: return sizeof(struct art_scheduling_static_RunToThread); // art.scheduling.static.RunToThread
    case Tart_scheduling_static_Schedule_DSchedule: return sizeof(struct art_scheduling_static_Schedule_DSchedule); // art.scheduling.static.Schedule.DSchedule
    case Tart_scheduling_static_Schedule_DScheduleSpec: return sizeof(struct art_scheduling_static_Schedule_DScheduleSpec); // art.scheduling.static.Schedule.DScheduleSpec
    case Tart_scheduling_static_Schedule_Slot: return sizeof(struct art_scheduling_static_Schedule_Slot); // art.scheduling.static.Schedule.Slot
    case Tart_scheduling_static_Sstep: return sizeof(struct art_scheduling_static_Sstep); // art.scheduling.static.Sstep
    case Tart_scheduling_static_StaticScheduler: return sizeof(struct art_scheduling_static_StaticScheduler); // art.scheduling.static.StaticScheduler
    case Tart_scheduling_static_Stop: return sizeof(struct art_scheduling_static_Stop); // art.scheduling.static.Stop
    case Tart_scheduling_static_Unrecognized: return sizeof(struct art_scheduling_static_Unrecognized); // art.scheduling.static.Unrecognized
    case Tart_scheduling_static_Unsupported: return sizeof(struct art_scheduling_static_Unsupported); // art.scheduling.static.Unsupported
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_assign(void *dest, void *src, size_t destSize) {
  Type srcType = (Type) src;
  if (srcType->type == TString) {
    String_assign((String) dest, (String) src);
    return;
  }
  size_t srcSize = sizeOf(srcType);
  memcpy(dest, src, srcSize);
  memset(((char *) dest) + srcSize, 0, destSize - srcSize);
}

char *TYPE_string_(void *type) {
  static char *strings[] = {
    "((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))",
    "(B, B)",
    "(B, B, B, B, B, B, B, B, B, B, B, B)",
    "(String, Option[art.DataContent])",
    "(String, art.Art.BridgeId)",
    "(Z, (Z, art.ArtSlangMessage))",
    "(Z, Z)",
    "(Z, art.ArtSlangMessage)",
    "(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)",
    "IS[Z, ((B, B, B, B, B, B, B, B, B, B, B, B), (B, B, B, B, B, B, B, B, B, B, B, B))]",
    "IS[Z, (B, B)]",
    "IS[Z, (String, Option[art.DataContent])]",
    "IS[Z, (String, art.Art.BridgeId)]",
    "IS[Z, (Z, art.ArtSlangMessage)]",
    "IS[Z, String]",
    "IS[Z, art.Art.BridgeId]",
    "IS[Z, art.Art.PortId]",
    "IS[Z, art.UPort]",
    "IS[Z, art.scheduling.static.Schedule.Slot]",
    "IS[art.Art.BridgeId, art.Bridge]",
    "IS[art.Art.ConnectionId, art.Art.PortId]",
    "IS[art.Art.ConnectionId, art.UConnection]",
    "MBox2[art.Art.PortId, Option[art.DataContent]]",
    "MBox2[art.Art.PortId, art.DataContent]",
    "MNone[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)]",
    "MS[Z, Option[art.Bridge]]",
    "MS[art.Art.BridgeId, S64]",
    "MS[art.Art.PortId, IS[art.Art.ConnectionId, art.Art.PortId]]",
    "MS[art.Art.PortId, Option[art.UPort]]",
    "MSome[(art.scheduling.static.Schedule.DScheduleSpec, IS[Z, art.Art.BridgeId], Map[String, art.Art.BridgeId], art.scheduling.static.CommandProvider)]",
    "Map[String, art.Art.BridgeId]",
    "Map[Z, art.ArtSlangMessage]",
    "None[B]",
    "None[IS[Z, art.Art.BridgeId]]",
    "None[IS[Z, art.Art.PortId]]",
    "None[RTS.Actuation.Actuator_i_Initialization_Api]",
    "None[RTS.Actuation.Actuator_i_Operational_Api]",
    "None[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]",
    "None[RTS.Actuation.CoincidenceLogic_i_Operational_Api]",
    "None[RTS.Actuation.OrLogic_i_Initialization_Api]",
    "None[RTS.Actuation.OrLogic_i_Operational_Api]",
    "None[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api]",
    "None[RTS.Actuators.ActuatorsMockThread_i_Operational_Api]",
    "None[RTS.Cli.RunChoice.Type]",
    "None[RTS.Cli.RunTopOption]",
    "None[RTS.EventControl.EventControlMockThread_i_Initialization_Api]",
    "None[RTS.EventControl.EventControlMockThread_i_Operational_Api]",
    "None[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]",
    "None[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]",
    "None[Z]",
    "None[art.Art.BridgeId]",
    "None[art.Art.PortId]",
    "None[art.ArtSlangMessage]",
    "None[art.Bridge]",
    "None[art.DataContent]",
    "None[art.UPort]",
    "None[art.scheduling.static.Explorer.ScheduleState]",
    "RTS.Actuation.Actuator_i_Initialization_Api",
    "RTS.Actuation.Actuator_i_Operational_Api",
    "RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge",
    "RTS.Actuation.Actuator_i_actuationSubsystem_saturationActuatorUnit_saturationActuator_actuator_Bridge.EntryPoints",
    "RTS.Actuation.Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge",
    "RTS.Actuation.Actuator_i_actuationSubsystem_tempPressureActuatorUnit_tempPressureActuator_actuator_Bridge.EntryPoints",
    "RTS.Actuation.CoincidenceLogic_i_Initialization_Api",
    "RTS.Actuation.CoincidenceLogic_i_Operational_Api",
    "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge",
    "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_Bridge.EntryPoints",
    "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge",
    "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_saturationLogic_coincidenceLogic_Bridge.EntryPoints",
    "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge",
    "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit1_temperatureLogic_coincidenceLogic_Bridge.EntryPoints",
    "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge",
    "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_pressureLogic_coincidenceLogic_Bridge.EntryPoints",
    "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge",
    "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_saturationLogic_coincidenceLogic_Bridge.EntryPoints",
    "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge",
    "RTS.Actuation.CoincidenceLogic_i_actuationSubsystem_actuationUnit2_temperatureLogic_coincidenceLogic_Bridge.EntryPoints",
    "RTS.Actuation.OrLogic_i_Initialization_Api",
    "RTS.Actuation.OrLogic_i_Operational_Api",
    "RTS.Actuation.OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge",
    "RTS.Actuation.OrLogic_i_actuationSubsystem_actuationUnit1_tempPressureTripOut_orLogic_Bridge.EntryPoints",
    "RTS.Actuation.OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge",
    "RTS.Actuation.OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Bridge.EntryPoints",
    "RTS.Actuation.OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge",
    "RTS.Actuation.OrLogic_i_actuationSubsystem_saturationActuatorUnit_actuateSaturationActuator_orLogic_Bridge.EntryPoints",
    "RTS.Actuation.OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge",
    "RTS.Actuation.OrLogic_i_actuationSubsystem_tempPressureActuatorUnit_actuateTempPressureActuator_orLogic_Bridge.EntryPoints",
    "RTS.Actuators.ActuatorsMockThread_i_Initialization_Api",
    "RTS.Actuators.ActuatorsMockThread_i_Operational_Api",
    "RTS.Actuators.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge",
    "RTS.Actuators.ActuatorsMockThread_i_actuatorsMock_actuatorsMockThread_Bridge.EntryPoints",
    "RTS.Base_Types.Boolean_Payload",
    "RTS.Base_Types.Character_Payload",
    "RTS.Base_Types.Float_32_Payload",
    "RTS.Base_Types.Float_64_Payload",
    "RTS.Base_Types.Float_Payload",
    "RTS.Base_Types.Integer_16_Payload",
    "RTS.Base_Types.Integer_32_Payload",
    "RTS.Base_Types.Integer_64_Payload",
    "RTS.Base_Types.Integer_8_Payload",
    "RTS.Base_Types.Integer_Payload",
    "RTS.Base_Types.String_Payload",
    "RTS.Base_Types.Unsigned_16_Payload",
    "RTS.Base_Types.Unsigned_32_Payload",
    "RTS.Base_Types.Unsigned_64_Payload",
    "RTS.Base_Types.Unsigned_8_Payload",
    "RTS.Cli",
    "RTS.Cli.HelpOption",
    "RTS.Cli.RunOption",
    "RTS.EventControl.EventControlMockThread_i_Initialization_Api",
    "RTS.EventControl.EventControlMockThread_i_Operational_Api",
    "RTS.EventControl.EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge",
    "RTS.EventControl.EventControlMockThread_i_eventControlMock_eventControlMockThread_Bridge.EntryPoints",
    "RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api",
    "RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api",
    "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge",
    "RTS.Instrumentation.InstrumentationMockThread_i_instrumentationMock_instrumentationMockThread_Bridge.EntryPoints",
    "RTS.ProcessorTimingProperties",
    "RTS.ThreadTimingProperties",
    "Some[(Z, Z)]",
    "Some[B]",
    "Some[IS[Z, art.Art.BridgeId]]",
    "Some[RTS.Actuation.Actuator_i_Initialization_Api]",
    "Some[RTS.Actuation.Actuator_i_Operational_Api]",
    "Some[RTS.Actuation.CoincidenceLogic_i_Initialization_Api]",
    "Some[RTS.Actuation.CoincidenceLogic_i_Operational_Api]",
    "Some[RTS.Actuation.OrLogic_i_Initialization_Api]",
    "Some[RTS.Actuation.OrLogic_i_Operational_Api]",
    "Some[RTS.Actuators.ActuatorsMockThread_i_Initialization_Api]",
    "Some[RTS.Actuators.ActuatorsMockThread_i_Operational_Api]",
    "Some[RTS.Cli.RunChoice.Type]",
    "Some[RTS.Cli.RunTopOption]",
    "Some[RTS.EventControl.EventControlMockThread_i_Initialization_Api]",
    "Some[RTS.EventControl.EventControlMockThread_i_Operational_Api]",
    "Some[RTS.Instrumentation.InstrumentationMockThread_i_Initialization_Api]",
    "Some[RTS.Instrumentation.InstrumentationMockThread_i_Operational_Api]",
    "Some[Z]",
    "Some[art.Art.BridgeId]",
    "Some[art.Art.PortId]",
    "Some[art.ArtSlangMessage]",
    "Some[art.Bridge]",
    "Some[art.DataContent]",
    "Some[art.UPort]",
    "Some[art.scheduling.static.Explorer.ScheduleState]",
    "String",
    "art.ArchitectureDescription",
    "art.ArtSlangMessage",
    "art.Bridge.Ports",
    "art.Connection",
    "art.DispatchPropertyProtocol.Periodic",
    "art.DispatchPropertyProtocol.Sporadic",
    "art.Empty",
    "art.Port[B]",
    "art.scheduling.legacy.Legacy",
    "art.scheduling.roundrobin.RoundRobin",
    "art.scheduling.static.DefaultCommandProvider",
    "art.scheduling.static.Explorer.ScheduleState",
    "art.scheduling.static.Help",
    "art.scheduling.static.Hstep",
    "art.scheduling.static.InfoComponentState",
    "art.scheduling.static.InfoComponentStateId",
    "art.scheduling.static.InfoInputs",
    "art.scheduling.static.InfoOutputs",
    "art.scheduling.static.InfoThreadNickNames",
    "art.scheduling.static.Infoschedule",
    "art.scheduling.static.Infostate",
    "art.scheduling.static.RunToDomain",
    "art.scheduling.static.RunToHP",
    "art.scheduling.static.RunToSlot",
    "art.scheduling.static.RunToState",
    "art.scheduling.static.RunToThread",
    "art.scheduling.static.Schedule.DSchedule",
    "art.scheduling.static.Schedule.DScheduleSpec",
    "art.scheduling.static.Schedule.Slot",
    "art.scheduling.static.Sstep",
    "art.scheduling.static.StaticScheduler",
    "art.scheduling.static.Stop",
    "art.scheduling.static.Unrecognized",
    "art.scheduling.static.Unsupported"
  };
  return strings[((Type) type)->type];
}